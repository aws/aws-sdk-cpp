/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codecommit/model/PullRequestEventType.h>
#include <aws/codecommit/model/PullRequestCreatedEventMetadata.h>
#include <aws/codecommit/model/PullRequestStatusChangedEventMetadata.h>
#include <aws/codecommit/model/PullRequestSourceReferenceUpdatedEventMetadata.h>
#include <aws/codecommit/model/PullRequestMergedStateChangedEventMetadata.h>
#include <aws/codecommit/model/ApprovalRuleEventMetadata.h>
#include <aws/codecommit/model/ApprovalStateChangedEventMetadata.h>
#include <aws/codecommit/model/ApprovalRuleOverriddenEventMetadata.h>
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
   * <p>Returns information about a pull request event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PullRequestEvent">AWS
   * API Reference</a></p>
   */
  class PullRequestEvent
  {
  public:
    AWS_CODECOMMIT_API PullRequestEvent() = default;
    AWS_CODECOMMIT_API PullRequestEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API PullRequestEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECOMMIT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The system-generated ID of the pull request.</p>
     */
    inline const Aws::String& GetPullRequestId() const { return m_pullRequestId; }
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }
    template<typename PullRequestIdT = Aws::String>
    void SetPullRequestId(PullRequestIdT&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::forward<PullRequestIdT>(value); }
    template<typename PullRequestIdT = Aws::String>
    PullRequestEvent& WithPullRequestId(PullRequestIdT&& value) { SetPullRequestId(std::forward<PullRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The day and time of the pull request event, in timestamp format.</p>
     */
    inline const Aws::Utils::DateTime& GetEventDate() const { return m_eventDate; }
    inline bool EventDateHasBeenSet() const { return m_eventDateHasBeenSet; }
    template<typename EventDateT = Aws::Utils::DateTime>
    void SetEventDate(EventDateT&& value) { m_eventDateHasBeenSet = true; m_eventDate = std::forward<EventDateT>(value); }
    template<typename EventDateT = Aws::Utils::DateTime>
    PullRequestEvent& WithEventDate(EventDateT&& value) { SetEventDate(std::forward<EventDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the pull request event (for example, a status change event
     * (PULL_REQUEST_STATUS_CHANGED) or update event
     * (PULL_REQUEST_SOURCE_REFERENCE_UPDATED)).</p>
     */
    inline PullRequestEventType GetPullRequestEventType() const { return m_pullRequestEventType; }
    inline bool PullRequestEventTypeHasBeenSet() const { return m_pullRequestEventTypeHasBeenSet; }
    inline void SetPullRequestEventType(PullRequestEventType value) { m_pullRequestEventTypeHasBeenSet = true; m_pullRequestEventType = value; }
    inline PullRequestEvent& WithPullRequestEventType(PullRequestEventType value) { SetPullRequestEventType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user whose actions resulted in the
     * event. Examples include updating the pull request with more commits or changing
     * the status of a pull request.</p>
     */
    inline const Aws::String& GetActorArn() const { return m_actorArn; }
    inline bool ActorArnHasBeenSet() const { return m_actorArnHasBeenSet; }
    template<typename ActorArnT = Aws::String>
    void SetActorArn(ActorArnT&& value) { m_actorArnHasBeenSet = true; m_actorArn = std::forward<ActorArnT>(value); }
    template<typename ActorArnT = Aws::String>
    PullRequestEvent& WithActorArn(ActorArnT&& value) { SetActorArn(std::forward<ActorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the source and destination branches for the pull
     * request.</p>
     */
    inline const PullRequestCreatedEventMetadata& GetPullRequestCreatedEventMetadata() const { return m_pullRequestCreatedEventMetadata; }
    inline bool PullRequestCreatedEventMetadataHasBeenSet() const { return m_pullRequestCreatedEventMetadataHasBeenSet; }
    template<typename PullRequestCreatedEventMetadataT = PullRequestCreatedEventMetadata>
    void SetPullRequestCreatedEventMetadata(PullRequestCreatedEventMetadataT&& value) { m_pullRequestCreatedEventMetadataHasBeenSet = true; m_pullRequestCreatedEventMetadata = std::forward<PullRequestCreatedEventMetadataT>(value); }
    template<typename PullRequestCreatedEventMetadataT = PullRequestCreatedEventMetadata>
    PullRequestEvent& WithPullRequestCreatedEventMetadata(PullRequestCreatedEventMetadataT&& value) { SetPullRequestCreatedEventMetadata(std::forward<PullRequestCreatedEventMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the change in status for the pull request event.</p>
     */
    inline const PullRequestStatusChangedEventMetadata& GetPullRequestStatusChangedEventMetadata() const { return m_pullRequestStatusChangedEventMetadata; }
    inline bool PullRequestStatusChangedEventMetadataHasBeenSet() const { return m_pullRequestStatusChangedEventMetadataHasBeenSet; }
    template<typename PullRequestStatusChangedEventMetadataT = PullRequestStatusChangedEventMetadata>
    void SetPullRequestStatusChangedEventMetadata(PullRequestStatusChangedEventMetadataT&& value) { m_pullRequestStatusChangedEventMetadataHasBeenSet = true; m_pullRequestStatusChangedEventMetadata = std::forward<PullRequestStatusChangedEventMetadataT>(value); }
    template<typename PullRequestStatusChangedEventMetadataT = PullRequestStatusChangedEventMetadata>
    PullRequestEvent& WithPullRequestStatusChangedEventMetadata(PullRequestStatusChangedEventMetadataT&& value) { SetPullRequestStatusChangedEventMetadata(std::forward<PullRequestStatusChangedEventMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the updated source branch for the pull request event. </p>
     */
    inline const PullRequestSourceReferenceUpdatedEventMetadata& GetPullRequestSourceReferenceUpdatedEventMetadata() const { return m_pullRequestSourceReferenceUpdatedEventMetadata; }
    inline bool PullRequestSourceReferenceUpdatedEventMetadataHasBeenSet() const { return m_pullRequestSourceReferenceUpdatedEventMetadataHasBeenSet; }
    template<typename PullRequestSourceReferenceUpdatedEventMetadataT = PullRequestSourceReferenceUpdatedEventMetadata>
    void SetPullRequestSourceReferenceUpdatedEventMetadata(PullRequestSourceReferenceUpdatedEventMetadataT&& value) { m_pullRequestSourceReferenceUpdatedEventMetadataHasBeenSet = true; m_pullRequestSourceReferenceUpdatedEventMetadata = std::forward<PullRequestSourceReferenceUpdatedEventMetadataT>(value); }
    template<typename PullRequestSourceReferenceUpdatedEventMetadataT = PullRequestSourceReferenceUpdatedEventMetadata>
    PullRequestEvent& WithPullRequestSourceReferenceUpdatedEventMetadata(PullRequestSourceReferenceUpdatedEventMetadataT&& value) { SetPullRequestSourceReferenceUpdatedEventMetadata(std::forward<PullRequestSourceReferenceUpdatedEventMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the change in mergability state for the pull request
     * event.</p>
     */
    inline const PullRequestMergedStateChangedEventMetadata& GetPullRequestMergedStateChangedEventMetadata() const { return m_pullRequestMergedStateChangedEventMetadata; }
    inline bool PullRequestMergedStateChangedEventMetadataHasBeenSet() const { return m_pullRequestMergedStateChangedEventMetadataHasBeenSet; }
    template<typename PullRequestMergedStateChangedEventMetadataT = PullRequestMergedStateChangedEventMetadata>
    void SetPullRequestMergedStateChangedEventMetadata(PullRequestMergedStateChangedEventMetadataT&& value) { m_pullRequestMergedStateChangedEventMetadataHasBeenSet = true; m_pullRequestMergedStateChangedEventMetadata = std::forward<PullRequestMergedStateChangedEventMetadataT>(value); }
    template<typename PullRequestMergedStateChangedEventMetadataT = PullRequestMergedStateChangedEventMetadata>
    PullRequestEvent& WithPullRequestMergedStateChangedEventMetadata(PullRequestMergedStateChangedEventMetadataT&& value) { SetPullRequestMergedStateChangedEventMetadata(std::forward<PullRequestMergedStateChangedEventMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a pull request event.</p>
     */
    inline const ApprovalRuleEventMetadata& GetApprovalRuleEventMetadata() const { return m_approvalRuleEventMetadata; }
    inline bool ApprovalRuleEventMetadataHasBeenSet() const { return m_approvalRuleEventMetadataHasBeenSet; }
    template<typename ApprovalRuleEventMetadataT = ApprovalRuleEventMetadata>
    void SetApprovalRuleEventMetadata(ApprovalRuleEventMetadataT&& value) { m_approvalRuleEventMetadataHasBeenSet = true; m_approvalRuleEventMetadata = std::forward<ApprovalRuleEventMetadataT>(value); }
    template<typename ApprovalRuleEventMetadataT = ApprovalRuleEventMetadata>
    PullRequestEvent& WithApprovalRuleEventMetadata(ApprovalRuleEventMetadataT&& value) { SetApprovalRuleEventMetadata(std::forward<ApprovalRuleEventMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about an approval state change for a pull request.</p>
     */
    inline const ApprovalStateChangedEventMetadata& GetApprovalStateChangedEventMetadata() const { return m_approvalStateChangedEventMetadata; }
    inline bool ApprovalStateChangedEventMetadataHasBeenSet() const { return m_approvalStateChangedEventMetadataHasBeenSet; }
    template<typename ApprovalStateChangedEventMetadataT = ApprovalStateChangedEventMetadata>
    void SetApprovalStateChangedEventMetadata(ApprovalStateChangedEventMetadataT&& value) { m_approvalStateChangedEventMetadataHasBeenSet = true; m_approvalStateChangedEventMetadata = std::forward<ApprovalStateChangedEventMetadataT>(value); }
    template<typename ApprovalStateChangedEventMetadataT = ApprovalStateChangedEventMetadata>
    PullRequestEvent& WithApprovalStateChangedEventMetadata(ApprovalStateChangedEventMetadataT&& value) { SetApprovalStateChangedEventMetadata(std::forward<ApprovalStateChangedEventMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about an approval rule override event for a pull request.</p>
     */
    inline const ApprovalRuleOverriddenEventMetadata& GetApprovalRuleOverriddenEventMetadata() const { return m_approvalRuleOverriddenEventMetadata; }
    inline bool ApprovalRuleOverriddenEventMetadataHasBeenSet() const { return m_approvalRuleOverriddenEventMetadataHasBeenSet; }
    template<typename ApprovalRuleOverriddenEventMetadataT = ApprovalRuleOverriddenEventMetadata>
    void SetApprovalRuleOverriddenEventMetadata(ApprovalRuleOverriddenEventMetadataT&& value) { m_approvalRuleOverriddenEventMetadataHasBeenSet = true; m_approvalRuleOverriddenEventMetadata = std::forward<ApprovalRuleOverriddenEventMetadataT>(value); }
    template<typename ApprovalRuleOverriddenEventMetadataT = ApprovalRuleOverriddenEventMetadata>
    PullRequestEvent& WithApprovalRuleOverriddenEventMetadata(ApprovalRuleOverriddenEventMetadataT&& value) { SetApprovalRuleOverriddenEventMetadata(std::forward<ApprovalRuleOverriddenEventMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pullRequestId;
    bool m_pullRequestIdHasBeenSet = false;

    Aws::Utils::DateTime m_eventDate{};
    bool m_eventDateHasBeenSet = false;

    PullRequestEventType m_pullRequestEventType{PullRequestEventType::NOT_SET};
    bool m_pullRequestEventTypeHasBeenSet = false;

    Aws::String m_actorArn;
    bool m_actorArnHasBeenSet = false;

    PullRequestCreatedEventMetadata m_pullRequestCreatedEventMetadata;
    bool m_pullRequestCreatedEventMetadataHasBeenSet = false;

    PullRequestStatusChangedEventMetadata m_pullRequestStatusChangedEventMetadata;
    bool m_pullRequestStatusChangedEventMetadataHasBeenSet = false;

    PullRequestSourceReferenceUpdatedEventMetadata m_pullRequestSourceReferenceUpdatedEventMetadata;
    bool m_pullRequestSourceReferenceUpdatedEventMetadataHasBeenSet = false;

    PullRequestMergedStateChangedEventMetadata m_pullRequestMergedStateChangedEventMetadata;
    bool m_pullRequestMergedStateChangedEventMetadataHasBeenSet = false;

    ApprovalRuleEventMetadata m_approvalRuleEventMetadata;
    bool m_approvalRuleEventMetadataHasBeenSet = false;

    ApprovalStateChangedEventMetadata m_approvalStateChangedEventMetadata;
    bool m_approvalStateChangedEventMetadataHasBeenSet = false;

    ApprovalRuleOverriddenEventMetadata m_approvalRuleOverriddenEventMetadata;
    bool m_approvalRuleOverriddenEventMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
