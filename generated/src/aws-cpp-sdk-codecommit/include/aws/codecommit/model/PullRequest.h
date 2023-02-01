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
    AWS_CODECOMMIT_API PullRequest();
    AWS_CODECOMMIT_API PullRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API PullRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The system-generated ID of the pull request. </p>
     */
    inline const Aws::String& GetPullRequestId() const{ return m_pullRequestId; }

    /**
     * <p>The system-generated ID of the pull request. </p>
     */
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }

    /**
     * <p>The system-generated ID of the pull request. </p>
     */
    inline void SetPullRequestId(const Aws::String& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = value; }

    /**
     * <p>The system-generated ID of the pull request. </p>
     */
    inline void SetPullRequestId(Aws::String&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::move(value); }

    /**
     * <p>The system-generated ID of the pull request. </p>
     */
    inline void SetPullRequestId(const char* value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId.assign(value); }

    /**
     * <p>The system-generated ID of the pull request. </p>
     */
    inline PullRequest& WithPullRequestId(const Aws::String& value) { SetPullRequestId(value); return *this;}

    /**
     * <p>The system-generated ID of the pull request. </p>
     */
    inline PullRequest& WithPullRequestId(Aws::String&& value) { SetPullRequestId(std::move(value)); return *this;}

    /**
     * <p>The system-generated ID of the pull request. </p>
     */
    inline PullRequest& WithPullRequestId(const char* value) { SetPullRequestId(value); return *this;}


    /**
     * <p>The user-defined title of the pull request. This title is displayed in the
     * list of pull requests to other repository users.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The user-defined title of the pull request. This title is displayed in the
     * list of pull requests to other repository users.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The user-defined title of the pull request. This title is displayed in the
     * list of pull requests to other repository users.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The user-defined title of the pull request. This title is displayed in the
     * list of pull requests to other repository users.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The user-defined title of the pull request. This title is displayed in the
     * list of pull requests to other repository users.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The user-defined title of the pull request. This title is displayed in the
     * list of pull requests to other repository users.</p>
     */
    inline PullRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The user-defined title of the pull request. This title is displayed in the
     * list of pull requests to other repository users.</p>
     */
    inline PullRequest& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The user-defined title of the pull request. This title is displayed in the
     * list of pull requests to other repository users.</p>
     */
    inline PullRequest& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The user-defined description of the pull request. This description can be
     * used to clarify what should be reviewed and other details of the request.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The user-defined description of the pull request. This description can be
     * used to clarify what should be reviewed and other details of the request.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The user-defined description of the pull request. This description can be
     * used to clarify what should be reviewed and other details of the request.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The user-defined description of the pull request. This description can be
     * used to clarify what should be reviewed and other details of the request.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The user-defined description of the pull request. This description can be
     * used to clarify what should be reviewed and other details of the request.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The user-defined description of the pull request. This description can be
     * used to clarify what should be reviewed and other details of the request.</p>
     */
    inline PullRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The user-defined description of the pull request. This description can be
     * used to clarify what should be reviewed and other details of the request.</p>
     */
    inline PullRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The user-defined description of the pull request. This description can be
     * used to clarify what should be reviewed and other details of the request.</p>
     */
    inline PullRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The day and time of the last user or system activity on the pull request, in
     * timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastActivityDate() const{ return m_lastActivityDate; }

    /**
     * <p>The day and time of the last user or system activity on the pull request, in
     * timestamp format.</p>
     */
    inline bool LastActivityDateHasBeenSet() const { return m_lastActivityDateHasBeenSet; }

    /**
     * <p>The day and time of the last user or system activity on the pull request, in
     * timestamp format.</p>
     */
    inline void SetLastActivityDate(const Aws::Utils::DateTime& value) { m_lastActivityDateHasBeenSet = true; m_lastActivityDate = value; }

    /**
     * <p>The day and time of the last user or system activity on the pull request, in
     * timestamp format.</p>
     */
    inline void SetLastActivityDate(Aws::Utils::DateTime&& value) { m_lastActivityDateHasBeenSet = true; m_lastActivityDate = std::move(value); }

    /**
     * <p>The day and time of the last user or system activity on the pull request, in
     * timestamp format.</p>
     */
    inline PullRequest& WithLastActivityDate(const Aws::Utils::DateTime& value) { SetLastActivityDate(value); return *this;}

    /**
     * <p>The day and time of the last user or system activity on the pull request, in
     * timestamp format.</p>
     */
    inline PullRequest& WithLastActivityDate(Aws::Utils::DateTime&& value) { SetLastActivityDate(std::move(value)); return *this;}


    /**
     * <p>The date and time the pull request was originally created, in timestamp
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time the pull request was originally created, in timestamp
     * format.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time the pull request was originally created, in timestamp
     * format.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time the pull request was originally created, in timestamp
     * format.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time the pull request was originally created, in timestamp
     * format.</p>
     */
    inline PullRequest& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time the pull request was originally created, in timestamp
     * format.</p>
     */
    inline PullRequest& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The status of the pull request. Pull request status can only change from
     * <code>OPEN</code> to <code>CLOSED</code>.</p>
     */
    inline const PullRequestStatusEnum& GetPullRequestStatus() const{ return m_pullRequestStatus; }

    /**
     * <p>The status of the pull request. Pull request status can only change from
     * <code>OPEN</code> to <code>CLOSED</code>.</p>
     */
    inline bool PullRequestStatusHasBeenSet() const { return m_pullRequestStatusHasBeenSet; }

    /**
     * <p>The status of the pull request. Pull request status can only change from
     * <code>OPEN</code> to <code>CLOSED</code>.</p>
     */
    inline void SetPullRequestStatus(const PullRequestStatusEnum& value) { m_pullRequestStatusHasBeenSet = true; m_pullRequestStatus = value; }

    /**
     * <p>The status of the pull request. Pull request status can only change from
     * <code>OPEN</code> to <code>CLOSED</code>.</p>
     */
    inline void SetPullRequestStatus(PullRequestStatusEnum&& value) { m_pullRequestStatusHasBeenSet = true; m_pullRequestStatus = std::move(value); }

    /**
     * <p>The status of the pull request. Pull request status can only change from
     * <code>OPEN</code> to <code>CLOSED</code>.</p>
     */
    inline PullRequest& WithPullRequestStatus(const PullRequestStatusEnum& value) { SetPullRequestStatus(value); return *this;}

    /**
     * <p>The status of the pull request. Pull request status can only change from
     * <code>OPEN</code> to <code>CLOSED</code>.</p>
     */
    inline PullRequest& WithPullRequestStatus(PullRequestStatusEnum&& value) { SetPullRequestStatus(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the pull request.</p>
     */
    inline const Aws::String& GetAuthorArn() const{ return m_authorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the pull request.</p>
     */
    inline bool AuthorArnHasBeenSet() const { return m_authorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the pull request.</p>
     */
    inline void SetAuthorArn(const Aws::String& value) { m_authorArnHasBeenSet = true; m_authorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the pull request.</p>
     */
    inline void SetAuthorArn(Aws::String&& value) { m_authorArnHasBeenSet = true; m_authorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the pull request.</p>
     */
    inline void SetAuthorArn(const char* value) { m_authorArnHasBeenSet = true; m_authorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the pull request.</p>
     */
    inline PullRequest& WithAuthorArn(const Aws::String& value) { SetAuthorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the pull request.</p>
     */
    inline PullRequest& WithAuthorArn(Aws::String&& value) { SetAuthorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user who created the pull request.</p>
     */
    inline PullRequest& WithAuthorArn(const char* value) { SetAuthorArn(value); return *this;}


    /**
     * <p>The targets of the pull request, including the source branch and destination
     * branch for the pull request.</p>
     */
    inline const Aws::Vector<PullRequestTarget>& GetPullRequestTargets() const{ return m_pullRequestTargets; }

    /**
     * <p>The targets of the pull request, including the source branch and destination
     * branch for the pull request.</p>
     */
    inline bool PullRequestTargetsHasBeenSet() const { return m_pullRequestTargetsHasBeenSet; }

    /**
     * <p>The targets of the pull request, including the source branch and destination
     * branch for the pull request.</p>
     */
    inline void SetPullRequestTargets(const Aws::Vector<PullRequestTarget>& value) { m_pullRequestTargetsHasBeenSet = true; m_pullRequestTargets = value; }

    /**
     * <p>The targets of the pull request, including the source branch and destination
     * branch for the pull request.</p>
     */
    inline void SetPullRequestTargets(Aws::Vector<PullRequestTarget>&& value) { m_pullRequestTargetsHasBeenSet = true; m_pullRequestTargets = std::move(value); }

    /**
     * <p>The targets of the pull request, including the source branch and destination
     * branch for the pull request.</p>
     */
    inline PullRequest& WithPullRequestTargets(const Aws::Vector<PullRequestTarget>& value) { SetPullRequestTargets(value); return *this;}

    /**
     * <p>The targets of the pull request, including the source branch and destination
     * branch for the pull request.</p>
     */
    inline PullRequest& WithPullRequestTargets(Aws::Vector<PullRequestTarget>&& value) { SetPullRequestTargets(std::move(value)); return *this;}

    /**
     * <p>The targets of the pull request, including the source branch and destination
     * branch for the pull request.</p>
     */
    inline PullRequest& AddPullRequestTargets(const PullRequestTarget& value) { m_pullRequestTargetsHasBeenSet = true; m_pullRequestTargets.push_back(value); return *this; }

    /**
     * <p>The targets of the pull request, including the source branch and destination
     * branch for the pull request.</p>
     */
    inline PullRequest& AddPullRequestTargets(PullRequestTarget&& value) { m_pullRequestTargetsHasBeenSet = true; m_pullRequestTargets.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline PullRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline PullRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, client-generated idempotency token that, when provided in a
     * request, ensures the request cannot be repeated with a changed parameter. If a
     * request is received with the same parameters and a token is included, the
     * request returns information about the initial request that used that token.</p>
     */
    inline PullRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The system-generated revision ID for the pull request.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The system-generated revision ID for the pull request.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The system-generated revision ID for the pull request.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The system-generated revision ID for the pull request.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The system-generated revision ID for the pull request.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The system-generated revision ID for the pull request.</p>
     */
    inline PullRequest& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The system-generated revision ID for the pull request.</p>
     */
    inline PullRequest& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The system-generated revision ID for the pull request.</p>
     */
    inline PullRequest& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>The approval rules applied to the pull request.</p>
     */
    inline const Aws::Vector<ApprovalRule>& GetApprovalRules() const{ return m_approvalRules; }

    /**
     * <p>The approval rules applied to the pull request.</p>
     */
    inline bool ApprovalRulesHasBeenSet() const { return m_approvalRulesHasBeenSet; }

    /**
     * <p>The approval rules applied to the pull request.</p>
     */
    inline void SetApprovalRules(const Aws::Vector<ApprovalRule>& value) { m_approvalRulesHasBeenSet = true; m_approvalRules = value; }

    /**
     * <p>The approval rules applied to the pull request.</p>
     */
    inline void SetApprovalRules(Aws::Vector<ApprovalRule>&& value) { m_approvalRulesHasBeenSet = true; m_approvalRules = std::move(value); }

    /**
     * <p>The approval rules applied to the pull request.</p>
     */
    inline PullRequest& WithApprovalRules(const Aws::Vector<ApprovalRule>& value) { SetApprovalRules(value); return *this;}

    /**
     * <p>The approval rules applied to the pull request.</p>
     */
    inline PullRequest& WithApprovalRules(Aws::Vector<ApprovalRule>&& value) { SetApprovalRules(std::move(value)); return *this;}

    /**
     * <p>The approval rules applied to the pull request.</p>
     */
    inline PullRequest& AddApprovalRules(const ApprovalRule& value) { m_approvalRulesHasBeenSet = true; m_approvalRules.push_back(value); return *this; }

    /**
     * <p>The approval rules applied to the pull request.</p>
     */
    inline PullRequest& AddApprovalRules(ApprovalRule&& value) { m_approvalRulesHasBeenSet = true; m_approvalRules.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_pullRequestId;
    bool m_pullRequestIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastActivityDate;
    bool m_lastActivityDateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    PullRequestStatusEnum m_pullRequestStatus;
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
