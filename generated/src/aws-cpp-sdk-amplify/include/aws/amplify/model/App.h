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
    AWS_AMPLIFY_API App();
    AWS_AMPLIFY_API App(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API App& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the Amplify app. </p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline App& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline App& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline App& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amplify app. </p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }
    inline App& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}
    inline App& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}
    inline App& WithAppArn(const char* value) { SetAppArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the Amplify app. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline App& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline App& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline App& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag for the Amplify app. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline App& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline App& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline App& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline App& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline App& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline App& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline App& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline App& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline App& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description for the Amplify app. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline App& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline App& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline App& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Git repository for the Amplify app. </p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }
    inline App& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}
    inline App& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}
    inline App& WithRepository(const char* value) { SetRepository(value); return *this;}
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
    inline const Platform& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline App& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}
    inline App& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when Amplify created the application.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }
    inline App& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}
    inline App& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when Amplify updated the application.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }
    inline App& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline App& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Identity and Access Management (IAM) service role for the Amazon
     * Resource Name (ARN) of the Amplify app. </p>
     */
    inline const Aws::String& GetIamServiceRoleArn() const{ return m_iamServiceRoleArn; }
    inline bool IamServiceRoleArnHasBeenSet() const { return m_iamServiceRoleArnHasBeenSet; }
    inline void SetIamServiceRoleArn(const Aws::String& value) { m_iamServiceRoleArnHasBeenSet = true; m_iamServiceRoleArn = value; }
    inline void SetIamServiceRoleArn(Aws::String&& value) { m_iamServiceRoleArnHasBeenSet = true; m_iamServiceRoleArn = std::move(value); }
    inline void SetIamServiceRoleArn(const char* value) { m_iamServiceRoleArnHasBeenSet = true; m_iamServiceRoleArn.assign(value); }
    inline App& WithIamServiceRoleArn(const Aws::String& value) { SetIamServiceRoleArn(value); return *this;}
    inline App& WithIamServiceRoleArn(Aws::String&& value) { SetIamServiceRoleArn(std::move(value)); return *this;}
    inline App& WithIamServiceRoleArn(const char* value) { SetIamServiceRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables for the Amplify app. </p> <p>For a list of the
     * environment variables that are accessible to Amplify by default, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/userguide/amplify-console-environment-variables.html">Amplify
     * Environment variables</a> in the <i>Amplify Hosting User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const{ return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    inline void SetEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }
    inline void SetEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }
    inline App& WithEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironmentVariables(value); return *this;}
    inline App& WithEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}
    inline App& AddEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }
    inline App& AddEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }
    inline App& AddEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }
    inline App& AddEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), std::move(value)); return *this; }
    inline App& AddEnvironmentVariables(const char* key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }
    inline App& AddEnvironmentVariables(Aws::String&& key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }
    inline App& AddEnvironmentVariables(const char* key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The default domain for the Amplify app. </p>
     */
    inline const Aws::String& GetDefaultDomain() const{ return m_defaultDomain; }
    inline bool DefaultDomainHasBeenSet() const { return m_defaultDomainHasBeenSet; }
    inline void SetDefaultDomain(const Aws::String& value) { m_defaultDomainHasBeenSet = true; m_defaultDomain = value; }
    inline void SetDefaultDomain(Aws::String&& value) { m_defaultDomainHasBeenSet = true; m_defaultDomain = std::move(value); }
    inline void SetDefaultDomain(const char* value) { m_defaultDomainHasBeenSet = true; m_defaultDomain.assign(value); }
    inline App& WithDefaultDomain(const Aws::String& value) { SetDefaultDomain(value); return *this;}
    inline App& WithDefaultDomain(Aws::String&& value) { SetDefaultDomain(std::move(value)); return *this;}
    inline App& WithDefaultDomain(const char* value) { SetDefaultDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables the auto-building of branches for the Amplify app. </p>
     */
    inline bool GetEnableBranchAutoBuild() const{ return m_enableBranchAutoBuild; }
    inline bool EnableBranchAutoBuildHasBeenSet() const { return m_enableBranchAutoBuildHasBeenSet; }
    inline void SetEnableBranchAutoBuild(bool value) { m_enableBranchAutoBuildHasBeenSet = true; m_enableBranchAutoBuild = value; }
    inline App& WithEnableBranchAutoBuild(bool value) { SetEnableBranchAutoBuild(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Automatically disconnect a branch in the Amplify console when you delete a
     * branch from your Git repository.</p>
     */
    inline bool GetEnableBranchAutoDeletion() const{ return m_enableBranchAutoDeletion; }
    inline bool EnableBranchAutoDeletionHasBeenSet() const { return m_enableBranchAutoDeletionHasBeenSet; }
    inline void SetEnableBranchAutoDeletion(bool value) { m_enableBranchAutoDeletionHasBeenSet = true; m_enableBranchAutoDeletion = value; }
    inline App& WithEnableBranchAutoDeletion(bool value) { SetEnableBranchAutoDeletion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables basic authorization for the Amplify app's branches. </p>
     */
    inline bool GetEnableBasicAuth() const{ return m_enableBasicAuth; }
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
    inline const Aws::String& GetBasicAuthCredentials() const{ return m_basicAuthCredentials; }
    inline bool BasicAuthCredentialsHasBeenSet() const { return m_basicAuthCredentialsHasBeenSet; }
    inline void SetBasicAuthCredentials(const Aws::String& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = value; }
    inline void SetBasicAuthCredentials(Aws::String&& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = std::move(value); }
    inline void SetBasicAuthCredentials(const char* value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials.assign(value); }
    inline App& WithBasicAuthCredentials(const Aws::String& value) { SetBasicAuthCredentials(value); return *this;}
    inline App& WithBasicAuthCredentials(Aws::String&& value) { SetBasicAuthCredentials(std::move(value)); return *this;}
    inline App& WithBasicAuthCredentials(const char* value) { SetBasicAuthCredentials(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the custom redirect and rewrite rules for the Amplify app. </p>
     */
    inline const Aws::Vector<CustomRule>& GetCustomRules() const{ return m_customRules; }
    inline bool CustomRulesHasBeenSet() const { return m_customRulesHasBeenSet; }
    inline void SetCustomRules(const Aws::Vector<CustomRule>& value) { m_customRulesHasBeenSet = true; m_customRules = value; }
    inline void SetCustomRules(Aws::Vector<CustomRule>&& value) { m_customRulesHasBeenSet = true; m_customRules = std::move(value); }
    inline App& WithCustomRules(const Aws::Vector<CustomRule>& value) { SetCustomRules(value); return *this;}
    inline App& WithCustomRules(Aws::Vector<CustomRule>&& value) { SetCustomRules(std::move(value)); return *this;}
    inline App& AddCustomRules(const CustomRule& value) { m_customRulesHasBeenSet = true; m_customRules.push_back(value); return *this; }
    inline App& AddCustomRules(CustomRule&& value) { m_customRulesHasBeenSet = true; m_customRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the information about a production branch of the Amplify app. </p>
     */
    inline const ProductionBranch& GetProductionBranch() const{ return m_productionBranch; }
    inline bool ProductionBranchHasBeenSet() const { return m_productionBranchHasBeenSet; }
    inline void SetProductionBranch(const ProductionBranch& value) { m_productionBranchHasBeenSet = true; m_productionBranch = value; }
    inline void SetProductionBranch(ProductionBranch&& value) { m_productionBranchHasBeenSet = true; m_productionBranch = std::move(value); }
    inline App& WithProductionBranch(const ProductionBranch& value) { SetProductionBranch(value); return *this;}
    inline App& WithProductionBranch(ProductionBranch&& value) { SetProductionBranch(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the content of the build specification (build spec) for the Amplify
     * app. </p>
     */
    inline const Aws::String& GetBuildSpec() const{ return m_buildSpec; }
    inline bool BuildSpecHasBeenSet() const { return m_buildSpecHasBeenSet; }
    inline void SetBuildSpec(const Aws::String& value) { m_buildSpecHasBeenSet = true; m_buildSpec = value; }
    inline void SetBuildSpec(Aws::String&& value) { m_buildSpecHasBeenSet = true; m_buildSpec = std::move(value); }
    inline void SetBuildSpec(const char* value) { m_buildSpecHasBeenSet = true; m_buildSpec.assign(value); }
    inline App& WithBuildSpec(const Aws::String& value) { SetBuildSpec(value); return *this;}
    inline App& WithBuildSpec(Aws::String&& value) { SetBuildSpec(std::move(value)); return *this;}
    inline App& WithBuildSpec(const char* value) { SetBuildSpec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the custom HTTP headers for the Amplify app.</p>
     */
    inline const Aws::String& GetCustomHeaders() const{ return m_customHeaders; }
    inline bool CustomHeadersHasBeenSet() const { return m_customHeadersHasBeenSet; }
    inline void SetCustomHeaders(const Aws::String& value) { m_customHeadersHasBeenSet = true; m_customHeaders = value; }
    inline void SetCustomHeaders(Aws::String&& value) { m_customHeadersHasBeenSet = true; m_customHeaders = std::move(value); }
    inline void SetCustomHeaders(const char* value) { m_customHeadersHasBeenSet = true; m_customHeaders.assign(value); }
    inline App& WithCustomHeaders(const Aws::String& value) { SetCustomHeaders(value); return *this;}
    inline App& WithCustomHeaders(Aws::String&& value) { SetCustomHeaders(std::move(value)); return *this;}
    inline App& WithCustomHeaders(const char* value) { SetCustomHeaders(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables automated branch creation for the Amplify app. </p>
     */
    inline bool GetEnableAutoBranchCreation() const{ return m_enableAutoBranchCreation; }
    inline bool EnableAutoBranchCreationHasBeenSet() const { return m_enableAutoBranchCreationHasBeenSet; }
    inline void SetEnableAutoBranchCreation(bool value) { m_enableAutoBranchCreationHasBeenSet = true; m_enableAutoBranchCreation = value; }
    inline App& WithEnableAutoBranchCreation(bool value) { SetEnableAutoBranchCreation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the automated branch creation glob patterns for the Amplify app.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoBranchCreationPatterns() const{ return m_autoBranchCreationPatterns; }
    inline bool AutoBranchCreationPatternsHasBeenSet() const { return m_autoBranchCreationPatternsHasBeenSet; }
    inline void SetAutoBranchCreationPatterns(const Aws::Vector<Aws::String>& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns = value; }
    inline void SetAutoBranchCreationPatterns(Aws::Vector<Aws::String>&& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns = std::move(value); }
    inline App& WithAutoBranchCreationPatterns(const Aws::Vector<Aws::String>& value) { SetAutoBranchCreationPatterns(value); return *this;}
    inline App& WithAutoBranchCreationPatterns(Aws::Vector<Aws::String>&& value) { SetAutoBranchCreationPatterns(std::move(value)); return *this;}
    inline App& AddAutoBranchCreationPatterns(const Aws::String& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns.push_back(value); return *this; }
    inline App& AddAutoBranchCreationPatterns(Aws::String&& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns.push_back(std::move(value)); return *this; }
    inline App& AddAutoBranchCreationPatterns(const char* value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the automated branch creation configuration for the Amplify app.
     * </p>
     */
    inline const AutoBranchCreationConfig& GetAutoBranchCreationConfig() const{ return m_autoBranchCreationConfig; }
    inline bool AutoBranchCreationConfigHasBeenSet() const { return m_autoBranchCreationConfigHasBeenSet; }
    inline void SetAutoBranchCreationConfig(const AutoBranchCreationConfig& value) { m_autoBranchCreationConfigHasBeenSet = true; m_autoBranchCreationConfig = value; }
    inline void SetAutoBranchCreationConfig(AutoBranchCreationConfig&& value) { m_autoBranchCreationConfigHasBeenSet = true; m_autoBranchCreationConfig = std::move(value); }
    inline App& WithAutoBranchCreationConfig(const AutoBranchCreationConfig& value) { SetAutoBranchCreationConfig(value); return *this;}
    inline App& WithAutoBranchCreationConfig(AutoBranchCreationConfig&& value) { SetAutoBranchCreationConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>This is for internal use.</p>  <p>The Amplify service uses this
     * parameter to specify the authentication protocol to use to access the Git
     * repository for an Amplify app. Amplify specifies <code>TOKEN</code> for a GitHub
     * repository, <code>SIGV4</code> for an Amazon Web Services CodeCommit repository,
     * and <code>SSH</code> for GitLab and Bitbucket repositories.</p>
     */
    inline const RepositoryCloneMethod& GetRepositoryCloneMethod() const{ return m_repositoryCloneMethod; }
    inline bool RepositoryCloneMethodHasBeenSet() const { return m_repositoryCloneMethodHasBeenSet; }
    inline void SetRepositoryCloneMethod(const RepositoryCloneMethod& value) { m_repositoryCloneMethodHasBeenSet = true; m_repositoryCloneMethod = value; }
    inline void SetRepositoryCloneMethod(RepositoryCloneMethod&& value) { m_repositoryCloneMethodHasBeenSet = true; m_repositoryCloneMethod = std::move(value); }
    inline App& WithRepositoryCloneMethod(const RepositoryCloneMethod& value) { SetRepositoryCloneMethod(value); return *this;}
    inline App& WithRepositoryCloneMethod(RepositoryCloneMethod&& value) { SetRepositoryCloneMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cache configuration for the Amplify app. If you don't specify the cache
     * configuration <code>type</code>, Amplify uses the default
     * <code>AMPLIFY_MANAGED</code> setting.</p>
     */
    inline const CacheConfig& GetCacheConfig() const{ return m_cacheConfig; }
    inline bool CacheConfigHasBeenSet() const { return m_cacheConfigHasBeenSet; }
    inline void SetCacheConfig(const CacheConfig& value) { m_cacheConfigHasBeenSet = true; m_cacheConfig = value; }
    inline void SetCacheConfig(CacheConfig&& value) { m_cacheConfigHasBeenSet = true; m_cacheConfig = std::move(value); }
    inline App& WithCacheConfig(const CacheConfig& value) { SetCacheConfig(value); return *this;}
    inline App& WithCacheConfig(CacheConfig&& value) { SetCacheConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when Amplify created the webhook in your Git repository.</p>
     */
    inline const Aws::Utils::DateTime& GetWebhookCreateTime() const{ return m_webhookCreateTime; }
    inline bool WebhookCreateTimeHasBeenSet() const { return m_webhookCreateTimeHasBeenSet; }
    inline void SetWebhookCreateTime(const Aws::Utils::DateTime& value) { m_webhookCreateTimeHasBeenSet = true; m_webhookCreateTime = value; }
    inline void SetWebhookCreateTime(Aws::Utils::DateTime&& value) { m_webhookCreateTimeHasBeenSet = true; m_webhookCreateTime = std::move(value); }
    inline App& WithWebhookCreateTime(const Aws::Utils::DateTime& value) { SetWebhookCreateTime(value); return *this;}
    inline App& WithWebhookCreateTime(Aws::Utils::DateTime&& value) { SetWebhookCreateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the Firewall configuration for the Amplify app. Firewall support
     * enables you to protect your hosted applications with a direct integration with
     * WAF.</p>
     */
    inline const WafConfiguration& GetWafConfiguration() const{ return m_wafConfiguration; }
    inline bool WafConfigurationHasBeenSet() const { return m_wafConfigurationHasBeenSet; }
    inline void SetWafConfiguration(const WafConfiguration& value) { m_wafConfigurationHasBeenSet = true; m_wafConfiguration = value; }
    inline void SetWafConfiguration(WafConfiguration&& value) { m_wafConfigurationHasBeenSet = true; m_wafConfiguration = std::move(value); }
    inline App& WithWafConfiguration(const WafConfiguration& value) { SetWafConfiguration(value); return *this;}
    inline App& WithWafConfiguration(WafConfiguration&& value) { SetWafConfiguration(std::move(value)); return *this;}
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

    Platform m_platform;
    bool m_platformHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;

    Aws::String m_iamServiceRoleArn;
    bool m_iamServiceRoleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;

    Aws::String m_defaultDomain;
    bool m_defaultDomainHasBeenSet = false;

    bool m_enableBranchAutoBuild;
    bool m_enableBranchAutoBuildHasBeenSet = false;

    bool m_enableBranchAutoDeletion;
    bool m_enableBranchAutoDeletionHasBeenSet = false;

    bool m_enableBasicAuth;
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

    bool m_enableAutoBranchCreation;
    bool m_enableAutoBranchCreationHasBeenSet = false;

    Aws::Vector<Aws::String> m_autoBranchCreationPatterns;
    bool m_autoBranchCreationPatternsHasBeenSet = false;

    AutoBranchCreationConfig m_autoBranchCreationConfig;
    bool m_autoBranchCreationConfigHasBeenSet = false;

    RepositoryCloneMethod m_repositoryCloneMethod;
    bool m_repositoryCloneMethodHasBeenSet = false;

    CacheConfig m_cacheConfig;
    bool m_cacheConfigHasBeenSet = false;

    Aws::Utils::DateTime m_webhookCreateTime;
    bool m_webhookCreateTimeHasBeenSet = false;

    WafConfiguration m_wafConfiguration;
    bool m_wafConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
