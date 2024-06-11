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
   * <p>Information about the overall results for a test execution
   * result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/OverallTestResultItem">AWS
   * API Reference</a></p>
   */
  class OverallTestResultItem
  {
  public:
    AWS_LEXMODELSV2_API OverallTestResultItem();
    AWS_LEXMODELSV2_API OverallTestResultItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API OverallTestResultItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the conversation contains multiple turns or not.</p>
     */
    inline bool GetMultiTurnConversation() const{ return m_multiTurnConversation; }
    inline bool MultiTurnConversationHasBeenSet() const { return m_multiTurnConversationHasBeenSet; }
    inline void SetMultiTurnConversation(bool value) { m_multiTurnConversationHasBeenSet = true; m_multiTurnConversation = value; }
    inline OverallTestResultItem& WithMultiTurnConversation(bool value) { SetMultiTurnConversation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of overall results in the result of the test execution.</p>
     */
    inline int GetTotalResultCount() const{ return m_totalResultCount; }
    inline bool TotalResultCountHasBeenSet() const { return m_totalResultCountHasBeenSet; }
    inline void SetTotalResultCount(int value) { m_totalResultCountHasBeenSet = true; m_totalResultCount = value; }
    inline OverallTestResultItem& WithTotalResultCount(int value) { SetTotalResultCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of speech transcription results in the overall test.</p>
     */
    inline const Aws::Map<TestResultMatchStatus, int>& GetSpeechTranscriptionResultCounts() const{ return m_speechTranscriptionResultCounts; }
    inline bool SpeechTranscriptionResultCountsHasBeenSet() const { return m_speechTranscriptionResultCountsHasBeenSet; }
    inline void SetSpeechTranscriptionResultCounts(const Aws::Map<TestResultMatchStatus, int>& value) { m_speechTranscriptionResultCountsHasBeenSet = true; m_speechTranscriptionResultCounts = value; }
    inline void SetSpeechTranscriptionResultCounts(Aws::Map<TestResultMatchStatus, int>&& value) { m_speechTranscriptionResultCountsHasBeenSet = true; m_speechTranscriptionResultCounts = std::move(value); }
    inline OverallTestResultItem& WithSpeechTranscriptionResultCounts(const Aws::Map<TestResultMatchStatus, int>& value) { SetSpeechTranscriptionResultCounts(value); return *this;}
    inline OverallTestResultItem& WithSpeechTranscriptionResultCounts(Aws::Map<TestResultMatchStatus, int>&& value) { SetSpeechTranscriptionResultCounts(std::move(value)); return *this;}
    inline OverallTestResultItem& AddSpeechTranscriptionResultCounts(const TestResultMatchStatus& key, int value) { m_speechTranscriptionResultCountsHasBeenSet = true; m_speechTranscriptionResultCounts.emplace(key, value); return *this; }
    inline OverallTestResultItem& AddSpeechTranscriptionResultCounts(TestResultMatchStatus&& key, int value) { m_speechTranscriptionResultCountsHasBeenSet = true; m_speechTranscriptionResultCounts.emplace(std::move(key), value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of results that succeeded.</p>
     */
    inline const Aws::Map<TestResultMatchStatus, int>& GetEndToEndResultCounts() const{ return m_endToEndResultCounts; }
    inline bool EndToEndResultCountsHasBeenSet() const { return m_endToEndResultCountsHasBeenSet; }
    inline void SetEndToEndResultCounts(const Aws::Map<TestResultMatchStatus, int>& value) { m_endToEndResultCountsHasBeenSet = true; m_endToEndResultCounts = value; }
    inline void SetEndToEndResultCounts(Aws::Map<TestResultMatchStatus, int>&& value) { m_endToEndResultCountsHasBeenSet = true; m_endToEndResultCounts = std::move(value); }
    inline OverallTestResultItem& WithEndToEndResultCounts(const Aws::Map<TestResultMatchStatus, int>& value) { SetEndToEndResultCounts(value); return *this;}
    inline OverallTestResultItem& WithEndToEndResultCounts(Aws::Map<TestResultMatchStatus, int>&& value) { SetEndToEndResultCounts(std::move(value)); return *this;}
    inline OverallTestResultItem& AddEndToEndResultCounts(const TestResultMatchStatus& key, int value) { m_endToEndResultCountsHasBeenSet = true; m_endToEndResultCounts.emplace(key, value); return *this; }
    inline OverallTestResultItem& AddEndToEndResultCounts(TestResultMatchStatus&& key, int value) { m_endToEndResultCountsHasBeenSet = true; m_endToEndResultCounts.emplace(std::move(key), value); return *this; }
    ///@}
  private:

    bool m_multiTurnConversation;
    bool m_multiTurnConversationHasBeenSet = false;

    int m_totalResultCount;
    bool m_totalResultCountHasBeenSet = false;

    Aws::Map<TestResultMatchStatus, int> m_speechTranscriptionResultCounts;
    bool m_speechTranscriptionResultCountsHasBeenSet = false;

    Aws::Map<TestResultMatchStatus, int> m_endToEndResultCounts;
    bool m_endToEndResultCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
