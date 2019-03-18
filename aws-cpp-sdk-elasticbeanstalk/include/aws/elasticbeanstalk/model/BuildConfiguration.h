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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ComputeType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Settings for an AWS CodeBuild build.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/BuildConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API BuildConfiguration
  {
  public:
    BuildConfiguration();
    BuildConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    BuildConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the artifact of the CodeBuild build. If provided, Elastic
     * Beanstalk stores the build artifact in the S3 location
     * <i>S3-bucket</i>/resources/<i>application-name</i>/codebuild/codebuild-<i>version-label</i>-<i>artifact-name</i>.zip.
     * If not provided, Elastic Beanstalk stores the build artifact in the S3 location
     * <i>S3-bucket</i>/resources/<i>application-name</i>/codebuild/codebuild-<i>version-label</i>.zip.
     * </p>
     */
    inline const Aws::String& GetArtifactName() const{ return m_artifactName; }

    /**
     * <p>The name of the artifact of the CodeBuild build. If provided, Elastic
     * Beanstalk stores the build artifact in the S3 location
     * <i>S3-bucket</i>/resources/<i>application-name</i>/codebuild/codebuild-<i>version-label</i>-<i>artifact-name</i>.zip.
     * If not provided, Elastic Beanstalk stores the build artifact in the S3 location
     * <i>S3-bucket</i>/resources/<i>application-name</i>/codebuild/codebuild-<i>version-label</i>.zip.
     * </p>
     */
    inline bool ArtifactNameHasBeenSet() const { return m_artifactNameHasBeenSet; }

    /**
     * <p>The name of the artifact of the CodeBuild build. If provided, Elastic
     * Beanstalk stores the build artifact in the S3 location
     * <i>S3-bucket</i>/resources/<i>application-name</i>/codebuild/codebuild-<i>version-label</i>-<i>artifact-name</i>.zip.
     * If not provided, Elastic Beanstalk stores the build artifact in the S3 location
     * <i>S3-bucket</i>/resources/<i>application-name</i>/codebuild/codebuild-<i>version-label</i>.zip.
     * </p>
     */
    inline void SetArtifactName(const Aws::String& value) { m_artifactNameHasBeenSet = true; m_artifactName = value; }

    /**
     * <p>The name of the artifact of the CodeBuild build. If provided, Elastic
     * Beanstalk stores the build artifact in the S3 location
     * <i>S3-bucket</i>/resources/<i>application-name</i>/codebuild/codebuild-<i>version-label</i>-<i>artifact-name</i>.zip.
     * If not provided, Elastic Beanstalk stores the build artifact in the S3 location
     * <i>S3-bucket</i>/resources/<i>application-name</i>/codebuild/codebuild-<i>version-label</i>.zip.
     * </p>
     */
    inline void SetArtifactName(Aws::String&& value) { m_artifactNameHasBeenSet = true; m_artifactName = std::move(value); }

    /**
     * <p>The name of the artifact of the CodeBuild build. If provided, Elastic
     * Beanstalk stores the build artifact in the S3 location
     * <i>S3-bucket</i>/resources/<i>application-name</i>/codebuild/codebuild-<i>version-label</i>-<i>artifact-name</i>.zip.
     * If not provided, Elastic Beanstalk stores the build artifact in the S3 location
     * <i>S3-bucket</i>/resources/<i>application-name</i>/codebuild/codebuild-<i>version-label</i>.zip.
     * </p>
     */
    inline void SetArtifactName(const char* value) { m_artifactNameHasBeenSet = true; m_artifactName.assign(value); }

    /**
     * <p>The name of the artifact of the CodeBuild build. If provided, Elastic
     * Beanstalk stores the build artifact in the S3 location
     * <i>S3-bucket</i>/resources/<i>application-name</i>/codebuild/codebuild-<i>version-label</i>-<i>artifact-name</i>.zip.
     * If not provided, Elastic Beanstalk stores the build artifact in the S3 location
     * <i>S3-bucket</i>/resources/<i>application-name</i>/codebuild/codebuild-<i>version-label</i>.zip.
     * </p>
     */
    inline BuildConfiguration& WithArtifactName(const Aws::String& value) { SetArtifactName(value); return *this;}

    /**
     * <p>The name of the artifact of the CodeBuild build. If provided, Elastic
     * Beanstalk stores the build artifact in the S3 location
     * <i>S3-bucket</i>/resources/<i>application-name</i>/codebuild/codebuild-<i>version-label</i>-<i>artifact-name</i>.zip.
     * If not provided, Elastic Beanstalk stores the build artifact in the S3 location
     * <i>S3-bucket</i>/resources/<i>application-name</i>/codebuild/codebuild-<i>version-label</i>.zip.
     * </p>
     */
    inline BuildConfiguration& WithArtifactName(Aws::String&& value) { SetArtifactName(std::move(value)); return *this;}

    /**
     * <p>The name of the artifact of the CodeBuild build. If provided, Elastic
     * Beanstalk stores the build artifact in the S3 location
     * <i>S3-bucket</i>/resources/<i>application-name</i>/codebuild/codebuild-<i>version-label</i>-<i>artifact-name</i>.zip.
     * If not provided, Elastic Beanstalk stores the build artifact in the S3 location
     * <i>S3-bucket</i>/resources/<i>application-name</i>/codebuild/codebuild-<i>version-label</i>.zip.
     * </p>
     */
    inline BuildConfiguration& WithArtifactName(const char* value) { SetArtifactName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that enables AWS CodeBuild to interact with dependent AWS services on
     * behalf of the AWS account.</p>
     */
    inline const Aws::String& GetCodeBuildServiceRole() const{ return m_codeBuildServiceRole; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that enables AWS CodeBuild to interact with dependent AWS services on
     * behalf of the AWS account.</p>
     */
    inline bool CodeBuildServiceRoleHasBeenSet() const { return m_codeBuildServiceRoleHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that enables AWS CodeBuild to interact with dependent AWS services on
     * behalf of the AWS account.</p>
     */
    inline void SetCodeBuildServiceRole(const Aws::String& value) { m_codeBuildServiceRoleHasBeenSet = true; m_codeBuildServiceRole = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that enables AWS CodeBuild to interact with dependent AWS services on
     * behalf of the AWS account.</p>
     */
    inline void SetCodeBuildServiceRole(Aws::String&& value) { m_codeBuildServiceRoleHasBeenSet = true; m_codeBuildServiceRole = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that enables AWS CodeBuild to interact with dependent AWS services on
     * behalf of the AWS account.</p>
     */
    inline void SetCodeBuildServiceRole(const char* value) { m_codeBuildServiceRoleHasBeenSet = true; m_codeBuildServiceRole.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that enables AWS CodeBuild to interact with dependent AWS services on
     * behalf of the AWS account.</p>
     */
    inline BuildConfiguration& WithCodeBuildServiceRole(const Aws::String& value) { SetCodeBuildServiceRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that enables AWS CodeBuild to interact with dependent AWS services on
     * behalf of the AWS account.</p>
     */
    inline BuildConfiguration& WithCodeBuildServiceRole(Aws::String&& value) { SetCodeBuildServiceRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that enables AWS CodeBuild to interact with dependent AWS services on
     * behalf of the AWS account.</p>
     */
    inline BuildConfiguration& WithCodeBuildServiceRole(const char* value) { SetCodeBuildServiceRole(value); return *this;}


    /**
     * <p>Information about the compute resources the build project will use.</p> <ul>
     * <li> <p> <code>BUILD_GENERAL1_SMALL: Use up to 3 GB memory and 2 vCPUs for
     * builds</code> </p> </li> <li> <p> <code>BUILD_GENERAL1_MEDIUM: Use up to 7 GB
     * memory and 4 vCPUs for builds</code> </p> </li> <li> <p>
     * <code>BUILD_GENERAL1_LARGE: Use up to 15 GB memory and 8 vCPUs for builds</code>
     * </p> </li> </ul>
     */
    inline const ComputeType& GetComputeType() const{ return m_computeType; }

    /**
     * <p>Information about the compute resources the build project will use.</p> <ul>
     * <li> <p> <code>BUILD_GENERAL1_SMALL: Use up to 3 GB memory and 2 vCPUs for
     * builds</code> </p> </li> <li> <p> <code>BUILD_GENERAL1_MEDIUM: Use up to 7 GB
     * memory and 4 vCPUs for builds</code> </p> </li> <li> <p>
     * <code>BUILD_GENERAL1_LARGE: Use up to 15 GB memory and 8 vCPUs for builds</code>
     * </p> </li> </ul>
     */
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }

    /**
     * <p>Information about the compute resources the build project will use.</p> <ul>
     * <li> <p> <code>BUILD_GENERAL1_SMALL: Use up to 3 GB memory and 2 vCPUs for
     * builds</code> </p> </li> <li> <p> <code>BUILD_GENERAL1_MEDIUM: Use up to 7 GB
     * memory and 4 vCPUs for builds</code> </p> </li> <li> <p>
     * <code>BUILD_GENERAL1_LARGE: Use up to 15 GB memory and 8 vCPUs for builds</code>
     * </p> </li> </ul>
     */
    inline void SetComputeType(const ComputeType& value) { m_computeTypeHasBeenSet = true; m_computeType = value; }

    /**
     * <p>Information about the compute resources the build project will use.</p> <ul>
     * <li> <p> <code>BUILD_GENERAL1_SMALL: Use up to 3 GB memory and 2 vCPUs for
     * builds</code> </p> </li> <li> <p> <code>BUILD_GENERAL1_MEDIUM: Use up to 7 GB
     * memory and 4 vCPUs for builds</code> </p> </li> <li> <p>
     * <code>BUILD_GENERAL1_LARGE: Use up to 15 GB memory and 8 vCPUs for builds</code>
     * </p> </li> </ul>
     */
    inline void SetComputeType(ComputeType&& value) { m_computeTypeHasBeenSet = true; m_computeType = std::move(value); }

    /**
     * <p>Information about the compute resources the build project will use.</p> <ul>
     * <li> <p> <code>BUILD_GENERAL1_SMALL: Use up to 3 GB memory and 2 vCPUs for
     * builds</code> </p> </li> <li> <p> <code>BUILD_GENERAL1_MEDIUM: Use up to 7 GB
     * memory and 4 vCPUs for builds</code> </p> </li> <li> <p>
     * <code>BUILD_GENERAL1_LARGE: Use up to 15 GB memory and 8 vCPUs for builds</code>
     * </p> </li> </ul>
     */
    inline BuildConfiguration& WithComputeType(const ComputeType& value) { SetComputeType(value); return *this;}

    /**
     * <p>Information about the compute resources the build project will use.</p> <ul>
     * <li> <p> <code>BUILD_GENERAL1_SMALL: Use up to 3 GB memory and 2 vCPUs for
     * builds</code> </p> </li> <li> <p> <code>BUILD_GENERAL1_MEDIUM: Use up to 7 GB
     * memory and 4 vCPUs for builds</code> </p> </li> <li> <p>
     * <code>BUILD_GENERAL1_LARGE: Use up to 15 GB memory and 8 vCPUs for builds</code>
     * </p> </li> </ul>
     */
    inline BuildConfiguration& WithComputeType(ComputeType&& value) { SetComputeType(std::move(value)); return *this;}


    /**
     * <p>The ID of the Docker image to use for this build project.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }

    /**
     * <p>The ID of the Docker image to use for this build project.</p>
     */
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }

    /**
     * <p>The ID of the Docker image to use for this build project.</p>
     */
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The ID of the Docker image to use for this build project.</p>
     */
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p>The ID of the Docker image to use for this build project.</p>
     */
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }

    /**
     * <p>The ID of the Docker image to use for this build project.</p>
     */
    inline BuildConfiguration& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    /**
     * <p>The ID of the Docker image to use for this build project.</p>
     */
    inline BuildConfiguration& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}

    /**
     * <p>The ID of the Docker image to use for this build project.</p>
     */
    inline BuildConfiguration& WithImage(const char* value) { SetImage(value); return *this;}


    /**
     * <p>How long in minutes, from 5 to 480 (8 hours), for AWS CodeBuild to wait until
     * timing out any related build that does not get marked as completed. The default
     * is 60 minutes.</p>
     */
    inline int GetTimeoutInMinutes() const{ return m_timeoutInMinutes; }

    /**
     * <p>How long in minutes, from 5 to 480 (8 hours), for AWS CodeBuild to wait until
     * timing out any related build that does not get marked as completed. The default
     * is 60 minutes.</p>
     */
    inline bool TimeoutInMinutesHasBeenSet() const { return m_timeoutInMinutesHasBeenSet; }

    /**
     * <p>How long in minutes, from 5 to 480 (8 hours), for AWS CodeBuild to wait until
     * timing out any related build that does not get marked as completed. The default
     * is 60 minutes.</p>
     */
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }

    /**
     * <p>How long in minutes, from 5 to 480 (8 hours), for AWS CodeBuild to wait until
     * timing out any related build that does not get marked as completed. The default
     * is 60 minutes.</p>
     */
    inline BuildConfiguration& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}

  private:

    Aws::String m_artifactName;
    bool m_artifactNameHasBeenSet;

    Aws::String m_codeBuildServiceRole;
    bool m_codeBuildServiceRoleHasBeenSet;

    ComputeType m_computeType;
    bool m_computeTypeHasBeenSet;

    Aws::String m_image;
    bool m_imageHasBeenSet;

    int m_timeoutInMinutes;
    bool m_timeoutInMinutesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
