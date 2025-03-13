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
    AWS_LEXMODELSV2_API SlotResolutionTestResultItemCounts() = default;
    AWS_LEXMODELSV2_API SlotResolutionTestResultItemCounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SlotResolutionTestResultItemCounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of results.</p>
     */
    inline int GetTotalResultCount() const { return m_totalResultCount; }
    inline bool TotalResultCountHasBeenSet() const { return m_totalResultCountHasBeenSet; }
    inline void SetTotalResultCount(int value) { m_totalResultCountHasBeenSet = true; m_totalResultCount = value; }
    inline SlotResolutionTestResultItemCounts& WithTotalResultCount(int value) { SetTotalResultCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of matched, mismatched and execution error results for speech
     * transcription for the slot.</p>
     */
    inline const Aws::Map<TestResultMatchStatus, int>& GetSpeechTranscriptionResultCounts() const { return m_speechTranscriptionResultCounts; }
    inline bool SpeechTranscriptionResultCountsHasBeenSet() const { return m_speechTranscriptionResultCountsHasBeenSet; }
    template<typename SpeechTranscriptionResultCountsT = Aws::Map<TestResultMatchStatus, int>>
    void SetSpeechTranscriptionResultCounts(SpeechTranscriptionResultCountsT&& value) { m_speechTranscriptionResultCountsHasBeenSet = true; m_speechTranscriptionResultCounts = std::forward<SpeechTranscriptionResultCountsT>(value); }
    template<typename SpeechTranscriptionResultCountsT = Aws::Map<TestResultMatchStatus, int>>
    SlotResolutionTestResultItemCounts& WithSpeechTranscriptionResultCounts(SpeechTranscriptionResultCountsT&& value) { SetSpeechTranscriptionResultCounts(std::forward<SpeechTranscriptionResultCountsT>(value)); return *this;}
    inline SlotResolutionTestResultItemCounts& AddSpeechTranscriptionResultCounts(TestResultMatchStatus key, int value) {
      m_speechTranscriptionResultCountsHasBeenSet = true; m_speechTranscriptionResultCounts.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The number of matched and mismatched results for slot resolution for the
     * slot.</p>
     */
    inline const Aws::Map<TestResultMatchStatus, int>& GetSlotMatchResultCounts() const { return m_slotMatchResultCounts; }
    inline bool SlotMatchResultCountsHasBeenSet() const { return m_slotMatchResultCountsHasBeenSet; }
    template<typename SlotMatchResultCountsT = Aws::Map<TestResultMatchStatus, int>>
    void SetSlotMatchResultCounts(SlotMatchResultCountsT&& value) { m_slotMatchResultCountsHasBeenSet = true; m_slotMatchResultCounts = std::forward<SlotMatchResultCountsT>(value); }
    template<typename SlotMatchResultCountsT = Aws::Map<TestResultMatchStatus, int>>
    SlotResolutionTestResultItemCounts& WithSlotMatchResultCounts(SlotMatchResultCountsT&& value) { SetSlotMatchResultCounts(std::forward<SlotMatchResultCountsT>(value)); return *this;}
    inline SlotResolutionTestResultItemCounts& AddSlotMatchResultCounts(TestResultMatchStatus key, int value) {
      m_slotMatchResultCountsHasBeenSet = true; m_slotMatchResultCounts.emplace(key, value); return *this;
    }
    ///@}
  private:

    int m_totalResultCount{0};
    bool m_totalResultCountHasBeenSet = false;

    Aws::Map<TestResultMatchStatus, int> m_speechTranscriptionResultCounts;
    bool m_speechTranscriptionResultCountsHasBeenSet = false;

    Aws::Map<TestResultMatchStatus, int> m_slotMatchResultCounts;
    bool m_slotMatchResultCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
