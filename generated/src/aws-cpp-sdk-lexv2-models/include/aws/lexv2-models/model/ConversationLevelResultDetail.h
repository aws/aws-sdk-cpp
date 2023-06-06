/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
   * <p>The conversation level details of the conversation used in the test
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ConversationLevelResultDetail">AWS
   * API Reference</a></p>
   */
  class ConversationLevelResultDetail
  {
  public:
    AWS_LEXMODELSV2_API ConversationLevelResultDetail();
    AWS_LEXMODELSV2_API ConversationLevelResultDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ConversationLevelResultDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The success or failure of the streaming of the conversation.</p>
     */
    inline const TestResultMatchStatus& GetEndToEndResult() const{ return m_endToEndResult; }

    /**
     * <p>The success or failure of the streaming of the conversation.</p>
     */
    inline bool EndToEndResultHasBeenSet() const { return m_endToEndResultHasBeenSet; }

    /**
     * <p>The success or failure of the streaming of the conversation.</p>
     */
    inline void SetEndToEndResult(const TestResultMatchStatus& value) { m_endToEndResultHasBeenSet = true; m_endToEndResult = value; }

    /**
     * <p>The success or failure of the streaming of the conversation.</p>
     */
    inline void SetEndToEndResult(TestResultMatchStatus&& value) { m_endToEndResultHasBeenSet = true; m_endToEndResult = std::move(value); }

    /**
     * <p>The success or failure of the streaming of the conversation.</p>
     */
    inline ConversationLevelResultDetail& WithEndToEndResult(const TestResultMatchStatus& value) { SetEndToEndResult(value); return *this;}

    /**
     * <p>The success or failure of the streaming of the conversation.</p>
     */
    inline ConversationLevelResultDetail& WithEndToEndResult(TestResultMatchStatus&& value) { SetEndToEndResult(std::move(value)); return *this;}


    /**
     * <p>The speech transcription success or failure details of the conversation.</p>
     */
    inline const TestResultMatchStatus& GetSpeechTranscriptionResult() const{ return m_speechTranscriptionResult; }

    /**
     * <p>The speech transcription success or failure details of the conversation.</p>
     */
    inline bool SpeechTranscriptionResultHasBeenSet() const { return m_speechTranscriptionResultHasBeenSet; }

    /**
     * <p>The speech transcription success or failure details of the conversation.</p>
     */
    inline void SetSpeechTranscriptionResult(const TestResultMatchStatus& value) { m_speechTranscriptionResultHasBeenSet = true; m_speechTranscriptionResult = value; }

    /**
     * <p>The speech transcription success or failure details of the conversation.</p>
     */
    inline void SetSpeechTranscriptionResult(TestResultMatchStatus&& value) { m_speechTranscriptionResultHasBeenSet = true; m_speechTranscriptionResult = std::move(value); }

    /**
     * <p>The speech transcription success or failure details of the conversation.</p>
     */
    inline ConversationLevelResultDetail& WithSpeechTranscriptionResult(const TestResultMatchStatus& value) { SetSpeechTranscriptionResult(value); return *this;}

    /**
     * <p>The speech transcription success or failure details of the conversation.</p>
     */
    inline ConversationLevelResultDetail& WithSpeechTranscriptionResult(TestResultMatchStatus&& value) { SetSpeechTranscriptionResult(std::move(value)); return *this;}

  private:

    TestResultMatchStatus m_endToEndResult;
    bool m_endToEndResultHasBeenSet = false;

    TestResultMatchStatus m_speechTranscriptionResult;
    bool m_speechTranscriptionResultHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
