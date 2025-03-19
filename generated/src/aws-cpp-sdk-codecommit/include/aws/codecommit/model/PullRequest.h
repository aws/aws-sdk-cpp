/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codecommit/model/PullRequestStatusEnum.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecommit/model/PullRequestTarget.h>
#include <aws/codecommit/model/ApprovalRule.h>
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
namespace CodeCommit
{
namespace Model
{

  /**
   * <p>Returns information about a pull request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PullRequest">AWS
   * API Reference</a></p>
   */
  class PullRequest
  {
  public:
    AWS_CODECOMMIT_API PullRequest() = default;
    AWS_CODECOMMIT_API PullRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API PullRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated ID of the pull request. </p>
     */
    inline const Aws::String& GetPullRequestId() const { return m_pullRequestId; }
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }
    template<typename PullRequestIdT = Aws::String>
    void SetPullRequestId(PullRequestIdT&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::forward<PullRequestIdT>(value); }
    template<typename PullRequestIdT = Aws::String>
    PullRequest& WithPullRequestId(PullRequestIdT&& value) { SetPullRequestId(std::forward<PullRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-defined title of the pull request. This title is displayed in the
     * list of pull requests to other repository users.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    PullRequest& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-defined description of the pull request. This description can be
     * used to clarify what should be reviewed and other details of the request.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PullRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day and time of the last user or system activity on the pull request, in
     * timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastActivityDate() const { return m_lastActivityDate; }
    inline bool LastActivityDateHasBeenSet() const { return m_lastActivityDateHasBeenSet; }
    template<typename LastActivityDateT = Aws::Utils::DateTime>
    void SetLastActivityDate(LastActivityDateT&& value) { m_lastActivityDateHasBeenSet = true; m_lastActivityDate = std::forward<LastActivityDateT>(value); }
    template<typename LastActivityDateT = Aws::Utils::DateTime>
    PullRequest& WithLastActivityDate(LastActivityDateT&& value) { SetLastActivityDate(std::forward<LastActivityDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the pull request was originally created, in timestamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    PullRequest& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the pull request. Pull request status can only change from
     * <code>OPEN</code> to <code>CLOSED</code>.</p>
     */
    inline PullRequestStatusEnum GetPullRequestStatus() const { return m_pullRequestStatus; }
    inline bool PullRequestStatusHasBeenSet() const { return m_pullRequestStatusHasBeenSet; }
    inline void SetPullRequestStatus(PullRequestStatusEnum value) { m_pullRequestStatusHasBeenSet = true; m_pullRequestStatus = value; }
    inline PullRequest& WithPullRequestStatus(PullRequestStatusEnum value) { SetPullRequestStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the pull request.</p>
     */
    inline const Aws::String& GetAuthorArn() const { return m_authorArn; }
    inline bool AuthorArnHasBeenSet() const { return m_authorArnHasBeenSet; }
    template<typename AuthorArnT = Aws::String>
    void SetAuthorArn(AuthorArnT&& value) { m_authorArnHasBeenSet = true; m_authorArn = std::forward<AuthorArnT>(value); }
    template<typename AuthorArnT = Aws::String>
    PullRequest& WithAuthorArn(AuthorArnT&& value) { SetAuthorArn(std::forward<AuthorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets of the pull request, including the source branch and destination
     * branch for the pull request.</p>
     */
    inline const Aws::Vector<PullRequestTarget>& GetPullRequestTargets() const { return m_pullRequestTargets; }
    inline bool PullRequestTargetsHasBeenSet() const { return m_pullRequestTargetsHasBeenSet; }
    template<typename PullRequestTargetsT = Aws::Vector<PullRequestTarget>>
    void SetPullRequestTargets(PullRequestTargetsT&& value) { m_pullRequestTargetsHasBeenSet = true; m_pullRequestTargets = std::forward<PullRequestTargetsT>(value); }
    template<typename PullRequestTargetsT = Aws::Vector<PullRequestTarget>>
    PullRequest& WithPullRequestTargets(PullRequestTargetsT&& value) { SetPullRequestTargets(std::forward<PullRequestTargetsT>(value)); return *this;}
    template<typename PullRequestTargetsT = PullRequestTarget>
    PullRequest& AddPullRequestTargets(PullRequestTargetsT&& value) { m_pullRequestTargetsHasBeenSet = true; m_pullRequestTargets.emplace_back(std::forward<PullRequestTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    PullRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-generated revision ID for the pull request.</p>
     */
    inline const Aws::String& GetRevisionId() const { return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    template<typename RevisionIdT = Aws::String>
    void SetRevisionId(RevisionIdT&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::forward<RevisionIdT>(value); }
    template<typename RevisionIdT = Aws::String>
    PullRequest& WithRevisionId(RevisionIdT&& value) { SetRevisionId(std::forward<RevisionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approval rules applied to the pull request.</p>
     */
    inline const Aws::Vector<ApprovalRule>& GetApprovalRules() const { return m_approvalRules; }
    inline bool ApprovalRulesHasBeenSet() const { return m_approvalRulesHasBeenSet; }
    template<typename ApprovalRulesT = Aws::Vector<ApprovalRule>>
    void SetApprovalRules(ApprovalRulesT&& value) { m_approvalRulesHasBeenSet = true; m_approvalRules = std::forward<ApprovalRulesT>(value); }
    template<typename ApprovalRulesT = Aws::Vector<ApprovalRule>>
    PullRequest& WithApprovalRules(ApprovalRulesT&& value) { SetApprovalRules(std::forward<ApprovalRulesT>(value)); return *this;}
    template<typename ApprovalRulesT = ApprovalRule>
    PullRequest& AddApprovalRules(ApprovalRulesT&& value) { m_approvalRulesHasBeenSet = true; m_approvalRules.emplace_back(std::forward<ApprovalRulesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_pullRequestId;
    bool m_pullRequestIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastActivityDate{};
    bool m_lastActivityDateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    PullRequestStatusEnum m_pullRequestStatus{PullRequestStatusEnum::NOT_SET};
    bool m_pullRequestStatusHasBeenSet = false;

    Aws::String m_authorArn;
    bool m_authorArnHasBeenSet = false;

    Aws::Vector<PullRequestTarget> m_pullRequestTargets;
    bool m_pullRequestTargetsHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::Vector<ApprovalRule> m_approvalRules;
    bool m_approvalRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
