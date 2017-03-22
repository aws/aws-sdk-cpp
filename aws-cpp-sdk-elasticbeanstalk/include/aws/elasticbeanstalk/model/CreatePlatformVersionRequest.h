/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
    inline void SetPlatformName(const Aws::String& value) { m_platformNameHasBeenSet = true; m_platformName = value; }

    /**
     * <p>The name of your custom platform.</p>
     */
    inline void SetPlatformName(Aws::String&& value) { m_platformNameHasBeenSet = true; m_platformName = value; }

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
    inline CreatePlatformVersionRequest& WithPlatformName(Aws::String&& value) { SetPlatformName(value); return *this;}

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
    inline void SetPlatformVersion(const Aws::String& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }

    /**
     * <p>The number, such as 1.0.2, for the new platform version.</p>
     */
    inline void SetPlatformVersion(Aws::String&& value) { m_platformVersionHasBeenSet = true; m_platformVersion = value; }

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
    inline CreatePlatformVersionRequest& WithPlatformVersion(Aws::String&& value) { SetPlatformVersion(value); return *this;}

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
    inline void SetPlatformDefinitionBundle(const S3Location& value) { m_platformDefinitionBundleHasBeenSet = true; m_platformDefinitionBundle = value; }

    /**
     * <p>The location of the platform definition archive in Amazon S3.</p>
     */
    inline void SetPlatformDefinitionBundle(S3Location&& value) { m_platformDefinitionBundleHasBeenSet = true; m_platformDefinitionBundle = value; }

    /**
     * <p>The location of the platform definition archive in Amazon S3.</p>
     */
    inline CreatePlatformVersionRequest& WithPlatformDefinitionBundle(const S3Location& value) { SetPlatformDefinitionBundle(value); return *this;}

    /**
     * <p>The location of the platform definition archive in Amazon S3.</p>
     */
    inline CreatePlatformVersionRequest& WithPlatformDefinitionBundle(S3Location&& value) { SetPlatformDefinitionBundle(value); return *this;}

    /**
     * <p>The name of the builder environment.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of the builder environment.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the builder environment.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

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
    inline CreatePlatformVersionRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(value); return *this;}

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
    inline void SetOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = value; }

    /**
     * <p>The configuration option settings to apply to the builder environment.</p>
     */
    inline void SetOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = value; }

    /**
     * <p>The configuration option settings to apply to the builder environment.</p>
     */
    inline CreatePlatformVersionRequest& WithOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { SetOptionSettings(value); return *this;}

    /**
     * <p>The configuration option settings to apply to the builder environment.</p>
     */
    inline CreatePlatformVersionRequest& WithOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { SetOptionSettings(value); return *this;}

    /**
     * <p>The configuration option settings to apply to the builder environment.</p>
     */
    inline CreatePlatformVersionRequest& AddOptionSettings(const ConfigurationOptionSetting& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(value); return *this; }

    /**
     * <p>The configuration option settings to apply to the builder environment.</p>
     */
    inline CreatePlatformVersionRequest& AddOptionSettings(ConfigurationOptionSetting&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(value); return *this; }

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
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
