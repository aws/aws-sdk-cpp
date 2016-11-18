/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/InstanceGroupState.h>
#include <aws/elasticmapreduce/model/InstanceGroupStateChangeReason.h>
#include <aws/elasticmapreduce/model/InstanceGroupTimeline.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{

  /**
   * <p>The details of the instance group status.</p>
   */
  class AWS_EMR_API InstanceGroupStatus
  {
  public:
    InstanceGroupStatus();
    InstanceGroupStatus(const Aws::Utils::Json::JsonValue& jsonValue);
    InstanceGroupStatus& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The current state of the instance group.</p>
     */
    inline const InstanceGroupState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the instance group.</p>
     */
    inline void SetState(const InstanceGroupState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the instance group.</p>
     */
    inline void SetState(InstanceGroupState&& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the instance group.</p>
     */
    inline InstanceGroupStatus& WithState(const InstanceGroupState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the instance group.</p>
     */
    inline InstanceGroupStatus& WithState(InstanceGroupState&& value) { SetState(value); return *this;}

    /**
     * <p>The status change reason details for the instance group.</p>
     */
    inline const InstanceGroupStateChangeReason& GetStateChangeReason() const{ return m_stateChangeReason; }

    /**
     * <p>The status change reason details for the instance group.</p>
     */
    inline void SetStateChangeReason(const InstanceGroupStateChangeReason& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = value; }

    /**
     * <p>The status change reason details for the instance group.</p>
     */
    inline void SetStateChangeReason(InstanceGroupStateChangeReason&& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = value; }

    /**
     * <p>The status change reason details for the instance group.</p>
     */
    inline InstanceGroupStatus& WithStateChangeReason(const InstanceGroupStateChangeReason& value) { SetStateChangeReason(value); return *this;}

    /**
     * <p>The status change reason details for the instance group.</p>
     */
    inline InstanceGroupStatus& WithStateChangeReason(InstanceGroupStateChangeReason&& value) { SetStateChangeReason(value); return *this;}

    /**
     * <p>The timeline of the instance group status over time.</p>
     */
    inline const InstanceGroupTimeline& GetTimeline() const{ return m_timeline; }

    /**
     * <p>The timeline of the instance group status over time.</p>
     */
    inline void SetTimeline(const InstanceGroupTimeline& value) { m_timelineHasBeenSet = true; m_timeline = value; }

    /**
     * <p>The timeline of the instance group status over time.</p>
     */
    inline void SetTimeline(InstanceGroupTimeline&& value) { m_timelineHasBeenSet = true; m_timeline = value; }

    /**
     * <p>The timeline of the instance group status over time.</p>
     */
    inline InstanceGroupStatus& WithTimeline(const InstanceGroupTimeline& value) { SetTimeline(value); return *this;}

    /**
     * <p>The timeline of the instance group status over time.</p>
     */
    inline InstanceGroupStatus& WithTimeline(InstanceGroupTimeline&& value) { SetTimeline(value); return *this;}

  private:
    InstanceGroupState m_state;
    bool m_stateHasBeenSet;
    InstanceGroupStateChangeReason m_stateChangeReason;
    bool m_stateChangeReasonHasBeenSet;
    InstanceGroupTimeline m_timeline;
    bool m_timelineHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
