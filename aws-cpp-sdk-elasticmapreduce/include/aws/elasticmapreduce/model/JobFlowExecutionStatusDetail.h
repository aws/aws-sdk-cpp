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
#include <aws/elasticmapreduce/model/JobFlowExecutionState.h>
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
   * <p>Describes the status of the job flow.</p>
   */
  class AWS_EMR_API JobFlowExecutionStatusDetail
  {
  public:
    JobFlowExecutionStatusDetail();
    JobFlowExecutionStatusDetail(const Aws::Utils::Json::JsonValue& jsonValue);
    JobFlowExecutionStatusDetail& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The state of the job flow.</p>
     */
    inline const JobFlowExecutionState& GetState() const{ return m_state; }

    /**
     * <p>The state of the job flow.</p>
     */
    inline void SetState(const JobFlowExecutionState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the job flow.</p>
     */
    inline void SetState(JobFlowExecutionState&& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the job flow.</p>
     */
    inline JobFlowExecutionStatusDetail& WithState(const JobFlowExecutionState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the job flow.</p>
     */
    inline JobFlowExecutionStatusDetail& WithState(JobFlowExecutionState&& value) { SetState(value); return *this;}

    /**
     * <p>The creation date and time of the job flow.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The creation date and time of the job flow.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The creation date and time of the job flow.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The creation date and time of the job flow.</p>
     */
    inline JobFlowExecutionStatusDetail& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The creation date and time of the job flow.</p>
     */
    inline JobFlowExecutionStatusDetail& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The start date and time of the job flow.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDateTime() const{ return m_startDateTime; }

    /**
     * <p>The start date and time of the job flow.</p>
     */
    inline void SetStartDateTime(const Aws::Utils::DateTime& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = value; }

    /**
     * <p>The start date and time of the job flow.</p>
     */
    inline void SetStartDateTime(Aws::Utils::DateTime&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = value; }

    /**
     * <p>The start date and time of the job flow.</p>
     */
    inline JobFlowExecutionStatusDetail& WithStartDateTime(const Aws::Utils::DateTime& value) { SetStartDateTime(value); return *this;}

    /**
     * <p>The start date and time of the job flow.</p>
     */
    inline JobFlowExecutionStatusDetail& WithStartDateTime(Aws::Utils::DateTime&& value) { SetStartDateTime(value); return *this;}

    /**
     * <p>The date and time when the job flow was ready to start running bootstrap
     * actions.</p>
     */
    inline const Aws::Utils::DateTime& GetReadyDateTime() const{ return m_readyDateTime; }

    /**
     * <p>The date and time when the job flow was ready to start running bootstrap
     * actions.</p>
     */
    inline void SetReadyDateTime(const Aws::Utils::DateTime& value) { m_readyDateTimeHasBeenSet = true; m_readyDateTime = value; }

    /**
     * <p>The date and time when the job flow was ready to start running bootstrap
     * actions.</p>
     */
    inline void SetReadyDateTime(Aws::Utils::DateTime&& value) { m_readyDateTimeHasBeenSet = true; m_readyDateTime = value; }

    /**
     * <p>The date and time when the job flow was ready to start running bootstrap
     * actions.</p>
     */
    inline JobFlowExecutionStatusDetail& WithReadyDateTime(const Aws::Utils::DateTime& value) { SetReadyDateTime(value); return *this;}

    /**
     * <p>The date and time when the job flow was ready to start running bootstrap
     * actions.</p>
     */
    inline JobFlowExecutionStatusDetail& WithReadyDateTime(Aws::Utils::DateTime&& value) { SetReadyDateTime(value); return *this;}

    /**
     * <p>The completion date and time of the job flow.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const{ return m_endDateTime; }

    /**
     * <p>The completion date and time of the job flow.</p>
     */
    inline void SetEndDateTime(const Aws::Utils::DateTime& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }

    /**
     * <p>The completion date and time of the job flow.</p>
     */
    inline void SetEndDateTime(Aws::Utils::DateTime&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }

    /**
     * <p>The completion date and time of the job flow.</p>
     */
    inline JobFlowExecutionStatusDetail& WithEndDateTime(const Aws::Utils::DateTime& value) { SetEndDateTime(value); return *this;}

    /**
     * <p>The completion date and time of the job flow.</p>
     */
    inline JobFlowExecutionStatusDetail& WithEndDateTime(Aws::Utils::DateTime&& value) { SetEndDateTime(value); return *this;}

    /**
     * <p>Description of the job flow last changed state.</p>
     */
    inline const Aws::String& GetLastStateChangeReason() const{ return m_lastStateChangeReason; }

    /**
     * <p>Description of the job flow last changed state.</p>
     */
    inline void SetLastStateChangeReason(const Aws::String& value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason = value; }

    /**
     * <p>Description of the job flow last changed state.</p>
     */
    inline void SetLastStateChangeReason(Aws::String&& value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason = value; }

    /**
     * <p>Description of the job flow last changed state.</p>
     */
    inline void SetLastStateChangeReason(const char* value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason.assign(value); }

    /**
     * <p>Description of the job flow last changed state.</p>
     */
    inline JobFlowExecutionStatusDetail& WithLastStateChangeReason(const Aws::String& value) { SetLastStateChangeReason(value); return *this;}

    /**
     * <p>Description of the job flow last changed state.</p>
     */
    inline JobFlowExecutionStatusDetail& WithLastStateChangeReason(Aws::String&& value) { SetLastStateChangeReason(value); return *this;}

    /**
     * <p>Description of the job flow last changed state.</p>
     */
    inline JobFlowExecutionStatusDetail& WithLastStateChangeReason(const char* value) { SetLastStateChangeReason(value); return *this;}

  private:
    JobFlowExecutionState m_state;
    bool m_stateHasBeenSet;
    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet;
    Aws::Utils::DateTime m_startDateTime;
    bool m_startDateTimeHasBeenSet;
    Aws::Utils::DateTime m_readyDateTime;
    bool m_readyDateTimeHasBeenSet;
    Aws::Utils::DateTime m_endDateTime;
    bool m_endDateTimeHasBeenSet;
    Aws::String m_lastStateChangeReason;
    bool m_lastStateChangeReasonHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
