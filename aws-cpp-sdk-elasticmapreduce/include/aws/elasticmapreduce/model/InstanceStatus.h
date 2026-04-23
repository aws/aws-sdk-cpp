/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticmapreduce/model/InstanceState.h>
#include <aws/elasticmapreduce/model/InstanceStateChangeReason.h>
#include <aws/elasticmapreduce/model/InstanceTimeline.h>
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
   * <p>The instance status details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceStatus">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API InstanceStatus
  {
  public:
    InstanceStatus();
    InstanceStatus(Aws::Utils::Json::JsonView jsonValue);
    InstanceStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current state of the instance.</p>
     */
    inline const InstanceState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the instance.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the instance.</p>
     */
    inline void SetState(const InstanceState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the instance.</p>
     */
    inline void SetState(InstanceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the instance.</p>
     */
    inline InstanceStatus& WithState(const InstanceState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the instance.</p>
     */
    inline InstanceStatus& WithState(InstanceState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The details of the status change reason for the instance.</p>
     */
    inline const InstanceStateChangeReason& GetStateChangeReason() const{ return m_stateChangeReason; }

    /**
     * <p>The details of the status change reason for the instance.</p>
     */
    inline bool StateChangeReasonHasBeenSet() const { return m_stateChangeReasonHasBeenSet; }

    /**
     * <p>The details of the status change reason for the instance.</p>
     */
    inline void SetStateChangeReason(const InstanceStateChangeReason& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = value; }

    /**
     * <p>The details of the status change reason for the instance.</p>
     */
    inline void SetStateChangeReason(InstanceStateChangeReason&& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = std::move(value); }

    /**
     * <p>The details of the status change reason for the instance.</p>
     */
    inline InstanceStatus& WithStateChangeReason(const InstanceStateChangeReason& value) { SetStateChangeReason(value); return *this;}

    /**
     * <p>The details of the status change reason for the instance.</p>
     */
    inline InstanceStatus& WithStateChangeReason(InstanceStateChangeReason&& value) { SetStateChangeReason(std::move(value)); return *this;}


    /**
     * <p>The timeline of the instance status over time.</p>
     */
    inline const InstanceTimeline& GetTimeline() const{ return m_timeline; }

    /**
     * <p>The timeline of the instance status over time.</p>
     */
    inline bool TimelineHasBeenSet() const { return m_timelineHasBeenSet; }

    /**
     * <p>The timeline of the instance status over time.</p>
     */
    inline void SetTimeline(const InstanceTimeline& value) { m_timelineHasBeenSet = true; m_timeline = value; }

    /**
     * <p>The timeline of the instance status over time.</p>
     */
    inline void SetTimeline(InstanceTimeline&& value) { m_timelineHasBeenSet = true; m_timeline = std::move(value); }

    /**
     * <p>The timeline of the instance status over time.</p>
     */
    inline InstanceStatus& WithTimeline(const InstanceTimeline& value) { SetTimeline(value); return *this;}

    /**
     * <p>The timeline of the instance status over time.</p>
     */
    inline InstanceStatus& WithTimeline(InstanceTimeline&& value) { SetTimeline(std::move(value)); return *this;}

  private:

    InstanceState m_state;
    bool m_stateHasBeenSet;

    InstanceStateChangeReason m_stateChangeReason;
    bool m_stateChangeReasonHasBeenSet;

    InstanceTimeline m_timeline;
    bool m_timelineHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
