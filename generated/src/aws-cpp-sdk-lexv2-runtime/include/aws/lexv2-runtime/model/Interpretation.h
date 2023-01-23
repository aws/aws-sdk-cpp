/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>
#include <aws/lexv2-runtime/model/ConfidenceScore.h>
#include <aws/lexv2-runtime/model/SentimentResponse.h>
#include <aws/lexv2-runtime/model/Intent.h>
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
   * <p>An intent that Amazon Lex V2 determined might satisfy the user's utterance.
   * The intents are ordered by the confidence score. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/Interpretation">AWS
   * API Reference</a></p>
   */
  class Interpretation
  {
  public:
    AWS_LEXRUNTIMEV2_API Interpretation();
    AWS_LEXRUNTIMEV2_API Interpretation(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Interpretation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines the threshold where Amazon Lex V2 will insert the
     * <code>AMAZON.FallbackIntent</code>, <code>AMAZON.KendraSearchIntent</code>, or
     * both when returning alternative intents in a response.
     * <code>AMAZON.FallbackIntent</code> and <code>AMAZON.KendraSearchIntent</code>
     * are only inserted if they are configured for the bot.</p>
     */
    inline const ConfidenceScore& GetNluConfidence() const{ return m_nluConfidence; }

    /**
     * <p>Determines the threshold where Amazon Lex V2 will insert the
     * <code>AMAZON.FallbackIntent</code>, <code>AMAZON.KendraSearchIntent</code>, or
     * both when returning alternative intents in a response.
     * <code>AMAZON.FallbackIntent</code> and <code>AMAZON.KendraSearchIntent</code>
     * are only inserted if they are configured for the bot.</p>
     */
    inline bool NluConfidenceHasBeenSet() const { return m_nluConfidenceHasBeenSet; }

    /**
     * <p>Determines the threshold where Amazon Lex V2 will insert the
     * <code>AMAZON.FallbackIntent</code>, <code>AMAZON.KendraSearchIntent</code>, or
     * both when returning alternative intents in a response.
     * <code>AMAZON.FallbackIntent</code> and <code>AMAZON.KendraSearchIntent</code>
     * are only inserted if they are configured for the bot.</p>
     */
    inline void SetNluConfidence(const ConfidenceScore& value) { m_nluConfidenceHasBeenSet = true; m_nluConfidence = value; }

    /**
     * <p>Determines the threshold where Amazon Lex V2 will insert the
     * <code>AMAZON.FallbackIntent</code>, <code>AMAZON.KendraSearchIntent</code>, or
     * both when returning alternative intents in a response.
     * <code>AMAZON.FallbackIntent</code> and <code>AMAZON.KendraSearchIntent</code>
     * are only inserted if they are configured for the bot.</p>
     */
    inline void SetNluConfidence(ConfidenceScore&& value) { m_nluConfidenceHasBeenSet = true; m_nluConfidence = std::move(value); }

    /**
     * <p>Determines the threshold where Amazon Lex V2 will insert the
     * <code>AMAZON.FallbackIntent</code>, <code>AMAZON.KendraSearchIntent</code>, or
     * both when returning alternative intents in a response.
     * <code>AMAZON.FallbackIntent</code> and <code>AMAZON.KendraSearchIntent</code>
     * are only inserted if they are configured for the bot.</p>
     */
    inline Interpretation& WithNluConfidence(const ConfidenceScore& value) { SetNluConfidence(value); return *this;}

    /**
     * <p>Determines the threshold where Amazon Lex V2 will insert the
     * <code>AMAZON.FallbackIntent</code>, <code>AMAZON.KendraSearchIntent</code>, or
     * both when returning alternative intents in a response.
     * <code>AMAZON.FallbackIntent</code> and <code>AMAZON.KendraSearchIntent</code>
     * are only inserted if they are configured for the bot.</p>
     */
    inline Interpretation& WithNluConfidence(ConfidenceScore&& value) { SetNluConfidence(std::move(value)); return *this;}


    /**
     * <p>The sentiment expressed in an utterance. </p> <p>When the bot is configured
     * to send utterances to Amazon Comprehend for sentiment analysis, this field
     * contains the result of the analysis.</p>
     */
    inline const SentimentResponse& GetSentimentResponse() const{ return m_sentimentResponse; }

    /**
     * <p>The sentiment expressed in an utterance. </p> <p>When the bot is configured
     * to send utterances to Amazon Comprehend for sentiment analysis, this field
     * contains the result of the analysis.</p>
     */
    inline bool SentimentResponseHasBeenSet() const { return m_sentimentResponseHasBeenSet; }

    /**
     * <p>The sentiment expressed in an utterance. </p> <p>When the bot is configured
     * to send utterances to Amazon Comprehend for sentiment analysis, this field
     * contains the result of the analysis.</p>
     */
    inline void SetSentimentResponse(const SentimentResponse& value) { m_sentimentResponseHasBeenSet = true; m_sentimentResponse = value; }

    /**
     * <p>The sentiment expressed in an utterance. </p> <p>When the bot is configured
     * to send utterances to Amazon Comprehend for sentiment analysis, this field
     * contains the result of the analysis.</p>
     */
    inline void SetSentimentResponse(SentimentResponse&& value) { m_sentimentResponseHasBeenSet = true; m_sentimentResponse = std::move(value); }

    /**
     * <p>The sentiment expressed in an utterance. </p> <p>When the bot is configured
     * to send utterances to Amazon Comprehend for sentiment analysis, this field
     * contains the result of the analysis.</p>
     */
    inline Interpretation& WithSentimentResponse(const SentimentResponse& value) { SetSentimentResponse(value); return *this;}

    /**
     * <p>The sentiment expressed in an utterance. </p> <p>When the bot is configured
     * to send utterances to Amazon Comprehend for sentiment analysis, this field
     * contains the result of the analysis.</p>
     */
    inline Interpretation& WithSentimentResponse(SentimentResponse&& value) { SetSentimentResponse(std::move(value)); return *this;}


    /**
     * <p>A list of intents that might satisfy the user's utterance. The intents are
     * ordered by the confidence score.</p>
     */
    inline const Intent& GetIntent() const{ return m_intent; }

    /**
     * <p>A list of intents that might satisfy the user's utterance. The intents are
     * ordered by the confidence score.</p>
     */
    inline bool IntentHasBeenSet() const { return m_intentHasBeenSet; }

    /**
     * <p>A list of intents that might satisfy the user's utterance. The intents are
     * ordered by the confidence score.</p>
     */
    inline void SetIntent(const Intent& value) { m_intentHasBeenSet = true; m_intent = value; }

    /**
     * <p>A list of intents that might satisfy the user's utterance. The intents are
     * ordered by the confidence score.</p>
     */
    inline void SetIntent(Intent&& value) { m_intentHasBeenSet = true; m_intent = std::move(value); }

    /**
     * <p>A list of intents that might satisfy the user's utterance. The intents are
     * ordered by the confidence score.</p>
     */
    inline Interpretation& WithIntent(const Intent& value) { SetIntent(value); return *this;}

    /**
     * <p>A list of intents that might satisfy the user's utterance. The intents are
     * ordered by the confidence score.</p>
     */
    inline Interpretation& WithIntent(Intent&& value) { SetIntent(std::move(value)); return *this;}

  private:

    ConfidenceScore m_nluConfidence;
    bool m_nluConfidenceHasBeenSet = false;

    SentimentResponse m_sentimentResponse;
    bool m_sentimentResponseHasBeenSet = false;

    Intent m_intent;
    bool m_intentHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
