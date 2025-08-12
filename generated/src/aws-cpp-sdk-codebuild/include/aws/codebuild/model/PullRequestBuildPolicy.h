/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/PullRequestBuildCommentApproval.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/PullRequestBuildApproverRole.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>A PullRequestBuildPolicy object that defines comment-based approval
   * requirements for triggering builds on pull requests. This policy helps control
   * when automated builds are executed based on contributor permissions and approval
   * workflows.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/PullRequestBuildPolicy">AWS
   * API Reference</a></p>
   */
  class PullRequestBuildPolicy
  {
  public:
    AWS_CODEBUILD_API PullRequestBuildPolicy() = default;
    AWS_CODEBUILD_API PullRequestBuildPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API PullRequestBuildPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies when comment-based approval is required before triggering a build
     * on pull requests. This setting determines whether builds run automatically or
     * require explicit approval through comments.</p> <ul> <li> <p> <i>DISABLED</i>:
     * Builds trigger automatically without requiring comment approval</p> </li> <li>
     * <p> <i>ALL_PULL_REQUESTS</i>: All pull requests require comment approval before
     * builds execute (unless contributor is one of the approver roles)</p> </li> <li>
     * <p> <i>FORK_PULL_REQUESTS</i>: Only pull requests from forked repositories
     * require comment approval (unless contributor is one of the approver roles)</p>
     * </li> </ul>
     */
    inline PullRequestBuildCommentApproval GetRequiresCommentApproval() const { return m_requiresCommentApproval; }
    inline bool RequiresCommentApprovalHasBeenSet() const { return m_requiresCommentApprovalHasBeenSet; }
    inline void SetRequiresCommentApproval(PullRequestBuildCommentApproval value) { m_requiresCommentApprovalHasBeenSet = true; m_requiresCommentApproval = value; }
    inline PullRequestBuildPolicy& WithRequiresCommentApproval(PullRequestBuildCommentApproval value) { SetRequiresCommentApproval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of repository roles that have approval privileges for pull request
     * builds when comment approval is required. Only users with these roles can
     * provide valid comment approvals. If a pull request contributor is one of these
     * roles, their pull request builds will trigger automatically. This field is only
     * applicable when <code>requiresCommentApproval</code> is not <i>DISABLED</i>.</p>
     */
    inline const Aws::Vector<PullRequestBuildApproverRole>& GetApproverRoles() const { return m_approverRoles; }
    inline bool ApproverRolesHasBeenSet() const { return m_approverRolesHasBeenSet; }
    template<typename ApproverRolesT = Aws::Vector<PullRequestBuildApproverRole>>
    void SetApproverRoles(ApproverRolesT&& value) { m_approverRolesHasBeenSet = true; m_approverRoles = std::forward<ApproverRolesT>(value); }
    template<typename ApproverRolesT = Aws::Vector<PullRequestBuildApproverRole>>
    PullRequestBuildPolicy& WithApproverRoles(ApproverRolesT&& value) { SetApproverRoles(std::forward<ApproverRolesT>(value)); return *this;}
    inline PullRequestBuildPolicy& AddApproverRoles(PullRequestBuildApproverRole value) { m_approverRolesHasBeenSet = true; m_approverRoles.push_back(value); return *this; }
    ///@}
  private:

    PullRequestBuildCommentApproval m_requiresCommentApproval{PullRequestBuildCommentApproval::NOT_SET};
    bool m_requiresCommentApprovalHasBeenSet = false;

    Aws::Vector<PullRequestBuildApproverRole> m_approverRoles;
    bool m_approverRolesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
