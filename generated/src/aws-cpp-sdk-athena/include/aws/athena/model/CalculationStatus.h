/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/athena/model/CalculationExecutionState.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Contains information about the status of a notebook
   * calculation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CalculationStatus">AWS
   * API Reference</a></p>
   */
  class CalculationStatus
  {
  public:
    AWS_ATHENA_API CalculationStatus();
    AWS_ATHENA_API CalculationStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API CalculationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time the calculation was submitted for processing.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmissionDateTime() const{ return m_submissionDateTime; }

    /**
     * <p>The date and time the calculation was submitted for processing.</p>
     */
    inline bool SubmissionDateTimeHasBeenSet() const { return m_submissionDateTimeHasBeenSet; }

    /**
     * <p>The date and time the calculation was submitted for processing.</p>
     */
    inline void SetSubmissionDateTime(const Aws::Utils::DateTime& value) { m_submissionDateTimeHasBeenSet = true; m_submissionDateTime = value; }

    /**
     * <p>The date and time the calculation was submitted for processing.</p>
     */
    inline void SetSubmissionDateTime(Aws::Utils::DateTime&& value) { m_submissionDateTimeHasBeenSet = true; m_submissionDateTime = std::move(value); }

    /**
     * <p>The date and time the calculation was submitted for processing.</p>
     */
    inline CalculationStatus& WithSubmissionDateTime(const Aws::Utils::DateTime& value) { SetSubmissionDateTime(value); return *this;}

    /**
     * <p>The date and time the calculation was submitted for processing.</p>
     */
    inline CalculationStatus& WithSubmissionDateTime(Aws::Utils::DateTime&& value) { SetSubmissionDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time the calculation completed processing.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDateTime() const{ return m_completionDateTime; }

    /**
     * <p>The date and time the calculation completed processing.</p>
     */
    inline bool CompletionDateTimeHasBeenSet() const { return m_completionDateTimeHasBeenSet; }

    /**
     * <p>The date and time the calculation completed processing.</p>
     */
    inline void SetCompletionDateTime(const Aws::Utils::DateTime& value) { m_completionDateTimeHasBeenSet = true; m_completionDateTime = value; }

    /**
     * <p>The date and time the calculation completed processing.</p>
     */
    inline void SetCompletionDateTime(Aws::Utils::DateTime&& value) { m_completionDateTimeHasBeenSet = true; m_completionDateTime = std::move(value); }

    /**
     * <p>The date and time the calculation completed processing.</p>
     */
    inline CalculationStatus& WithCompletionDateTime(const Aws::Utils::DateTime& value) { SetCompletionDateTime(value); return *this;}

    /**
     * <p>The date and time the calculation completed processing.</p>
     */
    inline CalculationStatus& WithCompletionDateTime(Aws::Utils::DateTime&& value) { SetCompletionDateTime(std::move(value)); return *this;}


    /**
     * <p>The state of the calculation execution. A description of each state
     * follows.</p> <p> <code>CREATING</code> - The calculation is in the process of
     * being created.</p> <p> <code>CREATED</code> - The calculation has been created
     * and is ready to run.</p> <p> <code>QUEUED</code> - The calculation has been
     * queued for processing.</p> <p> <code>RUNNING</code> - The calculation is
     * running.</p> <p> <code>CANCELING</code> - A request to cancel the calculation
     * has been received and the system is working to stop it.</p> <p>
     * <code>CANCELED</code> - The calculation is no longer running as the result of a
     * cancel request.</p> <p> <code>COMPLETED</code> - The calculation has completed
     * without error.</p> <p> <code>FAILED</code> - The calculation failed and is no
     * longer running.</p>
     */
    inline const CalculationExecutionState& GetState() const{ return m_state; }

    /**
     * <p>The state of the calculation execution. A description of each state
     * follows.</p> <p> <code>CREATING</code> - The calculation is in the process of
     * being created.</p> <p> <code>CREATED</code> - The calculation has been created
     * and is ready to run.</p> <p> <code>QUEUED</code> - The calculation has been
     * queued for processing.</p> <p> <code>RUNNING</code> - The calculation is
     * running.</p> <p> <code>CANCELING</code> - A request to cancel the calculation
     * has been received and the system is working to stop it.</p> <p>
     * <code>CANCELED</code> - The calculation is no longer running as the result of a
     * cancel request.</p> <p> <code>COMPLETED</code> - The calculation has completed
     * without error.</p> <p> <code>FAILED</code> - The calculation failed and is no
     * longer running.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the calculation execution. A description of each state
     * follows.</p> <p> <code>CREATING</code> - The calculation is in the process of
     * being created.</p> <p> <code>CREATED</code> - The calculation has been created
     * and is ready to run.</p> <p> <code>QUEUED</code> - The calculation has been
     * queued for processing.</p> <p> <code>RUNNING</code> - The calculation is
     * running.</p> <p> <code>CANCELING</code> - A request to cancel the calculation
     * has been received and the system is working to stop it.</p> <p>
     * <code>CANCELED</code> - The calculation is no longer running as the result of a
     * cancel request.</p> <p> <code>COMPLETED</code> - The calculation has completed
     * without error.</p> <p> <code>FAILED</code> - The calculation failed and is no
     * longer running.</p>
     */
    inline void SetState(const CalculationExecutionState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the calculation execution. A description of each state
     * follows.</p> <p> <code>CREATING</code> - The calculation is in the process of
     * being created.</p> <p> <code>CREATED</code> - The calculation has been created
     * and is ready to run.</p> <p> <code>QUEUED</code> - The calculation has been
     * queued for processing.</p> <p> <code>RUNNING</code> - The calculation is
     * running.</p> <p> <code>CANCELING</code> - A request to cancel the calculation
     * has been received and the system is working to stop it.</p> <p>
     * <code>CANCELED</code> - The calculation is no longer running as the result of a
     * cancel request.</p> <p> <code>COMPLETED</code> - The calculation has completed
     * without error.</p> <p> <code>FAILED</code> - The calculation failed and is no
     * longer running.</p>
     */
    inline void SetState(CalculationExecutionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the calculation execution. A description of each state
     * follows.</p> <p> <code>CREATING</code> - The calculation is in the process of
     * being created.</p> <p> <code>CREATED</code> - The calculation has been created
     * and is ready to run.</p> <p> <code>QUEUED</code> - The calculation has been
     * queued for processing.</p> <p> <code>RUNNING</code> - The calculation is
     * running.</p> <p> <code>CANCELING</code> - A request to cancel the calculation
     * has been received and the system is working to stop it.</p> <p>
     * <code>CANCELED</code> - The calculation is no longer running as the result of a
     * cancel request.</p> <p> <code>COMPLETED</code> - The calculation has completed
     * without error.</p> <p> <code>FAILED</code> - The calculation failed and is no
     * longer running.</p>
     */
    inline CalculationStatus& WithState(const CalculationExecutionState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the calculation execution. A description of each state
     * follows.</p> <p> <code>CREATING</code> - The calculation is in the process of
     * being created.</p> <p> <code>CREATED</code> - The calculation has been created
     * and is ready to run.</p> <p> <code>QUEUED</code> - The calculation has been
     * queued for processing.</p> <p> <code>RUNNING</code> - The calculation is
     * running.</p> <p> <code>CANCELING</code> - A request to cancel the calculation
     * has been received and the system is working to stop it.</p> <p>
     * <code>CANCELED</code> - The calculation is no longer running as the result of a
     * cancel request.</p> <p> <code>COMPLETED</code> - The calculation has completed
     * without error.</p> <p> <code>FAILED</code> - The calculation failed and is no
     * longer running.</p>
     */
    inline CalculationStatus& WithState(CalculationExecutionState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The reason for the calculation state change (for example, the calculation was
     * canceled because the session was terminated).</p>
     */
    inline const Aws::String& GetStateChangeReason() const{ return m_stateChangeReason; }

    /**
     * <p>The reason for the calculation state change (for example, the calculation was
     * canceled because the session was terminated).</p>
     */
    inline bool StateChangeReasonHasBeenSet() const { return m_stateChangeReasonHasBeenSet; }

    /**
     * <p>The reason for the calculation state change (for example, the calculation was
     * canceled because the session was terminated).</p>
     */
    inline void SetStateChangeReason(const Aws::String& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = value; }

    /**
     * <p>The reason for the calculation state change (for example, the calculation was
     * canceled because the session was terminated).</p>
     */
    inline void SetStateChangeReason(Aws::String&& value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason = std::move(value); }

    /**
     * <p>The reason for the calculation state change (for example, the calculation was
     * canceled because the session was terminated).</p>
     */
    inline void SetStateChangeReason(const char* value) { m_stateChangeReasonHasBeenSet = true; m_stateChangeReason.assign(value); }

    /**
     * <p>The reason for the calculation state change (for example, the calculation was
     * canceled because the session was terminated).</p>
     */
    inline CalculationStatus& WithStateChangeReason(const Aws::String& value) { SetStateChangeReason(value); return *this;}

    /**
     * <p>The reason for the calculation state change (for example, the calculation was
     * canceled because the session was terminated).</p>
     */
    inline CalculationStatus& WithStateChangeReason(Aws::String&& value) { SetStateChangeReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the calculation state change (for example, the calculation was
     * canceled because the session was terminated).</p>
     */
    inline CalculationStatus& WithStateChangeReason(const char* value) { SetStateChangeReason(value); return *this;}

  private:

    Aws::Utils::DateTime m_submissionDateTime;
    bool m_submissionDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionDateTime;
    bool m_completionDateTimeHasBeenSet = false;

    CalculationExecutionState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_stateChangeReason;
    bool m_stateChangeReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
