/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/S3Location.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ConfigurationOptionSetting.h>
#include <aws/elasticbeanstalk/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Request to create a new platform version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreatePlatformVersionRequest">AWS
   * API Reference</a></p>
   */
  class CreatePlatformVersionRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API CreatePlatformVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePlatformVersion"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of your custom platform.</p>
     */
    inline const Aws::String& GetPlatformName() const { return m_platformName; }
    inline bool PlatformNameHasBeenSet() const { return m_platformNameHasBeenSet; }
    template<typename PlatformNameT = Aws::String>
    void SetPlatformName(PlatformNameT&& value) { m_platformNameHasBeenSet = true; m_platformName = std::forward<PlatformNameT>(value); }
    template<typename PlatformNameT = Aws::String>
    CreatePlatformVersionRequest& WithPlatformName(PlatformNameT&& value) { SetPlatformName(std::forward<PlatformNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number, such as 1.0.2, for the new platform version.</p>
     */
    inline const Aws::String& GetPlatformVersion() const { return m_platformVersion; }
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }
    template<typename PlatformVersionT = Aws::String>
    void SetPlatformVersion(PlatformVersionT&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::forward<PlatformVersionT>(value); }
    template<typename PlatformVersionT = Aws::String>
    CreatePlatformVersionRequest& WithPlatformVersion(PlatformVersionT&& value) { SetPlatformVersion(std::forward<PlatformVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the platform definition archive in Amazon S3.</p>
     */
    inline const S3Location& GetPlatformDefinitionBundle() const { return m_platformDefinitionBundle; }
    inline bool PlatformDefinitionBundleHasBeenSet() const { return m_platformDefinitionBundleHasBeenSet; }
    template<typename PlatformDefinitionBundleT = S3Location>
    void SetPlatformDefinitionBundle(PlatformDefinitionBundleT&& value) { m_platformDefinitionBundleHasBeenSet = true; m_platformDefinitionBundle = std::forward<PlatformDefinitionBundleT>(value); }
    template<typename PlatformDefinitionBundleT = S3Location>
    CreatePlatformVersionRequest& WithPlatformDefinitionBundle(PlatformDefinitionBundleT&& value) { SetPlatformDefinitionBundle(std::forward<PlatformDefinitionBundleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the builder environment.</p>
     */
    inline const Aws::String& GetEnvironmentName() const { return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    template<typename EnvironmentNameT = Aws::String>
    void SetEnvironmentName(EnvironmentNameT&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::forward<EnvironmentNameT>(value); }
    template<typename EnvironmentNameT = Aws::String>
    CreatePlatformVersionRequest& WithEnvironmentName(EnvironmentNameT&& value) { SetEnvironmentName(std::forward<EnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration option settings to apply to the builder environment.</p>
     */
    inline const Aws::Vector<ConfigurationOptionSetting>& GetOptionSettings() const { return m_optionSettings; }
    inline bool OptionSettingsHasBeenSet() const { return m_optionSettingsHasBeenSet; }
    template<typename OptionSettingsT = Aws::Vector<ConfigurationOptionSetting>>
    void SetOptionSettings(OptionSettingsT&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = std::forward<OptionSettingsT>(value); }
    template<typename OptionSettingsT = Aws::Vector<ConfigurationOptionSetting>>
    CreatePlatformVersionRequest& WithOptionSettings(OptionSettingsT&& value) { SetOptionSettings(std::forward<OptionSettingsT>(value)); return *this;}
    template<typename OptionSettingsT = ConfigurationOptionSetting>
    CreatePlatformVersionRequest& AddOptionSettings(OptionSettingsT&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.emplace_back(std::forward<OptionSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the tags applied to the new platform version.</p> <p>Elastic
     * Beanstalk applies these tags only to the platform version. Environments that you
     * create using the platform version don't inherit the tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreatePlatformVersionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreatePlatformVersionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_platformName;
    bool m_platformNameHasBeenSet = false;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet = false;

    S3Location m_platformDefinitionBundle;
    bool m_platformDefinitionBundleHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::Vector<ConfigurationOptionSetting> m_optionSettings;
    bool m_optionSettingsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
