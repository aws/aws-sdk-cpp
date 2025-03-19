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
#include <aws/elasticbeanstalk/model/Tag.h>
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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateEnvironmentMessage">AWS
   * API Reference</a></p>
   */
  class CreateEnvironmentRequest : public ElasticBeanstalkRequest
  {
  public:
    AWS_ELASTICBEANSTALK_API CreateEnvironmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironment"; }

    AWS_ELASTICBEANSTALK_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICBEANSTALK_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the application that is associated with this environment.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    CreateEnvironmentRequest& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique name for the environment.</p> <p>Constraint: Must be from 4 to 40
     * characters in length. The name can contain only letters, numbers, and hyphens.
     * It can't start or end with a hyphen. This name must be unique within a region in
     * your account. If the specified name already exists in the region, Elastic
     * Beanstalk returns an <code>InvalidParameterValue</code> error. </p> <p>If you
     * don't specify the <code>CNAMEPrefix</code> parameter, the environment name
     * becomes part of the CNAME, and therefore part of the visible URL for your
     * application.</p>
     */
    inline const Aws::String& GetEnvironmentName() const { return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    template<typename EnvironmentNameT = Aws::String>
    void SetEnvironmentName(EnvironmentNameT&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::forward<EnvironmentNameT>(value); }
    template<typename EnvironmentNameT = Aws::String>
    CreateEnvironmentRequest& WithEnvironmentName(EnvironmentNameT&& value) { SetEnvironmentName(std::forward<EnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the group to which the target environment belongs. Specify a
     * group name only if the environment's name is specified in an environment
     * manifest and not with the environment name parameter. See <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/environment-cfg-manifest.html">Environment
     * Manifest (env.yaml)</a> for details.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    CreateEnvironmentRequest& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your description for this environment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateEnvironmentRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, the environment attempts to use this value as the prefix for
     * the CNAME in your Elastic Beanstalk environment URL. If not specified, the CNAME
     * is generated automatically by appending a random alphanumeric string to the
     * environment name.</p>
     */
    inline const Aws::String& GetCNAMEPrefix() const { return m_cNAMEPrefix; }
    inline bool CNAMEPrefixHasBeenSet() const { return m_cNAMEPrefixHasBeenSet; }
    template<typename CNAMEPrefixT = Aws::String>
    void SetCNAMEPrefix(CNAMEPrefixT&& value) { m_cNAMEPrefixHasBeenSet = true; m_cNAMEPrefix = std::forward<CNAMEPrefixT>(value); }
    template<typename CNAMEPrefixT = Aws::String>
    CreateEnvironmentRequest& WithCNAMEPrefix(CNAMEPrefixT&& value) { SetCNAMEPrefix(std::forward<CNAMEPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the tier to use in creating this environment. The environment tier
     * that you choose determines whether Elastic Beanstalk provisions resources to
     * support a web application that handles HTTP(S) requests or a web application
     * that handles background-processing tasks.</p>
     */
    inline const EnvironmentTier& GetTier() const { return m_tier; }
    inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
    template<typename TierT = EnvironmentTier>
    void SetTier(TierT&& value) { m_tierHasBeenSet = true; m_tier = std::forward<TierT>(value); }
    template<typename TierT = EnvironmentTier>
    CreateEnvironmentRequest& WithTier(TierT&& value) { SetTier(std::forward<TierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the tags applied to resources in the environment.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateEnvironmentRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateEnvironmentRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the application version to deploy.</p> <p>Default: If not
     * specified, Elastic Beanstalk attempts to deploy the sample application.</p>
     */
    inline const Aws::String& GetVersionLabel() const { return m_versionLabel; }
    inline bool VersionLabelHasBeenSet() const { return m_versionLabelHasBeenSet; }
    template<typename VersionLabelT = Aws::String>
    void SetVersionLabel(VersionLabelT&& value) { m_versionLabelHasBeenSet = true; m_versionLabel = std::forward<VersionLabelT>(value); }
    template<typename VersionLabelT = Aws::String>
    CreateEnvironmentRequest& WithVersionLabel(VersionLabelT&& value) { SetVersionLabel(std::forward<VersionLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Elastic Beanstalk configuration template to use with the
     * environment.</p>  <p>If you specify <code>TemplateName</code>, then don't
     * specify <code>SolutionStackName</code>.</p> 
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    CreateEnvironmentRequest& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Elastic Beanstalk solution stack (platform version) to use
     * with the environment. If specified, Elastic Beanstalk sets the configuration
     * values to the default values associated with the specified solution stack. For a
     * list of current solution stacks, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/platforms/platforms-supported.html">Elastic
     * Beanstalk Supported Platforms</a> in the <i>AWS Elastic Beanstalk Platforms</i>
     * guide.</p>  <p>If you specify <code>SolutionStackName</code>, don't
     * specify <code>PlatformArn</code> or <code>TemplateName</code>.</p> 
     */
    inline const Aws::String& GetSolutionStackName() const { return m_solutionStackName; }
    inline bool SolutionStackNameHasBeenSet() const { return m_solutionStackNameHasBeenSet; }
    template<typename SolutionStackNameT = Aws::String>
    void SetSolutionStackName(SolutionStackNameT&& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = std::forward<SolutionStackNameT>(value); }
    template<typename SolutionStackNameT = Aws::String>
    CreateEnvironmentRequest& WithSolutionStackName(SolutionStackNameT&& value) { SetSolutionStackName(std::forward<SolutionStackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom platform to use with the
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/custom-platforms.html">Custom
     * Platforms</a> in the <i>AWS Elastic Beanstalk Developer Guide</i>.</p> 
     * <p>If you specify <code>PlatformArn</code>, don't specify
     * <code>SolutionStackName</code>.</p> 
     */
    inline const Aws::String& GetPlatformArn() const { return m_platformArn; }
    inline bool PlatformArnHasBeenSet() const { return m_platformArnHasBeenSet; }
    template<typename PlatformArnT = Aws::String>
    void SetPlatformArn(PlatformArnT&& value) { m_platformArnHasBeenSet = true; m_platformArn = std::forward<PlatformArnT>(value); }
    template<typename PlatformArnT = Aws::String>
    CreateEnvironmentRequest& WithPlatformArn(PlatformArnT&& value) { SetPlatformArn(std::forward<PlatformArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, AWS Elastic Beanstalk sets the specified configuration options
     * to the requested value in the configuration set for the new environment. These
     * override the values obtained from the solution stack or the configuration
     * template.</p>
     */
    inline const Aws::Vector<ConfigurationOptionSetting>& GetOptionSettings() const { return m_optionSettings; }
    inline bool OptionSettingsHasBeenSet() const { return m_optionSettingsHasBeenSet; }
    template<typename OptionSettingsT = Aws::Vector<ConfigurationOptionSetting>>
    void SetOptionSettings(OptionSettingsT&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = std::forward<OptionSettingsT>(value); }
    template<typename OptionSettingsT = Aws::Vector<ConfigurationOptionSetting>>
    CreateEnvironmentRequest& WithOptionSettings(OptionSettingsT&& value) { SetOptionSettings(std::forward<OptionSettingsT>(value)); return *this;}
    template<typename OptionSettingsT = ConfigurationOptionSetting>
    CreateEnvironmentRequest& AddOptionSettings(OptionSettingsT&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.emplace_back(std::forward<OptionSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of custom user-defined configuration options to remove from the
     * configuration set for this new environment.</p>
     */
    inline const Aws::Vector<OptionSpecification>& GetOptionsToRemove() const { return m_optionsToRemove; }
    inline bool OptionsToRemoveHasBeenSet() const { return m_optionsToRemoveHasBeenSet; }
    template<typename OptionsToRemoveT = Aws::Vector<OptionSpecification>>
    void SetOptionsToRemove(OptionsToRemoveT&& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove = std::forward<OptionsToRemoveT>(value); }
    template<typename OptionsToRemoveT = Aws::Vector<OptionSpecification>>
    CreateEnvironmentRequest& WithOptionsToRemove(OptionsToRemoveT&& value) { SetOptionsToRemove(std::forward<OptionsToRemoveT>(value)); return *this;}
    template<typename OptionsToRemoveT = OptionSpecification>
    CreateEnvironmentRequest& AddOptionsToRemove(OptionsToRemoveT&& value) { m_optionsToRemoveHasBeenSet = true; m_optionsToRemove.emplace_back(std::forward<OptionsToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an existing IAM role to be used as the
     * environment's operations role. If specified, Elastic Beanstalk uses the
     * operations role for permissions to downstream services during this call and
     * during subsequent calls acting on this environment. To specify an operations
     * role, you must have the <code>iam:PassRole</code> permission for the role. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/iam-operationsrole.html">Operations
     * roles</a> in the <i>AWS Elastic Beanstalk Developer Guide</i>.</p>
     */
    inline const Aws::String& GetOperationsRole() const { return m_operationsRole; }
    inline bool OperationsRoleHasBeenSet() const { return m_operationsRoleHasBeenSet; }
    template<typename OperationsRoleT = Aws::String>
    void SetOperationsRole(OperationsRoleT&& value) { m_operationsRoleHasBeenSet = true; m_operationsRole = std::forward<OperationsRoleT>(value); }
    template<typename OperationsRoleT = Aws::String>
    CreateEnvironmentRequest& WithOperationsRole(OperationsRoleT&& value) { SetOperationsRole(std::forward<OperationsRoleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_cNAMEPrefix;
    bool m_cNAMEPrefixHasBeenSet = false;

    EnvironmentTier m_tier;
    bool m_tierHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

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

    Aws::String m_operationsRole;
    bool m_operationsRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
