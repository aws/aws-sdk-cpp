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
   * <p>The request structure for the update branch request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/UpdateBranchRequest">AWS
   * API Reference</a></p>
   */
  class UpdateBranchRequest : public AmplifyRequest
  {
  public:
    AWS_AMPLIFY_API UpdateBranchRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBranch"; }

    AWS_AMPLIFY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The unique ID for an Amplify app. </p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline UpdateBranchRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline UpdateBranchRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline UpdateBranchRequest& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the branch. </p>
     */
    inline const Aws::String& GetBranchName() const{ return m_branchName; }
    inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
    inline void SetBranchName(const Aws::String& value) { m_branchNameHasBeenSet = true; m_branchName = value; }
    inline void SetBranchName(Aws::String&& value) { m_branchNameHasBeenSet = true; m_branchName = std::move(value); }
    inline void SetBranchName(const char* value) { m_branchNameHasBeenSet = true; m_branchName.assign(value); }
    inline UpdateBranchRequest& WithBranchName(const Aws::String& value) { SetBranchName(value); return *this;}
    inline UpdateBranchRequest& WithBranchName(Aws::String&& value) { SetBranchName(std::move(value)); return *this;}
    inline UpdateBranchRequest& WithBranchName(const char* value) { SetBranchName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The description for the branch. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateBranchRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateBranchRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateBranchRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The framework for the branch. </p>
     */
    inline const Aws::String& GetFramework() const{ return m_framework; }
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }
    inline void SetFramework(const Aws::String& value) { m_frameworkHasBeenSet = true; m_framework = value; }
    inline void SetFramework(Aws::String&& value) { m_frameworkHasBeenSet = true; m_framework = std::move(value); }
    inline void SetFramework(const char* value) { m_frameworkHasBeenSet = true; m_framework.assign(value); }
    inline UpdateBranchRequest& WithFramework(const Aws::String& value) { SetFramework(value); return *this;}
    inline UpdateBranchRequest& WithFramework(Aws::String&& value) { SetFramework(std::move(value)); return *this;}
    inline UpdateBranchRequest& WithFramework(const char* value) { SetFramework(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the current stage for the branch. </p>
     */
    inline const Stage& GetStage() const{ return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(const Stage& value) { m_stageHasBeenSet = true; m_stage = value; }
    inline void SetStage(Stage&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }
    inline UpdateBranchRequest& WithStage(const Stage& value) { SetStage(value); return *this;}
    inline UpdateBranchRequest& WithStage(Stage&& value) { SetStage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Enables notifications for the branch. </p>
     */
    inline bool GetEnableNotification() const{ return m_enableNotification; }
    inline bool EnableNotificationHasBeenSet() const { return m_enableNotificationHasBeenSet; }
    inline void SetEnableNotification(bool value) { m_enableNotificationHasBeenSet = true; m_enableNotification = value; }
    inline UpdateBranchRequest& WithEnableNotification(bool value) { SetEnableNotification(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Enables auto building for the branch. </p>
     */
    inline bool GetEnableAutoBuild() const{ return m_enableAutoBuild; }
    inline bool EnableAutoBuildHasBeenSet() const { return m_enableAutoBuildHasBeenSet; }
    inline void SetEnableAutoBuild(bool value) { m_enableAutoBuildHasBeenSet = true; m_enableAutoBuild = value; }
    inline UpdateBranchRequest& WithEnableAutoBuild(bool value) { SetEnableAutoBuild(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The environment variables for the branch. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const{ return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    inline void SetEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }
    inline void SetEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }
    inline UpdateBranchRequest& WithEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironmentVariables(value); return *this;}
    inline UpdateBranchRequest& WithEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}
    inline UpdateBranchRequest& AddEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }
    inline UpdateBranchRequest& AddEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }
    inline UpdateBranchRequest& AddEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }
    inline UpdateBranchRequest& AddEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateBranchRequest& AddEnvironmentVariables(const char* key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }
    inline UpdateBranchRequest& AddEnvironmentVariables(Aws::String&& key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }
    inline UpdateBranchRequest& AddEnvironmentVariables(const char* key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The basic authorization credentials for the branch. You must base64-encode
     * the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline const Aws::String& GetBasicAuthCredentials() const{ return m_basicAuthCredentials; }
    inline bool BasicAuthCredentialsHasBeenSet() const { return m_basicAuthCredentialsHasBeenSet; }
    inline void SetBasicAuthCredentials(const Aws::String& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = value; }
    inline void SetBasicAuthCredentials(Aws::String&& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = std::move(value); }
    inline void SetBasicAuthCredentials(const char* value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials.assign(value); }
    inline UpdateBranchRequest& WithBasicAuthCredentials(const Aws::String& value) { SetBasicAuthCredentials(value); return *this;}
    inline UpdateBranchRequest& WithBasicAuthCredentials(Aws::String&& value) { SetBasicAuthCredentials(std::move(value)); return *this;}
    inline UpdateBranchRequest& WithBasicAuthCredentials(const char* value) { SetBasicAuthCredentials(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Enables basic authorization for the branch. </p>
     */
    inline bool GetEnableBasicAuth() const{ return m_enableBasicAuth; }
    inline bool EnableBasicAuthHasBeenSet() const { return m_enableBasicAuthHasBeenSet; }
    inline void SetEnableBasicAuth(bool value) { m_enableBasicAuthHasBeenSet = true; m_enableBasicAuth = value; }
    inline UpdateBranchRequest& WithEnableBasicAuth(bool value) { SetEnableBasicAuth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables performance mode for the branch.</p> <p>Performance mode optimizes
     * for faster hosting performance by keeping content cached at the edge for a
     * longer interval. When performance mode is enabled, hosting configuration or code
     * changes can take up to 10 minutes to roll out. </p>
     */
    inline bool GetEnablePerformanceMode() const{ return m_enablePerformanceMode; }
    inline bool EnablePerformanceModeHasBeenSet() const { return m_enablePerformanceModeHasBeenSet; }
    inline void SetEnablePerformanceMode(bool value) { m_enablePerformanceModeHasBeenSet = true; m_enablePerformanceMode = value; }
    inline UpdateBranchRequest& WithEnablePerformanceMode(bool value) { SetEnablePerformanceMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The build specification (build spec) for the branch. </p>
     */
    inline const Aws::String& GetBuildSpec() const{ return m_buildSpec; }
    inline bool BuildSpecHasBeenSet() const { return m_buildSpecHasBeenSet; }
    inline void SetBuildSpec(const Aws::String& value) { m_buildSpecHasBeenSet = true; m_buildSpec = value; }
    inline void SetBuildSpec(Aws::String&& value) { m_buildSpecHasBeenSet = true; m_buildSpec = std::move(value); }
    inline void SetBuildSpec(const char* value) { m_buildSpecHasBeenSet = true; m_buildSpec.assign(value); }
    inline UpdateBranchRequest& WithBuildSpec(const Aws::String& value) { SetBuildSpec(value); return *this;}
    inline UpdateBranchRequest& WithBuildSpec(Aws::String&& value) { SetBuildSpec(std::move(value)); return *this;}
    inline UpdateBranchRequest& WithBuildSpec(const char* value) { SetBuildSpec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The content Time to Live (TTL) for the website in seconds. </p>
     */
    inline const Aws::String& GetTtl() const{ return m_ttl; }
    inline bool TtlHasBeenSet() const { return m_ttlHasBeenSet; }
    inline void SetTtl(const Aws::String& value) { m_ttlHasBeenSet = true; m_ttl = value; }
    inline void SetTtl(Aws::String&& value) { m_ttlHasBeenSet = true; m_ttl = std::move(value); }
    inline void SetTtl(const char* value) { m_ttlHasBeenSet = true; m_ttl.assign(value); }
    inline UpdateBranchRequest& WithTtl(const Aws::String& value) { SetTtl(value); return *this;}
    inline UpdateBranchRequest& WithTtl(Aws::String&& value) { SetTtl(std::move(value)); return *this;}
    inline UpdateBranchRequest& WithTtl(const char* value) { SetTtl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The display name for a branch. This is used as the default domain prefix.
     * </p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline UpdateBranchRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline UpdateBranchRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline UpdateBranchRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Enables pull request previews for this branch. </p>
     */
    inline bool GetEnablePullRequestPreview() const{ return m_enablePullRequestPreview; }
    inline bool EnablePullRequestPreviewHasBeenSet() const { return m_enablePullRequestPreviewHasBeenSet; }
    inline void SetEnablePullRequestPreview(bool value) { m_enablePullRequestPreviewHasBeenSet = true; m_enablePullRequestPreview = value; }
    inline UpdateBranchRequest& WithEnablePullRequestPreview(bool value) { SetEnablePullRequestPreview(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amplify environment name for the pull request. </p>
     */
    inline const Aws::String& GetPullRequestEnvironmentName() const{ return m_pullRequestEnvironmentName; }
    inline bool PullRequestEnvironmentNameHasBeenSet() const { return m_pullRequestEnvironmentNameHasBeenSet; }
    inline void SetPullRequestEnvironmentName(const Aws::String& value) { m_pullRequestEnvironmentNameHasBeenSet = true; m_pullRequestEnvironmentName = value; }
    inline void SetPullRequestEnvironmentName(Aws::String&& value) { m_pullRequestEnvironmentNameHasBeenSet = true; m_pullRequestEnvironmentName = std::move(value); }
    inline void SetPullRequestEnvironmentName(const char* value) { m_pullRequestEnvironmentNameHasBeenSet = true; m_pullRequestEnvironmentName.assign(value); }
    inline UpdateBranchRequest& WithPullRequestEnvironmentName(const Aws::String& value) { SetPullRequestEnvironmentName(value); return *this;}
    inline UpdateBranchRequest& WithPullRequestEnvironmentName(Aws::String&& value) { SetPullRequestEnvironmentName(std::move(value)); return *this;}
    inline UpdateBranchRequest& WithPullRequestEnvironmentName(const char* value) { SetPullRequestEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for a backend environment that is part of a
     * Gen 1 Amplify app. </p> <p>This field is available to Amplify Gen 1 apps only
     * where the backend is created using Amplify Studio or the Amplify command line
     * interface (CLI).</p>
     */
    inline const Aws::String& GetBackendEnvironmentArn() const{ return m_backendEnvironmentArn; }
    inline bool BackendEnvironmentArnHasBeenSet() const { return m_backendEnvironmentArnHasBeenSet; }
    inline void SetBackendEnvironmentArn(const Aws::String& value) { m_backendEnvironmentArnHasBeenSet = true; m_backendEnvironmentArn = value; }
    inline void SetBackendEnvironmentArn(Aws::String&& value) { m_backendEnvironmentArnHasBeenSet = true; m_backendEnvironmentArn = std::move(value); }
    inline void SetBackendEnvironmentArn(const char* value) { m_backendEnvironmentArnHasBeenSet = true; m_backendEnvironmentArn.assign(value); }
    inline UpdateBranchRequest& WithBackendEnvironmentArn(const Aws::String& value) { SetBackendEnvironmentArn(value); return *this;}
    inline UpdateBranchRequest& WithBackendEnvironmentArn(Aws::String&& value) { SetBackendEnvironmentArn(std::move(value)); return *this;}
    inline UpdateBranchRequest& WithBackendEnvironmentArn(const char* value) { SetBackendEnvironmentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The backend for a <code>Branch</code> of an Amplify app. Use for a backend
     * created from an CloudFormation stack.</p> <p>This field is available to Amplify
     * Gen 2 apps only. When you deploy an application with Amplify Gen 2, you
     * provision the app's backend infrastructure using Typescript code.</p>
     */
    inline const Backend& GetBackend() const{ return m_backend; }
    inline bool BackendHasBeenSet() const { return m_backendHasBeenSet; }
    inline void SetBackend(const Backend& value) { m_backendHasBeenSet = true; m_backend = value; }
    inline void SetBackend(Backend&& value) { m_backendHasBeenSet = true; m_backend = std::move(value); }
    inline UpdateBranchRequest& WithBackend(const Backend& value) { SetBackend(value); return *this;}
    inline UpdateBranchRequest& WithBackend(Backend&& value) { SetBackend(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_branchName;
    bool m_branchNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_framework;
    bool m_frameworkHasBeenSet = false;

    Stage m_stage;
    bool m_stageHasBeenSet = false;

    bool m_enableNotification;
    bool m_enableNotificationHasBeenSet = false;

    bool m_enableAutoBuild;
    bool m_enableAutoBuildHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;

    Aws::String m_basicAuthCredentials;
    bool m_basicAuthCredentialsHasBeenSet = false;

    bool m_enableBasicAuth;
    bool m_enableBasicAuthHasBeenSet = false;

    bool m_enablePerformanceMode;
    bool m_enablePerformanceModeHasBeenSet = false;

    Aws::String m_buildSpec;
    bool m_buildSpecHasBeenSet = false;

    Aws::String m_ttl;
    bool m_ttlHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    bool m_enablePullRequestPreview;
    bool m_enablePullRequestPreviewHasBeenSet = false;

    Aws::String m_pullRequestEnvironmentName;
    bool m_pullRequestEnvironmentNameHasBeenSet = false;

    Aws::String m_backendEnvironmentArn;
    bool m_backendEnvironmentArnHasBeenSet = false;

    Backend m_backend;
    bool m_backendHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
