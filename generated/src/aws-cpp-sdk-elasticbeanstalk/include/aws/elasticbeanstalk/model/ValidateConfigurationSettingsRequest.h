/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ValidateConfigurationSettingsRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API ValidateConfigurationSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidateConfigurationSettings"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the application that the configuration template or environment
     * belongs to.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }
    inline ValidateConfigurationSettingsRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline ValidateConfigurationSettingsRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline ValidateConfigurationSettingsRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration template to validate the settings against.</p>
     * <p>Condition: You cannot specify both this and an environment name.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline ValidateConfigurationSettingsRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline ValidateConfigurationSettingsRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline ValidateConfigurationSettingsRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment to validate the settings against.</p>
     * <p>Condition: You cannot specify both this and a configuration template
     * name.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }
    inline ValidateConfigurationSettingsRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}
    inline ValidateConfigurationSettingsRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}
    inline ValidateConfigurationSettingsRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the options and desired values to evaluate.</p>
     */
    inline const Aws::Vector<ConfigurationOptionSetting>& GetOptionSettings() const{ return m_optionSettings; }
    inline bool OptionSettingsHasBeenSet() const { return m_optionSettingsHasBeenSet; }
    inline void SetOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = value; }
    inline void SetOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = std::move(value); }
    inline ValidateConfigurationSettingsRequest& WithOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { SetOptionSettings(value); return *this;}
    inline ValidateConfigurationSettingsRequest& WithOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { SetOptionSettings(std::move(value)); return *this;}
    inline ValidateConfigurationSettingsRequest& AddOptionSettings(const ConfigurationOptionSetting& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(value); return *this; }
    inline ValidateConfigurationSettingsRequest& AddOptionSettings(ConfigurationOptionSetting&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::Vector<ConfigurationOptionSetting> m_optionSettings;
    bool m_optionSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
