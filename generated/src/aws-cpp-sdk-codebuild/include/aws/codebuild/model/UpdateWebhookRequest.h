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
  class UpdateWebhookRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API UpdateWebhookRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWebhook"; }

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
    UpdateWebhookRequest& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A regular expression used to determine which repository branches are built
     * when a webhook is triggered. If the name of a branch matches the regular
     * expression, then it is built. If <code>branchFilter</code> is empty, then all
     * branches are built.</p>  <p> It is recommended that you use
     * <code>filterGroups</code> instead of <code>branchFilter</code>. </p> 
     */
    inline const Aws::String& GetBranchFilter() const { return m_branchFilter; }
    inline bool BranchFilterHasBeenSet() const { return m_branchFilterHasBeenSet; }
    template<typename BranchFilterT = Aws::String>
    void SetBranchFilter(BranchFilterT&& value) { m_branchFilterHasBeenSet = true; m_branchFilter = std::forward<BranchFilterT>(value); }
    template<typename BranchFilterT = Aws::String>
    UpdateWebhookRequest& WithBranchFilter(BranchFilterT&& value) { SetBranchFilter(std::forward<BranchFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A boolean value that specifies whether the associated GitHub repository's
     * secret token should be updated. If you use Bitbucket for your repository,
     * <code>rotateSecret</code> is ignored. </p>
     */
    inline bool GetRotateSecret() const { return m_rotateSecret; }
    inline bool RotateSecretHasBeenSet() const { return m_rotateSecretHasBeenSet; }
    inline void SetRotateSecret(bool value) { m_rotateSecretHasBeenSet = true; m_rotateSecret = value; }
    inline UpdateWebhookRequest& WithRotateSecret(bool value) { SetRotateSecret(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of arrays of <code>WebhookFilter</code> objects used to determine
     * if a webhook event can trigger a build. A filter group must contain at least one
     * <code>EVENT</code> <code>WebhookFilter</code>. </p>
     */
    inline const Aws::Vector<Aws::Vector<WebhookFilter>>& GetFilterGroups() const { return m_filterGroups; }
    inline bool FilterGroupsHasBeenSet() const { return m_filterGroupsHasBeenSet; }
    template<typename FilterGroupsT = Aws::Vector<Aws::Vector<WebhookFilter>>>
    void SetFilterGroups(FilterGroupsT&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups = std::forward<FilterGroupsT>(value); }
    template<typename FilterGroupsT = Aws::Vector<Aws::Vector<WebhookFilter>>>
    UpdateWebhookRequest& WithFilterGroups(FilterGroupsT&& value) { SetFilterGroups(std::forward<FilterGroupsT>(value)); return *this;}
    template<typename FilterGroupsT = Aws::Vector<WebhookFilter>>
    UpdateWebhookRequest& AddFilterGroups(FilterGroupsT&& value) { m_filterGroupsHasBeenSet = true; m_filterGroups.emplace_back(std::forward<FilterGroupsT>(value)); return *this; }
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
    inline UpdateWebhookRequest& WithBuildType(WebhookBuildType value) { SetBuildType(value); return *this;}
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
    UpdateWebhookRequest& WithPullRequestBuildPolicy(PullRequestBuildPolicyT&& value) { SetPullRequestBuildPolicy(std::forward<PullRequestBuildPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::String m_branchFilter;
    bool m_branchFilterHasBeenSet = false;

    bool m_rotateSecret{false};
    bool m_rotateSecretHasBeenSet = false;

    Aws::Vector<Aws::Vector<WebhookFilter>> m_filterGroups;
    bool m_filterGroupsHasBeenSet = false;

    WebhookBuildType m_buildType{WebhookBuildType::NOT_SET};
    bool m_buildTypeHasBeenSet = false;

    PullRequestBuildPolicy m_pullRequestBuildPolicy;
    bool m_pullRequestBuildPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
