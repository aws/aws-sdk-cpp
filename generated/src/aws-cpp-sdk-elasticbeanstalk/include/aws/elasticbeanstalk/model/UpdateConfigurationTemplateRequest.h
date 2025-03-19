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
    AWS_ELASTICBEANSTALK_API UpdateConfigurationTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfigurationTemplate"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the application associated with the configuration template to
     * update.</p> <p> If no application is found with this name,
     * <code>UpdateConfigurationTemplate</code> returns an
     * <code>InvalidParameterValue</code> error. </p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    UpdateConfigurationTemplateRequest& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration template to update.</p> <p> If no configuration
     * template is found with this name, <code>UpdateConfigurationTemplate</code>
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    UpdateConfigurationTemplateRequest& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the configuration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateConfigurationTemplateRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of configuration option settings to update with the new specified
     * option value.</p>
     */
    inline const Aws::Vector<ConfigurationOptionSetting>& GetOptionSettings() const { return m_optionSettings; }
    inline bool OptionSettingsHasBeenSet() const { return m_optionSettingsHasBeenSet; }
    template<typename OptionSettingsT = Aws::Vector<ConfigurationOptionSetting>>
    void SetOptionSettings(OptionSettingsT&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = std::forward<OptionSettingsT>(value); }
    template<typename OptionSettingsT = Aws::Vector<ConfigurationOptionSetting>>
    UpdateConfigurationTemplateRequest& WithOptionSettings(OptionSettingsT&& value) { SetOptionSettings(std::forward<OptionSettingsT>(value)); return *this;}
    template<typename OptionSettingsT = ConfigurationOptionSetting>
    UpdateConfigurationTemplateRequest& AddOptionSettings(OptionSettingsT&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.emplace_back(std::forward<OptionSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of configuration options to remove from the configuration set.</p> <p>
     * Constraint: You can remove only <code>UserDefined</code> configuration options.
     * </p>
     */
    inline const Aws::Vector<OptionSpecification>& GetOptionsToRemove() const { return m_optionsToRemove; }
    inline bool OptionsToRemoveHasBeenSet() const { return m_optionsToRemoveHasBeenSet; }
    template<typename OptionsToRemoveT = Aws::Vector<OptionSpecification>>
    void SetOptionsToRemove(OptionsToRemoveT&& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove = std::forward<OptionsToRemoveT>(value); }
    template<typename OptionsToRemoveT = Aws::Vector<OptionSpecification>>
    UpdateConfigurationTemplateRequest& WithOptionsToRemove(OptionsToRemoveT&& value) { SetOptionsToRemove(std::forward<OptionsToRemoveT>(value)); return *this;}
    template<typename OptionsToRemoveT = OptionSpecification>
    UpdateConfigurationTemplateRequest& AddOptionsToRemove(OptionsToRemoveT&& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove.emplace_back(std::forward<OptionsToRemoveT>(value)); return *this; }
    ///@}
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
