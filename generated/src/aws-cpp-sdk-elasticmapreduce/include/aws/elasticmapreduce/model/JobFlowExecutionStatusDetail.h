/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/JobFlowExecutionState.h>
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
   * <p>Describes the status of the cluster (job flow).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/JobFlowExecutionStatusDetail">AWS
   * API Reference</a></p>
   */
  class JobFlowExecutionStatusDetail
  {
  public:
    AWS_EMR_API JobFlowExecutionStatusDetail() = default;
    AWS_EMR_API JobFlowExecutionStatusDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API JobFlowExecutionStatusDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state of the job flow.</p>
     */
    inline JobFlowExecutionState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(JobFlowExecutionState value) { m_stateHasBeenSet = true; m_state = value; }
    inline JobFlowExecutionStatusDetail& WithState(JobFlowExecutionState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date and time of the job flow.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    JobFlowExecutionStatusDetail& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date and time of the job flow.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDateTime() const { return m_startDateTime; }
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }
    template<typename StartDateTimeT = Aws::Utils::DateTime>
    void SetStartDateTime(StartDateTimeT&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::forward<StartDateTimeT>(value); }
    template<typename StartDateTimeT = Aws::Utils::DateTime>
    JobFlowExecutionStatusDetail& WithStartDateTime(StartDateTimeT&& value) { SetStartDateTime(std::forward<StartDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the job flow was ready to start running bootstrap
     * actions.</p>
     */
    inline const Aws::Utils::DateTime& GetReadyDateTime() const { return m_readyDateTime; }
    inline bool ReadyDateTimeHasBeenSet() const { return m_readyDateTimeHasBeenSet; }
    template<typename ReadyDateTimeT = Aws::Utils::DateTime>
    void SetReadyDateTime(ReadyDateTimeT&& value) { m_readyDateTimeHasBeenSet = true; m_readyDateTime = std::forward<ReadyDateTimeT>(value); }
    template<typename ReadyDateTimeT = Aws::Utils::DateTime>
    JobFlowExecutionStatusDetail& WithReadyDateTime(ReadyDateTimeT&& value) { SetReadyDateTime(std::forward<ReadyDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The completion date and time of the job flow.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDateTime() const { return m_endDateTime; }
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }
    template<typename EndDateTimeT = Aws::Utils::DateTime>
    void SetEndDateTime(EndDateTimeT&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::forward<EndDateTimeT>(value); }
    template<typename EndDateTimeT = Aws::Utils::DateTime>
    JobFlowExecutionStatusDetail& WithEndDateTime(EndDateTimeT&& value) { SetEndDateTime(std::forward<EndDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the job flow last changed state.</p>
     */
    inline const Aws::String& GetLastStateChangeReason() const { return m_lastStateChangeReason; }
    inline bool LastStateChangeReasonHasBeenSet() const { return m_lastStateChangeReasonHasBeenSet; }
    template<typename LastStateChangeReasonT = Aws::String>
    void SetLastStateChangeReason(LastStateChangeReasonT&& value) { m_lastStateChangeReasonHasBeenSet = true; m_lastStateChangeReason = std::forward<LastStateChangeReasonT>(value); }
    template<typename LastStateChangeReasonT = Aws::String>
    JobFlowExecutionStatusDetail& WithLastStateChangeReason(LastStateChangeReasonT&& value) { SetLastStateChangeReason(std::forward<LastStateChangeReasonT>(value)); return *this;}
    ///@}
  private:

    JobFlowExecutionState m_state{JobFlowExecutionState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startDateTime{};
    bool m_startDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_readyDateTime{};
    bool m_readyDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endDateTime{};
    bool m_endDateTimeHasBeenSet = false;

    Aws::String m_lastStateChangeReason;
    bool m_lastStateChangeReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
