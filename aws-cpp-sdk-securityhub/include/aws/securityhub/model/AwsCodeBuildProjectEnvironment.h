/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsCodeBuildProjectEnvironmentRegistryCredential.h>
#include <aws/securityhub/model/AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about the build environment for this build project.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCodeBuildProjectEnvironment">AWS
   * API Reference</a></p>
   */
  class AwsCodeBuildProjectEnvironment
  {
  public:
    AWS_SECURITYHUB_API AwsCodeBuildProjectEnvironment();
    AWS_SECURITYHUB_API AwsCodeBuildProjectEnvironment(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCodeBuildProjectEnvironment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline AwsCodeBuildProjectEnvironment& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}

    /**
     * <p>The certificate to use with this build project.</p>
     */
    inline AwsCodeBuildProjectEnvironment& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}

    /**
     * <p>The certificate to use with this build project.</p>
     */
    inline AwsCodeBuildProjectEnvironment& WithCertificate(const char* value) { SetCertificate(value); return *this;}


    /**
     * <p>A set of environment variables to make available to builds for the build
     * project.</p>
     */
    inline const Aws::Vector<AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails>& GetEnvironmentVariables() const{ return m_environmentVariables; }

    /**
     * <p>A set of environment variables to make available to builds for the build
     * project.</p>
     */
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }

    /**
     * <p>A set of environment variables to make available to builds for the build
     * project.</p>
     */
    inline void SetEnvironmentVariables(const Aws::Vector<AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }

    /**
     * <p>A set of environment variables to make available to builds for the build
     * project.</p>
     */
    inline void SetEnvironmentVariables(Aws::Vector<AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }

    /**
     * <p>A set of environment variables to make available to builds for the build
     * project.</p>
     */
    inline AwsCodeBuildProjectEnvironment& WithEnvironmentVariables(const Aws::Vector<AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails>& value) { SetEnvironmentVariables(value); return *this;}

    /**
     * <p>A set of environment variables to make available to builds for the build
     * project.</p>
     */
    inline AwsCodeBuildProjectEnvironment& WithEnvironmentVariables(Aws::Vector<AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}

    /**
     * <p>A set of environment variables to make available to builds for the build
     * project.</p>
     */
    inline AwsCodeBuildProjectEnvironment& AddEnvironmentVariables(const AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.push_back(value); return *this; }

    /**
     * <p>A set of environment variables to make available to builds for the build
     * project.</p>
     */
    inline AwsCodeBuildProjectEnvironment& AddEnvironmentVariables(AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.push_back(std::move(value)); return *this; }


    /**
     * <p>Whether to allow the Docker daemon to run inside a Docker container. Set to
     * <code>true</code> if the build project is used to build Docker images.</p>
     */
    inline bool GetPrivilegedMode() const{ return m_privilegedMode; }

    /**
     * <p>Whether to allow the Docker daemon to run inside a Docker container. Set to
     * <code>true</code> if the build project is used to build Docker images.</p>
     */
    inline bool PrivilegedModeHasBeenSet() const { return m_privilegedModeHasBeenSet; }

    /**
     * <p>Whether to allow the Docker daemon to run inside a Docker container. Set to
     * <code>true</code> if the build project is used to build Docker images.</p>
     */
    inline void SetPrivilegedMode(bool value) { m_privilegedModeHasBeenSet = true; m_privilegedMode = value; }

    /**
     * <p>Whether to allow the Docker daemon to run inside a Docker container. Set to
     * <code>true</code> if the build project is used to build Docker images.</p>
     */
    inline AwsCodeBuildProjectEnvironment& WithPrivilegedMode(bool value) { SetPrivilegedMode(value); return *this;}


    /**
     * <p>The type of credentials CodeBuild uses to pull images in your build.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>CODEBUILD</code> specifies that
     * CodeBuild uses its own credentials. This requires that you modify your ECR
     * repository policy to trust the CodeBuild service principal.</p> </li> <li> <p>
     * <code>SERVICE_ROLE</code> specifies that CodeBuild uses your build project's
     * service role.</p> </li> </ul> <p>When you use a cross-account or private
     * registry image, you must use <code>SERVICE_ROLE</code> credentials. When you use
     * an CodeBuild curated image, you must use <code>CODEBUILD</code> credentials.</p>
     */
    inline const Aws::String& GetImagePullCredentialsType() const{ return m_imagePullCredentialsType; }

    /**
     * <p>The type of credentials CodeBuild uses to pull images in your build.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>CODEBUILD</code> specifies that
     * CodeBuild uses its own credentials. This requires that you modify your ECR
     * repository policy to trust the CodeBuild service principal.</p> </li> <li> <p>
     * <code>SERVICE_ROLE</code> specifies that CodeBuild uses your build project's
     * service role.</p> </li> </ul> <p>When you use a cross-account or private
     * registry image, you must use <code>SERVICE_ROLE</code> credentials. When you use
     * an CodeBuild curated image, you must use <code>CODEBUILD</code> credentials.</p>
     */
    inline bool ImagePullCredentialsTypeHasBeenSet() const { return m_imagePullCredentialsTypeHasBeenSet; }

    /**
     * <p>The type of credentials CodeBuild uses to pull images in your build.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>CODEBUILD</code> specifies that
     * CodeBuild uses its own credentials. This requires that you modify your ECR
     * repository policy to trust the CodeBuild service principal.</p> </li> <li> <p>
     * <code>SERVICE_ROLE</code> specifies that CodeBuild uses your build project's
     * service role.</p> </li> </ul> <p>When you use a cross-account or private
     * registry image, you must use <code>SERVICE_ROLE</code> credentials. When you use
     * an CodeBuild curated image, you must use <code>CODEBUILD</code> credentials.</p>
     */
    inline void SetImagePullCredentialsType(const Aws::String& value) { m_imagePullCredentialsTypeHasBeenSet = true; m_imagePullCredentialsType = value; }

    /**
     * <p>The type of credentials CodeBuild uses to pull images in your build.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>CODEBUILD</code> specifies that
     * CodeBuild uses its own credentials. This requires that you modify your ECR
     * repository policy to trust the CodeBuild service principal.</p> </li> <li> <p>
     * <code>SERVICE_ROLE</code> specifies that CodeBuild uses your build project's
     * service role.</p> </li> </ul> <p>When you use a cross-account or private
     * registry image, you must use <code>SERVICE_ROLE</code> credentials. When you use
     * an CodeBuild curated image, you must use <code>CODEBUILD</code> credentials.</p>
     */
    inline void SetImagePullCredentialsType(Aws::String&& value) { m_imagePullCredentialsTypeHasBeenSet = true; m_imagePullCredentialsType = std::move(value); }

    /**
     * <p>The type of credentials CodeBuild uses to pull images in your build.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>CODEBUILD</code> specifies that
     * CodeBuild uses its own credentials. This requires that you modify your ECR
     * repository policy to trust the CodeBuild service principal.</p> </li> <li> <p>
     * <code>SERVICE_ROLE</code> specifies that CodeBuild uses your build project's
     * service role.</p> </li> </ul> <p>When you use a cross-account or private
     * registry image, you must use <code>SERVICE_ROLE</code> credentials. When you use
     * an CodeBuild curated image, you must use <code>CODEBUILD</code> credentials.</p>
     */
    inline void SetImagePullCredentialsType(const char* value) { m_imagePullCredentialsTypeHasBeenSet = true; m_imagePullCredentialsType.assign(value); }

    /**
     * <p>The type of credentials CodeBuild uses to pull images in your build.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>CODEBUILD</code> specifies that
     * CodeBuild uses its own credentials. This requires that you modify your ECR
     * repository policy to trust the CodeBuild service principal.</p> </li> <li> <p>
     * <code>SERVICE_ROLE</code> specifies that CodeBuild uses your build project's
     * service role.</p> </li> </ul> <p>When you use a cross-account or private
     * registry image, you must use <code>SERVICE_ROLE</code> credentials. When you use
     * an CodeBuild curated image, you must use <code>CODEBUILD</code> credentials.</p>
     */
    inline AwsCodeBuildProjectEnvironment& WithImagePullCredentialsType(const Aws::String& value) { SetImagePullCredentialsType(value); return *this;}

    /**
     * <p>The type of credentials CodeBuild uses to pull images in your build.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>CODEBUILD</code> specifies that
     * CodeBuild uses its own credentials. This requires that you modify your ECR
     * repository policy to trust the CodeBuild service principal.</p> </li> <li> <p>
     * <code>SERVICE_ROLE</code> specifies that CodeBuild uses your build project's
     * service role.</p> </li> </ul> <p>When you use a cross-account or private
     * registry image, you must use <code>SERVICE_ROLE</code> credentials. When you use
     * an CodeBuild curated image, you must use <code>CODEBUILD</code> credentials.</p>
     */
    inline AwsCodeBuildProjectEnvironment& WithImagePullCredentialsType(Aws::String&& value) { SetImagePullCredentialsType(std::move(value)); return *this;}

    /**
     * <p>The type of credentials CodeBuild uses to pull images in your build.</p>
     * <p>Valid values:</p> <ul> <li> <p> <code>CODEBUILD</code> specifies that
     * CodeBuild uses its own credentials. This requires that you modify your ECR
     * repository policy to trust the CodeBuild service principal.</p> </li> <li> <p>
     * <code>SERVICE_ROLE</code> specifies that CodeBuild uses your build project's
     * service role.</p> </li> </ul> <p>When you use a cross-account or private
     * registry image, you must use <code>SERVICE_ROLE</code> credentials. When you use
     * an CodeBuild curated image, you must use <code>CODEBUILD</code> credentials.</p>
     */
    inline AwsCodeBuildProjectEnvironment& WithImagePullCredentialsType(const char* value) { SetImagePullCredentialsType(value); return *this;}


    /**
     * <p>The credentials for access to a private registry.</p>
     */
    inline const AwsCodeBuildProjectEnvironmentRegistryCredential& GetRegistryCredential() const{ return m_registryCredential; }

    /**
     * <p>The credentials for access to a private registry.</p>
     */
    inline bool RegistryCredentialHasBeenSet() const { return m_registryCredentialHasBeenSet; }

    /**
     * <p>The credentials for access to a private registry.</p>
     */
    inline void SetRegistryCredential(const AwsCodeBuildProjectEnvironmentRegistryCredential& value) { m_registryCredentialHasBeenSet = true; m_registryCredential = value; }

    /**
     * <p>The credentials for access to a private registry.</p>
     */
    inline void SetRegistryCredential(AwsCodeBuildProjectEnvironmentRegistryCredential&& value) { m_registryCredentialHasBeenSet = true; m_registryCredential = std::move(value); }

    /**
     * <p>The credentials for access to a private registry.</p>
     */
    inline AwsCodeBuildProjectEnvironment& WithRegistryCredential(const AwsCodeBuildProjectEnvironmentRegistryCredential& value) { SetRegistryCredential(value); return *this;}

    /**
     * <p>The credentials for access to a private registry.</p>
     */
    inline AwsCodeBuildProjectEnvironment& WithRegistryCredential(AwsCodeBuildProjectEnvironmentRegistryCredential&& value) { SetRegistryCredential(std::move(value)); return *this;}


    /**
     * <p>The type of build environment to use for related builds.</p> <p>The
     * environment type <code>ARM_CONTAINER</code> is available only in Regions US East
     * (N. Virginia), US East (Ohio), US West (Oregon), Europe (Ireland), Asia Pacific
     * (Mumbai), Asia Pacific (Tokyo), Asia Pacific (Sydney), and Europe
     * (Frankfurt).</p> <p>The environment type <code>LINUX_CONTAINER</code> with
     * compute type build.general1.2xlarge is available only in Regions US East (N.
     * Virginia), US East (N. Virginia), US West (Oregon), Canada (Central), Europe
     * (Ireland), Europe (London), Europe (Frankfurt), Asia Pacific (Tokyo), Asia
     * Pacific (Seoul), Asia Pacific (Singapore), Asia Pacific (Sydney), China
     * (Beijing), and China (Ningxia).</p> <p>The environment type
     * <code>LINUX_GPU_CONTAINER</code> is available only in Regions US East (N.
     * Virginia), US East (N. Virginia), US West (Oregon), Canada (Central), Europe
     * (Ireland), Europe (London), Europe (Frankfurt), Asia Pacific (Tokyo), Asia
     * Pacific (Seoul), Asia Pacific (Singapore), Asia Pacific (Sydney), China
     * (Beijing), and China (Ningxia).</p> <p>Valid values:
     * <code>WINDOWS_CONTAINER</code> | <code>LINUX_CONTAINER</code> |
     * <code>LINUX_GPU_CONTAINER</code> | <code>ARM_CONTAINER</code> </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of build environment to use for related builds.</p> <p>The
     * environment type <code>ARM_CONTAINER</code> is available only in Regions US East
     * (N. Virginia), US East (Ohio), US West (Oregon), Europe (Ireland), Asia Pacific
     * (Mumbai), Asia Pacific (Tokyo), Asia Pacific (Sydney), and Europe
     * (Frankfurt).</p> <p>The environment type <code>LINUX_CONTAINER</code> with
     * compute type build.general1.2xlarge is available only in Regions US East (N.
     * Virginia), US East (N. Virginia), US West (Oregon), Canada (Central), Europe
     * (Ireland), Europe (London), Europe (Frankfurt), Asia Pacific (Tokyo), Asia
     * Pacific (Seoul), Asia Pacific (Singapore), Asia Pacific (Sydney), China
     * (Beijing), and China (Ningxia).</p> <p>The environment type
     * <code>LINUX_GPU_CONTAINER</code> is available only in Regions US East (N.
     * Virginia), US East (N. Virginia), US West (Oregon), Canada (Central), Europe
     * (Ireland), Europe (London), Europe (Frankfurt), Asia Pacific (Tokyo), Asia
     * Pacific (Seoul), Asia Pacific (Singapore), Asia Pacific (Sydney), China
     * (Beijing), and China (Ningxia).</p> <p>Valid values:
     * <code>WINDOWS_CONTAINER</code> | <code>LINUX_CONTAINER</code> |
     * <code>LINUX_GPU_CONTAINER</code> | <code>ARM_CONTAINER</code> </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of build environment to use for related builds.</p> <p>The
     * environment type <code>ARM_CONTAINER</code> is available only in Regions US East
     * (N. Virginia), US East (Ohio), US West (Oregon), Europe (Ireland), Asia Pacific
     * (Mumbai), Asia Pacific (Tokyo), Asia Pacific (Sydney), and Europe
     * (Frankfurt).</p> <p>The environment type <code>LINUX_CONTAINER</code> with
     * compute type build.general1.2xlarge is available only in Regions US East (N.
     * Virginia), US East (N. Virginia), US West (Oregon), Canada (Central), Europe
     * (Ireland), Europe (London), Europe (Frankfurt), Asia Pacific (Tokyo), Asia
     * Pacific (Seoul), Asia Pacific (Singapore), Asia Pacific (Sydney), China
     * (Beijing), and China (Ningxia).</p> <p>The environment type
     * <code>LINUX_GPU_CONTAINER</code> is available only in Regions US East (N.
     * Virginia), US East (N. Virginia), US West (Oregon), Canada (Central), Europe
     * (Ireland), Europe (London), Europe (Frankfurt), Asia Pacific (Tokyo), Asia
     * Pacific (Seoul), Asia Pacific (Singapore), Asia Pacific (Sydney), China
     * (Beijing), and China (Ningxia).</p> <p>Valid values:
     * <code>WINDOWS_CONTAINER</code> | <code>LINUX_CONTAINER</code> |
     * <code>LINUX_GPU_CONTAINER</code> | <code>ARM_CONTAINER</code> </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of build environment to use for related builds.</p> <p>The
     * environment type <code>ARM_CONTAINER</code> is available only in Regions US East
     * (N. Virginia), US East (Ohio), US West (Oregon), Europe (Ireland), Asia Pacific
     * (Mumbai), Asia Pacific (Tokyo), Asia Pacific (Sydney), and Europe
     * (Frankfurt).</p> <p>The environment type <code>LINUX_CONTAINER</code> with
     * compute type build.general1.2xlarge is available only in Regions US East (N.
     * Virginia), US East (N. Virginia), US West (Oregon), Canada (Central), Europe
     * (Ireland), Europe (London), Europe (Frankfurt), Asia Pacific (Tokyo), Asia
     * Pacific (Seoul), Asia Pacific (Singapore), Asia Pacific (Sydney), China
     * (Beijing), and China (Ningxia).</p> <p>The environment type
     * <code>LINUX_GPU_CONTAINER</code> is available only in Regions US East (N.
     * Virginia), US East (N. Virginia), US West (Oregon), Canada (Central), Europe
     * (Ireland), Europe (London), Europe (Frankfurt), Asia Pacific (Tokyo), Asia
     * Pacific (Seoul), Asia Pacific (Singapore), Asia Pacific (Sydney), China
     * (Beijing), and China (Ningxia).</p> <p>Valid values:
     * <code>WINDOWS_CONTAINER</code> | <code>LINUX_CONTAINER</code> |
     * <code>LINUX_GPU_CONTAINER</code> | <code>ARM_CONTAINER</code> </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of build environment to use for related builds.</p> <p>The
     * environment type <code>ARM_CONTAINER</code> is available only in Regions US East
     * (N. Virginia), US East (Ohio), US West (Oregon), Europe (Ireland), Asia Pacific
     * (Mumbai), Asia Pacific (Tokyo), Asia Pacific (Sydney), and Europe
     * (Frankfurt).</p> <p>The environment type <code>LINUX_CONTAINER</code> with
     * compute type build.general1.2xlarge is available only in Regions US East (N.
     * Virginia), US East (N. Virginia), US West (Oregon), Canada (Central), Europe
     * (Ireland), Europe (London), Europe (Frankfurt), Asia Pacific (Tokyo), Asia
     * Pacific (Seoul), Asia Pacific (Singapore), Asia Pacific (Sydney), China
     * (Beijing), and China (Ningxia).</p> <p>The environment type
     * <code>LINUX_GPU_CONTAINER</code> is available only in Regions US East (N.
     * Virginia), US East (N. Virginia), US West (Oregon), Canada (Central), Europe
     * (Ireland), Europe (London), Europe (Frankfurt), Asia Pacific (Tokyo), Asia
     * Pacific (Seoul), Asia Pacific (Singapore), Asia Pacific (Sydney), China
     * (Beijing), and China (Ningxia).</p> <p>Valid values:
     * <code>WINDOWS_CONTAINER</code> | <code>LINUX_CONTAINER</code> |
     * <code>LINUX_GPU_CONTAINER</code> | <code>ARM_CONTAINER</code> </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of build environment to use for related builds.</p> <p>The
     * environment type <code>ARM_CONTAINER</code> is available only in Regions US East
     * (N. Virginia), US East (Ohio), US West (Oregon), Europe (Ireland), Asia Pacific
     * (Mumbai), Asia Pacific (Tokyo), Asia Pacific (Sydney), and Europe
     * (Frankfurt).</p> <p>The environment type <code>LINUX_CONTAINER</code> with
     * compute type build.general1.2xlarge is available only in Regions US East (N.
     * Virginia), US East (N. Virginia), US West (Oregon), Canada (Central), Europe
     * (Ireland), Europe (London), Europe (Frankfurt), Asia Pacific (Tokyo), Asia
     * Pacific (Seoul), Asia Pacific (Singapore), Asia Pacific (Sydney), China
     * (Beijing), and China (Ningxia).</p> <p>The environment type
     * <code>LINUX_GPU_CONTAINER</code> is available only in Regions US East (N.
     * Virginia), US East (N. Virginia), US West (Oregon), Canada (Central), Europe
     * (Ireland), Europe (London), Europe (Frankfurt), Asia Pacific (Tokyo), Asia
     * Pacific (Seoul), Asia Pacific (Singapore), Asia Pacific (Sydney), China
     * (Beijing), and China (Ningxia).</p> <p>Valid values:
     * <code>WINDOWS_CONTAINER</code> | <code>LINUX_CONTAINER</code> |
     * <code>LINUX_GPU_CONTAINER</code> | <code>ARM_CONTAINER</code> </p>
     */
    inline AwsCodeBuildProjectEnvironment& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of build environment to use for related builds.</p> <p>The
     * environment type <code>ARM_CONTAINER</code> is available only in Regions US East
     * (N. Virginia), US East (Ohio), US West (Oregon), Europe (Ireland), Asia Pacific
     * (Mumbai), Asia Pacific (Tokyo), Asia Pacific (Sydney), and Europe
     * (Frankfurt).</p> <p>The environment type <code>LINUX_CONTAINER</code> with
     * compute type build.general1.2xlarge is available only in Regions US East (N.
     * Virginia), US East (N. Virginia), US West (Oregon), Canada (Central), Europe
     * (Ireland), Europe (London), Europe (Frankfurt), Asia Pacific (Tokyo), Asia
     * Pacific (Seoul), Asia Pacific (Singapore), Asia Pacific (Sydney), China
     * (Beijing), and China (Ningxia).</p> <p>The environment type
     * <code>LINUX_GPU_CONTAINER</code> is available only in Regions US East (N.
     * Virginia), US East (N. Virginia), US West (Oregon), Canada (Central), Europe
     * (Ireland), Europe (London), Europe (Frankfurt), Asia Pacific (Tokyo), Asia
     * Pacific (Seoul), Asia Pacific (Singapore), Asia Pacific (Sydney), China
     * (Beijing), and China (Ningxia).</p> <p>Valid values:
     * <code>WINDOWS_CONTAINER</code> | <code>LINUX_CONTAINER</code> |
     * <code>LINUX_GPU_CONTAINER</code> | <code>ARM_CONTAINER</code> </p>
     */
    inline AwsCodeBuildProjectEnvironment& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of build environment to use for related builds.</p> <p>The
     * environment type <code>ARM_CONTAINER</code> is available only in Regions US East
     * (N. Virginia), US East (Ohio), US West (Oregon), Europe (Ireland), Asia Pacific
     * (Mumbai), Asia Pacific (Tokyo), Asia Pacific (Sydney), and Europe
     * (Frankfurt).</p> <p>The environment type <code>LINUX_CONTAINER</code> with
     * compute type build.general1.2xlarge is available only in Regions US East (N.
     * Virginia), US East (N. Virginia), US West (Oregon), Canada (Central), Europe
     * (Ireland), Europe (London), Europe (Frankfurt), Asia Pacific (Tokyo), Asia
     * Pacific (Seoul), Asia Pacific (Singapore), Asia Pacific (Sydney), China
     * (Beijing), and China (Ningxia).</p> <p>The environment type
     * <code>LINUX_GPU_CONTAINER</code> is available only in Regions US East (N.
     * Virginia), US East (N. Virginia), US West (Oregon), Canada (Central), Europe
     * (Ireland), Europe (London), Europe (Frankfurt), Asia Pacific (Tokyo), Asia
     * Pacific (Seoul), Asia Pacific (Singapore), Asia Pacific (Sydney), China
     * (Beijing), and China (Ningxia).</p> <p>Valid values:
     * <code>WINDOWS_CONTAINER</code> | <code>LINUX_CONTAINER</code> |
     * <code>LINUX_GPU_CONTAINER</code> | <code>ARM_CONTAINER</code> </p>
     */
    inline AwsCodeBuildProjectEnvironment& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_certificate;
    bool m_certificateHasBeenSet = false;

    Aws::Vector<AwsCodeBuildProjectEnvironmentEnvironmentVariablesDetails> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;

    bool m_privilegedMode;
    bool m_privilegedModeHasBeenSet = false;

    Aws::String m_imagePullCredentialsType;
    bool m_imagePullCredentialsTypeHasBeenSet = false;

    AwsCodeBuildProjectEnvironmentRegistryCredential m_registryCredential;
    bool m_registryCredentialHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
