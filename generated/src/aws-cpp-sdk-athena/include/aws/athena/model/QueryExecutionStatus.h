/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/QueryExecutionState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/athena/model/AthenaError.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>The completion date, current state, submission time, and state change reason
   * (if applicable) for the query execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/QueryExecutionStatus">AWS
   * API Reference</a></p>
   */
  class QueryExecutionStatus
  {
  public:
    AWS_ATHENA_API QueryExecutionStatus() = default;
    AWS_ATHENA_API QueryExecutionStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API QueryExecutionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state of query execution. <code>QUEUED</code> indicates that the query
     * has been submitted to the service, and Athena will execute the query as soon as
     * resources are available. <code>RUNNING</code> indicates that the query is in
     * execution phase. <code>SUCCEEDED</code> indicates that the query completed
     * without errors. <code>FAILED</code> indicates that the query experienced an
     * error and did not complete processing. <code>CANCELLED</code> indicates that a
     * user input interrupted query execution.</p>  <p>Athena automatically
     * retries your queries in cases of certain transient errors. As a result, you may
     * see the query state transition from <code>RUNNING</code> or <code>FAILED</code>
     * to <code>QUEUED</code>. </p> 
     */
    inline QueryExecutionState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(QueryExecutionState value) { m_stateHasBeenSet = true; m_state = value; }
    inline QueryExecutionStatus& WithState(QueryExecutionState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Further detail about the status of the query.</p>
     */
    inline const Aws::String& GetStateChangeReason() const { return m_stateChangeReason; }
    inline bool StateChangeReasonHasBeenSet() const { return m_stateChangeReasonHasBeenSet; }
    template<typename StateChangeReasonT = Aws::String>
    void SetStateChangeReason(StateChangeReasonT&& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = std::forward<StateChangeReasonT>(value); }
    template<typename StateChangeReasonT = Aws::String>
    QueryExecutionStatus& WithStateChangeReason(StateChangeReasonT&& value) { SetStateChangeReason(std::forward<StateChangeReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the query was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmissionDateTime() const { return m_submissionDateTime; }
    inline bool SubmissionDateTimeHasBeenSet() const { return m_submissionDateTimeHasBeenSet; }
    template<typename SubmissionDateTimeT = Aws::Utils::DateTime>
    void SetSubmissionDateTime(SubmissionDateTimeT&& value) { m_submissionDateTimeHasBeenSet = true; m_submissionDateTime = std::forward<SubmissionDateTimeT>(value); }
    template<typename SubmissionDateTimeT = Aws::Utils::DateTime>
    QueryExecutionStatus& WithSubmissionDateTime(SubmissionDateTimeT&& value) { SetSubmissionDateTime(std::forward<SubmissionDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the query completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDateTime() const { return m_completionDateTime; }
    inline bool CompletionDateTimeHasBeenSet() const { return m_completionDateTimeHasBeenSet; }
    template<typename CompletionDateTimeT = Aws::Utils::DateTime>
    void SetCompletionDateTime(CompletionDateTimeT&& value) { m_completionDateTimeHasBeenSet = true; m_completionDateTime = std::forward<CompletionDateTimeT>(value); }
    template<typename CompletionDateTimeT = Aws::Utils::DateTime>
    QueryExecutionStatus& WithCompletionDateTime(CompletionDateTimeT&& value) { SetCompletionDateTime(std::forward<CompletionDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about an Athena query error.</p>
     */
    inline const AthenaError& GetAthenaError() const { return m_athenaError; }
    inline bool AthenaErrorHasBeenSet() const { return m_athenaErrorHasBeenSet; }
    template<typename AthenaErrorT = AthenaError>
    void SetAthenaError(AthenaErrorT&& value) { m_athenaErrorHasBeenSet = true; m_athenaError = std::forward<AthenaErrorT>(value); }
    template<typename AthenaErrorT = AthenaError>
    QueryExecutionStatus& WithAthenaError(AthenaErrorT&& value) { SetAthenaError(std::forward<AthenaErrorT>(value)); return *this;}
    ///@}
  private:

    QueryExecutionState m_state{QueryExecutionState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_stateChangeReason;
    bool m_stateChangeReasonHasBeenSet = false;

    Aws::Utils::DateTime m_submissionDateTime{};
    bool m_submissionDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionDateTime{};
    bool m_completionDateTimeHasBeenSet = false;

    AthenaError m_athenaError;
    bool m_athenaErrorHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
