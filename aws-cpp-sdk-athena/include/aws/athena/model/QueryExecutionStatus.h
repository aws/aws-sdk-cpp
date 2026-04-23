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
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/QueryExecutionState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class AWS_ATHENA_API QueryExecutionStatus
  {
  public:
    QueryExecutionStatus();
    QueryExecutionStatus(Aws::Utils::Json::JsonView jsonValue);
    QueryExecutionStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The state of query execution. <code>QUEUED</code> state is listed but is not
     * used by Athena and is reserved for future use. <code>RUNNING</code> indicates
     * that the query has been submitted to the service, and Athena will execute the
     * query as soon as resources are available. <code>SUCCEEDED</code> indicates that
     * the query completed without errors. <code>FAILED</code> indicates that the query
     * experienced an error and did not complete processing. <code>CANCELLED</code>
     * indicates that a user input interrupted query execution. </p>
     */
    inline const QueryExecutionState& GetState() const{ return m_state; }

    /**
     * <p>The state of query execution. <code>QUEUED</code> state is listed but is not
     * used by Athena and is reserved for future use. <code>RUNNING</code> indicates
     * that the query has been submitted to the service, and Athena will execute the
     * query as soon as resources are available. <code>SUCCEEDED</code> indicates that
     * the query completed without errors. <code>FAILED</code> indicates that the query
     * experienced an error and did not complete processing. <code>CANCELLED</code>
     * indicates that a user input interrupted query execution. </p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of query execution. <code>QUEUED</code> state is listed but is not
     * used by Athena and is reserved for future use. <code>RUNNING</code> indicates
     * that the query has been submitted to the service, and Athena will execute the
     * query as soon as resources are available. <code>SUCCEEDED</code> indicates that
     * the query completed without errors. <code>FAILED</code> indicates that the query
     * experienced an error and did not complete processing. <code>CANCELLED</code>
     * indicates that a user input interrupted query execution. </p>
     */
    inline void SetState(const QueryExecutionState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of query execution. <code>QUEUED</code> state is listed but is not
     * used by Athena and is reserved for future use. <code>RUNNING</code> indicates
     * that the query has been submitted to the service, and Athena will execute the
     * query as soon as resources are available. <code>SUCCEEDED</code> indicates that
     * the query completed without errors. <code>FAILED</code> indicates that the query
     * experienced an error and did not complete processing. <code>CANCELLED</code>
     * indicates that a user input interrupted query execution. </p>
     */
    inline void SetState(QueryExecutionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of query execution. <code>QUEUED</code> state is listed but is not
     * used by Athena and is reserved for future use. <code>RUNNING</code> indicates
     * that the query has been submitted to the service, and Athena will execute the
     * query as soon as resources are available. <code>SUCCEEDED</code> indicates that
     * the query completed without errors. <code>FAILED</code> indicates that the query
     * experienced an error and did not complete processing. <code>CANCELLED</code>
     * indicates that a user input interrupted query execution. </p>
     */
    inline QueryExecutionStatus& WithState(const QueryExecutionState& value) { SetState(value); return *this;}

    /**
     * <p>The state of query execution. <code>QUEUED</code> state is listed but is not
     * used by Athena and is reserved for future use. <code>RUNNING</code> indicates
     * that the query has been submitted to the service, and Athena will execute the
     * query as soon as resources are available. <code>SUCCEEDED</code> indicates that
     * the query completed without errors. <code>FAILED</code> indicates that the query
     * experienced an error and did not complete processing. <code>CANCELLED</code>
     * indicates that a user input interrupted query execution. </p>
     */
    inline QueryExecutionStatus& WithState(QueryExecutionState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Further detail about the status of the query.</p>
     */
    inline const Aws::String& GetStateChangeReason() const{ return m_stateChangeReason; }

    /**
     * <p>Further detail about the status of the query.</p>
     */
    inline bool StateChangeReasonHasBeenSet() const { return m_stateChangeReasonHasBeenSet; }

    /**
     * <p>Further detail about the status of the query.</p>
     */
    inline void SetStateChangeReason(const Aws::String& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = value; }

    /**
     * <p>Further detail about the status of the query.</p>
     */
    inline void SetStateChangeReason(Aws::String&& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = std::move(value); }

    /**
     * <p>Further detail about the status of the query.</p>
     */
    inline void SetStateChangeReason(const char* value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason.assign(value); }

    /**
     * <p>Further detail about the status of the query.</p>
     */
    inline QueryExecutionStatus& WithStateChangeReason(const Aws::String& value) { SetStateChangeReason(value); return *this;}

    /**
     * <p>Further detail about the status of the query.</p>
     */
    inline QueryExecutionStatus& WithStateChangeReason(Aws::String&& value) { SetStateChangeReason(std::move(value)); return *this;}

    /**
     * <p>Further detail about the status of the query.</p>
     */
    inline QueryExecutionStatus& WithStateChangeReason(const char* value) { SetStateChangeReason(value); return *this;}


    /**
     * <p>The date and time that the query was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmissionDateTime() const{ return m_submissionDateTime; }

    /**
     * <p>The date and time that the query was submitted.</p>
     */
    inline bool SubmissionDateTimeHasBeenSet() const { return m_submissionDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the query was submitted.</p>
     */
    inline void SetSubmissionDateTime(const Aws::Utils::DateTime& value) { m_submissionDateTimeHasBeenSet = true; m_submissionDateTime = value; }

    /**
     * <p>The date and time that the query was submitted.</p>
     */
    inline void SetSubmissionDateTime(Aws::Utils::DateTime&& value) { m_submissionDateTimeHasBeenSet = true; m_submissionDateTime = std::move(value); }

    /**
     * <p>The date and time that the query was submitted.</p>
     */
    inline QueryExecutionStatus& WithSubmissionDateTime(const Aws::Utils::DateTime& value) { SetSubmissionDateTime(value); return *this;}

    /**
     * <p>The date and time that the query was submitted.</p>
     */
    inline QueryExecutionStatus& WithSubmissionDateTime(Aws::Utils::DateTime&& value) { SetSubmissionDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the query completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDateTime() const{ return m_completionDateTime; }

    /**
     * <p>The date and time that the query completed.</p>
     */
    inline bool CompletionDateTimeHasBeenSet() const { return m_completionDateTimeHasBeenSet; }

    /**
     * <p>The date and time that the query completed.</p>
     */
    inline void SetCompletionDateTime(const Aws::Utils::DateTime& value) { m_completionDateTimeHasBeenSet = true; m_completionDateTime = value; }

    /**
     * <p>The date and time that the query completed.</p>
     */
    inline void SetCompletionDateTime(Aws::Utils::DateTime&& value) { m_completionDateTimeHasBeenSet = true; m_completionDateTime = std::move(value); }

    /**
     * <p>The date and time that the query completed.</p>
     */
    inline QueryExecutionStatus& WithCompletionDateTime(const Aws::Utils::DateTime& value) { SetCompletionDateTime(value); return *this;}

    /**
     * <p>The date and time that the query completed.</p>
     */
    inline QueryExecutionStatus& WithCompletionDateTime(Aws::Utils::DateTime&& value) { SetCompletionDateTime(std::move(value)); return *this;}

  private:

    QueryExecutionState m_state;
    bool m_stateHasBeenSet;

    Aws::String m_stateChangeReason;
    bool m_stateChangeReasonHasBeenSet;

    Aws::Utils::DateTime m_submissionDateTime;
    bool m_submissionDateTimeHasBeenSet;

    Aws::Utils::DateTime m_completionDateTime;
    bool m_completionDateTimeHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
