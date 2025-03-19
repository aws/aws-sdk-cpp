/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Identifies the launch template that the associated Windows AMI uses for
   * launching an instance when faster launching is enabled.</p>  <p>You can
   * specify either the <code>launchTemplateName</code> or the
   * <code>launchTemplateId</code>, but not both.</p> <p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/FastLaunchLaunchTemplateSpecification">AWS
   * API Reference</a></p>
   */
  class FastLaunchLaunchTemplateSpecification
  {
  public:
    AWS_IMAGEBUILDER_API FastLaunchLaunchTemplateSpecification() = default;
    AWS_IMAGEBUILDER_API FastLaunchLaunchTemplateSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API FastLaunchLaunchTemplateSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const { return m_launchTemplateId; }
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }
    template<typename LaunchTemplateIdT = Aws::String>
    void SetLaunchTemplateId(LaunchTemplateIdT&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::forward<LaunchTemplateIdT>(value); }
    template<typename LaunchTemplateIdT = Aws::String>
    FastLaunchLaunchTemplateSpecification& WithLaunchTemplateId(LaunchTemplateIdT&& value) { SetLaunchTemplateId(std::forward<LaunchTemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const { return m_launchTemplateName; }
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }
    template<typename LaunchTemplateNameT = Aws::String>
    void SetLaunchTemplateName(LaunchTemplateNameT&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::forward<LaunchTemplateNameT>(value); }
    template<typename LaunchTemplateNameT = Aws::String>
    FastLaunchLaunchTemplateSpecification& WithLaunchTemplateName(LaunchTemplateNameT&& value) { SetLaunchTemplateName(std::forward<LaunchTemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline const Aws::String& GetLaunchTemplateVersion() const { return m_launchTemplateVersion; }
    inline bool LaunchTemplateVersionHasBeenSet() const { return m_launchTemplateVersionHasBeenSet; }
    template<typename LaunchTemplateVersionT = Aws::String>
    void SetLaunchTemplateVersion(LaunchTemplateVersionT&& value) { m_launchTemplateVersionHasBeenSet = true; m_launchTemplateVersion = std::forward<LaunchTemplateVersionT>(value); }
    template<typename LaunchTemplateVersionT = Aws::String>
    FastLaunchLaunchTemplateSpecification& WithLaunchTemplateVersion(LaunchTemplateVersionT&& value) { SetLaunchTemplateVersion(std::forward<LaunchTemplateVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_launchTemplateId;
    bool m_launchTemplateIdHasBeenSet = false;

    Aws::String m_launchTemplateName;
    bool m_launchTemplateNameHasBeenSet = false;

    Aws::String m_launchTemplateVersion;
    bool m_launchTemplateVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
