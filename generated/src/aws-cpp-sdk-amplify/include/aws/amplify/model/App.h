/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/amplify/model/Platform.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplify/model/ProductionBranch.h>
#include <aws/amplify/model/AutoBranchCreationConfig.h>
#include <aws/amplify/model/RepositoryCloneMethod.h>
#include <aws/amplify/model/CacheConfig.h>
#include <aws/amplify/model/WafConfiguration.h>
#include <aws/amplify/model/JobConfig.h>
#include <aws/amplify/model/CustomRule.h>
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
namespace Amplify
{
namespace Model
{

  /**
   * <p>Represents the different branches of a repository for building, deploying,
   * and hosting an Amplify app. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/App">AWS API
   * Reference</a></p>
   */
  class App
  {
  public:
    AWS_AMPLIFY_API App() = default;
    AWS_AMPLIFY_API App(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API App& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the Amplify app. </p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    App& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amplify app. </p>
     */
    inline const Aws::String& GetAppArn() const { return m_appArn; }
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }
    template<typename AppArnT = Aws::String>
    void SetAppArn(AppArnT&& value) { m_appArnHasBeenSet = true; m_appArn = std::forward<AppArnT>(value); }
    template<typename AppArnT = Aws::String>
    App& WithAppArn(AppArnT&& value) { SetAppArn(std::forward<AppArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the Amplify app. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    App& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag for the Amplify app. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    App& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    App& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The description for the Amplify app. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    App& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Git repository for the Amplify app. </p>
     */
    inline const Aws::String& GetRepository() const { return m_repository; }
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
    template<typename RepositoryT = Aws::String>
    void SetRepository(RepositoryT&& value) { m_repositoryHasBeenSet = true; m_repository = std::forward<RepositoryT>(value); }
    template<typename RepositoryT = Aws::String>
    App& WithRepository(RepositoryT&& value) { SetRepository(std::forward<RepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform for the Amplify app. For a static app, set the platform type to
     * <code>WEB</code>. For a dynamic server-side rendered (SSR) app, set the platform
     * type to <code>WEB_COMPUTE</code>. For an app requiring Amplify Hosting's
     * original SSR support only, set the platform type to
     * <code>WEB_DYNAMIC</code>.</p> <p>If you are deploying an SSG only app with
     * Next.js 14 or later, you must use the platform type
     * <code>WEB_COMPUTE</code>.</p>
     */
    inline Platform GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(Platform value) { m_platformHasBeenSet = true; m_platform = value; }
    inline App& WithPlatform(Platform value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when Amplify created the application.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    App& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when Amplify updated the application.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    App& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for an SSR app. The Compute
     * role allows the Amplify Hosting compute service to securely access specific
     * Amazon Web Services resources based on the role's permissions. For more
     * information about the SSR Compute role, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/userguide/amplify-SSR-compute-role.html">Adding
     * an SSR Compute role</a> in the <i>Amplify User Guide</i>.</p>
     */
    inline const Aws::String& GetComputeRoleArn() const { return m_computeRoleArn; }
    inline bool ComputeRoleArnHasBeenSet() const { return m_computeRoleArnHasBeenSet; }
    template<typename ComputeRoleArnT = Aws::String>
    void SetComputeRoleArn(ComputeRoleArnT&& value) { m_computeRoleArnHasBeenSet = true; m_computeRoleArn = std::forward<ComputeRoleArnT>(value); }
    template<typename ComputeRoleArnT = Aws::String>
    App& WithComputeRoleArn(ComputeRoleArnT&& value) { SetComputeRoleArn(std::forward<ComputeRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role for the Amplify
     * app.</p>
     */
    inline const Aws::String& GetIamServiceRoleArn() const { return m_iamServiceRoleArn; }
    inline bool IamServiceRoleArnHasBeenSet() const { return m_iamServiceRoleArnHasBeenSet; }
    template<typename IamServiceRoleArnT = Aws::String>
    void SetIamServiceRoleArn(IamServiceRoleArnT&& value) { m_iamServiceRoleArnHasBeenSet = true; m_iamServiceRoleArn = std::forward<IamServiceRoleArnT>(value); }
    template<typename IamServiceRoleArnT = Aws::String>
    App& WithIamServiceRoleArn(IamServiceRoleArnT&& value) { SetIamServiceRoleArn(std::forward<IamServiceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables for the Amplify app. </p> <p>For a list of the
     * environment variables that are accessible to Amplify by default, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/userguide/amplify-console-environment-variables.html">Amplify
     * Environment variables</a> in the <i>Amplify Hosting User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironmentVariables(EnvironmentVariablesT&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::forward<EnvironmentVariablesT>(value); }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    App& WithEnvironmentVariables(EnvironmentVariablesT&& value) { SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value)); return *this;}
    template<typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
    App& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
      m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The default domain for the Amplify app. </p>
     */
    inline const Aws::String& GetDefaultDomain() const { return m_defaultDomain; }
    inline bool DefaultDomainHasBeenSet() const { return m_defaultDomainHasBeenSet; }
    template<typename DefaultDomainT = Aws::String>
    void SetDefaultDomain(DefaultDomainT&& value) { m_defaultDomainHasBeenSet = true; m_defaultDomain = std::forward<DefaultDomainT>(value); }
    template<typename DefaultDomainT = Aws::String>
    App& WithDefaultDomain(DefaultDomainT&& value) { SetDefaultDomain(std::forward<DefaultDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables the auto-building of branches for the Amplify app. </p>
     */
    inline bool GetEnableBranchAutoBuild() const { return m_enableBranchAutoBuild; }
    inline bool EnableBranchAutoBuildHasBeenSet() const { return m_enableBranchAutoBuildHasBeenSet; }
    inline void SetEnableBranchAutoBuild(bool value) { m_enableBranchAutoBuildHasBeenSet = true; m_enableBranchAutoBuild = value; }
    inline App& WithEnableBranchAutoBuild(bool value) { SetEnableBranchAutoBuild(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Automatically disconnect a branch in the Amplify console when you delete a
     * branch from your Git repository.</p>
     */
    inline bool GetEnableBranchAutoDeletion() const { return m_enableBranchAutoDeletion; }
    inline bool EnableBranchAutoDeletionHasBeenSet() const { return m_enableBranchAutoDeletionHasBeenSet; }
    inline void SetEnableBranchAutoDeletion(bool value) { m_enableBranchAutoDeletionHasBeenSet = true; m_enableBranchAutoDeletion = value; }
    inline App& WithEnableBranchAutoDeletion(bool value) { SetEnableBranchAutoDeletion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables basic authorization for the Amplify app's branches. </p>
     */
    inline bool GetEnableBasicAuth() const { return m_enableBasicAuth; }
    inline bool EnableBasicAuthHasBeenSet() const { return m_enableBasicAuthHasBeenSet; }
    inline void SetEnableBasicAuth(bool value) { m_enableBasicAuthHasBeenSet = true; m_enableBasicAuth = value; }
    inline App& WithEnableBasicAuth(bool value) { SetEnableBasicAuth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The basic authorization credentials for branches for the Amplify app. You
     * must base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline const Aws::String& GetBasicAuthCredentials() const { return m_basicAuthCredentials; }
    inline bool BasicAuthCredentialsHasBeenSet() const { return m_basicAuthCredentialsHasBeenSet; }
    template<typename BasicAuthCredentialsT = Aws::String>
    void SetBasicAuthCredentials(BasicAuthCredentialsT&& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = std::forward<BasicAuthCredentialsT>(value); }
    template<typename BasicAuthCredentialsT = Aws::String>
    App& WithBasicAuthCredentials(BasicAuthCredentialsT&& value) { SetBasicAuthCredentials(std::forward<BasicAuthCredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the custom redirect and rewrite rules for the Amplify app. </p>
     */
    inline const Aws::Vector<CustomRule>& GetCustomRules() const { return m_customRules; }
    inline bool CustomRulesHasBeenSet() const { return m_customRulesHasBeenSet; }
    template<typename CustomRulesT = Aws::Vector<CustomRule>>
    void SetCustomRules(CustomRulesT&& value) { m_customRulesHasBeenSet = true; m_customRules = std::forward<CustomRulesT>(value); }
    template<typename CustomRulesT = Aws::Vector<CustomRule>>
    App& WithCustomRules(CustomRulesT&& value) { SetCustomRules(std::forward<CustomRulesT>(value)); return *this;}
    template<typename CustomRulesT = CustomRule>
    App& AddCustomRules(CustomRulesT&& value) { m_customRulesHasBeenSet = true; m_customRules.emplace_back(std::forward<CustomRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the information about a production branch of the Amplify app. </p>
     */
    inline const ProductionBranch& GetProductionBranch() const { return m_productionBranch; }
    inline bool ProductionBranchHasBeenSet() const { return m_productionBranchHasBeenSet; }
    template<typename ProductionBranchT = ProductionBranch>
    void SetProductionBranch(ProductionBranchT&& value) { m_productionBranchHasBeenSet = true; m_productionBranch = std::forward<ProductionBranchT>(value); }
    template<typename ProductionBranchT = ProductionBranch>
    App& WithProductionBranch(ProductionBranchT&& value) { SetProductionBranch(std::forward<ProductionBranchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the content of the build specification (build spec) for the Amplify
     * app. </p>
     */
    inline const Aws::String& GetBuildSpec() const { return m_buildSpec; }
    inline bool BuildSpecHasBeenSet() const { return m_buildSpecHasBeenSet; }
    template<typename BuildSpecT = Aws::String>
    void SetBuildSpec(BuildSpecT&& value) { m_buildSpecHasBeenSet = true; m_buildSpec = std::forward<BuildSpecT>(value); }
    template<typename BuildSpecT = Aws::String>
    App& WithBuildSpec(BuildSpecT&& value) { SetBuildSpec(std::forward<BuildSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the custom HTTP headers for the Amplify app.</p>
     */
    inline const Aws::String& GetCustomHeaders() const { return m_customHeaders; }
    inline bool CustomHeadersHasBeenSet() const { return m_customHeadersHasBeenSet; }
    template<typename CustomHeadersT = Aws::String>
    void SetCustomHeaders(CustomHeadersT&& value) { m_customHeadersHasBeenSet = true; m_customHeaders = std::forward<CustomHeadersT>(value); }
    template<typename CustomHeadersT = Aws::String>
    App& WithCustomHeaders(CustomHeadersT&& value) { SetCustomHeaders(std::forward<CustomHeadersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables automated branch creation for the Amplify app. </p>
     */
    inline bool GetEnableAutoBranchCreation() const { return m_enableAutoBranchCreation; }
    inline bool EnableAutoBranchCreationHasBeenSet() const { return m_enableAutoBranchCreationHasBeenSet; }
    inline void SetEnableAutoBranchCreation(bool value) { m_enableAutoBranchCreationHasBeenSet = true; m_enableAutoBranchCreation = value; }
    inline App& WithEnableAutoBranchCreation(bool value) { SetEnableAutoBranchCreation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the automated branch creation glob patterns for the Amplify app.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoBranchCreationPatterns() const { return m_autoBranchCreationPatterns; }
    inline bool AutoBranchCreationPatternsHasBeenSet() const { return m_autoBranchCreationPatternsHasBeenSet; }
    template<typename AutoBranchCreationPatternsT = Aws::Vector<Aws::String>>
    void SetAutoBranchCreationPatterns(AutoBranchCreationPatternsT&& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns = std::forward<AutoBranchCreationPatternsT>(value); }
    template<typename AutoBranchCreationPatternsT = Aws::Vector<Aws::String>>
    App& WithAutoBranchCreationPatterns(AutoBranchCreationPatternsT&& value) { SetAutoBranchCreationPatterns(std::forward<AutoBranchCreationPatternsT>(value)); return *this;}
    template<typename AutoBranchCreationPatternsT = Aws::String>
    App& AddAutoBranchCreationPatterns(AutoBranchCreationPatternsT&& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns.emplace_back(std::forward<AutoBranchCreationPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the automated branch creation configuration for the Amplify app.
     * </p>
     */
    inline const AutoBranchCreationConfig& GetAutoBranchCreationConfig() const { return m_autoBranchCreationConfig; }
    inline bool AutoBranchCreationConfigHasBeenSet() const { return m_autoBranchCreationConfigHasBeenSet; }
    template<typename AutoBranchCreationConfigT = AutoBranchCreationConfig>
    void SetAutoBranchCreationConfig(AutoBranchCreationConfigT&& value) { m_autoBranchCreationConfigHasBeenSet = true; m_autoBranchCreationConfig = std::forward<AutoBranchCreationConfigT>(value); }
    template<typename AutoBranchCreationConfigT = AutoBranchCreationConfig>
    App& WithAutoBranchCreationConfig(AutoBranchCreationConfigT&& value) { SetAutoBranchCreationConfig(std::forward<AutoBranchCreationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>This is for internal use.</p>  <p>The Amplify service uses this
     * parameter to specify the authentication protocol to use to access the Git
     * repository for an Amplify app. Amplify specifies <code>TOKEN</code> for a GitHub
     * repository, <code>SIGV4</code> for an Amazon Web Services CodeCommit repository,
     * and <code>SSH</code> for GitLab and Bitbucket repositories.</p>
     */
    inline RepositoryCloneMethod GetRepositoryCloneMethod() const { return m_repositoryCloneMethod; }
    inline bool RepositoryCloneMethodHasBeenSet() const { return m_repositoryCloneMethodHasBeenSet; }
    inline void SetRepositoryCloneMethod(RepositoryCloneMethod value) { m_repositoryCloneMethodHasBeenSet = true; m_repositoryCloneMethod = value; }
    inline App& WithRepositoryCloneMethod(RepositoryCloneMethod value) { SetRepositoryCloneMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cache configuration for the Amplify app. If you don't specify the cache
     * configuration <code>type</code>, Amplify uses the default
     * <code>AMPLIFY_MANAGED</code> setting.</p>
     */
    inline const CacheConfig& GetCacheConfig() const { return m_cacheConfig; }
    inline bool CacheConfigHasBeenSet() const { return m_cacheConfigHasBeenSet; }
    template<typename CacheConfigT = CacheConfig>
    void SetCacheConfig(CacheConfigT&& value) { m_cacheConfigHasBeenSet = true; m_cacheConfig = std::forward<CacheConfigT>(value); }
    template<typename CacheConfigT = CacheConfig>
    App& WithCacheConfig(CacheConfigT&& value) { SetCacheConfig(std::forward<CacheConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when Amplify created the webhook in your Git repository.</p>
     */
    inline const Aws::Utils::DateTime& GetWebhookCreateTime() const { return m_webhookCreateTime; }
    inline bool WebhookCreateTimeHasBeenSet() const { return m_webhookCreateTimeHasBeenSet; }
    template<typename WebhookCreateTimeT = Aws::Utils::DateTime>
    void SetWebhookCreateTime(WebhookCreateTimeT&& value) { m_webhookCreateTimeHasBeenSet = true; m_webhookCreateTime = std::forward<WebhookCreateTimeT>(value); }
    template<typename WebhookCreateTimeT = Aws::Utils::DateTime>
    App& WithWebhookCreateTime(WebhookCreateTimeT&& value) { SetWebhookCreateTime(std::forward<WebhookCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the Firewall configuration for the Amplify app. Firewall support
     * enables you to protect your hosted applications with a direct integration with
     * WAF.</p>
     */
    inline const WafConfiguration& GetWafConfiguration() const { return m_wafConfiguration; }
    inline bool WafConfigurationHasBeenSet() const { return m_wafConfigurationHasBeenSet; }
    template<typename WafConfigurationT = WafConfiguration>
    void SetWafConfiguration(WafConfigurationT&& value) { m_wafConfigurationHasBeenSet = true; m_wafConfiguration = std::forward<WafConfigurationT>(value); }
    template<typename WafConfigurationT = WafConfiguration>
    App& WithWafConfiguration(WafConfigurationT&& value) { SetWafConfiguration(std::forward<WafConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details that apply to the jobs for an Amplify app.</p>
     */
    inline const JobConfig& GetJobConfig() const { return m_jobConfig; }
    inline bool JobConfigHasBeenSet() const { return m_jobConfigHasBeenSet; }
    template<typename JobConfigT = JobConfig>
    void SetJobConfig(JobConfigT&& value) { m_jobConfigHasBeenSet = true; m_jobConfig = std::forward<JobConfigT>(value); }
    template<typename JobConfigT = JobConfig>
    App& WithJobConfig(JobConfigT&& value) { SetJobConfig(std::forward<JobConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;

    Platform m_platform{Platform::NOT_SET};
    bool m_platformHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_computeRoleArn;
    bool m_computeRoleArnHasBeenSet = false;

    Aws::String m_iamServiceRoleArn;
    bool m_iamServiceRoleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;

    Aws::String m_defaultDomain;
    bool m_defaultDomainHasBeenSet = false;

    bool m_enableBranchAutoBuild{false};
    bool m_enableBranchAutoBuildHasBeenSet = false;

    bool m_enableBranchAutoDeletion{false};
    bool m_enableBranchAutoDeletionHasBeenSet = false;

    bool m_enableBasicAuth{false};
    bool m_enableBasicAuthHasBeenSet = false;

    Aws::String m_basicAuthCredentials;
    bool m_basicAuthCredentialsHasBeenSet = false;

    Aws::Vector<CustomRule> m_customRules;
    bool m_customRulesHasBeenSet = false;

    ProductionBranch m_productionBranch;
    bool m_productionBranchHasBeenSet = false;

    Aws::String m_buildSpec;
    bool m_buildSpecHasBeenSet = false;

    Aws::String m_customHeaders;
    bool m_customHeadersHasBeenSet = false;

    bool m_enableAutoBranchCreation{false};
    bool m_enableAutoBranchCreationHasBeenSet = false;

    Aws::Vector<Aws::String> m_autoBranchCreationPatterns;
    bool m_autoBranchCreationPatternsHasBeenSet = false;

    AutoBranchCreationConfig m_autoBranchCreationConfig;
    bool m_autoBranchCreationConfigHasBeenSet = false;

    RepositoryCloneMethod m_repositoryCloneMethod{RepositoryCloneMethod::NOT_SET};
    bool m_repositoryCloneMethodHasBeenSet = false;

    CacheConfig m_cacheConfig;
    bool m_cacheConfigHasBeenSet = false;

    Aws::Utils::DateTime m_webhookCreateTime{};
    bool m_webhookCreateTimeHasBeenSet = false;

    WafConfiguration m_wafConfiguration;
    bool m_wafConfigurationHasBeenSet = false;

    JobConfig m_jobConfig;
    bool m_jobConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
