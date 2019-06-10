/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/EnvironmentType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ComputeType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/RegistryCredential.h>
#include <aws/codebuild/model/ImagePullCredentialsType.h>
#include <aws/codebuild/model/EnvironmentVariable.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Information about the build environment of the build project.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ProjectEnvironment">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API ProjectEnvironment
  {
  public:
    ProjectEnvironment();
    ProjectEnvironment(Aws::Utils::Json::JsonView jsonValue);
    ProjectEnvironment& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of build environment to use for related builds.</p>
     */
    inline const EnvironmentType& GetType() const{ return m_type; }

    /**
     * <p>The type of build environment to use for related builds.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of build environment to use for related builds.</p>
     */
    inline void SetType(const EnvironmentType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of build environment to use for related builds.</p>
     */
    inline void SetType(EnvironmentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of build environment to use for related builds.</p>
     */
    inline ProjectEnvironment& WithType(const EnvironmentType& value) { SetType(value); return *this;}

    /**
     * <p>The type of build environment to use for related builds.</p>
     */
    inline ProjectEnvironment& WithType(EnvironmentType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The image tag or image digest that identifies the Docker image to use for
     * this build project. Use the following formats:</p> <ul> <li> <p>For an image
     * tag: <code>registry/repository:tag</code>. For example, to specify an image with
     * the tag "latest," use <code>registry/repository:latest</code>.</p> </li> <li>
     * <p>For an image digest: <code>registry/repository@digest</code>. For example, to
     * specify an image with the digest
     * "sha256:cbbf2f9a99b47fc460d422812b6a5adff7dfee951d8fa2e4a98caa0382cfbdbf," use
     * <code>registry/repository@sha256:cbbf2f9a99b47fc460d422812b6a5adff7dfee951d8fa2e4a98caa0382cfbdbf</code>.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetImage() const{ return m_image; }

    /**
     * <p>The image tag or image digest that identifies the Docker image to use for
     * this build project. Use the following formats:</p> <ul> <li> <p>For an image
     * tag: <code>registry/repository:tag</code>. For example, to specify an image with
     * the tag "latest," use <code>registry/repository:latest</code>.</p> </li> <li>
     * <p>For an image digest: <code>registry/repository@digest</code>. For example, to
     * specify an image with the digest
     * "sha256:cbbf2f9a99b47fc460d422812b6a5adff7dfee951d8fa2e4a98caa0382cfbdbf," use
     * <code>registry/repository@sha256:cbbf2f9a99b47fc460d422812b6a5adff7dfee951d8fa2e4a98caa0382cfbdbf</code>.</p>
     * </li> </ul>
     */
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }

    /**
     * <p>The image tag or image digest that identifies the Docker image to use for
     * this build project. Use the following formats:</p> <ul> <li> <p>For an image
     * tag: <code>registry/repository:tag</code>. For example, to specify an image with
     * the tag "latest," use <code>registry/repository:latest</code>.</p> </li> <li>
     * <p>For an image digest: <code>registry/repository@digest</code>. For example, to
     * specify an image with the digest
     * "sha256:cbbf2f9a99b47fc460d422812b6a5adff7dfee951d8fa2e4a98caa0382cfbdbf," use
     * <code>registry/repository@sha256:cbbf2f9a99b47fc460d422812b6a5adff7dfee951d8fa2e4a98caa0382cfbdbf</code>.</p>
     * </li> </ul>
     */
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The image tag or image digest that identifies the Docker image to use for
     * this build project. Use the following formats:</p> <ul> <li> <p>For an image
     * tag: <code>registry/repository:tag</code>. For example, to specify an image with
     * the tag "latest," use <code>registry/repository:latest</code>.</p> </li> <li>
     * <p>For an image digest: <code>registry/repository@digest</code>. For example, to
     * specify an image with the digest
     * "sha256:cbbf2f9a99b47fc460d422812b6a5adff7dfee951d8fa2e4a98caa0382cfbdbf," use
     * <code>registry/repository@sha256:cbbf2f9a99b47fc460d422812b6a5adff7dfee951d8fa2e4a98caa0382cfbdbf</code>.</p>
     * </li> </ul>
     */
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p>The image tag or image digest that identifies the Docker image to use for
     * this build project. Use the following formats:</p> <ul> <li> <p>For an image
     * tag: <code>registry/repository:tag</code>. For example, to specify an image with
     * the tag "latest," use <code>registry/repository:latest</code>.</p> </li> <li>
     * <p>For an image digest: <code>registry/repository@digest</code>. For example, to
     * specify an image with the digest
     * "sha256:cbbf2f9a99b47fc460d422812b6a5adff7dfee951d8fa2e4a98caa0382cfbdbf," use
     * <code>registry/repository@sha256:cbbf2f9a99b47fc460d422812b6a5adff7dfee951d8fa2e4a98caa0382cfbdbf</code>.</p>
     * </li> </ul>
     */
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }

    /**
     * <p>The image tag or image digest that identifies the Docker image to use for
     * this build project. Use the following formats:</p> <ul> <li> <p>For an image
     * tag: <code>registry/repository:tag</code>. For example, to specify an image with
     * the tag "latest," use <code>registry/repository:latest</code>.</p> </li> <li>
     * <p>For an image digest: <code>registry/repository@digest</code>. For example, to
     * specify an image with the digest
     * "sha256:cbbf2f9a99b47fc460d422812b6a5adff7dfee951d8fa2e4a98caa0382cfbdbf," use
     * <code>registry/repository@sha256:cbbf2f9a99b47fc460d422812b6a5adff7dfee951d8fa2e4a98caa0382cfbdbf</code>.</p>
     * </li> </ul>
     */
    inline ProjectEnvironment& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    /**
     * <p>The image tag or image digest that identifies the Docker image to use for
     * this build project. Use the following formats:</p> <ul> <li> <p>For an image
     * tag: <code>registry/repository:tag</code>. For example, to specify an image with
     * the tag "latest," use <code>registry/repository:latest</code>.</p> </li> <li>
     * <p>For an image digest: <code>registry/repository@digest</code>. For example, to
     * specify an image with the digest
     * "sha256:cbbf2f9a99b47fc460d422812b6a5adff7dfee951d8fa2e4a98caa0382cfbdbf," use
     * <code>registry/repository@sha256:cbbf2f9a99b47fc460d422812b6a5adff7dfee951d8fa2e4a98caa0382cfbdbf</code>.</p>
     * </li> </ul>
     */
    inline ProjectEnvironment& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}

    /**
     * <p>The image tag or image digest that identifies the Docker image to use for
     * this build project. Use the following formats:</p> <ul> <li> <p>For an image
     * tag: <code>registry/repository:tag</code>. For example, to specify an image with
     * the tag "latest," use <code>registry/repository:latest</code>.</p> </li> <li>
     * <p>For an image digest: <code>registry/repository@digest</code>. For example, to
     * specify an image with the digest
     * "sha256:cbbf2f9a99b47fc460d422812b6a5adff7dfee951d8fa2e4a98caa0382cfbdbf," use
     * <code>registry/repository@sha256:cbbf2f9a99b47fc460d422812b6a5adff7dfee951d8fa2e4a98caa0382cfbdbf</code>.</p>
     * </li> </ul>
     */
    inline ProjectEnvironment& WithImage(const char* value) { SetImage(value); return *this;}


    /**
     * <p>Information about the compute resources the build project uses. Available
     * values include:</p> <ul> <li> <p> <code>BUILD_GENERAL1_SMALL</code>: Use up to 3
     * GB memory and 2 vCPUs for builds.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_MEDIUM</code>: Use up to 7 GB memory and 4 vCPUs for
     * builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_LARGE</code>: Use up to 15 GB
     * memory and 8 vCPUs for builds.</p> </li> </ul>
     */
    inline const ComputeType& GetComputeType() const{ return m_computeType; }

    /**
     * <p>Information about the compute resources the build project uses. Available
     * values include:</p> <ul> <li> <p> <code>BUILD_GENERAL1_SMALL</code>: Use up to 3
     * GB memory and 2 vCPUs for builds.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_MEDIUM</code>: Use up to 7 GB memory and 4 vCPUs for
     * builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_LARGE</code>: Use up to 15 GB
     * memory and 8 vCPUs for builds.</p> </li> </ul>
     */
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }

    /**
     * <p>Information about the compute resources the build project uses. Available
     * values include:</p> <ul> <li> <p> <code>BUILD_GENERAL1_SMALL</code>: Use up to 3
     * GB memory and 2 vCPUs for builds.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_MEDIUM</code>: Use up to 7 GB memory and 4 vCPUs for
     * builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_LARGE</code>: Use up to 15 GB
     * memory and 8 vCPUs for builds.</p> </li> </ul>
     */
    inline void SetComputeType(const ComputeType& value) { m_computeTypeHasBeenSet = true; m_computeType = value; }

    /**
     * <p>Information about the compute resources the build project uses. Available
     * values include:</p> <ul> <li> <p> <code>BUILD_GENERAL1_SMALL</code>: Use up to 3
     * GB memory and 2 vCPUs for builds.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_MEDIUM</code>: Use up to 7 GB memory and 4 vCPUs for
     * builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_LARGE</code>: Use up to 15 GB
     * memory and 8 vCPUs for builds.</p> </li> </ul>
     */
    inline void SetComputeType(ComputeType&& value) { m_computeTypeHasBeenSet = true; m_computeType = std::move(value); }

    /**
     * <p>Information about the compute resources the build project uses. Available
     * values include:</p> <ul> <li> <p> <code>BUILD_GENERAL1_SMALL</code>: Use up to 3
     * GB memory and 2 vCPUs for builds.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_MEDIUM</code>: Use up to 7 GB memory and 4 vCPUs for
     * builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_LARGE</code>: Use up to 15 GB
     * memory and 8 vCPUs for builds.</p> </li> </ul>
     */
    inline ProjectEnvironment& WithComputeType(const ComputeType& value) { SetComputeType(value); return *this;}

    /**
     * <p>Information about the compute resources the build project uses. Available
     * values include:</p> <ul> <li> <p> <code>BUILD_GENERAL1_SMALL</code>: Use up to 3
     * GB memory and 2 vCPUs for builds.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_MEDIUM</code>: Use up to 7 GB memory and 4 vCPUs for
     * builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_LARGE</code>: Use up to 15 GB
     * memory and 8 vCPUs for builds.</p> </li> </ul>
     */
    inline ProjectEnvironment& WithComputeType(ComputeType&& value) { SetComputeType(std::move(value)); return *this;}


    /**
     * <p>A set of environment variables to make available to builds for this build
     * project.</p>
     */
    inline const Aws::Vector<EnvironmentVariable>& GetEnvironmentVariables() const{ return m_environmentVariables; }

    /**
     * <p>A set of environment variables to make available to builds for this build
     * project.</p>
     */
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }

    /**
     * <p>A set of environment variables to make available to builds for this build
     * project.</p>
     */
    inline void SetEnvironmentVariables(const Aws::Vector<EnvironmentVariable>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }

    /**
     * <p>A set of environment variables to make available to builds for this build
     * project.</p>
     */
    inline void SetEnvironmentVariables(Aws::Vector<EnvironmentVariable>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }

    /**
     * <p>A set of environment variables to make available to builds for this build
     * project.</p>
     */
    inline ProjectEnvironment& WithEnvironmentVariables(const Aws::Vector<EnvironmentVariable>& value) { SetEnvironmentVariables(value); return *this;}

    /**
     * <p>A set of environment variables to make available to builds for this build
     * project.</p>
     */
    inline ProjectEnvironment& WithEnvironmentVariables(Aws::Vector<EnvironmentVariable>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}

    /**
     * <p>A set of environment variables to make available to builds for this build
     * project.</p>
     */
    inline ProjectEnvironment& AddEnvironmentVariables(const EnvironmentVariable& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.push_back(value); return *this; }

    /**
     * <p>A set of environment variables to make available to builds for this build
     * project.</p>
     */
    inline ProjectEnvironment& AddEnvironmentVariables(EnvironmentVariable&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.push_back(std::move(value)); return *this; }


    /**
     * <p>Enables running the Docker daemon inside a Docker container. Set to true only
     * if the build project is be used to build Docker images, and the specified build
     * environment image is not provided by AWS CodeBuild with Docker support.
     * Otherwise, all associated builds that attempt to interact with the Docker daemon
     * fail. You must also start the Docker daemon so that builds can interact with it.
     * One way to do this is to initialize the Docker daemon during the install phase
     * of your build spec by running the following build commands. (Do not run these
     * commands if the specified build environment image is provided by AWS CodeBuild
     * with Docker support.)</p> <p>If the operating system's base image is Ubuntu
     * Linux:</p> <p> <code>- nohup /usr/local/bin/dockerd
     * --host=unix:///var/run/docker.sock --host=tcp://0.0.0.0:2375
     * --storage-driver=overlay&amp;</code> </p> <p> <code>- timeout 15 sh -c "until
     * docker info; do echo .; sleep 1; done"</code> </p> <p>If the operating system's
     * base image is Alpine Linux and the previous command does not work, add the
     * <code>-t</code> argument to <code>timeout</code>:</p> <p> <code>- nohup
     * /usr/local/bin/dockerd --host=unix:///var/run/docker.sock
     * --host=tcp://0.0.0.0:2375 --storage-driver=overlay&amp;</code> </p> <p> <code>-
     * timeout -t 15 sh -c "until docker info; do echo .; sleep 1; done"</code> </p>
     */
    inline bool GetPrivilegedMode() const{ return m_privilegedMode; }

    /**
     * <p>Enables running the Docker daemon inside a Docker container. Set to true only
     * if the build project is be used to build Docker images, and the specified build
     * environment image is not provided by AWS CodeBuild with Docker support.
     * Otherwise, all associated builds that attempt to interact with the Docker daemon
     * fail. You must also start the Docker daemon so that builds can interact with it.
     * One way to do this is to initialize the Docker daemon during the install phase
     * of your build spec by running the following build commands. (Do not run these
     * commands if the specified build environment image is provided by AWS CodeBuild
     * with Docker support.)</p> <p>If the operating system's base image is Ubuntu
     * Linux:</p> <p> <code>- nohup /usr/local/bin/dockerd
     * --host=unix:///var/run/docker.sock --host=tcp://0.0.0.0:2375
     * --storage-driver=overlay&amp;</code> </p> <p> <code>- timeout 15 sh -c "until
     * docker info; do echo .; sleep 1; done"</code> </p> <p>If the operating system's
     * base image is Alpine Linux and the previous command does not work, add the
     * <code>-t</code> argument to <code>timeout</code>:</p> <p> <code>- nohup
     * /usr/local/bin/dockerd --host=unix:///var/run/docker.sock
     * --host=tcp://0.0.0.0:2375 --storage-driver=overlay&amp;</code> </p> <p> <code>-
     * timeout -t 15 sh -c "until docker info; do echo .; sleep 1; done"</code> </p>
     */
    inline bool PrivilegedModeHasBeenSet() const { return m_privilegedModeHasBeenSet; }

    /**
     * <p>Enables running the Docker daemon inside a Docker container. Set to true only
     * if the build project is be used to build Docker images, and the specified build
     * environment image is not provided by AWS CodeBuild with Docker support.
     * Otherwise, all associated builds that attempt to interact with the Docker daemon
     * fail. You must also start the Docker daemon so that builds can interact with it.
     * One way to do this is to initialize the Docker daemon during the install phase
     * of your build spec by running the following build commands. (Do not run these
     * commands if the specified build environment image is provided by AWS CodeBuild
     * with Docker support.)</p> <p>If the operating system's base image is Ubuntu
     * Linux:</p> <p> <code>- nohup /usr/local/bin/dockerd
     * --host=unix:///var/run/docker.sock --host=tcp://0.0.0.0:2375
     * --storage-driver=overlay&amp;</code> </p> <p> <code>- timeout 15 sh -c "until
     * docker info; do echo .; sleep 1; done"</code> </p> <p>If the operating system's
     * base image is Alpine Linux and the previous command does not work, add the
     * <code>-t</code> argument to <code>timeout</code>:</p> <p> <code>- nohup
     * /usr/local/bin/dockerd --host=unix:///var/run/docker.sock
     * --host=tcp://0.0.0.0:2375 --storage-driver=overlay&amp;</code> </p> <p> <code>-
     * timeout -t 15 sh -c "until docker info; do echo .; sleep 1; done"</code> </p>
     */
    inline void SetPrivilegedMode(bool value) { m_privilegedModeHasBeenSet = true; m_privilegedMode = value; }

    /**
     * <p>Enables running the Docker daemon inside a Docker container. Set to true only
     * if the build project is be used to build Docker images, and the specified build
     * environment image is not provided by AWS CodeBuild with Docker support.
     * Otherwise, all associated builds that attempt to interact with the Docker daemon
     * fail. You must also start the Docker daemon so that builds can interact with it.
     * One way to do this is to initialize the Docker daemon during the install phase
     * of your build spec by running the following build commands. (Do not run these
     * commands if the specified build environment image is provided by AWS CodeBuild
     * with Docker support.)</p> <p>If the operating system's base image is Ubuntu
     * Linux:</p> <p> <code>- nohup /usr/local/bin/dockerd
     * --host=unix:///var/run/docker.sock --host=tcp://0.0.0.0:2375
     * --storage-driver=overlay&amp;</code> </p> <p> <code>- timeout 15 sh -c "until
     * docker info; do echo .; sleep 1; done"</code> </p> <p>If the operating system's
     * base image is Alpine Linux and the previous command does not work, add the
     * <code>-t</code> argument to <code>timeout</code>:</p> <p> <code>- nohup
     * /usr/local/bin/dockerd --host=unix:///var/run/docker.sock
     * --host=tcp://0.0.0.0:2375 --storage-driver=overlay&amp;</code> </p> <p> <code>-
     * timeout -t 15 sh -c "until docker info; do echo .; sleep 1; done"</code> </p>
     */
    inline ProjectEnvironment& WithPrivilegedMode(bool value) { SetPrivilegedMode(value); return *this;}


    /**
     * <p>The certificate to use with this build project.</p>
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }

    /**
     * <p>The certificate to use with this build project.</p>
     */
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }

    /**
     * <p>The certificate to use with this build project.</p>
     */
    inline void SetCertificate(const Aws::String& value) { m_certificateHasBeenSet = true; m_certificate = value; }

    /**
     * <p>The certificate to use with this build project.</p>
     */
    inline void SetCertificate(Aws::String&& value) { m_certificateHasBeenSet = true; m_certificate = std::move(value); }

    /**
     * <p>The certificate to use with this build project.</p>
     */
    inline void SetCertificate(const char* value) { m_certificateHasBeenSet = true; m_certificate.assign(value); }

    /**
     * <p>The certificate to use with this build project.</p>
     */
    inline ProjectEnvironment& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}

    /**
     * <p>The certificate to use with this build project.</p>
     */
    inline ProjectEnvironment& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}

    /**
     * <p>The certificate to use with this build project.</p>
     */
    inline ProjectEnvironment& WithCertificate(const char* value) { SetCertificate(value); return *this;}


    /**
     * <p> The credentials for access to a private registry.</p>
     */
    inline const RegistryCredential& GetRegistryCredential() const{ return m_registryCredential; }

    /**
     * <p> The credentials for access to a private registry.</p>
     */
    inline bool RegistryCredentialHasBeenSet() const { return m_registryCredentialHasBeenSet; }

    /**
     * <p> The credentials for access to a private registry.</p>
     */
    inline void SetRegistryCredential(const RegistryCredential& value) { m_registryCredentialHasBeenSet = true; m_registryCredential = value; }

    /**
     * <p> The credentials for access to a private registry.</p>
     */
    inline void SetRegistryCredential(RegistryCredential&& value) { m_registryCredentialHasBeenSet = true; m_registryCredential = std::move(value); }

    /**
     * <p> The credentials for access to a private registry.</p>
     */
    inline ProjectEnvironment& WithRegistryCredential(const RegistryCredential& value) { SetRegistryCredential(value); return *this;}

    /**
     * <p> The credentials for access to a private registry.</p>
     */
    inline ProjectEnvironment& WithRegistryCredential(RegistryCredential&& value) { SetRegistryCredential(std::move(value)); return *this;}


    /**
     * <p> The type of credentials AWS CodeBuild uses to pull images in your build.
     * There are two valid values: </p> <ul> <li> <p> <code>CODEBUILD</code> specifies
     * that AWS CodeBuild uses its own credentials. This requires that you modify your
     * ECR repository policy to trust AWS CodeBuild's service principal. </p> </li>
     * <li> <p> <code>SERVICE_ROLE</code> specifies that AWS CodeBuild uses your build
     * project's service role. </p> </li> </ul> <p> When you use a cross-account or
     * private registry image, you must use SERVICE_ROLE credentials. When you use an
     * AWS CodeBuild curated image, you must use CODEBUILD credentials. </p>
     */
    inline const ImagePullCredentialsType& GetImagePullCredentialsType() const{ return m_imagePullCredentialsType; }

    /**
     * <p> The type of credentials AWS CodeBuild uses to pull images in your build.
     * There are two valid values: </p> <ul> <li> <p> <code>CODEBUILD</code> specifies
     * that AWS CodeBuild uses its own credentials. This requires that you modify your
     * ECR repository policy to trust AWS CodeBuild's service principal. </p> </li>
     * <li> <p> <code>SERVICE_ROLE</code> specifies that AWS CodeBuild uses your build
     * project's service role. </p> </li> </ul> <p> When you use a cross-account or
     * private registry image, you must use SERVICE_ROLE credentials. When you use an
     * AWS CodeBuild curated image, you must use CODEBUILD credentials. </p>
     */
    inline bool ImagePullCredentialsTypeHasBeenSet() const { return m_imagePullCredentialsTypeHasBeenSet; }

    /**
     * <p> The type of credentials AWS CodeBuild uses to pull images in your build.
     * There are two valid values: </p> <ul> <li> <p> <code>CODEBUILD</code> specifies
     * that AWS CodeBuild uses its own credentials. This requires that you modify your
     * ECR repository policy to trust AWS CodeBuild's service principal. </p> </li>
     * <li> <p> <code>SERVICE_ROLE</code> specifies that AWS CodeBuild uses your build
     * project's service role. </p> </li> </ul> <p> When you use a cross-account or
     * private registry image, you must use SERVICE_ROLE credentials. When you use an
     * AWS CodeBuild curated image, you must use CODEBUILD credentials. </p>
     */
    inline void SetImagePullCredentialsType(const ImagePullCredentialsType& value) { m_imagePullCredentialsTypeHasBeenSet = true; m_imagePullCredentialsType = value; }

    /**
     * <p> The type of credentials AWS CodeBuild uses to pull images in your build.
     * There are two valid values: </p> <ul> <li> <p> <code>CODEBUILD</code> specifies
     * that AWS CodeBuild uses its own credentials. This requires that you modify your
     * ECR repository policy to trust AWS CodeBuild's service principal. </p> </li>
     * <li> <p> <code>SERVICE_ROLE</code> specifies that AWS CodeBuild uses your build
     * project's service role. </p> </li> </ul> <p> When you use a cross-account or
     * private registry image, you must use SERVICE_ROLE credentials. When you use an
     * AWS CodeBuild curated image, you must use CODEBUILD credentials. </p>
     */
    inline void SetImagePullCredentialsType(ImagePullCredentialsType&& value) { m_imagePullCredentialsTypeHasBeenSet = true; m_imagePullCredentialsType = std::move(value); }

    /**
     * <p> The type of credentials AWS CodeBuild uses to pull images in your build.
     * There are two valid values: </p> <ul> <li> <p> <code>CODEBUILD</code> specifies
     * that AWS CodeBuild uses its own credentials. This requires that you modify your
     * ECR repository policy to trust AWS CodeBuild's service principal. </p> </li>
     * <li> <p> <code>SERVICE_ROLE</code> specifies that AWS CodeBuild uses your build
     * project's service role. </p> </li> </ul> <p> When you use a cross-account or
     * private registry image, you must use SERVICE_ROLE credentials. When you use an
     * AWS CodeBuild curated image, you must use CODEBUILD credentials. </p>
     */
    inline ProjectEnvironment& WithImagePullCredentialsType(const ImagePullCredentialsType& value) { SetImagePullCredentialsType(value); return *this;}

    /**
     * <p> The type of credentials AWS CodeBuild uses to pull images in your build.
     * There are two valid values: </p> <ul> <li> <p> <code>CODEBUILD</code> specifies
     * that AWS CodeBuild uses its own credentials. This requires that you modify your
     * ECR repository policy to trust AWS CodeBuild's service principal. </p> </li>
     * <li> <p> <code>SERVICE_ROLE</code> specifies that AWS CodeBuild uses your build
     * project's service role. </p> </li> </ul> <p> When you use a cross-account or
     * private registry image, you must use SERVICE_ROLE credentials. When you use an
     * AWS CodeBuild curated image, you must use CODEBUILD credentials. </p>
     */
    inline ProjectEnvironment& WithImagePullCredentialsType(ImagePullCredentialsType&& value) { SetImagePullCredentialsType(std::move(value)); return *this;}

  private:

    EnvironmentType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_image;
    bool m_imageHasBeenSet;

    ComputeType m_computeType;
    bool m_computeTypeHasBeenSet;

    Aws::Vector<EnvironmentVariable> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet;

    bool m_privilegedMode;
    bool m_privilegedModeHasBeenSet;

    Aws::String m_certificate;
    bool m_certificateHasBeenSet;

    RegistryCredential m_registryCredential;
    bool m_registryCredentialHasBeenSet;

    ImagePullCredentialsType m_imagePullCredentialsType;
    bool m_imagePullCredentialsTypeHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
