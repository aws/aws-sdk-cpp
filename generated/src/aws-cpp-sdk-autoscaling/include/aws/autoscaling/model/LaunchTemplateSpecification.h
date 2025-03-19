/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes the launch template and the version of the launch template that
   * Amazon EC2 Auto Scaling uses to launch Amazon EC2 instances. For more
   * information about launch templates, see <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/launch-templates.html">Launch
   * templates</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/LaunchTemplateSpecification">AWS
   * API Reference</a></p>
   */
  class LaunchTemplateSpecification
  {
  public:
    AWS_AUTOSCALING_API LaunchTemplateSpecification() = default;
    AWS_AUTOSCALING_API LaunchTemplateSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API LaunchTemplateSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the launch template. To get the template ID, use the Amazon EC2 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeLaunchTemplates.html">DescribeLaunchTemplates</a>
     * API operation. New launch templates can be created using the Amazon EC2 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateLaunchTemplate.html">CreateLaunchTemplate</a>
     * API. </p> <p>Conditional: You must specify either a
     * <code>LaunchTemplateId</code> or a <code>LaunchTemplateName</code>.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const { return m_launchTemplateId; }
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }
    template<typename LaunchTemplateIdT = Aws::String>
    void SetLaunchTemplateId(LaunchTemplateIdT&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::forward<LaunchTemplateIdT>(value); }
    template<typename LaunchTemplateIdT = Aws::String>
    LaunchTemplateSpecification& WithLaunchTemplateId(LaunchTemplateIdT&& value) { SetLaunchTemplateId(std::forward<LaunchTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the launch template. To get the template name, use the Amazon EC2
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeLaunchTemplates.html">DescribeLaunchTemplates</a>
     * API operation. New launch templates can be created using the Amazon EC2 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateLaunchTemplate.html">CreateLaunchTemplate</a>
     * API. </p> <p>Conditional: You must specify either a
     * <code>LaunchTemplateId</code> or a <code>LaunchTemplateName</code>.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const { return m_launchTemplateName; }
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }
    template<typename LaunchTemplateNameT = Aws::String>
    void SetLaunchTemplateName(LaunchTemplateNameT&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::forward<LaunchTemplateNameT>(value); }
    template<typename LaunchTemplateNameT = Aws::String>
    LaunchTemplateSpecification& WithLaunchTemplateName(LaunchTemplateNameT&& value) { SetLaunchTemplateName(std::forward<LaunchTemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number, <code>$Latest</code>, or <code>$Default</code>. To get
     * the version number, use the Amazon EC2 <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeLaunchTemplateVersions.html">DescribeLaunchTemplateVersions</a>
     * API operation. New launch template versions can be created using the Amazon EC2
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CreateLaunchTemplateVersion.html">CreateLaunchTemplateVersion</a>
     * API. If the value is <code>$Latest</code>, Amazon EC2 Auto Scaling selects the
     * latest version of the launch template when launching instances. If the value is
     * <code>$Default</code>, Amazon EC2 Auto Scaling selects the default version of
     * the launch template when launching instances. The default value is
     * <code>$Default</code>.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    LaunchTemplateSpecification& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet = false;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
