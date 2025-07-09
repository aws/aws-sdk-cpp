/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/freetier/model/ActivityStatus.h>
#include <aws/freetier/model/ActivityReward.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace FreeTier
{
namespace Model
{
  class GetAccountActivityResult
  {
  public:
    AWS_FREETIER_API GetAccountActivityResult() = default;
    AWS_FREETIER_API GetAccountActivityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FREETIER_API GetAccountActivityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A unique identifier that identifies the activity. </p>
     */
    inline const Aws::String& GetActivityId() const { return m_activityId; }
    template<typename ActivityIdT = Aws::String>
    void SetActivityId(ActivityIdT&& value) { m_activityIdHasBeenSet = true; m_activityId = std::forward<ActivityIdT>(value); }
    template<typename ActivityIdT = Aws::String>
    GetAccountActivityResult& WithActivityId(ActivityIdT&& value) { SetActivityId(std::forward<ActivityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A short activity title. </p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    GetAccountActivityResult& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides detailed information about the activity and its expected outcomes.
     * </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetAccountActivityResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current activity status. </p>
     */
    inline ActivityStatus GetStatus() const { return m_status; }
    inline void SetStatus(ActivityStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetAccountActivityResult& WithStatus(ActivityStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The URL resource that provides guidance on activity requirements and
     * completion. </p>
     */
    inline const Aws::String& GetInstructionsUrl() const { return m_instructionsUrl; }
    template<typename InstructionsUrlT = Aws::String>
    void SetInstructionsUrl(InstructionsUrlT&& value) { m_instructionsUrlHasBeenSet = true; m_instructionsUrl = std::forward<InstructionsUrlT>(value); }
    template<typename InstructionsUrlT = Aws::String>
    GetAccountActivityResult& WithInstructionsUrl(InstructionsUrlT&& value) { SetInstructionsUrl(std::forward<InstructionsUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A reward granted upon activity completion. </p>
     */
    inline const ActivityReward& GetReward() const { return m_reward; }
    template<typename RewardT = ActivityReward>
    void SetReward(RewardT&& value) { m_rewardHasBeenSet = true; m_reward = std::forward<RewardT>(value); }
    template<typename RewardT = ActivityReward>
    GetAccountActivityResult& WithReward(RewardT&& value) { SetReward(std::forward<RewardT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The estimated time to complete the activity. This is the duration in
     * minutes. </p>
     */
    inline int GetEstimatedTimeToCompleteInMinutes() const { return m_estimatedTimeToCompleteInMinutes; }
    inline void SetEstimatedTimeToCompleteInMinutes(int value) { m_estimatedTimeToCompleteInMinutesHasBeenSet = true; m_estimatedTimeToCompleteInMinutes = value; }
    inline GetAccountActivityResult& WithEstimatedTimeToCompleteInMinutes(int value) { SetEstimatedTimeToCompleteInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time by which the activity must be completed to receive a reward. </p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
    template<typename ExpiresAtT = Aws::Utils::DateTime>
    void SetExpiresAt(ExpiresAtT&& value) { m_expiresAtHasBeenSet = true; m_expiresAt = std::forward<ExpiresAtT>(value); }
    template<typename ExpiresAtT = Aws::Utils::DateTime>
    GetAccountActivityResult& WithExpiresAt(ExpiresAtT&& value) { SetExpiresAt(std::forward<ExpiresAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the activity started. This field appears only for
     * activities in the <code>IN_PROGRESS</code> or <code>COMPLETED</code> states.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    GetAccountActivityResult& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the activity is completed. This field appears only for
     * activities in the <code>COMPLETED</code> state. </p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    void SetCompletedAt(CompletedAtT&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::forward<CompletedAtT>(value); }
    template<typename CompletedAtT = Aws::Utils::DateTime>
    GetAccountActivityResult& WithCompletedAt(CompletedAtT&& value) { SetCompletedAt(std::forward<CompletedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAccountActivityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_activityId;
    bool m_activityIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ActivityStatus m_status{ActivityStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_instructionsUrl;
    bool m_instructionsUrlHasBeenSet = false;

    ActivityReward m_reward;
    bool m_rewardHasBeenSet = false;

    int m_estimatedTimeToCompleteInMinutes{0};
    bool m_estimatedTimeToCompleteInMinutesHasBeenSet = false;

    Aws::Utils::DateTime m_expiresAt{};
    bool m_expiresAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_completedAt{};
    bool m_completedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FreeTier
} // namespace Aws
