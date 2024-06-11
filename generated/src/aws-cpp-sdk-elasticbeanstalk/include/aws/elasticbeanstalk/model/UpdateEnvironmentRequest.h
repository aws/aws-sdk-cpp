/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/ElasticBeanstalkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/EnvironmentTier.h>
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
   * <p>Request to update an environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/UpdateEnvironmentMessage">AWS
   * API Reference</a></p>
   */
  class UpdateEnvironmentRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API UpdateEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEnvironment"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the application with which the environment is associated.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }
    inline UpdateEnvironmentRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline UpdateEnvironmentRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment to update.</p> <p>If no environment with this ID
     * exists, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error.</p> <p>Condition: You must specify either this or an EnvironmentName, or
     * both. If you do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline UpdateEnvironmentRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline UpdateEnvironmentRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment to update. If no environment with this name
     * exists, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error. </p> <p>Condition: You must specify either this or an EnvironmentId, or
     * both. If you do not specify either, AWS Elastic Beanstalk returns
     * <code>MissingRequiredParameter</code> error. </p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }
    inline UpdateEnvironmentRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}
    inline UpdateEnvironmentRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the group to which the target environment belongs. Specify a
     * group name only if the environment's name is specified in an environment
     * manifest and not with the environment name or environment ID parameters. See <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline UpdateEnvironmentRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline UpdateEnvironmentRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk updates the description
     * of this environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateEnvironmentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateEnvironmentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This specifies the tier to use to update the environment.</p> <p>Condition:
     * At this time, if you change the tier version, name, or type, AWS Elastic
     * Beanstalk returns <code>InvalidParameterValue</code> error. </p>
     */
    inline const EnvironmentTier& GetTier() const{ return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    inline void SetTier(const EnvironmentTier& value) { m_tierHasBeenSet = true; m_tier = value; }
    inline void SetTier(EnvironmentTier&& value) { m_tierHasBeenSet = true; m_tier = std::move(value); }
    inline UpdateEnvironmentRequest& WithTier(const EnvironmentTier& value) { SetTier(value); return *this;}
    inline UpdateEnvironmentRequest& WithTier(EnvironmentTier&& value) { SetTier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk deploys the named
     * application version to the environment. If no such application version is found,
     * returns an <code>InvalidParameterValue</code> error. </p>
     */
    inline const Aws::String& GetVersionLabel() const{ return m_versionLabel; }
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }
    inline void SetVersionLabel(const Aws::String& value) { m_versionLabelHasBeenSet = true; m_versionLabel = value; }
    inline void SetVersionLabel(Aws::String&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::move(value); }
    inline void SetVersionLabel(const char* value) { m_versionLabelHasBeenSet = true; m_versionLabel.assign(value); }
    inline UpdateEnvironmentRequest& WithVersionLabel(const Aws::String& value) { SetVersionLabel(value); return *this;}
    inline UpdateEnvironmentRequest& WithVersionLabel(Aws::String&& value) { SetVersionLabel(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithVersionLabel(const char* value) { SetVersionLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this parameter is specified, AWS Elastic Beanstalk deploys this
     * configuration template to the environment. If no such configuration template is
     * found, AWS Elastic Beanstalk returns an <code>InvalidParameterValue</code>
     * error. </p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline UpdateEnvironmentRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline UpdateEnvironmentRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This specifies the platform version that the environment will run after the
     * environment is updated.</p>
     */
    inline const Aws::String& GetSolutionStackName() const{ return m_solutionStackName; }
    inline bool SolutionStackNameHasBeenSet() const { return m_solutionStackNameHasBeenSet; }
    inline void SetSolutionStackName(const Aws::String& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = value; }
    inline void SetSolutionStackName(Aws::String&& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = std::move(value); }
    inline void SetSolutionStackName(const char* value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName.assign(value); }
    inline UpdateEnvironmentRequest& WithSolutionStackName(const Aws::String& value) { SetSolutionStackName(value); return *this;}
    inline UpdateEnvironmentRequest& WithSolutionStackName(Aws::String&& value) { SetSolutionStackName(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithSolutionStackName(const char* value) { SetSolutionStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the platform, if used.</p>
     */
    inline const Aws::String& GetPlatformArn() const{ return m_platformArn; }
    inline bool PlatformArnHasBeenSet() const { return m_platformArnHasBeenSet; }
    inline void SetPlatformArn(const Aws::String& value) { m_platformArnHasBeenSet = true; m_platformArn = value; }
    inline void SetPlatformArn(Aws::String&& value) { m_platformArnHasBeenSet = true; m_platformArn = std::move(value); }
    inline void SetPlatformArn(const char* value) { m_platformArnHasBeenSet = true; m_platformArn.assign(value); }
    inline UpdateEnvironmentRequest& WithPlatformArn(const Aws::String& value) { SetPlatformArn(value); return *this;}
    inline UpdateEnvironmentRequest& WithPlatformArn(Aws::String&& value) { SetPlatformArn(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& WithPlatformArn(const char* value) { SetPlatformArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, AWS Elastic Beanstalk updates the configuration set associated
     * with the running environment and sets the specified configuration options to the
     * requested value.</p>
     */
    inline const Aws::Vector<ConfigurationOptionSetting>& GetOptionSettings() const{ return m_optionSettings; }
    inline bool OptionSettingsHasBeenSet() const { return m_optionSettingsHasBeenSet; }
    inline void SetOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = value; }
    inline void SetOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = std::move(value); }
    inline UpdateEnvironmentRequest& WithOptionSettings(const Aws::Vector<ConfigurationOptionSetting>& value) { SetOptionSettings(value); return *this;}
    inline UpdateEnvironmentRequest& WithOptionSettings(Aws::Vector<ConfigurationOptionSetting>&& value) { SetOptionSettings(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& AddOptionSettings(const ConfigurationOptionSetting& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(value); return *this; }
    inline UpdateEnvironmentRequest& AddOptionSettings(ConfigurationOptionSetting&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of custom user-defined configuration options to remove from the
     * configuration set for this environment.</p>
     */
    inline const Aws::Vector<OptionSpecification>& GetOptionsToRemove() const{ return m_optionsToRemove; }
    inline bool OptionsToRemoveHasBeenSet() const { return m_optionsToRemoveHasBeenSet; }
    inline void SetOptionsToRemove(const Aws::Vector<OptionSpecification>& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove = value; }
    inline void SetOptionsToRemove(Aws::Vector<OptionSpecification>&& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove = std::move(value); }
    inline UpdateEnvironmentRequest& WithOptionsToRemove(const Aws::Vector<OptionSpecification>& value) { SetOptionsToRemove(value); return *this;}
    inline UpdateEnvironmentRequest& WithOptionsToRemove(Aws::Vector<OptionSpecification>&& value) { SetOptionsToRemove(std::move(value)); return *this;}
    inline UpdateEnvironmentRequest& AddOptionsToRemove(const OptionSpecification& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove.push_back(value); return *this; }
    inline UpdateEnvironmentRequest& AddOptionsToRemove(OptionSpecification&& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EnvironmentTier m_tier;
    bool m_tierHasBeenSet = false;

    Aws::String m_versionLabel;
    bool m_versionLabelHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_solutionStackName;
    bool m_solutionStackNameHasBeenSet = false;

    Aws::String m_platformArn;
    bool m_platformArnHasBeenSet = false;

    Aws::Vector<ConfigurationOptionSetting> m_optionSettings;
    bool m_optionSettingsHasBeenSet = false;

    Aws::Vector<OptionSpecification> m_optionsToRemove;
    bool m_optionsToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
