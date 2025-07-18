/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mailmanager/model/SearchState.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The current status of an archive search job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/SearchStatus">AWS
   * API Reference</a></p>
   */
  class SearchStatus
  {
  public:
    AWS_MAILMANAGER_API SearchStatus() = default;
    AWS_MAILMANAGER_API SearchStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API SearchStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when the search was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmissionTimestamp() const { return m_submissionTimestamp; }
    inline bool SubmissionTimestampHasBeenSet() const { return m_submissionTimestampHasBeenSet; }
    template<typename SubmissionTimestampT = Aws::Utils::DateTime>
    void SetSubmissionTimestamp(SubmissionTimestampT&& value) { m_submissionTimestampHasBeenSet = true; m_submissionTimestamp = std::forward<SubmissionTimestampT>(value); }
    template<typename SubmissionTimestampT = Aws::Utils::DateTime>
    SearchStatus& WithSubmissionTimestamp(SubmissionTimestampT&& value) { SetSubmissionTimestamp(std::forward<SubmissionTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the search completed (if finished).</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTimestamp() const { return m_completionTimestamp; }
    inline bool CompletionTimestampHasBeenSet() const { return m_completionTimestampHasBeenSet; }
    template<typename CompletionTimestampT = Aws::Utils::DateTime>
    void SetCompletionTimestamp(CompletionTimestampT&& value) { m_completionTimestampHasBeenSet = true; m_completionTimestamp = std::forward<CompletionTimestampT>(value); }
    template<typename CompletionTimestampT = Aws::Utils::DateTime>
    SearchStatus& WithCompletionTimestamp(CompletionTimestampT&& value) { SetCompletionTimestamp(std::forward<CompletionTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the search job.</p>
     */
    inline SearchState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(SearchState value) { m_stateHasBeenSet = true; m_state = value; }
    inline SearchStatus& WithState(SearchState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message if the search failed.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    SearchStatus& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_submissionTimestamp{};
    bool m_submissionTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_completionTimestamp{};
    bool m_completionTimestampHasBeenSet = false;

    SearchState m_state{SearchState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
