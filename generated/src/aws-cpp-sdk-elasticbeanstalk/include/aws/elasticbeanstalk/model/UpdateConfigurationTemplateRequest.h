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
#include <aws/elasticbeanstalk/model/OptionSpecification.h>
#include <utility>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>The result message containing the options for the specified solution
   * stack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateConfigurationTemplateMessage">AWS
   * API Reference</a></p>
   */
  class UpdateConfigurationTemplateRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API UpdateConfigurationTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfigurationTemplate"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the application associated with the configuration template to
     * update.</p> <p> If no application is found with this name,
     * <code>UpdateConfigurationTemplate</code> returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application associated with the configuration template to
     * update.</p> <p> If no application is found with this name,
     * <code>UpdateConfigurationTemplate</code> returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application associated with the configuration template to
     * update.</p> <p> If no application is found with this name,
     * <code>UpdateConfigurationTemplate</code> returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application associated with the configuration template to
     * update.</p> <p> If no application is found with this name,
     * <code>UpdateConfigurationTemplate</code> returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the application associated with the configuration template to
     * update.</p> <p> If no application is found with this name,
     * <code>UpdateConfigurationTemplate</code> returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application associated with the configuration template to
     * update.</p> <p> If no application is found with this name,
     * <code>UpdateConfigurationTemplate</code> returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline UpdateConfigurationTemplateRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application associated with the configuration template to
     * update.</p> <p> If no application is found with this name,
     * <code>UpdateConfigurationTemplate</code> returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline UpdateConfigurationTemplateRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application associated with the configuration template to
     * update.</p> <p> If no application is found with this name,
     * <code>UpdateConfigurationTemplate</code> returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline UpdateConfigurationTemplateRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The name of the configuration template to update.</p> <p> If no configuration
     * template is found with this name, <code>UpdateConfigurationTemplate</code>
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the configuration template to update.</p> <p> If no configuration
     * template is found with this name, <code>UpdateConfigurationTemplate</code>
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the configuration template to update.</p> <p> If no configuration
     * template is found with this name, <code>UpdateConfigurationTemplate</code>
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the configuration template to update.</p> <p> If no configuration
     * template is found with this name, <code>UpdateConfigurationTemplate</code>
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the configuration template to update.</p> <p> If no configuration
     * template is found with this name, <code>UpdateConfigurationTemplate</code>
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the configuration template to update.</p> <p> If no configuration
     * template is found with this name, <code>UpdateConfigurationTemplate</code>
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline UpdateConfigurationTemplateRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the configuration template to update.</p> <p> If no configuration
     * template is found with this name, <code>UpdateConfigurationTemplate</code>
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline UpdateConfigurationTemplateRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration template to update.</p> <p> If no configuration
     * template is found with this name, <code>UpdateConfigurationTemplate</code>
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline UpdateConfigurationTemplateRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>A new description for the configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A new description for the configuration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A new description for the configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A new description for the configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A new description for the configuration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A new description for the configuration.</p>
     */
    inline UpdateConfigurationTemplateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A new description for the configuration.</p>
     */
    inline UpdateConfigurationTemplateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A new description for the configuration.</p>
     */
    inline UpdateConfigurationTemplateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A list of configuration option settings to update with the new specified
     * option value.</p>
     */
    inline const Aws::Vector<ConfigurationOptionSetting>& GetOptionSettings() const{ return m_optionSettings; }

    /**
     * <p>A list of configuration option settings to update with the new specified
     * option value.</p>
     */
    inline bool OptionSettingsHasBeenSet() const { return m_optionSettingsHasBeenSet; }

    /**
     * <p>A list of configuration option settings to update with the new specified
     * option value.</p>
     */
    inline void SetOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = value; }

    /**
     * <p>A list of configuration option settings to update with the new specified
     * option value.</p>
     */
    inline void SetOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = std::move(value); }

    /**
     * <p>A list of configuration option settings to update with the new specified
     * option value.</p>
     */
    inline UpdateConfigurationTemplateRequest& WithOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { SetOptionSettings(value); return *this;}

    /**
     * <p>A list of configuration option settings to update with the new specified
     * option value.</p>
     */
    inline UpdateConfigurationTemplateRequest& WithOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { SetOptionSettings(std::move(value)); return *this;}

    /**
     * <p>A list of configuration option settings to update with the new specified
     * option value.</p>
     */
    inline UpdateConfigurationTemplateRequest& AddOptionSettings(const ConfigurationOptionSetting& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(value); return *this; }

    /**
     * <p>A list of configuration option settings to update with the new specified
     * option value.</p>
     */
    inline UpdateConfigurationTemplateRequest& AddOptionSettings(ConfigurationOptionSetting&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of configuration options to remove from the configuration set.</p> <p>
     * Constraint: You can remove only <code>UserDefined</code> configuration options.
     * </p>
     */
    inline const Aws::Vector<OptionSpecification>& GetOptionsToRemove() const{ return m_optionsToRemove; }

    /**
     * <p>A list of configuration options to remove from the configuration set.</p> <p>
     * Constraint: You can remove only <code>UserDefined</code> configuration options.
     * </p>
     */
    inline bool OptionsToRemoveHasBeenSet() const { return m_optionsToRemoveHasBeenSet; }

    /**
     * <p>A list of configuration options to remove from the configuration set.</p> <p>
     * Constraint: You can remove only <code>UserDefined</code> configuration options.
     * </p>
     */
    inline void SetOptionsToRemove(const Aws::Vector<OptionSpecification>& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove = value; }

    /**
     * <p>A list of configuration options to remove from the configuration set.</p> <p>
     * Constraint: You can remove only <code>UserDefined</code> configuration options.
     * </p>
     */
    inline void SetOptionsToRemove(Aws::Vector<OptionSpecification>&& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove = std::move(value); }

    /**
     * <p>A list of configuration options to remove from the configuration set.</p> <p>
     * Constraint: You can remove only <code>UserDefined</code> configuration options.
     * </p>
     */
    inline UpdateConfigurationTemplateRequest& WithOptionsToRemove(const Aws::Vector<OptionSpecification>& value) { SetOptionsToRemove(value); return *this;}

    /**
     * <p>A list of configuration options to remove from the configuration set.</p> <p>
     * Constraint: You can remove only <code>UserDefined</code> configuration options.
     * </p>
     */
    inline UpdateConfigurationTemplateRequest& WithOptionsToRemove(Aws::Vector<OptionSpecification>&& value) { SetOptionsToRemove(std::move(value)); return *this;}

    /**
     * <p>A list of configuration options to remove from the configuration set.</p> <p>
     * Constraint: You can remove only <code>UserDefined</code> configuration options.
     * </p>
     */
    inline UpdateConfigurationTemplateRequest& AddOptionsToRemove(const OptionSpecification& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove.push_back(value); return *this; }

    /**
     * <p>A list of configuration options to remove from the configuration set.</p> <p>
     * Constraint: You can remove only <code>UserDefined</code> configuration options.
     * </p>
     */
    inline UpdateConfigurationTemplateRequest& AddOptionsToRemove(OptionSpecification&& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<ConfigurationOptionSetting> m_optionSettings;
    bool m_optionSettingsHasBeenSet = false;

    Aws::Vector<OptionSpecification> m_optionsToRemove;
    bool m_optionsToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
