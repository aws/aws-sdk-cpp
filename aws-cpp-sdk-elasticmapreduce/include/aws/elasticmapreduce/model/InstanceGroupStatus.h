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
    AWS_EMR_API InstanceGroupStatus();
    AWS_EMR_API InstanceGroupStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceGroupStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current state of the instance group.</p>
     */
    inline const InstanceGroupState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the instance group.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the instance group.</p>
     */
    inline void SetState(const InstanceGroupState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the instance group.</p>
     */
    inline void SetState(InstanceGroupState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the instance group.</p>
     */
    inline InstanceGroupStatus& WithState(const InstanceGroupState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the instance group.</p>
     */
    inline InstanceGroupStatus& WithState(InstanceGroupState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The status change reason details for the instance group.</p>
     */
    inline const InstanceGroupStateChangeReason& GetStateChangeReason() const{ return m_stateChangeReason; }

    /**
     * <p>The status change reason details for the instance group.</p>
     */
    inline bool StateChangeReasonHasBeenSet() const { return m_stateChangeReasonHasBeenSet; }

    /**
     * <p>The status change reason details for the instance group.</p>
     */
    inline void SetStateChangeReason(const InstanceGroupStateChangeReason& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = value; }

    /**
     * <p>The status change reason details for the instance group.</p>
     */
    inline void SetStateChangeReason(InstanceGroupStateChangeReason&& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = std::move(value); }

    /**
     * <p>The status change reason details for the instance group.</p>
     */
    inline InstanceGroupStatus& WithStateChangeReason(const InstanceGroupStateChangeReason& value) { SetStateChangeReason(value); return *this;}

    /**
     * <p>The status change reason details for the instance group.</p>
     */
    inline InstanceGroupStatus& WithStateChangeReason(InstanceGroupStateChangeReason&& value) { SetStateChangeReason(std::move(value)); return *this;}


    /**
     * <p>The timeline of the instance group status over time.</p>
     */
    inline const InstanceGroupTimeline& GetTimeline() const{ return m_timeline; }

    /**
     * <p>The timeline of the instance group status over time.</p>
     */
    inline bool TimelineHasBeenSet() const { return m_timelineHasBeenSet; }

    /**
     * <p>The timeline of the instance group status over time.</p>
     */
    inline void SetTimeline(const InstanceGroupTimeline& value) { m_timelineHasBeenSet = true; m_timeline = value; }

    /**
     * <p>The timeline of the instance group status over time.</p>
     */
    inline void SetTimeline(InstanceGroupTimeline&& value) { m_timelineHasBeenSet = true; m_timeline = std::move(value); }

    /**
     * <p>The timeline of the instance group status over time.</p>
     */
    inline InstanceGroupStatus& WithTimeline(const InstanceGroupTimeline& value) { SetTimeline(value); return *this;}

    /**
     * <p>The timeline of the instance group status over time.</p>
     */
    inline InstanceGroupStatus& WithTimeline(InstanceGroupTimeline&& value) { SetTimeline(std::move(value)); return *this;}

  private:

    InstanceGroupState m_state;
    bool m_stateHasBeenSet = false;

    InstanceGroupStateChangeReason m_stateChangeReason;
    bool m_stateChangeReasonHasBeenSet = false;

    InstanceGroupTimeline m_timeline;
    bool m_timelineHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
