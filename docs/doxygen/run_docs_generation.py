#!/usr/bin/env python3

# Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
# SPDX-License-Identifier: Apache-2.0.
import argparse
import concurrent.futures
import multiprocessing
import os
from pathlib import Path

from doxygen_wrapper import DoxygenWrapper, DOXYGEN_OUTPUT_DIR


def parse_arguments() -> dict:
    """Parse arguments and/or print help

    :return: dict with parsed arguments
    """
    parser = argparse.ArgumentParser(description="Docs generation wrapper for AWS-SDK-CPP")
    parser.add_argument("--sdk_version", type=str, help="Current SDK version", default=None)
    parser.add_argument("--sdk_root", type=str, help="Path to the SDK repo root",
                        default=str(Path(__file__).parents[2]))
    parser.add_argument("--output_dir", type=str, help="Path where to store generated docs", required=True)
    args = vars(parser.parse_args())

    return args


class DocsGenerator(object):
    def __init__(self, sdk_version, sdk_root, output_dir):
        self.thread_pool = concurrent.futures.ThreadPoolExecutor(max_workers=max(multiprocessing.cpu_count() - 1, 1))
        self.sdk_root = sdk_root
        self.doxygen_wrapper = DoxygenWrapper(sdk_version=sdk_version,
                                              sdk_root=sdk_root,
                                              output_dir=output_dir,
                                              thread_pool=self.thread_pool)

        self.components = {"core": ["aws-cpp-sdk-core"]}
        libs = [lib for lib in os.listdir(f"{sdk_root}/src") if lib != "aws-cpp-sdk-core"]
        self.components.update({"libs": libs})
        clients = [client for client in os.listdir(f"{sdk_root}/generated/src")]
        self.components.update({"clients": clients})


def main():
    args = parse_arguments()
    generator = DocsGenerator(args.get("sdk_version"), args.get("sdk_root"), args.get("output_dir"))
    dependency_map = generator.doxygen_wrapper.generate_all()

if __name__ == '__main__':
    main()
