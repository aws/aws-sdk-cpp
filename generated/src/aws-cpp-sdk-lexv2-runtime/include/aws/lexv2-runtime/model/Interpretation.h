/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/lexv2-runtime/model/ConfidenceScore.h>
#include <aws/lexv2-runtime/model/SentimentResponse.h>
#include <aws/lexv2-runtime/model/Intent.h>
#include <aws/lexv2-runtime/model/InterpretationSource.h>
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
namespace LexRuntimeV2
{
namespace Model
{

  /**
   * <p>An object containing information about an intent that Amazon Lex V2
   * determined might satisfy the user's utterance. The intents are ordered by the
   * confidence score. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/Interpretation">AWS
   * API Reference</a></p>
   */
  class Interpretation
  {
  public:
    AWS_LEXRUNTIMEV2_API Interpretation() = default;
    AWS_LEXRUNTIMEV2_API Interpretation(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Interpretation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines the threshold where Amazon Lex V2 will insert the
     * <code>AMAZON.FallbackIntent</code>, <code>AMAZON.KendraSearchIntent</code>, or
     * both when returning alternative intents in a response.
     * <code>AMAZON.FallbackIntent</code> and <code>AMAZON.KendraSearchIntent</code>
     * are only inserted if they are configured for the bot.</p>
     */
    inline const ConfidenceScore& GetNluConfidence() const { return m_nluConfidence; }
    inline bool NluConfidenceHasBeenSet() const { return m_nluConfidenceHasBeenSet; }
    template<typename NluConfidenceT = ConfidenceScore>
    void SetNluConfidence(NluConfidenceT&& value) { m_nluConfidenceHasBeenSet = true; m_nluConfidence = std::forward<NluConfidenceT>(value); }
    template<typename NluConfidenceT = ConfidenceScore>
    Interpretation& WithNluConfidence(NluConfidenceT&& value) { SetNluConfidence(std::forward<NluConfidenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sentiment expressed in an utterance. </p> <p>When the bot is configured
     * to send utterances to Amazon Comprehend for sentiment analysis, this field
     * contains the result of the analysis.</p>
     */
    inline const SentimentResponse& GetSentimentResponse() const { return m_sentimentResponse; }
    inline bool SentimentResponseHasBeenSet() const { return m_sentimentResponseHasBeenSet; }
    template<typename SentimentResponseT = SentimentResponse>
    void SetSentimentResponse(SentimentResponseT&& value) { m_sentimentResponseHasBeenSet = true; m_sentimentResponse = std::forward<SentimentResponseT>(value); }
    template<typename SentimentResponseT = SentimentResponse>
    Interpretation& WithSentimentResponse(SentimentResponseT&& value) { SetSentimentResponse(std::forward<SentimentResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of intents that might satisfy the user's utterance. The intents are
     * ordered by the confidence score.</p>
     */
    inline const Intent& GetIntent() const { return m_intent; }
    inline bool IntentHasBeenSet() const { return m_intentHasBeenSet; }
    template<typename IntentT = Intent>
    void SetIntent(IntentT&& value) { m_intentHasBeenSet = true; m_intent = std::forward<IntentT>(value); }
    template<typename IntentT = Intent>
    Interpretation& WithIntent(IntentT&& value) { SetIntent(std::forward<IntentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the service that interpreted the input.</p>
     */
    inline InterpretationSource GetInterpretationSource() const { return m_interpretationSource; }
    inline bool InterpretationSourceHasBeenSet() const { return m_interpretationSourceHasBeenSet; }
    inline void SetInterpretationSource(InterpretationSource value) { m_interpretationSourceHasBeenSet = true; m_interpretationSource = value; }
    inline Interpretation& WithInterpretationSource(InterpretationSource value) { SetInterpretationSource(value); return *this;}
    ///@}
  private:

    ConfidenceScore m_nluConfidence;
    bool m_nluConfidenceHasBeenSet = false;

    SentimentResponse m_sentimentResponse;
    bool m_sentimentResponseHasBeenSet = false;

    Intent m_intent;
    bool m_intentHasBeenSet = false;

    InterpretationSource m_interpretationSource{InterpretationSource::NOT_SET};
    bool m_interpretationSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
