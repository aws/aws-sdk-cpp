/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/AmplifyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplify/model/Stage.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/amplify/model/Backend.h>
#include <utility>

namespace Aws
{
namespace Amplify
{
namespace Model
{

  /**
   * <p> The request structure for the create branch request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateBranchRequest">AWS
   * API Reference</a></p>
   */
  class CreateBranchRequest : public AmplifyRequest
  {
  public:
    AWS_AMPLIFY_API CreateBranchRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBranch"; }

    AWS_AMPLIFY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    CreateBranchRequest& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the branch. </p>
     */
    inline const Aws::String& GetBranchName() const { return m_branchName; }
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
    template<typename BranchNameT = Aws::String>
    void SetBranchName(BranchNameT&& value) { m_branchNameHasBeenSet = true; m_branchName = std::forward<BranchNameT>(value); }
    template<typename BranchNameT = Aws::String>
    CreateBranchRequest& WithBranchName(BranchNameT&& value) { SetBranchName(std::forward<BranchNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the branch. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateBranchRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the current stage for the branch. </p>
     */
    inline Stage GetStage() const { return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(Stage value) { m_stageHasBeenSet = true; m_stage = value; }
    inline CreateBranchRequest& WithStage(Stage value) { SetStage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The framework for the branch. </p>
     */
    inline const Aws::String& GetFramework() const { return m_framework; }
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }
    template<typename FrameworkT = Aws::String>
    void SetFramework(FrameworkT&& value) { m_frameworkHasBeenSet = true; m_framework = std::forward<FrameworkT>(value); }
    template<typename FrameworkT = Aws::String>
    CreateBranchRequest& WithFramework(FrameworkT&& value) { SetFramework(std::forward<FrameworkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Enables notifications for the branch. </p>
     */
    inline bool GetEnableNotification() const { return m_enableNotification; }
    inline bool EnableNotificationHasBeenSet() const { return m_enableNotificationHasBeenSet; }
    inline void SetEnableNotification(bool value) { m_enableNotificationHasBeenSet = true; m_enableNotification = value; }
    inline CreateBranchRequest& WithEnableNotification(bool value) { SetEnableNotification(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Enables auto building for the branch. </p>
     */
    inline bool GetEnableAutoBuild() const { return m_enableAutoBuild; }
    inline bool EnableAutoBuildHasBeenSet() const { return m_enableAutoBuildHasBeenSet; }
    inline void SetEnableAutoBuild(bool value) { m_enableAutoBuildHasBeenSet = true; m_enableAutoBuild = value; }
    inline CreateBranchRequest& WithEnableAutoBuild(bool value) { SetEnableAutoBuild(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the skew protection feature is enabled for the branch.</p>
     * <p>Deployment skew protection is available to Amplify applications to eliminate
     * version skew issues between client and servers in web applications. When you
     * apply skew protection to a branch, you can ensure that your clients always
     * interact with the correct version of server-side assets, regardless of when a
     * deployment occurs. For more information about skew protection, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/userguide/skew-protection.html">Skew
     * protection for Amplify deployments</a> in the <i>Amplify User Guide</i>.</p>
     */
    inline bool GetEnableSkewProtection() const { return m_enableSkewProtection; }
    inline bool EnableSkewProtectionHasBeenSet() const { return m_enableSkewProtectionHasBeenSet; }
    inline void SetEnableSkewProtection(bool value) { m_enableSkewProtectionHasBeenSet = true; m_enableSkewProtection = value; }
    inline CreateBranchRequest& WithEnableSkewProtection(bool value) { SetEnableSkewProtection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The environment variables for the branch. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironmentVariables(EnvironmentVariablesT&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::forward<EnvironmentVariablesT>(value); }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    CreateBranchRequest& WithEnvironmentVariables(EnvironmentVariablesT&& value) { SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value)); return *this;}
    template<typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
    CreateBranchRequest& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
      m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> The basic authorization credentials for the branch. You must base64-encode
     * the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline const Aws::String& GetBasicAuthCredentials() const { return m_basicAuthCredentials; }
    inline bool BasicAuthCredentialsHasBeenSet() const { return m_basicAuthCredentialsHasBeenSet; }
    template<typename BasicAuthCredentialsT = Aws::String>
    void SetBasicAuthCredentials(BasicAuthCredentialsT&& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = std::forward<BasicAuthCredentialsT>(value); }
    template<typename BasicAuthCredentialsT = Aws::String>
    CreateBranchRequest& WithBasicAuthCredentials(BasicAuthCredentialsT&& value) { SetBasicAuthCredentials(std::forward<BasicAuthCredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Enables basic authorization for the branch. </p>
     */
    inline bool GetEnableBasicAuth() const { return m_enableBasicAuth; }
    inline bool EnableBasicAuthHasBeenSet() const { return m_enableBasicAuthHasBeenSet; }
    inline void SetEnableBasicAuth(bool value) { m_enableBasicAuthHasBeenSet = true; m_enableBasicAuth = value; }
    inline CreateBranchRequest& WithEnableBasicAuth(bool value) { SetEnableBasicAuth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables performance mode for the branch.</p> <p>Performance mode optimizes
     * for faster hosting performance by keeping content cached at the edge for a
     * longer interval. When performance mode is enabled, hosting configuration or code
     * changes can take up to 10 minutes to roll out. </p>
     */
    inline bool GetEnablePerformanceMode() const { return m_enablePerformanceMode; }
    inline bool EnablePerformanceModeHasBeenSet() const { return m_enablePerformanceModeHasBeenSet; }
    inline void SetEnablePerformanceMode(bool value) { m_enablePerformanceModeHasBeenSet = true; m_enablePerformanceMode = value; }
    inline CreateBranchRequest& WithEnablePerformanceMode(bool value) { SetEnablePerformanceMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The tag for the branch. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateBranchRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateBranchRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> The build specification (build spec) for the branch. </p>
     */
    inline const Aws::String& GetBuildSpec() const { return m_buildSpec; }
    inline bool BuildSpecHasBeenSet() const { return m_buildSpecHasBeenSet; }
    template<typename BuildSpecT = Aws::String>
    void SetBuildSpec(BuildSpecT&& value) { m_buildSpecHasBeenSet = true; m_buildSpec = std::forward<BuildSpecT>(value); }
    template<typename BuildSpecT = Aws::String>
    CreateBranchRequest& WithBuildSpec(BuildSpecT&& value) { SetBuildSpec(std::forward<BuildSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The content Time To Live (TTL) for the website in seconds. </p>
     */
    inline const Aws::String& GetTtl() const { return m_ttl; }
    inline bool TtlHasBeenSet() const { return m_ttlHasBeenSet; }
    template<typename TtlT = Aws::String>
    void SetTtl(TtlT&& value) { m_ttlHasBeenSet = true; m_ttl = std::forward<TtlT>(value); }
    template<typename TtlT = Aws::String>
    CreateBranchRequest& WithTtl(TtlT&& value) { SetTtl(std::forward<TtlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The display name for a branch. This is used as the default domain prefix.
     * </p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CreateBranchRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Enables pull request previews for this branch. </p>
     */
    inline bool GetEnablePullRequestPreview() const { return m_enablePullRequestPreview; }
    inline bool EnablePullRequestPreviewHasBeenSet() const { return m_enablePullRequestPreviewHasBeenSet; }
    inline void SetEnablePullRequestPreview(bool value) { m_enablePullRequestPreviewHasBeenSet = true; m_enablePullRequestPreview = value; }
    inline CreateBranchRequest& WithEnablePullRequestPreview(bool value) { SetEnablePullRequestPreview(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amplify environment name for the pull request. </p>
     */
    inline const Aws::String& GetPullRequestEnvironmentName() const { return m_pullRequestEnvironmentName; }
    inline bool PullRequestEnvironmentNameHasBeenSet() const { return m_pullRequestEnvironmentNameHasBeenSet; }
    template<typename PullRequestEnvironmentNameT = Aws::String>
    void SetPullRequestEnvironmentName(PullRequestEnvironmentNameT&& value) { m_pullRequestEnvironmentNameHasBeenSet = true; m_pullRequestEnvironmentName = std::forward<PullRequestEnvironmentNameT>(value); }
    template<typename PullRequestEnvironmentNameT = Aws::String>
    CreateBranchRequest& WithPullRequestEnvironmentName(PullRequestEnvironmentNameT&& value) { SetPullRequestEnvironmentName(std::forward<PullRequestEnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for a backend environment that is part of a
     * Gen 1 Amplify app. </p> <p>This field is available to Amplify Gen 1 apps only
     * where the backend is created using Amplify Studio or the Amplify command line
     * interface (CLI).</p>
     */
    inline const Aws::String& GetBackendEnvironmentArn() const { return m_backendEnvironmentArn; }
    inline bool BackendEnvironmentArnHasBeenSet() const { return m_backendEnvironmentArnHasBeenSet; }
    template<typename BackendEnvironmentArnT = Aws::String>
    void SetBackendEnvironmentArn(BackendEnvironmentArnT&& value) { m_backendEnvironmentArnHasBeenSet = true; m_backendEnvironmentArn = std::forward<BackendEnvironmentArnT>(value); }
    template<typename BackendEnvironmentArnT = Aws::String>
    CreateBranchRequest& WithBackendEnvironmentArn(BackendEnvironmentArnT&& value) { SetBackendEnvironmentArn(std::forward<BackendEnvironmentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The backend for a <code>Branch</code> of an Amplify app. Use for a backend
     * created from an CloudFormation stack.</p> <p>This field is available to Amplify
     * Gen 2 apps only. When you deploy an application with Amplify Gen 2, you
     * provision the app's backend infrastructure using Typescript code.</p>
     */
    inline const Backend& GetBackend() const { return m_backend; }
    inline bool BackendHasBeenSet() const { return m_backendHasBeenSet; }
    template<typename BackendT = Backend>
    void SetBackend(BackendT&& value) { m_backendHasBeenSet = true; m_backend = std::forward<BackendT>(value); }
    template<typename BackendT = Backend>
    CreateBranchRequest& WithBackend(BackendT&& value) { SetBackend(std::forward<BackendT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role to assign to a branch of an
     * SSR app. The SSR Compute role allows the Amplify Hosting compute service to
     * securely access specific Amazon Web Services resources based on the role's
     * permissions. For more information about the SSR Compute role, see <a
     * href="https://docs.aws.amazon.com/amplify/latest/userguide/amplify-SSR-compute-role.html">Adding
     * an SSR Compute role</a> in the <i>Amplify User Guide</i>.</p>
     */
    inline const Aws::String& GetComputeRoleArn() const { return m_computeRoleArn; }
    inline bool ComputeRoleArnHasBeenSet() const { return m_computeRoleArnHasBeenSet; }
    template<typename ComputeRoleArnT = Aws::String>
    void SetComputeRoleArn(ComputeRoleArnT&& value) { m_computeRoleArnHasBeenSet = true; m_computeRoleArn = std::forward<ComputeRoleArnT>(value); }
    template<typename ComputeRoleArnT = Aws::String>
    CreateBranchRequest& WithComputeRoleArn(ComputeRoleArnT&& value) { SetComputeRoleArn(std::forward<ComputeRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Stage m_stage{Stage::NOT_SET};
    bool m_stageHasBeenSet = false;

    Aws::String m_framework;
    bool m_frameworkHasBeenSet = false;

    bool m_enableNotification{false};
    bool m_enableNotificationHasBeenSet = false;

    bool m_enableAutoBuild{false};
    bool m_enableAutoBuildHasBeenSet = false;

    bool m_enableSkewProtection{false};
    bool m_enableSkewProtectionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;

    Aws::String m_basicAuthCredentials;
    bool m_basicAuthCredentialsHasBeenSet = false;

    bool m_enableBasicAuth{false};
    bool m_enableBasicAuthHasBeenSet = false;

    bool m_enablePerformanceMode{false};
    bool m_enablePerformanceModeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_buildSpec;
    bool m_buildSpecHasBeenSet = false;

    Aws::String m_ttl;
    bool m_ttlHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    bool m_enablePullRequestPreview{false};
    bool m_enablePullRequestPreviewHasBeenSet = false;

    Aws::String m_pullRequestEnvironmentName;
    bool m_pullRequestEnvironmentNameHasBeenSet = false;

    Aws::String m_backendEnvironmentArn;
    bool m_backendEnvironmentArnHasBeenSet = false;

    Backend m_backend;
    bool m_backendHasBeenSet = false;

    Aws::String m_computeRoleArn;
    bool m_computeRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
