/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/AmplifyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplify/model/Platform.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplify/model/AutoBranchCreationConfig.h>
#include <aws/amplify/model/CacheConfig.h>
#include <aws/amplify/model/CustomRule.h>
#include <utility>

namespace Aws
{
namespace Amplify
{
namespace Model
{

  /**
   * <p>The request structure for the update app request. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateAppRequest">AWS
   * API Reference</a></p>
   */
  class UpdateAppRequest : public AmplifyRequest
  {
  public:
    AWS_AMPLIFY_API UpdateAppRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApp"; }

    AWS_AMPLIFY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID for an Amplify app. </p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline UpdateAppRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline UpdateAppRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline UpdateAppRequest& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for an Amplify app. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateAppRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateAppRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateAppRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for an Amplify app. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateAppRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateAppRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateAppRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platform for the Amplify app. For a static app, set the platform type to
     * <code>WEB</code>. For a dynamic server-side rendered (SSR) app, set the platform
     * type to <code>WEB_COMPUTE</code>. For an app requiring Amplify Hosting's
     * original SSR support only, set the platform type to
     * <code>WEB_DYNAMIC</code>.</p> <p>If you are deploying an SSG only app with
     * Next.js version 14 or later, you must set the platform type to
     * <code>WEB_COMPUTE</code>.</p>
     */
    inline const Platform& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const Platform& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(Platform&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline UpdateAppRequest& WithPlatform(const Platform& value) { SetPlatform(value); return *this;}
    inline UpdateAppRequest& WithPlatform(Platform&& value) { SetPlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Identity and Access Management (IAM) service role for an Amplify app.
     * </p>
     */
    inline const Aws::String& GetIamServiceRoleArn() const{ return m_iamServiceRoleArn; }
    inline bool IamServiceRoleArnHasBeenSet() const { return m_iamServiceRoleArnHasBeenSet; }
    inline void SetIamServiceRoleArn(const Aws::String& value) { m_iamServiceRoleArnHasBeenSet = true; m_iamServiceRoleArn = value; }
    inline void SetIamServiceRoleArn(Aws::String&& value) { m_iamServiceRoleArnHasBeenSet = true; m_iamServiceRoleArn = std::move(value); }
    inline void SetIamServiceRoleArn(const char* value) { m_iamServiceRoleArnHasBeenSet = true; m_iamServiceRoleArn.assign(value); }
    inline UpdateAppRequest& WithIamServiceRoleArn(const Aws::String& value) { SetIamServiceRoleArn(value); return *this;}
    inline UpdateAppRequest& WithIamServiceRoleArn(Aws::String&& value) { SetIamServiceRoleArn(std::move(value)); return *this;}
    inline UpdateAppRequest& WithIamServiceRoleArn(const char* value) { SetIamServiceRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables for an Amplify app. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const{ return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    inline void SetEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }
    inline void SetEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }
    inline UpdateAppRequest& WithEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironmentVariables(value); return *this;}
    inline UpdateAppRequest& WithEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}
    inline UpdateAppRequest& AddEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }
    inline UpdateAppRequest& AddEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }
    inline UpdateAppRequest& AddEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }
    inline UpdateAppRequest& AddEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateAppRequest& AddEnvironmentVariables(const char* key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }
    inline UpdateAppRequest& AddEnvironmentVariables(Aws::String&& key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }
    inline UpdateAppRequest& AddEnvironmentVariables(const char* key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables branch auto-building for an Amplify app. </p>
     */
    inline bool GetEnableBranchAutoBuild() const{ return m_enableBranchAutoBuild; }
    inline bool EnableBranchAutoBuildHasBeenSet() const { return m_enableBranchAutoBuildHasBeenSet; }
    inline void SetEnableBranchAutoBuild(bool value) { m_enableBranchAutoBuildHasBeenSet = true; m_enableBranchAutoBuild = value; }
    inline UpdateAppRequest& WithEnableBranchAutoBuild(bool value) { SetEnableBranchAutoBuild(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Automatically disconnects a branch in the Amplify console when you delete a
     * branch from your Git repository. </p>
     */
    inline bool GetEnableBranchAutoDeletion() const{ return m_enableBranchAutoDeletion; }
    inline bool EnableBranchAutoDeletionHasBeenSet() const { return m_enableBranchAutoDeletionHasBeenSet; }
    inline void SetEnableBranchAutoDeletion(bool value) { m_enableBranchAutoDeletionHasBeenSet = true; m_enableBranchAutoDeletion = value; }
    inline UpdateAppRequest& WithEnableBranchAutoDeletion(bool value) { SetEnableBranchAutoDeletion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables basic authorization for an Amplify app. </p>
     */
    inline bool GetEnableBasicAuth() const{ return m_enableBasicAuth; }
    inline bool EnableBasicAuthHasBeenSet() const { return m_enableBasicAuthHasBeenSet; }
    inline void SetEnableBasicAuth(bool value) { m_enableBasicAuthHasBeenSet = true; m_enableBasicAuth = value; }
    inline UpdateAppRequest& WithEnableBasicAuth(bool value) { SetEnableBasicAuth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The basic authorization credentials for an Amplify app. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline const Aws::String& GetBasicAuthCredentials() const{ return m_basicAuthCredentials; }
    inline bool BasicAuthCredentialsHasBeenSet() const { return m_basicAuthCredentialsHasBeenSet; }
    inline void SetBasicAuthCredentials(const Aws::String& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = value; }
    inline void SetBasicAuthCredentials(Aws::String&& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = std::move(value); }
    inline void SetBasicAuthCredentials(const char* value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials.assign(value); }
    inline UpdateAppRequest& WithBasicAuthCredentials(const Aws::String& value) { SetBasicAuthCredentials(value); return *this;}
    inline UpdateAppRequest& WithBasicAuthCredentials(Aws::String&& value) { SetBasicAuthCredentials(std::move(value)); return *this;}
    inline UpdateAppRequest& WithBasicAuthCredentials(const char* value) { SetBasicAuthCredentials(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom redirect and rewrite rules for an Amplify app. </p>
     */
    inline const Aws::Vector<CustomRule>& GetCustomRules() const{ return m_customRules; }
    inline bool CustomRulesHasBeenSet() const { return m_customRulesHasBeenSet; }
    inline void SetCustomRules(const Aws::Vector<CustomRule>& value) { m_customRulesHasBeenSet = true; m_customRules = value; }
    inline void SetCustomRules(Aws::Vector<CustomRule>&& value) { m_customRulesHasBeenSet = true; m_customRules = std::move(value); }
    inline UpdateAppRequest& WithCustomRules(const Aws::Vector<CustomRule>& value) { SetCustomRules(value); return *this;}
    inline UpdateAppRequest& WithCustomRules(Aws::Vector<CustomRule>&& value) { SetCustomRules(std::move(value)); return *this;}
    inline UpdateAppRequest& AddCustomRules(const CustomRule& value) { m_customRulesHasBeenSet = true; m_customRules.push_back(value); return *this; }
    inline UpdateAppRequest& AddCustomRules(CustomRule&& value) { m_customRulesHasBeenSet = true; m_customRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The build specification (build spec) for an Amplify app. </p>
     */
    inline const Aws::String& GetBuildSpec() const{ return m_buildSpec; }
    inline bool BuildSpecHasBeenSet() const { return m_buildSpecHasBeenSet; }
    inline void SetBuildSpec(const Aws::String& value) { m_buildSpecHasBeenSet = true; m_buildSpec = value; }
    inline void SetBuildSpec(Aws::String&& value) { m_buildSpecHasBeenSet = true; m_buildSpec = std::move(value); }
    inline void SetBuildSpec(const char* value) { m_buildSpecHasBeenSet = true; m_buildSpec.assign(value); }
    inline UpdateAppRequest& WithBuildSpec(const Aws::String& value) { SetBuildSpec(value); return *this;}
    inline UpdateAppRequest& WithBuildSpec(Aws::String&& value) { SetBuildSpec(std::move(value)); return *this;}
    inline UpdateAppRequest& WithBuildSpec(const char* value) { SetBuildSpec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom HTTP headers for an Amplify app.</p>
     */
    inline const Aws::String& GetCustomHeaders() const{ return m_customHeaders; }
    inline bool CustomHeadersHasBeenSet() const { return m_customHeadersHasBeenSet; }
    inline void SetCustomHeaders(const Aws::String& value) { m_customHeadersHasBeenSet = true; m_customHeaders = value; }
    inline void SetCustomHeaders(Aws::String&& value) { m_customHeadersHasBeenSet = true; m_customHeaders = std::move(value); }
    inline void SetCustomHeaders(const char* value) { m_customHeadersHasBeenSet = true; m_customHeaders.assign(value); }
    inline UpdateAppRequest& WithCustomHeaders(const Aws::String& value) { SetCustomHeaders(value); return *this;}
    inline UpdateAppRequest& WithCustomHeaders(Aws::String&& value) { SetCustomHeaders(std::move(value)); return *this;}
    inline UpdateAppRequest& WithCustomHeaders(const char* value) { SetCustomHeaders(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables automated branch creation for an Amplify app. </p>
     */
    inline bool GetEnableAutoBranchCreation() const{ return m_enableAutoBranchCreation; }
    inline bool EnableAutoBranchCreationHasBeenSet() const { return m_enableAutoBranchCreationHasBeenSet; }
    inline void SetEnableAutoBranchCreation(bool value) { m_enableAutoBranchCreationHasBeenSet = true; m_enableAutoBranchCreation = value; }
    inline UpdateAppRequest& WithEnableAutoBranchCreation(bool value) { SetEnableAutoBranchCreation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the automated branch creation glob patterns for an Amplify app.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoBranchCreationPatterns() const{ return m_autoBranchCreationPatterns; }
    inline bool AutoBranchCreationPatternsHasBeenSet() const { return m_autoBranchCreationPatternsHasBeenSet; }
    inline void SetAutoBranchCreationPatterns(const Aws::Vector<Aws::String>& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns = value; }
    inline void SetAutoBranchCreationPatterns(Aws::Vector<Aws::String>&& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns = std::move(value); }
    inline UpdateAppRequest& WithAutoBranchCreationPatterns(const Aws::Vector<Aws::String>& value) { SetAutoBranchCreationPatterns(value); return *this;}
    inline UpdateAppRequest& WithAutoBranchCreationPatterns(Aws::Vector<Aws::String>&& value) { SetAutoBranchCreationPatterns(std::move(value)); return *this;}
    inline UpdateAppRequest& AddAutoBranchCreationPatterns(const Aws::String& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns.push_back(value); return *this; }
    inline UpdateAppRequest& AddAutoBranchCreationPatterns(Aws::String&& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns.push_back(std::move(value)); return *this; }
    inline UpdateAppRequest& AddAutoBranchCreationPatterns(const char* value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The automated branch creation configuration for an Amplify app. </p>
     */
    inline const AutoBranchCreationConfig& GetAutoBranchCreationConfig() const{ return m_autoBranchCreationConfig; }
    inline bool AutoBranchCreationConfigHasBeenSet() const { return m_autoBranchCreationConfigHasBeenSet; }
    inline void SetAutoBranchCreationConfig(const AutoBranchCreationConfig& value) { m_autoBranchCreationConfigHasBeenSet = true; m_autoBranchCreationConfig = value; }
    inline void SetAutoBranchCreationConfig(AutoBranchCreationConfig&& value) { m_autoBranchCreationConfigHasBeenSet = true; m_autoBranchCreationConfig = std::move(value); }
    inline UpdateAppRequest& WithAutoBranchCreationConfig(const AutoBranchCreationConfig& value) { SetAutoBranchCreationConfig(value); return *this;}
    inline UpdateAppRequest& WithAutoBranchCreationConfig(AutoBranchCreationConfig&& value) { SetAutoBranchCreationConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Git repository for an Amplify app.</p>
     */
    inline const Aws::String& GetRepository() const{ return m_repository; }
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
    inline void SetRepository(const Aws::String& value) { m_repositoryHasBeenSet = true; m_repository = value; }
    inline void SetRepository(Aws::String&& value) { m_repositoryHasBeenSet = true; m_repository = std::move(value); }
    inline void SetRepository(const char* value) { m_repositoryHasBeenSet = true; m_repository.assign(value); }
    inline UpdateAppRequest& WithRepository(const Aws::String& value) { SetRepository(value); return *this;}
    inline UpdateAppRequest& WithRepository(Aws::String&& value) { SetRepository(std::move(value)); return *this;}
    inline UpdateAppRequest& WithRepository(const char* value) { SetRepository(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth token for a third-party source control system for an Amplify app.
     * The OAuth token is used to create a webhook and a read-only deploy key using SSH
     * cloning. The OAuth token is not stored.</p> <p>Use <code>oauthToken</code> for
     * repository providers other than GitHub, such as Bitbucket or CodeCommit.</p>
     * <p>To authorize access to GitHub as your repository provider, use
     * <code>accessToken</code>.</p> <p>You must specify either <code>oauthToken</code>
     * or <code>accessToken</code> when you update an app.</p> <p>Existing Amplify apps
     * deployed from a GitHub repository using OAuth continue to work with CI/CD.
     * However, we strongly recommend that you migrate these apps to use the GitHub
     * App. For more information, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/userguide/setting-up-GitHub-access.html#migrating-to-github-app-auth">Migrating
     * an existing OAuth app to the Amplify GitHub App</a> in the <i>Amplify User
     * Guide</i> .</p>
     */
    inline const Aws::String& GetOauthToken() const{ return m_oauthToken; }
    inline bool OauthTokenHasBeenSet() const { return m_oauthTokenHasBeenSet; }
    inline void SetOauthToken(const Aws::String& value) { m_oauthTokenHasBeenSet = true; m_oauthToken = value; }
    inline void SetOauthToken(Aws::String&& value) { m_oauthTokenHasBeenSet = true; m_oauthToken = std::move(value); }
    inline void SetOauthToken(const char* value) { m_oauthTokenHasBeenSet = true; m_oauthToken.assign(value); }
    inline UpdateAppRequest& WithOauthToken(const Aws::String& value) { SetOauthToken(value); return *this;}
    inline UpdateAppRequest& WithOauthToken(Aws::String&& value) { SetOauthToken(std::move(value)); return *this;}
    inline UpdateAppRequest& WithOauthToken(const char* value) { SetOauthToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The personal access token for a GitHub repository for an Amplify app. The
     * personal access token is used to authorize access to a GitHub repository using
     * the Amplify GitHub App. The token is not stored.</p> <p>Use
     * <code>accessToken</code> for GitHub repositories only. To authorize access to a
     * repository provider such as Bitbucket or CodeCommit, use
     * <code>oauthToken</code>.</p> <p>You must specify either <code>accessToken</code>
     * or <code>oauthToken</code> when you update an app.</p> <p>Existing Amplify apps
     * deployed from a GitHub repository using OAuth continue to work with CI/CD.
     * However, we strongly recommend that you migrate these apps to use the GitHub
     * App. For more information, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/userguide/setting-up-GitHub-access.html#migrating-to-github-app-auth">Migrating
     * an existing OAuth app to the Amplify GitHub App</a> in the <i>Amplify User
     * Guide</i> .</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    inline void SetAccessToken(const Aws::String& value) { m_accessTokenHasBeenSet = true; m_accessToken = value; }
    inline void SetAccessToken(Aws::String&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::move(value); }
    inline void SetAccessToken(const char* value) { m_accessTokenHasBeenSet = true; m_accessToken.assign(value); }
    inline UpdateAppRequest& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}
    inline UpdateAppRequest& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}
    inline UpdateAppRequest& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cache configuration for the Amplify app.</p>
     */
    inline const CacheConfig& GetCacheConfig() const{ return m_cacheConfig; }
    inline bool CacheConfigHasBeenSet() const { return m_cacheConfigHasBeenSet; }
    inline void SetCacheConfig(const CacheConfig& value) { m_cacheConfigHasBeenSet = true; m_cacheConfig = value; }
    inline void SetCacheConfig(CacheConfig&& value) { m_cacheConfigHasBeenSet = true; m_cacheConfig = std::move(value); }
    inline UpdateAppRequest& WithCacheConfig(const CacheConfig& value) { SetCacheConfig(value); return *this;}
    inline UpdateAppRequest& WithCacheConfig(CacheConfig&& value) { SetCacheConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Platform m_platform;
    bool m_platformHasBeenSet = false;

    Aws::String m_iamServiceRoleArn;
    bool m_iamServiceRoleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;

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

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;

    Aws::String m_oauthToken;
    bool m_oauthTokenHasBeenSet = false;

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    CacheConfig m_cacheConfig;
    bool m_cacheConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
