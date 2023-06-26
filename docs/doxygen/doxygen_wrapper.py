#!/usr/bin/env python3

# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.

import base64
import fileinput
import os
import re
import shutil
import subprocess
from pathlib import Path

DOXYGEN_EXE = shutil.which("doxygen")
CMAKE_EXE = shutil.which("cmake3")
if not CMAKE_EXE:
    CMAKE_EXE = shutil.which("cmake")

DOXYGEN_OUTPUT_DIR = "docs/build/doxygen"


class DoxygenWrapper(object):
    SVG_IMAGE_PATTERN = re.compile(
        """ src="(?P<svg_filename>[a-z0-9_]+\\.svg)" """
    )
    SVG_TO_KEEP = {"graph_legend.svg", "doxygen.svg", "mag_d.svg", "mag_seld.svg", "close.svg", "mag_sel.svg", "mag.svg"}

    def __init__(self, sdk_version, sdk_root, output_dir, thread_pool):
        if not DOXYGEN_EXE:
            raise FileNotFoundError("Doxygen executable is missing!")
        self.doxygen_version = re.search("""^\d+\.\d+\.\d+""", self._call_doxygen("--version"))[0]
        if int(self.doxygen_version.split(".")[0]) != 1 or int(self.doxygen_version.split(".")[1]) < 9:
            raise Exception(f"Invalid doxygen version: {self.doxygen_version}. Expected 1.9 at least.")

        self.configuration_file = os.path.dirname(os.path.abspath(__file__)) + "/config/Doxyfile-prj.cfg"
        if sdk_version:
            self.sdk_version = sdk_version
        else:
            self.sdk_version = self._read_sdk_version(sdk_root)
        self.sdk_root = sdk_root
        self.output_dir = output_dir
        if not self.output_dir:
            self.output_dir = DOXYGEN_OUTPUT_DIR
        self.thread_pool = thread_pool

        self.components_in_src = set(os.listdir(sdk_root + "/src"))
        self.components_in_src.remove("aws-cpp-sdk-core")

    @staticmethod
    def _read_sdk_version(sdk_root: str) -> str:
        """Returns current SDK version from a VersionConfig.h
        :param sdk_root (str): filepath (absolute or relative) to the sdk root dir
        """
        with open(sdk_root + "/src/aws-cpp-sdk-core/include/aws/core/VersionConfig.h") as version_config_file:
            version_config = version_config_file.read()
            m_major = re.search("#define AWS_SDK_VERSION_MAJOR (?P<version_major>\d+)", version_config)
            m_minor = re.search("#define AWS_SDK_VERSION_MINOR (?P<version_minor>\d+)", version_config)
            m_patch = re.search("#define AWS_SDK_VERSION_PATCH (?P<version_patch>\d+)", version_config)

            return f"{m_major}.{m_minor}.{m_patch}"

        return "UNKNOWN_VERSION"

    @staticmethod
    def _call_doxygen(command: str, env: dict = None, cwd: str = os.getcwd(), timeout: int = 240):
        """A wrapper to call doxygen executable with SDK config
        with arguments of this method to be set as environment variables
        """
        doxygen_cmd = [DOXYGEN_EXE]
        doxygen_cmd += command.split(" ")
        try:
            process = subprocess.run(doxygen_cmd, env=env, cwd=cwd, timeout=timeout, check=True, capture_output=True)
        except subprocess.CalledProcessError as exc:
            print(f"Failed to call doxygen: {exc},\n{exc.stdout},\n{exc.stderr}")
            raise exc
        output = process.stdout.decode().replace("\n", "")
        return output

    def _create_dependency_map(self):
        shutil.rmtree(self.sdk_root + "/tmp_deps_map_build", ignore_errors=True)
        os.makedirs(self.sdk_root + "/tmp_deps_map_build", exist_ok=True)
        subprocess.run([CMAKE_EXE,
                        "-GNinja",
                        "-Btmp_deps_map_build",
                        "--graphviz=tmp_deps_map_build/aws-cpp-sdk.dot",
                        "."],
                       cwd=self.sdk_root)

        # Format dot file
        subprocess.run([("cat tmp_deps_map_build/aws-cpp-sdk.dot | "
                         "grep \"\-> aws-cpp\|\-> aws-crt-cpp\" | "
                         "grep -v \"test\" | "
                         "grep -v \"sample\" | "
                         "sed -e\"s/.*\/\///g\" > tmp_deps_map_build/aws-cpp-sdk-formatted.dot")],
                       cwd=self.sdk_root,
                       shell=True)

        dependency_map = {}
        for line in fileinput.input(self.sdk_root + "/tmp_deps_map_build/aws-cpp-sdk-formatted.dot", inplace=True):
            line = line.replace(" ", "")
            dependency_tuple = line.split('->')
            if "crt" in dependency_tuple[1]:
                dependency_map[dependency_tuple[0]] = []
            elif dependency_tuple[0] in dependency_map:
                dependency_map[dependency_tuple[0]].append(dependency_tuple[1].strip())
            else:
                dependency_map[dependency_tuple[0]] = [dependency_tuple[1].strip()]

        shutil.rmtree(self.sdk_root + "/tmp_deps_map_build", ignore_errors=True)
        return dependency_map

    def _create_layout_file(self, dependency_map):
        # Update layout file with correct modules
        print('Creating layout file')
        os.makedirs(f"{self.output_dir}", exist_ok=True)
        shutil.copy(f"{self.sdk_root}/docs/doxygen/static/DoxygenLayout.xml", f"{self.output_dir}/DoxygenLayout.xml")
        for line in fileinput.input(f"{self.output_dir}/DoxygenLayout.xml", inplace=True):
            if "<!--SDK_CUSTOM_TABS-->" in line:
                for module in sorted(dependency_map.keys()):
                    print(f'\t\t\t<tab type="user" url="../../{module}/html/annotated.html" title="{module}"/>')
            else:
                print('{}'.format(line), end='')

    def _get_src_path(self, component_name):
        if "root" == component_name:
            return f"\"docs\""
        if component_name == "aws-cpp-sdk-core" or component_name in self.components_in_src:
            return f"\"src/{component_name}\""
        else:
            return f"\"generated/src/{component_name}/\""

    def _get_doc_path(self, component_name):
        if False: # TODO: docs dir structuring
            if component_name == "aws-cpp-sdk-core":
                return f"{self.output_dir}/core/{component_name}"
            elif component_name in self.components_in_src:
                return f"{self.output_dir}/libs/{component_name}"
            else:
                return f"{self.output_dir}/clients/{component_name}"
        return f"{self.output_dir}/{component_name}"

    def _get_tagfiles_dependency(self, component_name, dependency_map):
        separator = " \\\n                         "
        deps = list(map(lambda dependency: f"{self._get_doc_path(dependency)}/{dependency}.tag=../../{dependency}/html",
                        dependency_map.get(component_name, [])))
        return separator.join(deps)

    def _cleanup_temp_files(self):
        # cmake cache used to build dependency tree
        shutil.rmtree(self.sdk_root + "/tmp_deps_map_build", ignore_errors=True)
        os.remove(f"{self.output_dir}/DoxygenLayout.xml")

        def _cleanup_dir_by_extension(child_dir: Path, extension: str):
            files = child_dir.glob(f"**/*.{extension}")
            for file in files:
                os.remove(f"{file.parent}/{file.name}")

        cleanup_futures = set()
        p = Path(self.output_dir)
        for child in p.iterdir():
            # tags are no longer needed
            cleanup_futures.add(self.thread_pool.submit(_cleanup_dir_by_extension,
                                                        child_dir=child,
                                                        extension="tag"))
            # .map and .md5 are used by doxygen for _incremental_ docs build with SVG graphs
            cleanup_futures.add(self.thread_pool.submit(_cleanup_dir_by_extension,
                                                        child_dir=child,
                                                        extension="map"))
            cleanup_futures.add(self.thread_pool.submit(_cleanup_dir_by_extension,
                                                        child_dir=child,
                                                        extension="md5"))

        # Wait for all generation to complete
        for future in cleanup_futures:
            future.result()

    def generate_component_xml(self, client_name, client_dir, output_dir, tagfiles):
        os.makedirs(output_dir, exist_ok=True)

        doxy_input = [f"{client_dir}"]
        doxy_input += [f"\"{md_item}\"" for md_item in
                           ["README.md", "CHANGELOG.md", "CODE_OF_CONDUCT.md", "CONTRIBUTING.md", "docs"]
                       ]
        separator = " "
        doxy_input = separator.join(doxy_input)

        env = {"PROJECT_NUMBER": self.sdk_version,
               "CLIENT_NAME": client_name,
               "DOXYGEN_INPUT": doxy_input,
               "OUTPUT_DIRECTORY": output_dir,
               "TAGFILES": tagfiles,
               "DOXYGEN_CONFIG_DIR": f"{self.sdk_root}/docs/doxygen/config/",
               "DOXYGEN_STATIC_DIR": f"{self.sdk_root}/docs/doxygen/static/",
               "DOXYGEN_LAYOUT": f"{self.output_dir}/DoxygenLayout.xml",
               "PREDEFINED": ""}

        doxy_output = self._call_doxygen(self.configuration_file, env, cwd=self.sdk_root)
        return doxy_output

    def process_one_client_async(self, dependency_map, client_name, thread_pool, client_futures):
        # Wait for dependencies to be processed
        for dependency in dependency_map.get(client_name, []):
            if dependency not in client_futures.keys():
                client_futures[dependency] = self.process_one_client_async(dependency_map, dependency,
                                                                           thread_pool, client_futures)

        for dependency in dependency_map.get(client_name, []):
            client_futures[dependency].result()

        return thread_pool.submit(
            self.generate_component_xml,
            client_name=client_name,
            client_dir=self._get_src_path(client_name),
            output_dir=self._get_doc_path(client_name),
            tagfiles=self._get_tagfiles_dependency(client_name, dependency_map))

    def generate_all(self):
        dependency_map = self._create_dependency_map()
        self._create_layout_file(dependency_map)

        client_futures = {}
        client_futures["root"] = self.process_one_client_async(dependency_map, "root",
                                                               self.thread_pool, client_futures)
        client_futures["aws-cpp-sdk-core"] = self.process_one_client_async(dependency_map, "aws-cpp-sdk-core",
                                                                           self.thread_pool, client_futures)

        for client in dependency_map.keys():
            if client not in client_futures.keys():
                client_futures[client] = self.process_one_client_async(dependency_map, client,
                                                                       self.thread_pool, client_futures)

        # Wait for all generation to complete
        for client, future in client_futures.items():
            future.result()

        self._cleanup_temp_files()

        return dependency_map


if __name__ == '__main__':
    wrapper = DoxygenWrapper(None, "")

    wrapper.generate_all()
