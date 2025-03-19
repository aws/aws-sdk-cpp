/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/InstanceGroupState.h>
#include <aws/elasticmapreduce/model/InstanceGroupStateChangeReason.h>
#include <aws/elasticmapreduce/model/InstanceGroupTimeline.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>The details of the instance group status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceGroupStatus">AWS
   * API Reference</a></p>
   */
  class InstanceGroupStatus
  {
  public:
    AWS_EMR_API InstanceGroupStatus() = default;
    AWS_EMR_API InstanceGroupStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceGroupStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current state of the instance group.</p>
     */
    inline InstanceGroupState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(InstanceGroupState value) { m_stateHasBeenSet = true; m_state = value; }
    inline InstanceGroupStatus& WithState(InstanceGroupState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status change reason details for the instance group.</p>
     */
    inline const InstanceGroupStateChangeReason& GetStateChangeReason() const { return m_stateChangeReason; }
    inline bool StateChangeReasonHasBeenSet() const { return m_stateChangeReasonHasBeenSet; }
    template<typename StateChangeReasonT = InstanceGroupStateChangeReason>
    void SetStateChangeReason(StateChangeReasonT&& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = std::forward<StateChangeReasonT>(value); }
    template<typename StateChangeReasonT = InstanceGroupStateChangeReason>
    InstanceGroupStatus& WithStateChangeReason(StateChangeReasonT&& value) { SetStateChangeReason(std::forward<StateChangeReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeline of the instance group status over time.</p>
     */
    inline const InstanceGroupTimeline& GetTimeline() const { return m_timeline; }
    inline bool TimelineHasBeenSet() const { return m_timelineHasBeenSet; }
    template<typename TimelineT = InstanceGroupTimeline>
    void SetTimeline(TimelineT&& value) { m_timelineHasBeenSet = true; m_timeline = std::forward<TimelineT>(value); }
    template<typename TimelineT = InstanceGroupTimeline>
    InstanceGroupStatus& WithTimeline(TimelineT&& value) { SetTimeline(std::forward<TimelineT>(value)); return *this;}
    ///@}
  private:

    InstanceGroupState m_state{InstanceGroupState::NOT_SET};
    bool m_stateHasBeenSet = false;

    InstanceGroupStateChangeReason m_stateChangeReason;
    bool m_stateChangeReasonHasBeenSet = false;

    InstanceGroupTimeline m_timeline;
    bool m_timelineHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
