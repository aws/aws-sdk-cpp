/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BuildConfiguration
  {
  public:
    AWS_ELASTICBEANSTALK_API BuildConfiguration() = default;
    AWS_ELASTICBEANSTALK_API BuildConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API BuildConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the artifact of the CodeBuild build. If provided, Elastic
     * Beanstalk stores the build artifact in the S3 location
     * <i>S3-bucket</i>/resources/<i>application-name</i>/codebuild/codebuild-<i>version-label</i>-<i>artifact-name</i>.zip.
     * If not provided, Elastic Beanstalk stores the build artifact in the S3 location
     * <i>S3-bucket</i>/resources/<i>application-name</i>/codebuild/codebuild-<i>version-label</i>.zip.
     * </p>
     */
    inline const Aws::String& GetArtifactName() const { return m_artifactName; }
    inline bool ArtifactNameHasBeenSet() const { return m_artifactNameHasBeenSet; }
    template<typename ArtifactNameT = Aws::String>
    void SetArtifactName(ArtifactNameT&& value) { m_artifactNameHasBeenSet = true; m_artifactName = std::forward<ArtifactNameT>(value); }
    template<typename ArtifactNameT = Aws::String>
    BuildConfiguration& WithArtifactName(ArtifactNameT&& value) { SetArtifactName(std::forward<ArtifactNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that enables AWS CodeBuild to interact with dependent AWS services on
     * behalf of the AWS account.</p>
     */
    inline const Aws::String& GetCodeBuildServiceRole() const { return m_codeBuildServiceRole; }
    inline bool CodeBuildServiceRoleHasBeenSet() const { return m_codeBuildServiceRoleHasBeenSet; }
    template<typename CodeBuildServiceRoleT = Aws::String>
    void SetCodeBuildServiceRole(CodeBuildServiceRoleT&& value) { m_codeBuildServiceRoleHasBeenSet = true; m_codeBuildServiceRole = std::forward<CodeBuildServiceRoleT>(value); }
    template<typename CodeBuildServiceRoleT = Aws::String>
    BuildConfiguration& WithCodeBuildServiceRole(CodeBuildServiceRoleT&& value) { SetCodeBuildServiceRole(std::forward<CodeBuildServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the compute resources the build project will use.</p> <ul>
     * <li> <p> <code>BUILD_GENERAL1_SMALL: Use up to 3 GB memory and 2 vCPUs for
     * builds</code> </p> </li> <li> <p> <code>BUILD_GENERAL1_MEDIUM: Use up to 7 GB
     * memory and 4 vCPUs for builds</code> </p> </li> <li> <p>
     * <code>BUILD_GENERAL1_LARGE: Use up to 15 GB memory and 8 vCPUs for builds</code>
     * </p> </li> </ul>
     */
    inline ComputeType GetComputeType() const { return m_computeType; }
    inline bool ComputeTypeHasBeenSet() const { return m_computeTypeHasBeenSet; }
    inline void SetComputeType(ComputeType value) { m_computeTypeHasBeenSet = true; m_computeType = value; }
    inline BuildConfiguration& WithComputeType(ComputeType value) { SetComputeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Docker image to use for this build project.</p>
     */
    inline const Aws::String& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Aws::String>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Aws::String>
    BuildConfiguration& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long in minutes, from 5 to 480 (8 hours), for AWS CodeBuild to wait until
     * timing out any related build that does not get marked as completed. The default
     * is 60 minutes.</p>
     */
    inline int GetTimeoutInMinutes() const { return m_timeoutInMinutes; }
    inline bool TimeoutInMinutesHasBeenSet() const { return m_timeoutInMinutesHasBeenSet; }
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }
    inline BuildConfiguration& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}
    ///@}
  private:

    Aws::String m_artifactName;
    bool m_artifactNameHasBeenSet = false;

    Aws::String m_codeBuildServiceRole;
    bool m_codeBuildServiceRoleHasBeenSet = false;

    ComputeType m_computeType{ComputeType::NOT_SET};
    bool m_computeTypeHasBeenSet = false;

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    int m_timeoutInMinutes{0};
    bool m_timeoutInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
