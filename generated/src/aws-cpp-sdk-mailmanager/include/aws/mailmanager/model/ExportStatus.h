/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/ExportState.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The current status of an archive export job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ExportStatus">AWS
   * API Reference</a></p>
   */
  class ExportStatus
  {
  public:
    AWS_MAILMANAGER_API ExportStatus();
    AWS_MAILMANAGER_API ExportStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API ExportStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when the export job completed (if finished).</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTimestamp() const{ return m_completionTimestamp; }
    inline bool CompletionTimestampHasBeenSet() const { return m_completionTimestampHasBeenSet; }
    inline void SetCompletionTimestamp(const Aws::Utils::DateTime& value) { m_completionTimestampHasBeenSet = true; m_completionTimestamp = value; }
    inline void SetCompletionTimestamp(Aws::Utils::DateTime&& value) { m_completionTimestampHasBeenSet = true; m_completionTimestamp = std::move(value); }
    inline ExportStatus& WithCompletionTimestamp(const Aws::Utils::DateTime& value) { SetCompletionTimestamp(value); return *this;}
    inline ExportStatus& WithCompletionTimestamp(Aws::Utils::DateTime&& value) { SetCompletionTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message if the export job failed.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline ExportStatus& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline ExportStatus& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline ExportStatus& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the export job.</p>
     */
    inline const ExportState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ExportState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ExportState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ExportStatus& WithState(const ExportState& value) { SetState(value); return *this;}
    inline ExportStatus& WithState(ExportState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the export job was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmissionTimestamp() const{ return m_submissionTimestamp; }
    inline bool SubmissionTimestampHasBeenSet() const { return m_submissionTimestampHasBeenSet; }
    inline void SetSubmissionTimestamp(const Aws::Utils::DateTime& value) { m_submissionTimestampHasBeenSet = true; m_submissionTimestamp = value; }
    inline void SetSubmissionTimestamp(Aws::Utils::DateTime&& value) { m_submissionTimestampHasBeenSet = true; m_submissionTimestamp = std::move(value); }
    inline ExportStatus& WithSubmissionTimestamp(const Aws::Utils::DateTime& value) { SetSubmissionTimestamp(value); return *this;}
    inline ExportStatus& WithSubmissionTimestamp(Aws::Utils::DateTime&& value) { SetSubmissionTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_completionTimestamp;
    bool m_completionTimestampHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    ExportState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_submissionTimestamp;
    bool m_submissionTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
