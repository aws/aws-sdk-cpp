/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/freetier/model/ActivityReward.h>
#include <aws/freetier/model/ActivityStatus.h>
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
namespace FreeTier
{
namespace Model
{

  /**
   * <p> The summary of activities. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/freetier-2023-09-07/ActivitySummary">AWS
   * API Reference</a></p>
   */
  class ActivitySummary
  {
  public:
    AWS_FREETIER_API ActivitySummary() = default;
    AWS_FREETIER_API ActivitySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_FREETIER_API ActivitySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FREETIER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A unique identifier that identifies the activity. </p>
     */
    inline const Aws::String& GetActivityId() const { return m_activityId; }
    inline bool ActivityIdHasBeenSet() const { return m_activityIdHasBeenSet; }
    template<typename ActivityIdT = Aws::String>
    void SetActivityId(ActivityIdT&& value) { m_activityIdHasBeenSet = true; m_activityId = std::forward<ActivityIdT>(value); }
    template<typename ActivityIdT = Aws::String>
    ActivitySummary& WithActivityId(ActivityIdT&& value) { SetActivityId(std::forward<ActivityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The title of the activity. </p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    ActivitySummary& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The reward for the activity. </p>
     */
    inline const ActivityReward& GetReward() const { return m_reward; }
    inline bool RewardHasBeenSet() const { return m_rewardHasBeenSet; }
    template<typename RewardT = ActivityReward>
    void SetReward(RewardT&& value) { m_rewardHasBeenSet = true; m_reward = std::forward<RewardT>(value); }
    template<typename RewardT = ActivityReward>
    ActivitySummary& WithReward(RewardT&& value) { SetReward(std::forward<RewardT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the activity. </p>
     */
    inline ActivityStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ActivityStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ActivitySummary& WithStatus(ActivityStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_activityId;
    bool m_activityIdHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    ActivityReward m_reward;
    bool m_rewardHasBeenSet = false;

    ActivityStatus m_status{ActivityStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace FreeTier
} // namespace Aws
