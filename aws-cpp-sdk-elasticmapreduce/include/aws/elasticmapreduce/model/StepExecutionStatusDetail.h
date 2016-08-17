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
#include <aws/elasticmapreduce/model/StepExecutionState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * <p>The execution state of a step.</p>
   */
  class AWS_EMR_API StepExecutionStatusDetail
  {
  public:
    StepExecutionStatusDetail();
    StepExecutionStatusDetail(const Aws::Utils::Json::JsonValue& jsonValue);
    StepExecutionStatusDetail& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The state of the job flow step.</p>
     */
    inline const StepExecutionState& GetState() const{ return m_state; }

    /**
     * <p>The state of the job flow step.</p>
     */
    inline void SetState(const StepExecutionState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the job flow step.</p>
     */
    inline void SetState(StepExecutionState&& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the job flow step.</p>
     */
    inline StepExecutionStatusDetail& WithState(const StepExecutionState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the job flow step.</p>
     */
    inline StepExecutionStatusDetail& WithState(StepExecutionState&& value) { SetState(value); return *this;}

    /**
     * <p>The creation date and time of the step.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The creation date and time of the step.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The creation date and time of the step.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The creation date and time of the step.</p>
     */
    inline StepExecutionStatusDetail& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The creation date and time of the step.</p>
     */
    inline StepExecutionStatusDetail& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The start date and time of the step.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDateTime() const{ return m_startDateTime; }

    /**
     * <p>The start date and time of the step.</p>
     */
    inline void SetStartDateTime(const Aws::Utils::DateTime& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = value; }

    /**
     * <p>The start date and time of the step.</p>
     */
    inline void SetStartDateTime(Aws::Utils::DateTime&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = value; }

    /**
     * <p>The start date and time of the step.</p>
     */
    inline StepExecutionStatusDetail& WithStartDateTime(const Aws::Utils::DateTime& value) { SetStartDateTime(value); return *this;}

    /**
     * <p>The start date and time of the step.</p>
     */
    inline StepExecutionStatusDetail& WithStartDateTime(Aws::Utils::DateTime&& value) { SetStartDateTime(value); return *this;}

    /**
     * <p>The completion date and time of the step.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const{ return m_endDateTime; }

    /**
     * <p>The completion date and time of the step.</p>
     */
    inline void SetEndDateTime(const Aws::Utils::DateTime& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }

    /**
     * <p>The completion date and time of the step.</p>
     */
    inline void SetEndDateTime(Aws::Utils::DateTime&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }

    /**
     * <p>The completion date and time of the step.</p>
     */
    inline StepExecutionStatusDetail& WithEndDateTime(const Aws::Utils::DateTime& value) { SetEndDateTime(value); return *this;}

    /**
     * <p>The completion date and time of the step.</p>
     */
    inline StepExecutionStatusDetail& WithEndDateTime(Aws::Utils::DateTime&& value) { SetEndDateTime(value); return *this;}

    /**
     * <p>A description of the step's current state.</p>
     */
    inline const Aws::String& GetLastStateChangeReason() const{ return m_lastStateChangeReason; }

    /**
     * <p>A description of the step's current state.</p>
     */
    inline void SetLastStateChangeReason(const Aws::String& value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason = value; }

    /**
     * <p>A description of the step's current state.</p>
     */
    inline void SetLastStateChangeReason(Aws::String&& value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason = value; }

    /**
     * <p>A description of the step's current state.</p>
     */
    inline void SetLastStateChangeReason(const char* value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason.assign(value); }

    /**
     * <p>A description of the step's current state.</p>
     */
    inline StepExecutionStatusDetail& WithLastStateChangeReason(const Aws::String& value) { SetLastStateChangeReason(value); return *this;}

    /**
     * <p>A description of the step's current state.</p>
     */
    inline StepExecutionStatusDetail& WithLastStateChangeReason(Aws::String&& value) { SetLastStateChangeReason(value); return *this;}

    /**
     * <p>A description of the step's current state.</p>
     */
    inline StepExecutionStatusDetail& WithLastStateChangeReason(const char* value) { SetLastStateChangeReason(value); return *this;}

  private:
    StepExecutionState m_state;
    bool m_stateHasBeenSet;
    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet;
    Aws::Utils::DateTime m_startDateTime;
    bool m_startDateTimeHasBeenSet;
    Aws::Utils::DateTime m_endDateTime;
    bool m_endDateTimeHasBeenSet;
    Aws::String m_lastStateChangeReason;
    bool m_lastStateChangeReasonHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
