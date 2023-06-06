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
   * <p>Information about the counts for a slot resolution in the results of a test
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SlotResolutionTestResultItemCounts">AWS
   * API Reference</a></p>
   */
  class SlotResolutionTestResultItemCounts
  {
  public:
    AWS_LEXMODELSV2_API SlotResolutionTestResultItemCounts();
    AWS_LEXMODELSV2_API SlotResolutionTestResultItemCounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotResolutionTestResultItemCounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of results.</p>
     */
    inline int GetTotalResultCount() const{ return m_totalResultCount; }

    /**
     * <p>The total number of results.</p>
     */
    inline bool TotalResultCountHasBeenSet() const { return m_totalResultCountHasBeenSet; }

    /**
     * <p>The total number of results.</p>
     */
    inline void SetTotalResultCount(int value) { m_totalResultCountHasBeenSet = true; m_totalResultCount = value; }

    /**
     * <p>The total number of results.</p>
     */
    inline SlotResolutionTestResultItemCounts& WithTotalResultCount(int value) { SetTotalResultCount(value); return *this;}


    /**
     * <p>The number of matched, mismatched and execution error results for speech
     * transcription for the slot.</p>
     */
    inline const Aws::Map<TestResultMatchStatus, int>& GetSpeechTranscriptionResultCounts() const{ return m_speechTranscriptionResultCounts; }

    /**
     * <p>The number of matched, mismatched and execution error results for speech
     * transcription for the slot.</p>
     */
    inline bool SpeechTranscriptionResultCountsHasBeenSet() const { return m_speechTranscriptionResultCountsHasBeenSet; }

    /**
     * <p>The number of matched, mismatched and execution error results for speech
     * transcription for the slot.</p>
     */
    inline void SetSpeechTranscriptionResultCounts(const Aws::Map<TestResultMatchStatus, int>& value) { m_speechTranscriptionResultCountsHasBeenSet = true; m_speechTranscriptionResultCounts = value; }

    /**
     * <p>The number of matched, mismatched and execution error results for speech
     * transcription for the slot.</p>
     */
    inline void SetSpeechTranscriptionResultCounts(Aws::Map<TestResultMatchStatus, int>&& value) { m_speechTranscriptionResultCountsHasBeenSet = true; m_speechTranscriptionResultCounts = std::move(value); }

    /**
     * <p>The number of matched, mismatched and execution error results for speech
     * transcription for the slot.</p>
     */
    inline SlotResolutionTestResultItemCounts& WithSpeechTranscriptionResultCounts(const Aws::Map<TestResultMatchStatus, int>& value) { SetSpeechTranscriptionResultCounts(value); return *this;}

    /**
     * <p>The number of matched, mismatched and execution error results for speech
     * transcription for the slot.</p>
     */
    inline SlotResolutionTestResultItemCounts& WithSpeechTranscriptionResultCounts(Aws::Map<TestResultMatchStatus, int>&& value) { SetSpeechTranscriptionResultCounts(std::move(value)); return *this;}

    /**
     * <p>The number of matched, mismatched and execution error results for speech
     * transcription for the slot.</p>
     */
    inline SlotResolutionTestResultItemCounts& AddSpeechTranscriptionResultCounts(const TestResultMatchStatus& key, int value) { m_speechTranscriptionResultCountsHasBeenSet = true; m_speechTranscriptionResultCounts.emplace(key, value); return *this; }

    /**
     * <p>The number of matched, mismatched and execution error results for speech
     * transcription for the slot.</p>
     */
    inline SlotResolutionTestResultItemCounts& AddSpeechTranscriptionResultCounts(TestResultMatchStatus&& key, int value) { m_speechTranscriptionResultCountsHasBeenSet = true; m_speechTranscriptionResultCounts.emplace(std::move(key), value); return *this; }


    /**
     * <p>The number of matched and mismatched results for slot resolution for the
     * slot.</p>
     */
    inline const Aws::Map<TestResultMatchStatus, int>& GetSlotMatchResultCounts() const{ return m_slotMatchResultCounts; }

    /**
     * <p>The number of matched and mismatched results for slot resolution for the
     * slot.</p>
     */
    inline bool SlotMatchResultCountsHasBeenSet() const { return m_slotMatchResultCountsHasBeenSet; }

    /**
     * <p>The number of matched and mismatched results for slot resolution for the
     * slot.</p>
     */
    inline void SetSlotMatchResultCounts(const Aws::Map<TestResultMatchStatus, int>& value) { m_slotMatchResultCountsHasBeenSet = true; m_slotMatchResultCounts = value; }

    /**
     * <p>The number of matched and mismatched results for slot resolution for the
     * slot.</p>
     */
    inline void SetSlotMatchResultCounts(Aws::Map<TestResultMatchStatus, int>&& value) { m_slotMatchResultCountsHasBeenSet = true; m_slotMatchResultCounts = std::move(value); }

    /**
     * <p>The number of matched and mismatched results for slot resolution for the
     * slot.</p>
     */
    inline SlotResolutionTestResultItemCounts& WithSlotMatchResultCounts(const Aws::Map<TestResultMatchStatus, int>& value) { SetSlotMatchResultCounts(value); return *this;}

    /**
     * <p>The number of matched and mismatched results for slot resolution for the
     * slot.</p>
     */
    inline SlotResolutionTestResultItemCounts& WithSlotMatchResultCounts(Aws::Map<TestResultMatchStatus, int>&& value) { SetSlotMatchResultCounts(std::move(value)); return *this;}

    /**
     * <p>The number of matched and mismatched results for slot resolution for the
     * slot.</p>
     */
    inline SlotResolutionTestResultItemCounts& AddSlotMatchResultCounts(const TestResultMatchStatus& key, int value) { m_slotMatchResultCountsHasBeenSet = true; m_slotMatchResultCounts.emplace(key, value); return *this; }

    /**
     * <p>The number of matched and mismatched results for slot resolution for the
     * slot.</p>
     */
    inline SlotResolutionTestResultItemCounts& AddSlotMatchResultCounts(TestResultMatchStatus&& key, int value) { m_slotMatchResultCountsHasBeenSet = true; m_slotMatchResultCounts.emplace(std::move(key), value); return *this; }

  private:

    int m_totalResultCount;
    bool m_totalResultCountHasBeenSet = false;

    Aws::Map<TestResultMatchStatus, int> m_speechTranscriptionResultCounts;
    bool m_speechTranscriptionResultCountsHasBeenSet = false;

    Aws::Map<TestResultMatchStatus, int> m_slotMatchResultCounts;
    bool m_slotMatchResultCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
