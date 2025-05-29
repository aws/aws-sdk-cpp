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
#include <aws/amplify/model/JobConfig.h>
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
    AWS_AMPLIFY_API UpdateAppRequest() = default;

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
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    UpdateAppRequest& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for an Amplify app. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateAppRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for an Amplify app. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateAppRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    inline Platform GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(Platform value) { m_platformHasBeenSet = true; m_platform = value; }
    inline UpdateAppRequest& WithPlatform(Platform value) { SetPlatform(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to assign to an SSR app. The
     * SSR Compute role allows the Amplify Hosting compute service to securely access
     * specific Amazon Web Services resources based on the role's permissions. For more
     * information about the SSR Compute role, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/userguide/amplify-SSR-compute-role.html">Adding
     * an SSR Compute role</a> in the <i>Amplify User Guide</i>.</p>
     */
    inline const Aws::String& GetComputeRoleArn() const { return m_computeRoleArn; }
    inline bool ComputeRoleArnHasBeenSet() const { return m_computeRoleArnHasBeenSet; }
    template<typename ComputeRoleArnT = Aws::String>
    void SetComputeRoleArn(ComputeRoleArnT&& value) { m_computeRoleArnHasBeenSet = true; m_computeRoleArn = std::forward<ComputeRoleArnT>(value); }
    template<typename ComputeRoleArnT = Aws::String>
    UpdateAppRequest& WithComputeRoleArn(ComputeRoleArnT&& value) { SetComputeRoleArn(std::forward<ComputeRoleArnT>(value)); return *this;}
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
    UpdateAppRequest& WithIamServiceRoleArn(IamServiceRoleArnT&& value) { SetIamServiceRoleArn(std::forward<IamServiceRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables for an Amplify app. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironmentVariables(EnvironmentVariablesT&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::forward<EnvironmentVariablesT>(value); }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    UpdateAppRequest& WithEnvironmentVariables(EnvironmentVariablesT&& value) { SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value)); return *this;}
    template<typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
    UpdateAppRequest& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
      m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Enables branch auto-building for an Amplify app. </p>
     */
    inline bool GetEnableBranchAutoBuild() const { return m_enableBranchAutoBuild; }
    inline bool EnableBranchAutoBuildHasBeenSet() const { return m_enableBranchAutoBuildHasBeenSet; }
    inline void SetEnableBranchAutoBuild(bool value) { m_enableBranchAutoBuildHasBeenSet = true; m_enableBranchAutoBuild = value; }
    inline UpdateAppRequest& WithEnableBranchAutoBuild(bool value) { SetEnableBranchAutoBuild(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Automatically disconnects a branch in the Amplify console when you delete a
     * branch from your Git repository. </p>
     */
    inline bool GetEnableBranchAutoDeletion() const { return m_enableBranchAutoDeletion; }
    inline bool EnableBranchAutoDeletionHasBeenSet() const { return m_enableBranchAutoDeletionHasBeenSet; }
    inline void SetEnableBranchAutoDeletion(bool value) { m_enableBranchAutoDeletionHasBeenSet = true; m_enableBranchAutoDeletion = value; }
    inline UpdateAppRequest& WithEnableBranchAutoDeletion(bool value) { SetEnableBranchAutoDeletion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables basic authorization for an Amplify app. </p>
     */
    inline bool GetEnableBasicAuth() const { return m_enableBasicAuth; }
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
    inline const Aws::String& GetBasicAuthCredentials() const { return m_basicAuthCredentials; }
    inline bool BasicAuthCredentialsHasBeenSet() const { return m_basicAuthCredentialsHasBeenSet; }
    template<typename BasicAuthCredentialsT = Aws::String>
    void SetBasicAuthCredentials(BasicAuthCredentialsT&& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = std::forward<BasicAuthCredentialsT>(value); }
    template<typename BasicAuthCredentialsT = Aws::String>
    UpdateAppRequest& WithBasicAuthCredentials(BasicAuthCredentialsT&& value) { SetBasicAuthCredentials(std::forward<BasicAuthCredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom redirect and rewrite rules for an Amplify app. </p>
     */
    inline const Aws::Vector<CustomRule>& GetCustomRules() const { return m_customRules; }
    inline bool CustomRulesHasBeenSet() const { return m_customRulesHasBeenSet; }
    template<typename CustomRulesT = Aws::Vector<CustomRule>>
    void SetCustomRules(CustomRulesT&& value) { m_customRulesHasBeenSet = true; m_customRules = std::forward<CustomRulesT>(value); }
    template<typename CustomRulesT = Aws::Vector<CustomRule>>
    UpdateAppRequest& WithCustomRules(CustomRulesT&& value) { SetCustomRules(std::forward<CustomRulesT>(value)); return *this;}
    template<typename CustomRulesT = CustomRule>
    UpdateAppRequest& AddCustomRules(CustomRulesT&& value) { m_customRulesHasBeenSet = true; m_customRules.emplace_back(std::forward<CustomRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The build specification (build spec) for an Amplify app. </p>
     */
    inline const Aws::String& GetBuildSpec() const { return m_buildSpec; }
    inline bool BuildSpecHasBeenSet() const { return m_buildSpecHasBeenSet; }
    template<typename BuildSpecT = Aws::String>
    void SetBuildSpec(BuildSpecT&& value) { m_buildSpecHasBeenSet = true; m_buildSpec = std::forward<BuildSpecT>(value); }
    template<typename BuildSpecT = Aws::String>
    UpdateAppRequest& WithBuildSpec(BuildSpecT&& value) { SetBuildSpec(std::forward<BuildSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom HTTP headers for an Amplify app.</p>
     */
    inline const Aws::String& GetCustomHeaders() const { return m_customHeaders; }
    inline bool CustomHeadersHasBeenSet() const { return m_customHeadersHasBeenSet; }
    template<typename CustomHeadersT = Aws::String>
    void SetCustomHeaders(CustomHeadersT&& value) { m_customHeadersHasBeenSet = true; m_customHeaders = std::forward<CustomHeadersT>(value); }
    template<typename CustomHeadersT = Aws::String>
    UpdateAppRequest& WithCustomHeaders(CustomHeadersT&& value) { SetCustomHeaders(std::forward<CustomHeadersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables automated branch creation for an Amplify app. </p>
     */
    inline bool GetEnableAutoBranchCreation() const { return m_enableAutoBranchCreation; }
    inline bool EnableAutoBranchCreationHasBeenSet() const { return m_enableAutoBranchCreationHasBeenSet; }
    inline void SetEnableAutoBranchCreation(bool value) { m_enableAutoBranchCreationHasBeenSet = true; m_enableAutoBranchCreation = value; }
    inline UpdateAppRequest& WithEnableAutoBranchCreation(bool value) { SetEnableAutoBranchCreation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the automated branch creation glob patterns for an Amplify app.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetAutoBranchCreationPatterns() const { return m_autoBranchCreationPatterns; }
    inline bool AutoBranchCreationPatternsHasBeenSet() const { return m_autoBranchCreationPatternsHasBeenSet; }
    template<typename AutoBranchCreationPatternsT = Aws::Vector<Aws::String>>
    void SetAutoBranchCreationPatterns(AutoBranchCreationPatternsT&& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns = std::forward<AutoBranchCreationPatternsT>(value); }
    template<typename AutoBranchCreationPatternsT = Aws::Vector<Aws::String>>
    UpdateAppRequest& WithAutoBranchCreationPatterns(AutoBranchCreationPatternsT&& value) { SetAutoBranchCreationPatterns(std::forward<AutoBranchCreationPatternsT>(value)); return *this;}
    template<typename AutoBranchCreationPatternsT = Aws::String>
    UpdateAppRequest& AddAutoBranchCreationPatterns(AutoBranchCreationPatternsT&& value) { m_autoBranchCreationPatternsHasBeenSet = true; m_autoBranchCreationPatterns.emplace_back(std::forward<AutoBranchCreationPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The automated branch creation configuration for an Amplify app. </p>
     */
    inline const AutoBranchCreationConfig& GetAutoBranchCreationConfig() const { return m_autoBranchCreationConfig; }
    inline bool AutoBranchCreationConfigHasBeenSet() const { return m_autoBranchCreationConfigHasBeenSet; }
    template<typename AutoBranchCreationConfigT = AutoBranchCreationConfig>
    void SetAutoBranchCreationConfig(AutoBranchCreationConfigT&& value) { m_autoBranchCreationConfigHasBeenSet = true; m_autoBranchCreationConfig = std::forward<AutoBranchCreationConfigT>(value); }
    template<typename AutoBranchCreationConfigT = AutoBranchCreationConfig>
    UpdateAppRequest& WithAutoBranchCreationConfig(AutoBranchCreationConfigT&& value) { SetAutoBranchCreationConfig(std::forward<AutoBranchCreationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Git repository for an Amplify app.</p>
     */
    inline const Aws::String& GetRepository() const { return m_repository; }
    inline bool RepositoryHasBeenSet() const { return m_repositoryHasBeenSet; }
    template<typename RepositoryT = Aws::String>
    void SetRepository(RepositoryT&& value) { m_repositoryHasBeenSet = true; m_repository = std::forward<RepositoryT>(value); }
    template<typename RepositoryT = Aws::String>
    UpdateAppRequest& WithRepository(RepositoryT&& value) { SetRepository(std::forward<RepositoryT>(value)); return *this;}
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
    inline const Aws::String& GetOauthToken() const { return m_oauthToken; }
    inline bool OauthTokenHasBeenSet() const { return m_oauthTokenHasBeenSet; }
    template<typename OauthTokenT = Aws::String>
    void SetOauthToken(OauthTokenT&& value) { m_oauthTokenHasBeenSet = true; m_oauthToken = std::forward<OauthTokenT>(value); }
    template<typename OauthTokenT = Aws::String>
    UpdateAppRequest& WithOauthToken(OauthTokenT&& value) { SetOauthToken(std::forward<OauthTokenT>(value)); return *this;}
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
    inline const Aws::String& GetAccessToken() const { return m_accessToken; }
    inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
    template<typename AccessTokenT = Aws::String>
    void SetAccessToken(AccessTokenT&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::forward<AccessTokenT>(value); }
    template<typename AccessTokenT = Aws::String>
    UpdateAppRequest& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the configuration details that apply to the jobs for an Amplify
     * app.</p>
     */
    inline const JobConfig& GetJobConfig() const { return m_jobConfig; }
    inline bool JobConfigHasBeenSet() const { return m_jobConfigHasBeenSet; }
    template<typename JobConfigT = JobConfig>
    void SetJobConfig(JobConfigT&& value) { m_jobConfigHasBeenSet = true; m_jobConfig = std::forward<JobConfigT>(value); }
    template<typename JobConfigT = JobConfig>
    UpdateAppRequest& WithJobConfig(JobConfigT&& value) { SetJobConfig(std::forward<JobConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cache configuration for the Amplify app.</p>
     */
    inline const CacheConfig& GetCacheConfig() const { return m_cacheConfig; }
    inline bool CacheConfigHasBeenSet() const { return m_cacheConfigHasBeenSet; }
    template<typename CacheConfigT = CacheConfig>
    void SetCacheConfig(CacheConfigT&& value) { m_cacheConfigHasBeenSet = true; m_cacheConfig = std::forward<CacheConfigT>(value); }
    template<typename CacheConfigT = CacheConfig>
    UpdateAppRequest& WithCacheConfig(CacheConfigT&& value) { SetCacheConfig(std::forward<CacheConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Platform m_platform{Platform::NOT_SET};
    bool m_platformHasBeenSet = false;

    Aws::String m_computeRoleArn;
    bool m_computeRoleArnHasBeenSet = false;

    Aws::String m_iamServiceRoleArn;
    bool m_iamServiceRoleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;

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

    Aws::String m_repository;
    bool m_repositoryHasBeenSet = false;

    Aws::String m_oauthToken;
    bool m_oauthTokenHasBeenSet = false;

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    JobConfig m_jobConfig;
    bool m_jobConfigHasBeenSet = false;

    CacheConfig m_cacheConfig;
    bool m_cacheConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
