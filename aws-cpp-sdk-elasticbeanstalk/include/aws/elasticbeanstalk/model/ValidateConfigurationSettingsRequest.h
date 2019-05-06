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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ConfigurationOptionSetting.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>A list of validation messages for a specified configuration
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ValidateConfigurationSettingsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API ValidateConfigurationSettingsRequest : public ElasticBeanstalkRequest
  {
  public:
    ValidateConfigurationSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidateConfigurationSettings"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the application that the configuration template or environment
     * belongs to.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application that the configuration template or environment
     * belongs to.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application that the configuration template or environment
     * belongs to.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application that the configuration template or environment
     * belongs to.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the application that the configuration template or environment
     * belongs to.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application that the configuration template or environment
     * belongs to.</p>
     */
    inline ValidateConfigurationSettingsRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application that the configuration template or environment
     * belongs to.</p>
     */
    inline ValidateConfigurationSettingsRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application that the configuration template or environment
     * belongs to.</p>
     */
    inline ValidateConfigurationSettingsRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The name of the configuration template to validate the settings against.</p>
     * <p>Condition: You cannot specify both this and an environment name.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the configuration template to validate the settings against.</p>
     * <p>Condition: You cannot specify both this and an environment name.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the configuration template to validate the settings against.</p>
     * <p>Condition: You cannot specify both this and an environment name.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the configuration template to validate the settings against.</p>
     * <p>Condition: You cannot specify both this and an environment name.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the configuration template to validate the settings against.</p>
     * <p>Condition: You cannot specify both this and an environment name.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the configuration template to validate the settings against.</p>
     * <p>Condition: You cannot specify both this and an environment name.</p>
     */
    inline ValidateConfigurationSettingsRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the configuration template to validate the settings against.</p>
     * <p>Condition: You cannot specify both this and an environment name.</p>
     */
    inline ValidateConfigurationSettingsRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration template to validate the settings against.</p>
     * <p>Condition: You cannot specify both this and an environment name.</p>
     */
    inline ValidateConfigurationSettingsRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The name of the environment to validate the settings against.</p>
     * <p>Condition: You cannot specify both this and a configuration template
     * name.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of the environment to validate the settings against.</p>
     * <p>Condition: You cannot specify both this and a configuration template
     * name.</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>The name of the environment to validate the settings against.</p>
     * <p>Condition: You cannot specify both this and a configuration template
     * name.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the environment to validate the settings against.</p>
     * <p>Condition: You cannot specify both this and a configuration template
     * name.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>The name of the environment to validate the settings against.</p>
     * <p>Condition: You cannot specify both this and a configuration template
     * name.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of the environment to validate the settings against.</p>
     * <p>Condition: You cannot specify both this and a configuration template
     * name.</p>
     */
    inline ValidateConfigurationSettingsRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the environment to validate the settings against.</p>
     * <p>Condition: You cannot specify both this and a configuration template
     * name.</p>
     */
    inline ValidateConfigurationSettingsRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment to validate the settings against.</p>
     * <p>Condition: You cannot specify both this and a configuration template
     * name.</p>
     */
    inline ValidateConfigurationSettingsRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p>A list of the options and desired values to evaluate.</p>
     */
    inline const Aws::Vector<ConfigurationOptionSetting>& GetOptionSettings() const{ return m_optionSettings; }

    /**
     * <p>A list of the options and desired values to evaluate.</p>
     */
    inline bool OptionSettingsHasBeenSet() const { return m_optionSettingsHasBeenSet; }

    /**
     * <p>A list of the options and desired values to evaluate.</p>
     */
    inline void SetOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = value; }

    /**
     * <p>A list of the options and desired values to evaluate.</p>
     */
    inline void SetOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = std::move(value); }

    /**
     * <p>A list of the options and desired values to evaluate.</p>
     */
    inline ValidateConfigurationSettingsRequest& WithOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { SetOptionSettings(value); return *this;}

    /**
     * <p>A list of the options and desired values to evaluate.</p>
     */
    inline ValidateConfigurationSettingsRequest& WithOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { SetOptionSettings(std::move(value)); return *this;}

    /**
     * <p>A list of the options and desired values to evaluate.</p>
     */
    inline ValidateConfigurationSettingsRequest& AddOptionSettings(const ConfigurationOptionSetting& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(value); return *this; }

    /**
     * <p>A list of the options and desired values to evaluate.</p>
     */
    inline ValidateConfigurationSettingsRequest& AddOptionSettings(ConfigurationOptionSetting&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet;

    Aws::Vector<ConfigurationOptionSetting> m_optionSettings;
    bool m_optionSettingsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
