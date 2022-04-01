/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/transcribe/model/CallAnalyticsJobStatus.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Provides summary information about a call analytics job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/CallAnalyticsJobSummary">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSCRIBESERVICE_API CallAnalyticsJobSummary
  {
  public:
    CallAnalyticsJobSummary();
    CallAnalyticsJobSummary(Aws::Utils::Json::JsonView jsonValue);
    CallAnalyticsJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the call analytics job.</p>
     */
    inline const Aws::String& GetCallAnalyticsJobName() const{ return m_callAnalyticsJobName; }

    /**
     * <p>The name of the call analytics job.</p>
     */
    inline bool CallAnalyticsJobNameHasBeenSet() const { return m_callAnalyticsJobNameHasBeenSet; }

    /**
     * <p>The name of the call analytics job.</p>
     */
    inline void SetCallAnalyticsJobName(const Aws::String& value) { m_callAnalyticsJobNameHasBeenSet = true; m_callAnalyticsJobName = value; }

    /**
     * <p>The name of the call analytics job.</p>
     */
    inline void SetCallAnalyticsJobName(Aws::String&& value) { m_callAnalyticsJobNameHasBeenSet = true; m_callAnalyticsJobName = std::move(value); }

    /**
     * <p>The name of the call analytics job.</p>
     */
    inline void SetCallAnalyticsJobName(const char* value) { m_callAnalyticsJobNameHasBeenSet = true; m_callAnalyticsJobName.assign(value); }

    /**
     * <p>The name of the call analytics job.</p>
     */
    inline CallAnalyticsJobSummary& WithCallAnalyticsJobName(const Aws::String& value) { SetCallAnalyticsJobName(value); return *this;}

    /**
     * <p>The name of the call analytics job.</p>
     */
    inline CallAnalyticsJobSummary& WithCallAnalyticsJobName(Aws::String&& value) { SetCallAnalyticsJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the call analytics job.</p>
     */
    inline CallAnalyticsJobSummary& WithCallAnalyticsJobName(const char* value) { SetCallAnalyticsJobName(value); return *this;}


    /**
     * <p>A timestamp that shows when the call analytics job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that shows when the call analytics job was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the call analytics job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A timestamp that shows when the call analytics job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the call analytics job was created.</p>
     */
    inline CallAnalyticsJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the call analytics job was created.</p>
     */
    inline CallAnalyticsJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the job began processing.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>A timestamp that shows when the job began processing.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the job began processing.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>A timestamp that shows when the job began processing.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the job began processing.</p>
     */
    inline CallAnalyticsJobSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the job began processing.</p>
     */
    inline CallAnalyticsJobSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that shows when the job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>A timestamp that shows when the job was completed.</p>
     */
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the job was completed.</p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>A timestamp that shows when the job was completed.</p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the job was completed.</p>
     */
    inline CallAnalyticsJobSummary& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the job was completed.</p>
     */
    inline CallAnalyticsJobSummary& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p>The language of the transcript in the source audio file.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language of the transcript in the source audio file.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language of the transcript in the source audio file.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language of the transcript in the source audio file.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language of the transcript in the source audio file.</p>
     */
    inline CallAnalyticsJobSummary& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language of the transcript in the source audio file.</p>
     */
    inline CallAnalyticsJobSummary& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The status of the call analytics job.</p>
     */
    inline const CallAnalyticsJobStatus& GetCallAnalyticsJobStatus() const{ return m_callAnalyticsJobStatus; }

    /**
     * <p>The status of the call analytics job.</p>
     */
    inline bool CallAnalyticsJobStatusHasBeenSet() const { return m_callAnalyticsJobStatusHasBeenSet; }

    /**
     * <p>The status of the call analytics job.</p>
     */
    inline void SetCallAnalyticsJobStatus(const CallAnalyticsJobStatus& value) { m_callAnalyticsJobStatusHasBeenSet = true; m_callAnalyticsJobStatus = value; }

    /**
     * <p>The status of the call analytics job.</p>
     */
    inline void SetCallAnalyticsJobStatus(CallAnalyticsJobStatus&& value) { m_callAnalyticsJobStatusHasBeenSet = true; m_callAnalyticsJobStatus = std::move(value); }

    /**
     * <p>The status of the call analytics job.</p>
     */
    inline CallAnalyticsJobSummary& WithCallAnalyticsJobStatus(const CallAnalyticsJobStatus& value) { SetCallAnalyticsJobStatus(value); return *this;}

    /**
     * <p>The status of the call analytics job.</p>
     */
    inline CallAnalyticsJobSummary& WithCallAnalyticsJobStatus(CallAnalyticsJobStatus&& value) { SetCallAnalyticsJobStatus(std::move(value)); return *this;}


    /**
     * <p>If the <code>CallAnalyticsJobStatus</code> is <code>FAILED</code>, a
     * description of the error.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the <code>CallAnalyticsJobStatus</code> is <code>FAILED</code>, a
     * description of the error.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If the <code>CallAnalyticsJobStatus</code> is <code>FAILED</code>, a
     * description of the error.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If the <code>CallAnalyticsJobStatus</code> is <code>FAILED</code>, a
     * description of the error.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If the <code>CallAnalyticsJobStatus</code> is <code>FAILED</code>, a
     * description of the error.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If the <code>CallAnalyticsJobStatus</code> is <code>FAILED</code>, a
     * description of the error.</p>
     */
    inline CallAnalyticsJobSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the <code>CallAnalyticsJobStatus</code> is <code>FAILED</code>, a
     * description of the error.</p>
     */
    inline CallAnalyticsJobSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the <code>CallAnalyticsJobStatus</code> is <code>FAILED</code>, a
     * description of the error.</p>
     */
    inline CallAnalyticsJobSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    Aws::String m_callAnalyticsJobName;
    bool m_callAnalyticsJobNameHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    CallAnalyticsJobStatus m_callAnalyticsJobStatus;
    bool m_callAnalyticsJobStatusHasBeenSet;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
