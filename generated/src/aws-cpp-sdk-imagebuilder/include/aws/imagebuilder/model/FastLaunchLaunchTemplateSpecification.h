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
    AWS_IMAGEBUILDER_API FastLaunchLaunchTemplateSpecification();
    AWS_IMAGEBUILDER_API FastLaunchLaunchTemplateSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API FastLaunchLaunchTemplateSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline const Aws::String& GetLaunchTemplateId() const{ return m_launchTemplateId; }
    inline bool LaunchTemplateIdHasBeenSet() const { return m_launchTemplateIdHasBeenSet; }
    inline void SetLaunchTemplateId(const Aws::String& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = value; }
    inline void SetLaunchTemplateId(Aws::String&& value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId = std::move(value); }
    inline void SetLaunchTemplateId(const char* value) { m_launchTemplateIdHasBeenSet = true; m_launchTemplateId.assign(value); }
    inline FastLaunchLaunchTemplateSpecification& WithLaunchTemplateId(const Aws::String& value) { SetLaunchTemplateId(value); return *this;}
    inline FastLaunchLaunchTemplateSpecification& WithLaunchTemplateId(Aws::String&& value) { SetLaunchTemplateId(std::move(value)); return *this;}
    inline FastLaunchLaunchTemplateSpecification& WithLaunchTemplateId(const char* value) { SetLaunchTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline const Aws::String& GetLaunchTemplateName() const{ return m_launchTemplateName; }
    inline bool LaunchTemplateNameHasBeenSet() const { return m_launchTemplateNameHasBeenSet; }
    inline void SetLaunchTemplateName(const Aws::String& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = value; }
    inline void SetLaunchTemplateName(Aws::String&& value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName = std::move(value); }
    inline void SetLaunchTemplateName(const char* value) { m_launchTemplateNameHasBeenSet = true; m_launchTemplateName.assign(value); }
    inline FastLaunchLaunchTemplateSpecification& WithLaunchTemplateName(const Aws::String& value) { SetLaunchTemplateName(value); return *this;}
    inline FastLaunchLaunchTemplateSpecification& WithLaunchTemplateName(Aws::String&& value) { SetLaunchTemplateName(std::move(value)); return *this;}
    inline FastLaunchLaunchTemplateSpecification& WithLaunchTemplateName(const char* value) { SetLaunchTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the launch template to use for faster launching for a Windows
     * AMI.</p>
     */
    inline const Aws::String& GetLaunchTemplateVersion() const{ return m_launchTemplateVersion; }
    inline bool LaunchTemplateVersionHasBeenSet() const { return m_launchTemplateVersionHasBeenSet; }
    inline void SetLaunchTemplateVersion(const Aws::String& value) { m_launchTemplateVersionHasBeenSet = true; m_launchTemplateVersion = value; }
    inline void SetLaunchTemplateVersion(Aws::String&& value) { m_launchTemplateVersionHasBeenSet = true; m_launchTemplateVersion = std::move(value); }
    inline void SetLaunchTemplateVersion(const char* value) { m_launchTemplateVersionHasBeenSet = true; m_launchTemplateVersion.assign(value); }
    inline FastLaunchLaunchTemplateSpecification& WithLaunchTemplateVersion(const Aws::String& value) { SetLaunchTemplateVersion(value); return *this;}
    inline FastLaunchLaunchTemplateSpecification& WithLaunchTemplateVersion(Aws::String&& value) { SetLaunchTemplateVersion(std::move(value)); return *this;}
    inline FastLaunchLaunchTemplateSpecification& WithLaunchTemplateVersion(const char* value) { SetLaunchTemplateVersion(value); return *this;}
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
