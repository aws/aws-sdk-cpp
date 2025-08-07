/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/WebhookBuildType.h>
#include <aws/codebuild/model/ScopeConfiguration.h>
#include <aws/codebuild/model/PullRequestBuildPolicy.h>
#include <aws/codebuild/model/WebhookFilter.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class CreateWebhookRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API CreateWebhookRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWebhook"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the CodeBuild project.</p>
     */
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    CreateWebhookRequest& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p>  <p>It is recommended that you use
     * <code>filterGroups</code> instead of <code>branchFilter</code>. </p> 
     */
    inline const Aws::String& GetBranchFilter() const { return m_branchFilter; }
    inline bool BranchFilterHasBeenSet() const { return m_branchFilterHasBeenSet; }
    template<typename BranchFilterT = Aws::String>
    void SetBranchFilter(BranchFilterT&& value) { m_branchFilterHasBeenSet = true; m_branchFilter = std::forward<BranchFilterT>(value); }
    template<typename BranchFilterT = Aws::String>
    CreateWebhookRequest& WithBranchFilter(BranchFilterT&& value) { SetBranchFilter(std::forward<BranchFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of arrays of <code>WebhookFilter</code> objects used to determine
     * which webhooks are triggered. At least one <code>WebhookFilter</code> in the
     * array must specify <code>EVENT</code> as its <code>type</code>. </p> <p>For a
     * build to be triggered, at least one filter group in the
     * <code>filterGroups</code> array must pass. For a filter group to pass, each of
     * its filters must pass. </p>
     */
    inline const Aws::Vector<Aws::Vector<WebhookFilter>>& GetFilterGroups() const { return m_filterGroups; }
    inline bool FilterGroupsHasBeenSet() const { return m_filterGroupsHasBeenSet; }
    template<typename FilterGroupsT = Aws::Vector<Aws::Vector<WebhookFilter>>>
    void SetFilterGroups(FilterGroupsT&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups = std::forward<FilterGroupsT>(value); }
    template<typename FilterGroupsT = Aws::Vector<Aws::Vector<WebhookFilter>>>
    CreateWebhookRequest& WithFilterGroups(FilterGroupsT&& value) { SetFilterGroups(std::forward<FilterGroupsT>(value)); return *this;}
    template<typename FilterGroupsT = Aws::Vector<WebhookFilter>>
    CreateWebhookRequest& AddFilterGroups(FilterGroupsT&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups.emplace_back(std::forward<FilterGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the type of build this webhook will trigger.</p>  <p>
     * <code>RUNNER_BUILDKITE_BUILD</code> is only available for <code>NO_SOURCE</code>
     * source type projects configured for Buildkite runner builds. For more
     * information about CodeBuild-hosted Buildkite runner builds, see <a
     * href="https://docs.aws.amazon.com/codebuild/latest/userguide/sample-runner-buildkite.html">Tutorial:
     * Configure a CodeBuild-hosted Buildkite runner</a> in the <i>CodeBuild user
     * guide</i>.</p> 
     */
    inline WebhookBuildType GetBuildType() const { return m_buildType; }
    inline bool BuildTypeHasBeenSet() const { return m_buildTypeHasBeenSet; }
    inline void SetBuildType(WebhookBuildType value) { m_buildTypeHasBeenSet = true; m_buildType = value; }
    inline CreateWebhookRequest& WithBuildType(WebhookBuildType value) { SetBuildType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If manualCreation is true, CodeBuild doesn't create a webhook in GitHub and
     * instead returns <code>payloadUrl</code> and <code>secret</code> values for the
     * webhook. The <code>payloadUrl</code> and <code>secret</code> values in the
     * output can be used to manually create a webhook within GitHub.</p>  <p>
     * <code>manualCreation</code> is only available for GitHub webhooks.</p> 
     */
    inline bool GetManualCreation() const { return m_manualCreation; }
    inline bool ManualCreationHasBeenSet() const { return m_manualCreationHasBeenSet; }
    inline void SetManualCreation(bool value) { m_manualCreationHasBeenSet = true; m_manualCreation = value; }
    inline CreateWebhookRequest& WithManualCreation(bool value) { SetManualCreation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scope configuration for global or organization webhooks.</p> 
     * <p>Global or organization webhooks are only available for GitHub and Github
     * Enterprise webhooks.</p> 
     */
    inline const ScopeConfiguration& GetScopeConfiguration() const { return m_scopeConfiguration; }
    inline bool ScopeConfigurationHasBeenSet() const { return m_scopeConfigurationHasBeenSet; }
    template<typename ScopeConfigurationT = ScopeConfiguration>
    void SetScopeConfiguration(ScopeConfigurationT&& value) { m_scopeConfigurationHasBeenSet = true; m_scopeConfiguration = std::forward<ScopeConfigurationT>(value); }
    template<typename ScopeConfigurationT = ScopeConfiguration>
    CreateWebhookRequest& WithScopeConfiguration(ScopeConfigurationT&& value) { SetScopeConfiguration(std::forward<ScopeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A PullRequestBuildPolicy object that defines comment-based approval
     * requirements for triggering builds on pull requests. This policy helps control
     * when automated builds are executed based on contributor permissions and approval
     * workflows.</p>
     */
    inline const PullRequestBuildPolicy& GetPullRequestBuildPolicy() const { return m_pullRequestBuildPolicy; }
    inline bool PullRequestBuildPolicyHasBeenSet() const { return m_pullRequestBuildPolicyHasBeenSet; }
    template<typename PullRequestBuildPolicyT = PullRequestBuildPolicy>
    void SetPullRequestBuildPolicy(PullRequestBuildPolicyT&& value) { m_pullRequestBuildPolicyHasBeenSet = true; m_pullRequestBuildPolicy = std::forward<PullRequestBuildPolicyT>(value); }
    template<typename PullRequestBuildPolicyT = PullRequestBuildPolicy>
    CreateWebhookRequest& WithPullRequestBuildPolicy(PullRequestBuildPolicyT&& value) { SetPullRequestBuildPolicy(std::forward<PullRequestBuildPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_branchFilter;
    bool m_branchFilterHasBeenSet = false;

    Aws::Vector<Aws::Vector<WebhookFilter>> m_filterGroups;
    bool m_filterGroupsHasBeenSet = false;

    WebhookBuildType m_buildType{WebhookBuildType::NOT_SET};
    bool m_buildTypeHasBeenSet = false;

    bool m_manualCreation{false};
    bool m_manualCreationHasBeenSet = false;

    ScopeConfiguration m_scopeConfiguration;
    bool m_scopeConfigurationHasBeenSet = false;

    PullRequestBuildPolicy m_pullRequestBuildPolicy;
    bool m_pullRequestBuildPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
