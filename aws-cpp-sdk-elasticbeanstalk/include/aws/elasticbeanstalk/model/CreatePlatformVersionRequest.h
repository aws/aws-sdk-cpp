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
  class AWS_ELASTICBEANSTALK_API CreatePlatformVersionRequest : public ElasticBeanstalkRequest
  {
  public:
    CreatePlatformVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePlatformVersion"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of your custom platform.</p>
     */
    inline const Aws::String& GetPlatformName() const{ return m_platformName; }

    /**
     * <p>The name of your custom platform.</p>
     */
    inline bool PlatformNameHasBeenSet() const { return m_platformNameHasBeenSet; }

    /**
     * <p>The name of your custom platform.</p>
     */
    inline void SetPlatformName(const Aws::String& value) { m_platformNameHasBeenSet = true; m_platformName = value; }

    /**
     * <p>The name of your custom platform.</p>
     */
    inline void SetPlatformName(Aws::String&& value) { m_platformNameHasBeenSet = true; m_platformName = std::move(value); }

    /**
     * <p>The name of your custom platform.</p>
     */
    inline void SetPlatformName(const char* value) { m_platformNameHasBeenSet = true; m_platformName.assign(value); }

    /**
     * <p>The name of your custom platform.</p>
     */
    inline CreatePlatformVersionRequest& WithPlatformName(const Aws::String& value) { SetPlatformName(value); return *this;}

    /**
     * <p>The name of your custom platform.</p>
     */
    inline CreatePlatformVersionRequest& WithPlatformName(Aws::String&& value) { SetPlatformName(std::move(value)); return *this;}

    /**
     * <p>The name of your custom platform.</p>
     */
    inline CreatePlatformVersionRequest& WithPlatformName(const char* value) { SetPlatformName(value); return *this;}


    /**
     * <p>The number, such as 1.0.2, for the new platform version.</p>
     */
    inline const Aws::String& GetPlatformVersion() const{ return m_platformVersion; }

    /**
     * <p>The number, such as 1.0.2, for the new platform version.</p>
     */
    inline bool PlatformVersionHasBeenSet() const { return m_platformVersionHasBeenSet; }

    /**
     * <p>The number, such as 1.0.2, for the new platform version.</p>
     */
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }

    /**
     * <p>The number, such as 1.0.2, for the new platform version.</p>
     */
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = std::move(value); }

    /**
     * <p>The number, such as 1.0.2, for the new platform version.</p>
     */
    inline void SetPlatformVersion(const char* value) { m_platformVersionHasBeenSet = true; m_platformVersion.assign(value); }

    /**
     * <p>The number, such as 1.0.2, for the new platform version.</p>
     */
    inline CreatePlatformVersionRequest& WithPlatformVersion(const Aws::String& value) { SetPlatformVersion(value); return *this;}

    /**
     * <p>The number, such as 1.0.2, for the new platform version.</p>
     */
    inline CreatePlatformVersionRequest& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(std::move(value)); return *this;}

    /**
     * <p>The number, such as 1.0.2, for the new platform version.</p>
     */
    inline CreatePlatformVersionRequest& WithPlatformVersion(const char* value) { SetPlatformVersion(value); return *this;}


    /**
     * <p>The location of the platform definition archive in Amazon S3.</p>
     */
    inline const S3Location& GetPlatformDefinitionBundle() const{ return m_platformDefinitionBundle; }

    /**
     * <p>The location of the platform definition archive in Amazon S3.</p>
     */
    inline bool PlatformDefinitionBundleHasBeenSet() const { return m_platformDefinitionBundleHasBeenSet; }

    /**
     * <p>The location of the platform definition archive in Amazon S3.</p>
     */
    inline void SetPlatformDefinitionBundle(const S3Location& value) { m_platformDefinitionBundleHasBeenSet = true; m_platformDefinitionBundle = value; }

    /**
     * <p>The location of the platform definition archive in Amazon S3.</p>
     */
    inline void SetPlatformDefinitionBundle(S3Location&& value) { m_platformDefinitionBundleHasBeenSet = true; m_platformDefinitionBundle = std::move(value); }

    /**
     * <p>The location of the platform definition archive in Amazon S3.</p>
     */
    inline CreatePlatformVersionRequest& WithPlatformDefinitionBundle(const S3Location& value) { SetPlatformDefinitionBundle(value); return *this;}

    /**
     * <p>The location of the platform definition archive in Amazon S3.</p>
     */
    inline CreatePlatformVersionRequest& WithPlatformDefinitionBundle(S3Location&& value) { SetPlatformDefinitionBundle(std::move(value)); return *this;}


    /**
     * <p>The name of the builder environment.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of the builder environment.</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>The name of the builder environment.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the builder environment.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>The name of the builder environment.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of the builder environment.</p>
     */
    inline CreatePlatformVersionRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the builder environment.</p>
     */
    inline CreatePlatformVersionRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the builder environment.</p>
     */
    inline CreatePlatformVersionRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p>The configuration option settings to apply to the builder environment.</p>
     */
    inline const Aws::Vector<ConfigurationOptionSetting>& GetOptionSettings() const{ return m_optionSettings; }

    /**
     * <p>The configuration option settings to apply to the builder environment.</p>
     */
    inline bool OptionSettingsHasBeenSet() const { return m_optionSettingsHasBeenSet; }

    /**
     * <p>The configuration option settings to apply to the builder environment.</p>
     */
    inline void SetOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = value; }

    /**
     * <p>The configuration option settings to apply to the builder environment.</p>
     */
    inline void SetOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = std::move(value); }

    /**
     * <p>The configuration option settings to apply to the builder environment.</p>
     */
    inline CreatePlatformVersionRequest& WithOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { SetOptionSettings(value); return *this;}

    /**
     * <p>The configuration option settings to apply to the builder environment.</p>
     */
    inline CreatePlatformVersionRequest& WithOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { SetOptionSettings(std::move(value)); return *this;}

    /**
     * <p>The configuration option settings to apply to the builder environment.</p>
     */
    inline CreatePlatformVersionRequest& AddOptionSettings(const ConfigurationOptionSetting& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(value); return *this; }

    /**
     * <p>The configuration option settings to apply to the builder environment.</p>
     */
    inline CreatePlatformVersionRequest& AddOptionSettings(ConfigurationOptionSetting&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the tags applied to the new platform version.</p> <p>Elastic
     * Beanstalk applies these tags only to the platform version. Environments that you
     * create using the platform version don't inherit the tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies the tags applied to the new platform version.</p> <p>Elastic
     * Beanstalk applies these tags only to the platform version. Environments that you
     * create using the platform version don't inherit the tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies the tags applied to the new platform version.</p> <p>Elastic
     * Beanstalk applies these tags only to the platform version. Environments that you
     * create using the platform version don't inherit the tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies the tags applied to the new platform version.</p> <p>Elastic
     * Beanstalk applies these tags only to the platform version. Environments that you
     * create using the platform version don't inherit the tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies the tags applied to the new platform version.</p> <p>Elastic
     * Beanstalk applies these tags only to the platform version. Environments that you
     * create using the platform version don't inherit the tags.</p>
     */
    inline CreatePlatformVersionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies the tags applied to the new platform version.</p> <p>Elastic
     * Beanstalk applies these tags only to the platform version. Environments that you
     * create using the platform version don't inherit the tags.</p>
     */
    inline CreatePlatformVersionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies the tags applied to the new platform version.</p> <p>Elastic
     * Beanstalk applies these tags only to the platform version. Environments that you
     * create using the platform version don't inherit the tags.</p>
     */
    inline CreatePlatformVersionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies the tags applied to the new platform version.</p> <p>Elastic
     * Beanstalk applies these tags only to the platform version. Environments that you
     * create using the platform version don't inherit the tags.</p>
     */
    inline CreatePlatformVersionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_platformName;
    bool m_platformNameHasBeenSet;

    Aws::String m_platformVersion;
    bool m_platformVersionHasBeenSet;

    S3Location m_platformDefinitionBundle;
    bool m_platformDefinitionBundleHasBeenSet;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet;

    Aws::Vector<ConfigurationOptionSetting> m_optionSettings;
    bool m_optionSettingsHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
