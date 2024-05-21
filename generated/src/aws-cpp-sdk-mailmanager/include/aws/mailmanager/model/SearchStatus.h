/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/SearchState.h>
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
    AWS_MAILMANAGER_API SearchStatus();
    AWS_MAILMANAGER_API SearchStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API SearchStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp of when the search completed (if finished).</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTimestamp() const{ return m_completionTimestamp; }

    /**
     * <p>The timestamp of when the search completed (if finished).</p>
     */
    inline bool CompletionTimestampHasBeenSet() const { return m_completionTimestampHasBeenSet; }

    /**
     * <p>The timestamp of when the search completed (if finished).</p>
     */
    inline void SetCompletionTimestamp(const Aws::Utils::DateTime& value) { m_completionTimestampHasBeenSet = true; m_completionTimestamp = value; }

    /**
     * <p>The timestamp of when the search completed (if finished).</p>
     */
    inline void SetCompletionTimestamp(Aws::Utils::DateTime&& value) { m_completionTimestampHasBeenSet = true; m_completionTimestamp = std::move(value); }

    /**
     * <p>The timestamp of when the search completed (if finished).</p>
     */
    inline SearchStatus& WithCompletionTimestamp(const Aws::Utils::DateTime& value) { SetCompletionTimestamp(value); return *this;}

    /**
     * <p>The timestamp of when the search completed (if finished).</p>
     */
    inline SearchStatus& WithCompletionTimestamp(Aws::Utils::DateTime&& value) { SetCompletionTimestamp(std::move(value)); return *this;}


    /**
     * <p>An error message if the search failed.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>An error message if the search failed.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>An error message if the search failed.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>An error message if the search failed.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>An error message if the search failed.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>An error message if the search failed.</p>
     */
    inline SearchStatus& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>An error message if the search failed.</p>
     */
    inline SearchStatus& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>An error message if the search failed.</p>
     */
    inline SearchStatus& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The current state of the search job.</p>
     */
    inline const SearchState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the search job.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the search job.</p>
     */
    inline void SetState(const SearchState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the search job.</p>
     */
    inline void SetState(SearchState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the search job.</p>
     */
    inline SearchStatus& WithState(const SearchState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the search job.</p>
     */
    inline SearchStatus& WithState(SearchState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the search was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmissionTimestamp() const{ return m_submissionTimestamp; }

    /**
     * <p>The timestamp of when the search was submitted.</p>
     */
    inline bool SubmissionTimestampHasBeenSet() const { return m_submissionTimestampHasBeenSet; }

    /**
     * <p>The timestamp of when the search was submitted.</p>
     */
    inline void SetSubmissionTimestamp(const Aws::Utils::DateTime& value) { m_submissionTimestampHasBeenSet = true; m_submissionTimestamp = value; }

    /**
     * <p>The timestamp of when the search was submitted.</p>
     */
    inline void SetSubmissionTimestamp(Aws::Utils::DateTime&& value) { m_submissionTimestampHasBeenSet = true; m_submissionTimestamp = std::move(value); }

    /**
     * <p>The timestamp of when the search was submitted.</p>
     */
    inline SearchStatus& WithSubmissionTimestamp(const Aws::Utils::DateTime& value) { SetSubmissionTimestamp(value); return *this;}

    /**
     * <p>The timestamp of when the search was submitted.</p>
     */
    inline SearchStatus& WithSubmissionTimestamp(Aws::Utils::DateTime&& value) { SetSubmissionTimestamp(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_completionTimestamp;
    bool m_completionTimestampHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    SearchState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_submissionTimestamp;
    bool m_submissionTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
