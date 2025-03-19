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
   * <p>Describes the automated branch creation configuration. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/AutoBranchCreationConfig">AWS
   * API Reference</a></p>
   */
  class AutoBranchCreationConfig
  {
  public:
    AWS_AMPLIFY_API AutoBranchCreationConfig() = default;
    AWS_AMPLIFY_API AutoBranchCreationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API AutoBranchCreationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the current stage for the autocreated branch. </p>
     */
    inline Stage GetStage() const { return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(Stage value) { m_stageHasBeenSet = true; m_stage = value; }
    inline AutoBranchCreationConfig& WithStage(Stage value) { SetStage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The framework for the autocreated branch. </p>
     */
    inline const Aws::String& GetFramework() const { return m_framework; }
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }
    template<typename FrameworkT = Aws::String>
    void SetFramework(FrameworkT&& value) { m_frameworkHasBeenSet = true; m_framework = std::forward<FrameworkT>(value); }
    template<typename FrameworkT = Aws::String>
    AutoBranchCreationConfig& WithFramework(FrameworkT&& value) { SetFramework(std::forward<FrameworkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables auto building for the autocreated branch. </p>
     */
    inline bool GetEnableAutoBuild() const { return m_enableAutoBuild; }
    inline bool EnableAutoBuildHasBeenSet() const { return m_enableAutoBuildHasBeenSet; }
    inline void SetEnableAutoBuild(bool value) { m_enableAutoBuildHasBeenSet = true; m_enableAutoBuild = value; }
    inline AutoBranchCreationConfig& WithEnableAutoBuild(bool value) { SetEnableAutoBuild(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables for the autocreated branch. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironmentVariables(EnvironmentVariablesT&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::forward<EnvironmentVariablesT>(value); }
    template<typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    AutoBranchCreationConfig& WithEnvironmentVariables(EnvironmentVariablesT&& value) { SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value)); return *this;}
    template<typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
    AutoBranchCreationConfig& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
      m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The basic authorization credentials for the autocreated branch. You must
     * base64-encode the authorization credentials and provide them in the format
     * <code>user:password</code>.</p>
     */
    inline const Aws::String& GetBasicAuthCredentials() const { return m_basicAuthCredentials; }
    inline bool BasicAuthCredentialsHasBeenSet() const { return m_basicAuthCredentialsHasBeenSet; }
    template<typename BasicAuthCredentialsT = Aws::String>
    void SetBasicAuthCredentials(BasicAuthCredentialsT&& value) { m_basicAuthCredentialsHasBeenSet = true; m_basicAuthCredentials = std::forward<BasicAuthCredentialsT>(value); }
    template<typename BasicAuthCredentialsT = Aws::String>
    AutoBranchCreationConfig& WithBasicAuthCredentials(BasicAuthCredentialsT&& value) { SetBasicAuthCredentials(std::forward<BasicAuthCredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables basic authorization for the autocreated branch. </p>
     */
    inline bool GetEnableBasicAuth() const { return m_enableBasicAuth; }
    inline bool EnableBasicAuthHasBeenSet() const { return m_enableBasicAuthHasBeenSet; }
    inline void SetEnableBasicAuth(bool value) { m_enableBasicAuthHasBeenSet = true; m_enableBasicAuth = value; }
    inline AutoBranchCreationConfig& WithEnableBasicAuth(bool value) { SetEnableBasicAuth(value); return *this;}
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
    inline AutoBranchCreationConfig& WithEnablePerformanceMode(bool value) { SetEnablePerformanceMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The build specification (build spec) for the autocreated branch. </p>
     */
    inline const Aws::String& GetBuildSpec() const { return m_buildSpec; }
    inline bool BuildSpecHasBeenSet() const { return m_buildSpecHasBeenSet; }
    template<typename BuildSpecT = Aws::String>
    void SetBuildSpec(BuildSpecT&& value) { m_buildSpecHasBeenSet = true; m_buildSpec = std::forward<BuildSpecT>(value); }
    template<typename BuildSpecT = Aws::String>
    AutoBranchCreationConfig& WithBuildSpec(BuildSpecT&& value) { SetBuildSpec(std::forward<BuildSpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables pull request previews for the autocreated branch. </p>
     */
    inline bool GetEnablePullRequestPreview() const { return m_enablePullRequestPreview; }
    inline bool EnablePullRequestPreviewHasBeenSet() const { return m_enablePullRequestPreviewHasBeenSet; }
    inline void SetEnablePullRequestPreview(bool value) { m_enablePullRequestPreviewHasBeenSet = true; m_enablePullRequestPreview = value; }
    inline AutoBranchCreationConfig& WithEnablePullRequestPreview(bool value) { SetEnablePullRequestPreview(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amplify environment name for the pull request. </p>
     */
    inline const Aws::String& GetPullRequestEnvironmentName() const { return m_pullRequestEnvironmentName; }
    inline bool PullRequestEnvironmentNameHasBeenSet() const { return m_pullRequestEnvironmentNameHasBeenSet; }
    template<typename PullRequestEnvironmentNameT = Aws::String>
    void SetPullRequestEnvironmentName(PullRequestEnvironmentNameT&& value) { m_pullRequestEnvironmentNameHasBeenSet = true; m_pullRequestEnvironmentName = std::forward<PullRequestEnvironmentNameT>(value); }
    template<typename PullRequestEnvironmentNameT = Aws::String>
    AutoBranchCreationConfig& WithPullRequestEnvironmentName(PullRequestEnvironmentNameT&& value) { SetPullRequestEnvironmentName(std::forward<PullRequestEnvironmentNameT>(value)); return *this;}
    ///@}
  private:

    Stage m_stage{Stage::NOT_SET};
    bool m_stageHasBeenSet = false;

    Aws::String m_framework;
    bool m_frameworkHasBeenSet = false;

    bool m_enableAutoBuild{false};
    bool m_enableAutoBuildHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet = false;

    Aws::String m_basicAuthCredentials;
    bool m_basicAuthCredentialsHasBeenSet = false;

    bool m_enableBasicAuth{false};
    bool m_enableBasicAuthHasBeenSet = false;

    bool m_enablePerformanceMode{false};
    bool m_enablePerformanceModeHasBeenSet = false;

    Aws::String m_buildSpec;
    bool m_buildSpecHasBeenSet = false;

    bool m_enablePullRequestPreview{false};
    bool m_enablePullRequestPreviewHasBeenSet = false;

    Aws::String m_pullRequestEnvironmentName;
    bool m_pullRequestEnvironmentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
