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
#include <aws/elasticmapreduce/model/StepState.h>
#include <aws/elasticmapreduce/model/StepStateChangeReason.h>
#include <aws/elasticmapreduce/model/FailureDetails.h>
#include <aws/elasticmapreduce/model/StepTimeline.h>
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
   * <p>The execution status details of the cluster step.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StepStatus">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API StepStatus
  {
  public:
    StepStatus();
    StepStatus(Aws::Utils::Json::JsonView jsonValue);
    StepStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The execution state of the cluster step.</p>
     */
    inline const StepState& GetState() const{ return m_state; }

    /**
     * <p>The execution state of the cluster step.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The execution state of the cluster step.</p>
     */
    inline void SetState(const StepState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The execution state of the cluster step.</p>
     */
    inline void SetState(StepState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The execution state of the cluster step.</p>
     */
    inline StepStatus& WithState(const StepState& value) { SetState(value); return *this;}

    /**
     * <p>The execution state of the cluster step.</p>
     */
    inline StepStatus& WithState(StepState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The reason for the step execution status change.</p>
     */
    inline const StepStateChangeReason& GetStateChangeReason() const{ return m_stateChangeReason; }

    /**
     * <p>The reason for the step execution status change.</p>
     */
    inline bool StateChangeReasonHasBeenSet() const { return m_stateChangeReasonHasBeenSet; }

    /**
     * <p>The reason for the step execution status change.</p>
     */
    inline void SetStateChangeReason(const StepStateChangeReason& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = value; }

    /**
     * <p>The reason for the step execution status change.</p>
     */
    inline void SetStateChangeReason(StepStateChangeReason&& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = std::move(value); }

    /**
     * <p>The reason for the step execution status change.</p>
     */
    inline StepStatus& WithStateChangeReason(const StepStateChangeReason& value) { SetStateChangeReason(value); return *this;}

    /**
     * <p>The reason for the step execution status change.</p>
     */
    inline StepStatus& WithStateChangeReason(StepStateChangeReason&& value) { SetStateChangeReason(std::move(value)); return *this;}


    /**
     * <p>The details for the step failure including reason, message, and log file path
     * where the root cause was identified.</p>
     */
    inline const FailureDetails& GetFailureDetails() const{ return m_failureDetails; }

    /**
     * <p>The details for the step failure including reason, message, and log file path
     * where the root cause was identified.</p>
     */
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }

    /**
     * <p>The details for the step failure including reason, message, and log file path
     * where the root cause was identified.</p>
     */
    inline void SetFailureDetails(const FailureDetails& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }

    /**
     * <p>The details for the step failure including reason, message, and log file path
     * where the root cause was identified.</p>
     */
    inline void SetFailureDetails(FailureDetails&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::move(value); }

    /**
     * <p>The details for the step failure including reason, message, and log file path
     * where the root cause was identified.</p>
     */
    inline StepStatus& WithFailureDetails(const FailureDetails& value) { SetFailureDetails(value); return *this;}

    /**
     * <p>The details for the step failure including reason, message, and log file path
     * where the root cause was identified.</p>
     */
    inline StepStatus& WithFailureDetails(FailureDetails&& value) { SetFailureDetails(std::move(value)); return *this;}


    /**
     * <p>The timeline of the cluster step status over time.</p>
     */
    inline const StepTimeline& GetTimeline() const{ return m_timeline; }

    /**
     * <p>The timeline of the cluster step status over time.</p>
     */
    inline bool TimelineHasBeenSet() const { return m_timelineHasBeenSet; }

    /**
     * <p>The timeline of the cluster step status over time.</p>
     */
    inline void SetTimeline(const StepTimeline& value) { m_timelineHasBeenSet = true; m_timeline = value; }

    /**
     * <p>The timeline of the cluster step status over time.</p>
     */
    inline void SetTimeline(StepTimeline&& value) { m_timelineHasBeenSet = true; m_timeline = std::move(value); }

    /**
     * <p>The timeline of the cluster step status over time.</p>
     */
    inline StepStatus& WithTimeline(const StepTimeline& value) { SetTimeline(value); return *this;}

    /**
     * <p>The timeline of the cluster step status over time.</p>
     */
    inline StepStatus& WithTimeline(StepTimeline&& value) { SetTimeline(std::move(value)); return *this;}

  private:

    StepState m_state;
    bool m_stateHasBeenSet;

    StepStateChangeReason m_stateChangeReason;
    bool m_stateChangeReasonHasBeenSet;

    FailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet;

    StepTimeline m_timeline;
    bool m_timelineHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
