/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lexv2-models/model/TestResultMatchStatus.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>The number of items in the intent classification test.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/IntentClassificationTestResultItemCounts">AWS
   * API Reference</a></p>
   */
  class IntentClassificationTestResultItemCounts
  {
  public:
    AWS_LEXMODELSV2_API IntentClassificationTestResultItemCounts();
    AWS_LEXMODELSV2_API IntentClassificationTestResultItemCounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API IntentClassificationTestResultItemCounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of results in the intent classification test.</p>
     */
    inline int GetTotalResultCount() const{ return m_totalResultCount; }

    /**
     * <p>The total number of results in the intent classification test.</p>
     */
    inline bool TotalResultCountHasBeenSet() const { return m_totalResultCountHasBeenSet; }

    /**
     * <p>The total number of results in the intent classification test.</p>
     */
    inline void SetTotalResultCount(int value) { m_totalResultCountHasBeenSet = true; m_totalResultCount = value; }

    /**
     * <p>The total number of results in the intent classification test.</p>
     */
    inline IntentClassificationTestResultItemCounts& WithTotalResultCount(int value) { SetTotalResultCount(value); return *this;}


    /**
     * <p>The number of matched, mismatched, and execution error results for speech
     * transcription for the intent.</p>
     */
    inline const Aws::Map<TestResultMatchStatus, int>& GetSpeechTranscriptionResultCounts() const{ return m_speechTranscriptionResultCounts; }

    /**
     * <p>The number of matched, mismatched, and execution error results for speech
     * transcription for the intent.</p>
     */
    inline bool SpeechTranscriptionResultCountsHasBeenSet() const { return m_speechTranscriptionResultCountsHasBeenSet; }

    /**
     * <p>The number of matched, mismatched, and execution error results for speech
     * transcription for the intent.</p>
     */
    inline void SetSpeechTranscriptionResultCounts(const Aws::Map<TestResultMatchStatus, int>& value) { m_speechTranscriptionResultCountsHasBeenSet = true; m_speechTranscriptionResultCounts = value; }

    /**
     * <p>The number of matched, mismatched, and execution error results for speech
     * transcription for the intent.</p>
     */
    inline void SetSpeechTranscriptionResultCounts(Aws::Map<TestResultMatchStatus, int>&& value) { m_speechTranscriptionResultCountsHasBeenSet = true; m_speechTranscriptionResultCounts = std::move(value); }

    /**
     * <p>The number of matched, mismatched, and execution error results for speech
     * transcription for the intent.</p>
     */
    inline IntentClassificationTestResultItemCounts& WithSpeechTranscriptionResultCounts(const Aws::Map<TestResultMatchStatus, int>& value) { SetSpeechTranscriptionResultCounts(value); return *this;}

    /**
     * <p>The number of matched, mismatched, and execution error results for speech
     * transcription for the intent.</p>
     */
    inline IntentClassificationTestResultItemCounts& WithSpeechTranscriptionResultCounts(Aws::Map<TestResultMatchStatus, int>&& value) { SetSpeechTranscriptionResultCounts(std::move(value)); return *this;}

    /**
     * <p>The number of matched, mismatched, and execution error results for speech
     * transcription for the intent.</p>
     */
    inline IntentClassificationTestResultItemCounts& AddSpeechTranscriptionResultCounts(const TestResultMatchStatus& key, int value) { m_speechTranscriptionResultCountsHasBeenSet = true; m_speechTranscriptionResultCounts.emplace(key, value); return *this; }

    /**
     * <p>The number of matched, mismatched, and execution error results for speech
     * transcription for the intent.</p>
     */
    inline IntentClassificationTestResultItemCounts& AddSpeechTranscriptionResultCounts(TestResultMatchStatus&& key, int value) { m_speechTranscriptionResultCountsHasBeenSet = true; m_speechTranscriptionResultCounts.emplace(std::move(key), value); return *this; }


    /**
     * <p>The number of matched and mismatched results for intent recognition for the
     * intent.</p>
     */
    inline const Aws::Map<TestResultMatchStatus, int>& GetIntentMatchResultCounts() const{ return m_intentMatchResultCounts; }

    /**
     * <p>The number of matched and mismatched results for intent recognition for the
     * intent.</p>
     */
    inline bool IntentMatchResultCountsHasBeenSet() const { return m_intentMatchResultCountsHasBeenSet; }

    /**
     * <p>The number of matched and mismatched results for intent recognition for the
     * intent.</p>
     */
    inline void SetIntentMatchResultCounts(const Aws::Map<TestResultMatchStatus, int>& value) { m_intentMatchResultCountsHasBeenSet = true; m_intentMatchResultCounts = value; }

    /**
     * <p>The number of matched and mismatched results for intent recognition for the
     * intent.</p>
     */
    inline void SetIntentMatchResultCounts(Aws::Map<TestResultMatchStatus, int>&& value) { m_intentMatchResultCountsHasBeenSet = true; m_intentMatchResultCounts = std::move(value); }

    /**
     * <p>The number of matched and mismatched results for intent recognition for the
     * intent.</p>
     */
    inline IntentClassificationTestResultItemCounts& WithIntentMatchResultCounts(const Aws::Map<TestResultMatchStatus, int>& value) { SetIntentMatchResultCounts(value); return *this;}

    /**
     * <p>The number of matched and mismatched results for intent recognition for the
     * intent.</p>
     */
    inline IntentClassificationTestResultItemCounts& WithIntentMatchResultCounts(Aws::Map<TestResultMatchStatus, int>&& value) { SetIntentMatchResultCounts(std::move(value)); return *this;}

    /**
     * <p>The number of matched and mismatched results for intent recognition for the
     * intent.</p>
     */
    inline IntentClassificationTestResultItemCounts& AddIntentMatchResultCounts(const TestResultMatchStatus& key, int value) { m_intentMatchResultCountsHasBeenSet = true; m_intentMatchResultCounts.emplace(key, value); return *this; }

    /**
     * <p>The number of matched and mismatched results for intent recognition for the
     * intent.</p>
     */
    inline IntentClassificationTestResultItemCounts& AddIntentMatchResultCounts(TestResultMatchStatus&& key, int value) { m_intentMatchResultCountsHasBeenSet = true; m_intentMatchResultCounts.emplace(std::move(key), value); return *this; }

  private:

    int m_totalResultCount;
    bool m_totalResultCountHasBeenSet = false;

    Aws::Map<TestResultMatchStatus, int> m_speechTranscriptionResultCounts;
    bool m_speechTranscriptionResultCountsHasBeenSet = false;

    Aws::Map<TestResultMatchStatus, int> m_intentMatchResultCounts;
    bool m_intentMatchResultCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
