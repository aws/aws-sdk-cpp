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
    AWS_EMR_API StepExecutionStatusDetail() = default;
    AWS_EMR_API StepExecutionStatusDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API StepExecutionStatusDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state of the step.</p>
     */
    inline StepExecutionState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(StepExecutionState value) { m_stateHasBeenSet = true; m_state = value; }
    inline StepExecutionStatusDetail& WithState(StepExecutionState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date and time of the step.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    StepExecutionStatusDetail& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date and time of the step.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDateTime() const { return m_startDateTime; }
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }
    template<typename StartDateTimeT = Aws::Utils::DateTime>
    void SetStartDateTime(StartDateTimeT&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::forward<StartDateTimeT>(value); }
    template<typename StartDateTimeT = Aws::Utils::DateTime>
    StepExecutionStatusDetail& WithStartDateTime(StartDateTimeT&& value) { SetStartDateTime(std::forward<StartDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The completion date and time of the step.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const { return m_endDateTime; }
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }
    template<typename EndDateTimeT = Aws::Utils::DateTime>
    void SetEndDateTime(EndDateTimeT&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::forward<EndDateTimeT>(value); }
    template<typename EndDateTimeT = Aws::Utils::DateTime>
    StepExecutionStatusDetail& WithEndDateTime(EndDateTimeT&& value) { SetEndDateTime(std::forward<EndDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the step's current state.</p>
     */
    inline const Aws::String& GetLastStateChangeReason() const { return m_lastStateChangeReason; }
    inline bool LastStateChangeReasonHasBeenSet() const { return m_lastStateChangeReasonHasBeenSet; }
    template<typename LastStateChangeReasonT = Aws::String>
    void SetLastStateChangeReason(LastStateChangeReasonT&& value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason = std::forward<LastStateChangeReasonT>(value); }
    template<typename LastStateChangeReasonT = Aws::String>
    StepExecutionStatusDetail& WithLastStateChangeReason(LastStateChangeReasonT&& value) { SetLastStateChangeReason(std::forward<LastStateChangeReasonT>(value)); return *this;}
    ///@}
  private:

    StepExecutionState m_state{StepExecutionState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startDateTime{};
    bool m_startDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endDateTime{};
    bool m_endDateTimeHasBeenSet = false;

    Aws::String m_lastStateChangeReason;
    bool m_lastStateChangeReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
