/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/StepExecutionState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The execution state of a step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StepExecutionStatusDetail">AWS
   * API Reference</a></p>
   */
  class StepExecutionStatusDetail
  {
  public:
    AWS_EMR_API StepExecutionStatusDetail();
    AWS_EMR_API StepExecutionStatusDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API StepExecutionStatusDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state of the step.</p>
     */
    inline const StepExecutionState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const StepExecutionState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(StepExecutionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline StepExecutionStatusDetail& WithState(const StepExecutionState& value) { SetState(value); return *this;}
    inline StepExecutionStatusDetail& WithState(StepExecutionState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date and time of the step.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline StepExecutionStatusDetail& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline StepExecutionStatusDetail& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date and time of the step.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDateTime() const{ return m_startDateTime; }
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }
    inline void SetStartDateTime(const Aws::Utils::DateTime& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = value; }
    inline void SetStartDateTime(Aws::Utils::DateTime&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::move(value); }
    inline StepExecutionStatusDetail& WithStartDateTime(const Aws::Utils::DateTime& value) { SetStartDateTime(value); return *this;}
    inline StepExecutionStatusDetail& WithStartDateTime(Aws::Utils::DateTime&& value) { SetStartDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The completion date and time of the step.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const{ return m_endDateTime; }
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }
    inline void SetEndDateTime(const Aws::Utils::DateTime& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }
    inline void SetEndDateTime(Aws::Utils::DateTime&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::move(value); }
    inline StepExecutionStatusDetail& WithEndDateTime(const Aws::Utils::DateTime& value) { SetEndDateTime(value); return *this;}
    inline StepExecutionStatusDetail& WithEndDateTime(Aws::Utils::DateTime&& value) { SetEndDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the step's current state.</p>
     */
    inline const Aws::String& GetLastStateChangeReason() const{ return m_lastStateChangeReason; }
    inline bool LastStateChangeReasonHasBeenSet() const { return m_lastStateChangeReasonHasBeenSet; }
    inline void SetLastStateChangeReason(const Aws::String& value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason = value; }
    inline void SetLastStateChangeReason(Aws::String&& value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason = std::move(value); }
    inline void SetLastStateChangeReason(const char* value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason.assign(value); }
    inline StepExecutionStatusDetail& WithLastStateChangeReason(const Aws::String& value) { SetLastStateChangeReason(value); return *this;}
    inline StepExecutionStatusDetail& WithLastStateChangeReason(Aws::String&& value) { SetLastStateChangeReason(std::move(value)); return *this;}
    inline StepExecutionStatusDetail& WithLastStateChangeReason(const char* value) { SetLastStateChangeReason(value); return *this;}
    ///@}
  private:

    StepExecutionState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startDateTime;
    bool m_startDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endDateTime;
    bool m_endDateTimeHasBeenSet = false;

    Aws::String m_lastStateChangeReason;
    bool m_lastStateChangeReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
