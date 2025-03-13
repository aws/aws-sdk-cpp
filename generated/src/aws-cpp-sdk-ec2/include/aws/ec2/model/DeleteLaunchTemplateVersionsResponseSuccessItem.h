/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a launch template version that was successfully
   * deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteLaunchTemplateVersionsResponseSuccessItem">AWS
   * API Reference</a></p>
   */
  class DeleteLaunchTemplateVersionsResponseSuccessItem
  {
  public:
    AWS_EC2_API DeleteLaunchTemplateVersionsResponseSuccessItem() = default;
    AWS_EC2_API DeleteLaunchTemplateVersionsResponseSuccessItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DeleteLaunchTemplateVersionsResponseSuccessItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the launch template.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const { return m_launchTemplateId; }
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }
    template<typename LaunchTemplateIdT = Aws::String>
    void SetLaunchTemplateId(LaunchTemplateIdT&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::forward<LaunchTemplateIdT>(value); }
    template<typename LaunchTemplateIdT = Aws::String>
    DeleteLaunchTemplateVersionsResponseSuccessItem& WithLaunchTemplateId(LaunchTemplateIdT&& value) { SetLaunchTemplateId(std::forward<LaunchTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the launch template.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const { return m_launchTemplateName; }
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }
    template<typename LaunchTemplateNameT = Aws::String>
    void SetLaunchTemplateName(LaunchTemplateNameT&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::forward<LaunchTemplateNameT>(value); }
    template<typename LaunchTemplateNameT = Aws::String>
    DeleteLaunchTemplateVersionsResponseSuccessItem& WithLaunchTemplateName(LaunchTemplateNameT&& value) { SetLaunchTemplateName(std::forward<LaunchTemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the launch template.</p>
     */
    inline long long GetVersionNumber() const { return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline DeleteLaunchTemplateVersionsResponseSuccessItem& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet = false;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet = false;

    long long m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
