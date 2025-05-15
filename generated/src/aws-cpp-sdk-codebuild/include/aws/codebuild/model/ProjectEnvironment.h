/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/EnvironmentType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ComputeType.h>
#include <aws/codebuild/model/ComputeConfiguration.h>
#include <aws/codebuild/model/ProjectFleet.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/RegistryCredential.h>
#include <aws/codebuild/model/ImagePullCredentialsType.h>
#include <aws/codebuild/model/DockerServer.h>
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
  class ProjectEnvironment
  {
  public:
    AWS_CODEBUILD_API ProjectEnvironment() = default;
    AWS_CODEBUILD_API ProjectEnvironment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ProjectEnvironment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of build environment to use for related builds.</p>  <p>If
     * you're using compute fleets during project creation, <code>type</code> will be
     * ignored.</p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html">Build
     * environment compute types</a> in the <i>CodeBuild user guide</i>.</p>
     */
    inline EnvironmentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(EnvironmentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ProjectEnvironment& WithType(EnvironmentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image tag or image digest that identifies the Docker image to use for
     * this build project. Use the following formats:</p> <ul> <li> <p>For an image
     * tag: <code>&lt;registry&gt;/&lt;repository&gt;:&lt;tag&gt;</code>. For example,
     * in the Docker repository that CodeBuild uses to manage its Docker images, this
     * would be <code>aws/codebuild/standard:4.0</code>. </p> </li> <li> <p>For an
     * image digest: <code>&lt;registry&gt;/&lt;repository&gt;@&lt;digest&gt;</code>.
     * For example, to specify an image with the digest
     * "sha256:cbbf2f9a99b47fc460d422812b6a5adff7dfee951d8fa2e4a98caa0382cfbdbf," use
     * <code>&lt;registry&gt;/&lt;repository&gt;@sha256:cbbf2f9a99b47fc460d422812b6a5adff7dfee951d8fa2e4a98caa0382cfbdbf</code>.</p>
     * </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-available.html">Docker
     * images provided by CodeBuild</a> in the <i>CodeBuild user guide</i>.</p>
     */
    inline const Aws::String& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Aws::String>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Aws::String>
    ProjectEnvironment& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the compute resources the build project uses. Available
     * values include:</p> <ul> <li> <p> <code>ATTRIBUTE_BASED_COMPUTE</code>: Specify
     * the amount of vCPUs, memory, disk space, and the type of machine.</p>  <p>
     * If you use <code>ATTRIBUTE_BASED_COMPUTE</code>, you must define your attributes
     * by using <code>computeConfiguration</code>. CodeBuild will select the cheapest
     * instance that satisfies your specified attributes. For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html#environment-reserved-capacity.types">Reserved
     * capacity environment types</a> in the <i>CodeBuild User Guide</i>.</p> 
     * </li> <li> <p> <code>BUILD_GENERAL1_SMALL</code>: Use up to 4 GiB memory and 2
     * vCPUs for builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_MEDIUM</code>: Use up
     * to 8 GiB memory and 4 vCPUs for builds.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_LARGE</code>: Use up to 16 GiB memory and 8 vCPUs for
     * builds, depending on your environment type.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_XLARGE</code>: Use up to 72 GiB memory and 36 vCPUs for
     * builds, depending on your environment type.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_2XLARGE</code>: Use up to 144 GiB memory, 72 vCPUs, and 824
     * GB of SSD storage for builds. This compute type supports Docker images up to 100
     * GB uncompressed.</p> </li> <li> <p> <code>BUILD_LAMBDA_1GB</code>: Use up to 1
     * GiB memory for builds. Only available for environment type
     * <code>LINUX_LAMBDA_CONTAINER</code> and <code>ARM_LAMBDA_CONTAINER</code>.</p>
     * </li> <li> <p> <code>BUILD_LAMBDA_2GB</code>: Use up to 2 GiB memory for builds.
     * Only available for environment type <code>LINUX_LAMBDA_CONTAINER</code> and
     * <code>ARM_LAMBDA_CONTAINER</code>.</p> </li> <li> <p>
     * <code>BUILD_LAMBDA_4GB</code>: Use up to 4 GiB memory for builds. Only available
     * for environment type <code>LINUX_LAMBDA_CONTAINER</code> and
     * <code>ARM_LAMBDA_CONTAINER</code>.</p> </li> <li> <p>
     * <code>BUILD_LAMBDA_8GB</code>: Use up to 8 GiB memory for builds. Only available
     * for environment type <code>LINUX_LAMBDA_CONTAINER</code> and
     * <code>ARM_LAMBDA_CONTAINER</code>.</p> </li> <li> <p>
     * <code>BUILD_LAMBDA_10GB</code>: Use up to 10 GiB memory for builds. Only
     * available for environment type <code>LINUX_LAMBDA_CONTAINER</code> and
     * <code>ARM_LAMBDA_CONTAINER</code>.</p> </li> </ul> <p> If you use
     * <code>BUILD_GENERAL1_SMALL</code>: </p> <ul> <li> <p> For environment type
     * <code>LINUX_CONTAINER</code>, you can use up to 4 GiB memory and 2 vCPUs for
     * builds. </p> </li> <li> <p> For environment type
     * <code>LINUX_GPU_CONTAINER</code>, you can use up to 16 GiB memory, 4 vCPUs, and
     * 1 NVIDIA A10G Tensor Core GPU for builds.</p> </li> <li> <p> For environment
     * type <code>ARM_CONTAINER</code>, you can use up to 4 GiB memory and 2 vCPUs on
     * ARM-based processors for builds.</p> </li> </ul> <p> If you use
     * <code>BUILD_GENERAL1_LARGE</code>: </p> <ul> <li> <p> For environment type
     * <code>LINUX_CONTAINER</code>, you can use up to 16 GiB memory and 8 vCPUs for
     * builds. </p> </li> <li> <p> For environment type
     * <code>LINUX_GPU_CONTAINER</code>, you can use up to 255 GiB memory, 32 vCPUs,
     * and 4 NVIDIA Tesla V100 GPUs for builds.</p> </li> <li> <p> For environment type
     * <code>ARM_CONTAINER</code>, you can use up to 16 GiB memory and 8 vCPUs on
     * ARM-based processors for builds.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/build-env-ref-compute-types.html#environment.types">On-demand
     * environment types</a> in the <i>CodeBuild User Guide.</i> </p>
     */
    inline ComputeType GetComputeType() const { return m_computeType; }
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }
    inline void SetComputeType(ComputeType value) { m_computeTypeHasBeenSet = true; m_computeType = value; }
    inline ProjectEnvironment& WithComputeType(ComputeType value) { SetComputeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute configuration of the build project. This is only required if
     * <code>computeType</code> is set to <code>ATTRIBUTE_BASED_COMPUTE</code>.</p>
     */
    inline const ComputeConfiguration& GetComputeConfiguration() const { return m_computeConfiguration; }
    inline bool ComputeConfigurationHasBeenSet() const { return m_computeConfigurationHasBeenSet; }
    template<typename ComputeConfigurationT = ComputeConfiguration>
    void SetComputeConfiguration(ComputeConfigurationT&& value) { m_computeConfigurationHasBeenSet = true; m_computeConfiguration = std::forward<ComputeConfigurationT>(value); }
    template<typename ComputeConfigurationT = ComputeConfiguration>
    ProjectEnvironment& WithComputeConfiguration(ComputeConfigurationT&& value) { SetComputeConfiguration(std::forward<ComputeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A ProjectFleet object to use for this build project.</p>
     */
    inline const ProjectFleet& GetFleet() const { return m_fleet; }
    inline bool FleetHasBeenSet() const { return m_fleetHasBeenSet; }
    template<typename FleetT = ProjectFleet>
    void SetFleet(FleetT&& value) { m_fleetHasBeenSet = true; m_fleet = std::forward<FleetT>(value); }
    template<typename FleetT = ProjectFleet>
    ProjectEnvironment& WithFleet(FleetT&& value) { SetFleet(std::forward<FleetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of environment variables to make available to builds for this build
     * project.</p>
     */
    inline const Aws::Vector<EnvironmentVariable>& GetEnvironmentVariables() const { return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    template<typename EnvironmentVariablesT = Aws::Vector<EnvironmentVariable>>
    void SetEnvironmentVariables(EnvironmentVariablesT&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::forward<EnvironmentVariablesT>(value); }
    template<typename EnvironmentVariablesT = Aws::Vector<EnvironmentVariable>>
    ProjectEnvironment& WithEnvironmentVariables(EnvironmentVariablesT&& value) { SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value)); return *this;}
    template<typename EnvironmentVariablesT = EnvironmentVariable>
    ProjectEnvironment& AddEnvironmentVariables(EnvironmentVariablesT&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace_back(std::forward<EnvironmentVariablesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables running the Docker daemon inside a Docker container. Set to true only
     * if the build project is used to build Docker images. Otherwise, a build that
     * attempts to interact with the Docker daemon fails. The default setting is
     * <code>false</code>.</p> <p>You can initialize the Docker daemon during the
     * install phase of your build by adding one of the following sets of commands to
     * the install phase of your buildspec file:</p> <p>If the operating system's base
     * image is Ubuntu Linux:</p> <p> <code>- nohup /usr/local/bin/dockerd
     * --host=unix:///var/run/docker.sock --host=tcp://0.0.0.0:2375
     * --storage-driver=overlay&amp;</code> </p> <p> <code>- timeout 15 sh -c "until
     * docker info; do echo .; sleep 1; done"</code> </p> <p>If the operating system's
     * base image is Alpine Linux and the previous command does not work, add the
     * <code>-t</code> argument to <code>timeout</code>:</p> <p> <code>- nohup
     * /usr/local/bin/dockerd --host=unix:///var/run/docker.sock
     * --host=tcp://0.0.0.0:2375 --storage-driver=overlay&amp;</code> </p> <p> <code>-
     * timeout -t 15 sh -c "until docker info; do echo .; sleep 1; done"</code> </p>
     */
    inline bool GetPrivilegedMode() const { return m_privilegedMode; }
    inline bool PrivilegedModeHasBeenSet() const { return m_privilegedModeHasBeenSet; }
    inline void SetPrivilegedMode(bool value) { m_privilegedModeHasBeenSet = true; m_privilegedMode = value; }
    inline ProjectEnvironment& WithPrivilegedMode(bool value) { SetPrivilegedMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Amazon S3 bucket, path prefix, and object key that contains
     * the PEM-encoded certificate for the build project. For more information, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/create-project-cli.html#cli.environment.certificate">certificate</a>
     * in the <i>CodeBuild User Guide</i>.</p>
     */
    inline const Aws::String& GetCertificate() const { return m_certificate; }
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
    template<typename CertificateT = Aws::String>
    void SetCertificate(CertificateT&& value) { m_certificateHasBeenSet = true; m_certificate = std::forward<CertificateT>(value); }
    template<typename CertificateT = Aws::String>
    ProjectEnvironment& WithCertificate(CertificateT&& value) { SetCertificate(std::forward<CertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The credentials for access to a private registry.</p>
     */
    inline const RegistryCredential& GetRegistryCredential() const { return m_registryCredential; }
    inline bool RegistryCredentialHasBeenSet() const { return m_registryCredentialHasBeenSet; }
    template<typename RegistryCredentialT = RegistryCredential>
    void SetRegistryCredential(RegistryCredentialT&& value) { m_registryCredentialHasBeenSet = true; m_registryCredential = std::forward<RegistryCredentialT>(value); }
    template<typename RegistryCredentialT = RegistryCredential>
    ProjectEnvironment& WithRegistryCredential(RegistryCredentialT&& value) { SetRegistryCredential(std::forward<RegistryCredentialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of credentials CodeBuild uses to pull images in your build. There
     * are two valid values: </p> <ul> <li> <p> <code>CODEBUILD</code> specifies that
     * CodeBuild uses its own credentials. This requires that you modify your ECR
     * repository policy to trust CodeBuild service principal. </p> </li> <li> <p>
     * <code>SERVICE_ROLE</code> specifies that CodeBuild uses your build project's
     * service role. </p> </li> </ul> <p> When you use a cross-account or private
     * registry image, you must use SERVICE_ROLE credentials. When you use an CodeBuild
     * curated image, you must use CODEBUILD credentials. </p>
     */
    inline ImagePullCredentialsType GetImagePullCredentialsType() const { return m_imagePullCredentialsType; }
    inline bool ImagePullCredentialsTypeHasBeenSet() const { return m_imagePullCredentialsTypeHasBeenSet; }
    inline void SetImagePullCredentialsType(ImagePullCredentialsType value) { m_imagePullCredentialsTypeHasBeenSet = true; m_imagePullCredentialsType = value; }
    inline ProjectEnvironment& WithImagePullCredentialsType(ImagePullCredentialsType value) { SetImagePullCredentialsType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A DockerServer object to use for this build project.</p>
     */
    inline const DockerServer& GetDockerServer() const { return m_dockerServer; }
    inline bool DockerServerHasBeenSet() const { return m_dockerServerHasBeenSet; }
    template<typename DockerServerT = DockerServer>
    void SetDockerServer(DockerServerT&& value) { m_dockerServerHasBeenSet = true; m_dockerServer = std::forward<DockerServerT>(value); }
    template<typename DockerServerT = DockerServer>
    ProjectEnvironment& WithDockerServer(DockerServerT&& value) { SetDockerServer(std::forward<DockerServerT>(value)); return *this;}
    ///@}
  private:

    EnvironmentType m_type{EnvironmentType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    ComputeType m_computeType{ComputeType::NOT_SET};
    bool m_computeTypeHasBeenSet = false;

    ComputeConfiguration m_computeConfiguration;
    bool m_computeConfigurationHasBeenSet = false;

    ProjectFleet m_fleet;
    bool m_fleetHasBeenSet = false;

    Aws::Vector<EnvironmentVariable> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;

    bool m_privilegedMode{false};
    bool m_privilegedModeHasBeenSet = false;

    Aws::String m_certificate;
    bool m_certificateHasBeenSet = false;

    RegistryCredential m_registryCredential;
    bool m_registryCredentialHasBeenSet = false;

    ImagePullCredentialsType m_imagePullCredentialsType{ImagePullCredentialsType::NOT_SET};
    bool m_imagePullCredentialsTypeHasBeenSet = false;

    DockerServer m_dockerServer;
    bool m_dockerServerHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
