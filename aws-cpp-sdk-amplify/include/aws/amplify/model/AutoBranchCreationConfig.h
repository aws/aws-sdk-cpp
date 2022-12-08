/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/Stage.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p> Describes the automated branch creation configuration. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/AutoBranchCreationConfig">AWS
   * API Reference</a></p>
   */
  class AutoBranchCreationConfig
  {
  public:
    AWS_AMPLIFY_API AutoBranchCreationConfig();
    AWS_AMPLIFY_API AutoBranchCreationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API AutoBranchCreationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Describes the current stage for the autocreated branch. </p>
     */
    inline const Stage& GetStage() const{ return m_stage; }

    /**
     * <p> Describes the current stage for the autocreated branch. </p>
     */
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }

    /**
     * <p> Describes the current stage for the autocreated branch. </p>
     */
    inline void SetStage(const Stage& value) { m_stageHasBeenSet = true; m_stage = value; }

    /**
     * <p> Describes the current stage for the autocreated branch. </p>
     */
    inline void SetStage(Stage&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }

    /**
     * <p> Describes the current stage for the autocreated branch. </p>
     */
    inline AutoBranchCreationConfig& WithStage(const Stage& value) { SetStage(value); return *this;}

    /**
     * <p> Describes the current stage for the autocreated branch. </p>
     */
    inline AutoBranchCreationConfig& WithStage(Stage&& value) { SetStage(std::move(value)); return *this;}


    /**
     * <p> The framework for the autocreated branch. </p>
     */
    inline const Aws::String& GetFramework() const{ return m_framework; }

    /**
     * <p> The framework for the autocreated branch. </p>
     */
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }

    /**
     * <p> The framework for the autocreated branch. </p>
     */
    inline void SetFramework(const Aws::String& value) { m_frameworkHasBeenSet = true; m_framework = value; }

    /**
     * <p> The framework for the autocreated branch. </p>
     */
    inline void SetFramework(Aws::String&& value) { m_frameworkHasBeenSet = true; m_framework = std::move(value); }

    /**
     * <p> The framework for the autocreated branch. </p>
     */
    inline void SetFramework(const char* value) { m_frameworkHasBeenSet = true; m_framework.assign(value); }

    /**
     * <p> The framework for the autocreated branch. </p>
     */
    inline AutoBranchCreationConfig& WithFramework(const Aws::String& value) { SetFramework(value); return *this;}

    /**
     * <p> The framework for the autocreated branch. </p>
     */
    inline AutoBranchCreationConfig& WithFramework(Aws::String&& value) { SetFramework(std::move(value)); return *this;}

    /**
     * <p> The framework for the autocreated branch. </p>
     */
    inline AutoBranchCreationConfig& WithFramework(const char* value) { SetFramework(value); return *this;}


    /**
     * <p> Enables auto building for the autocreated branch. </p>
     */
    inline bool GetEnableAutoBuild() const{ return m_enableAutoBuild; }

    /**
     * <p> Enables auto building for the autocreated branch. </p>
     */
    inline bool EnableAutoBuildHasBeenSet() const { return m_enableAutoBuildHasBeenSet; }

    /**
     * <p> Enables auto building for the autocreated branch. </p>
     */
    inline void SetEnableAutoBuild(bool value) { m_enableAutoBuildHasBeenSet = true; m_enableAutoBuild = value; }

    /**
     * <p> Enables auto building for the autocreated branch. </p>
     */
    inline AutoBranchCreationConfig& WithEnableAutoBuild(bool value) { SetEnableAutoBuild(value); return *this;}


    /**
     * <p> The environment variables for the autocreated branch. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const{ return m_environmentVariables; }

    /**
     * <p> The environment variables for the autocreated branch. </p>
     */
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }

    /**
     * <p> The environment variables for the autocreated branch. </p>
     */
    inline void SetEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }

    /**
     * <p> The environment variables for the autocreated branch. </p>
     */
    inline void SetEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }

    /**
     * <p> The environment variables for the autocreated branch. </p>
     */
    inline AutoBranchCreationConfig& WithEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironmentVariables(value); return *this;}

    /**
     * <p> The environment variables for the autocreated branch. </p>
     */
    inline AutoBranchCreationConfig& WithEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}

    /**
     * <p> The environment variables for the autocreated branch. </p>
     */
    inline AutoBranchCreationConfig& AddEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }

    /**
     * <p> The environment variables for the autocreated branch. </p>
     */
    inline AutoBranchCreationConfig& AddEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p> The environment variables for the autocreated branch. </p>
     */
    inline AutoBranchCreationConfig& AddEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The environment variables for the autocreated branch. </p>
     */
    inline AutoBranchCreationConfig& AddEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The environment variables for the autocreated branch. </p>
     */
    inline AutoBranchCreationConfig& AddEnvironmentVariables(const char* key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The environment variables for the autocreated branch. </p>
     */
    inline AutoBranchCreationConfig& AddEnvironmentVariables(Aws::String&& key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p> The environment variables for the autocreated branch. </p>
     */
    inline AutoBranchCreationConfig& AddEnvironmentVariables(const char* key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }


    /**
     * <p> The basic authorization credentials for the autocreated branch. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline const Aws::String& GetBasicAuthCredentials() const{ return m_basicAuthCredentials; }

    /**
     * <p> The basic authorization credentials for the autocreated branch. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline bool BasicAuthCredentialsHasBeenSet() const { return m_basicAuthCredentialsHasBeenSet; }

    /**
     * <p> The basic authorization credentials for the autocreated branch. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline void SetBasicAuthCredentials(const Aws::String& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = value; }

    /**
     * <p> The basic authorization credentials for the autocreated branch. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline void SetBasicAuthCredentials(Aws::String&& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = std::move(value); }

    /**
     * <p> The basic authorization credentials for the autocreated branch. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline void SetBasicAuthCredentials(const char* value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials.assign(value); }

    /**
     * <p> The basic authorization credentials for the autocreated branch. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline AutoBranchCreationConfig& WithBasicAuthCredentials(const Aws::String& value) { SetBasicAuthCredentials(value); return *this;}

    /**
     * <p> The basic authorization credentials for the autocreated branch. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline AutoBranchCreationConfig& WithBasicAuthCredentials(Aws::String&& value) { SetBasicAuthCredentials(std::move(value)); return *this;}

    /**
     * <p> The basic authorization credentials for the autocreated branch. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline AutoBranchCreationConfig& WithBasicAuthCredentials(const char* value) { SetBasicAuthCredentials(value); return *this;}


    /**
     * <p> Enables basic authorization for the autocreated branch. </p>
     */
    inline bool GetEnableBasicAuth() const{ return m_enableBasicAuth; }

    /**
     * <p> Enables basic authorization for the autocreated branch. </p>
     */
    inline bool EnableBasicAuthHasBeenSet() const { return m_enableBasicAuthHasBeenSet; }

    /**
     * <p> Enables basic authorization for the autocreated branch. </p>
     */
    inline void SetEnableBasicAuth(bool value) { m_enableBasicAuthHasBeenSet = true; m_enableBasicAuth = value; }

    /**
     * <p> Enables basic authorization for the autocreated branch. </p>
     */
    inline AutoBranchCreationConfig& WithEnableBasicAuth(bool value) { SetEnableBasicAuth(value); return *this;}


    /**
     * <p>Enables performance mode for the branch.</p> <p>Performance mode optimizes
     * for faster hosting performance by keeping content cached at the edge for a
     * longer interval. When performance mode is enabled, hosting configuration or code
     * changes can take up to 10 minutes to roll out. </p>
     */
    inline bool GetEnablePerformanceMode() const{ return m_enablePerformanceMode; }

    /**
     * <p>Enables performance mode for the branch.</p> <p>Performance mode optimizes
     * for faster hosting performance by keeping content cached at the edge for a
     * longer interval. When performance mode is enabled, hosting configuration or code
     * changes can take up to 10 minutes to roll out. </p>
     */
    inline bool EnablePerformanceModeHasBeenSet() const { return m_enablePerformanceModeHasBeenSet; }

    /**
     * <p>Enables performance mode for the branch.</p> <p>Performance mode optimizes
     * for faster hosting performance by keeping content cached at the edge for a
     * longer interval. When performance mode is enabled, hosting configuration or code
     * changes can take up to 10 minutes to roll out. </p>
     */
    inline void SetEnablePerformanceMode(bool value) { m_enablePerformanceModeHasBeenSet = true; m_enablePerformanceMode = value; }

    /**
     * <p>Enables performance mode for the branch.</p> <p>Performance mode optimizes
     * for faster hosting performance by keeping content cached at the edge for a
     * longer interval. When performance mode is enabled, hosting configuration or code
     * changes can take up to 10 minutes to roll out. </p>
     */
    inline AutoBranchCreationConfig& WithEnablePerformanceMode(bool value) { SetEnablePerformanceMode(value); return *this;}


    /**
     * <p> The build specification (build spec) for the autocreated branch. </p>
     */
    inline const Aws::String& GetBuildSpec() const{ return m_buildSpec; }

    /**
     * <p> The build specification (build spec) for the autocreated branch. </p>
     */
    inline bool BuildSpecHasBeenSet() const { return m_buildSpecHasBeenSet; }

    /**
     * <p> The build specification (build spec) for the autocreated branch. </p>
     */
    inline void SetBuildSpec(const Aws::String& value) { m_buildSpecHasBeenSet = true; m_buildSpec = value; }

    /**
     * <p> The build specification (build spec) for the autocreated branch. </p>
     */
    inline void SetBuildSpec(Aws::String&& value) { m_buildSpecHasBeenSet = true; m_buildSpec = std::move(value); }

    /**
     * <p> The build specification (build spec) for the autocreated branch. </p>
     */
    inline void SetBuildSpec(const char* value) { m_buildSpecHasBeenSet = true; m_buildSpec.assign(value); }

    /**
     * <p> The build specification (build spec) for the autocreated branch. </p>
     */
    inline AutoBranchCreationConfig& WithBuildSpec(const Aws::String& value) { SetBuildSpec(value); return *this;}

    /**
     * <p> The build specification (build spec) for the autocreated branch. </p>
     */
    inline AutoBranchCreationConfig& WithBuildSpec(Aws::String&& value) { SetBuildSpec(std::move(value)); return *this;}

    /**
     * <p> The build specification (build spec) for the autocreated branch. </p>
     */
    inline AutoBranchCreationConfig& WithBuildSpec(const char* value) { SetBuildSpec(value); return *this;}


    /**
     * <p> Enables pull request previews for the autocreated branch. </p>
     */
    inline bool GetEnablePullRequestPreview() const{ return m_enablePullRequestPreview; }

    /**
     * <p> Enables pull request previews for the autocreated branch. </p>
     */
    inline bool EnablePullRequestPreviewHasBeenSet() const { return m_enablePullRequestPreviewHasBeenSet; }

    /**
     * <p> Enables pull request previews for the autocreated branch. </p>
     */
    inline void SetEnablePullRequestPreview(bool value) { m_enablePullRequestPreviewHasBeenSet = true; m_enablePullRequestPreview = value; }

    /**
     * <p> Enables pull request previews for the autocreated branch. </p>
     */
    inline AutoBranchCreationConfig& WithEnablePullRequestPreview(bool value) { SetEnablePullRequestPreview(value); return *this;}


    /**
     * <p> The Amplify environment name for the pull request. </p>
     */
    inline const Aws::String& GetPullRequestEnvironmentName() const{ return m_pullRequestEnvironmentName; }

    /**
     * <p> The Amplify environment name for the pull request. </p>
     */
    inline bool PullRequestEnvironmentNameHasBeenSet() const { return m_pullRequestEnvironmentNameHasBeenSet; }

    /**
     * <p> The Amplify environment name for the pull request. </p>
     */
    inline void SetPullRequestEnvironmentName(const Aws::String& value) { m_pullRequestEnvironmentNameHasBeenSet = true; m_pullRequestEnvironmentName = value; }

    /**
     * <p> The Amplify environment name for the pull request. </p>
     */
    inline void SetPullRequestEnvironmentName(Aws::String&& value) { m_pullRequestEnvironmentNameHasBeenSet = true; m_pullRequestEnvironmentName = std::move(value); }

    /**
     * <p> The Amplify environment name for the pull request. </p>
     */
    inline void SetPullRequestEnvironmentName(const char* value) { m_pullRequestEnvironmentNameHasBeenSet = true; m_pullRequestEnvironmentName.assign(value); }

    /**
     * <p> The Amplify environment name for the pull request. </p>
     */
    inline AutoBranchCreationConfig& WithPullRequestEnvironmentName(const Aws::String& value) { SetPullRequestEnvironmentName(value); return *this;}

    /**
     * <p> The Amplify environment name for the pull request. </p>
     */
    inline AutoBranchCreationConfig& WithPullRequestEnvironmentName(Aws::String&& value) { SetPullRequestEnvironmentName(std::move(value)); return *this;}

    /**
     * <p> The Amplify environment name for the pull request. </p>
     */
    inline AutoBranchCreationConfig& WithPullRequestEnvironmentName(const char* value) { SetPullRequestEnvironmentName(value); return *this;}

  private:

    Stage m_stage;
    bool m_stageHasBeenSet = false;

    Aws::String m_framework;
    bool m_frameworkHasBeenSet = false;

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

    bool m_enablePullRequestPreview;
    bool m_enablePullRequestPreviewHasBeenSet = false;

    Aws::String m_pullRequestEnvironmentName;
    bool m_pullRequestEnvironmentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
