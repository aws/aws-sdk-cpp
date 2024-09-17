/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex/LexRuntimeService_EXPORTS.h>
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
namespace LexRuntimeService
{
namespace Model
{

  /**
   * <p>The sentiment expressed in an utterance.</p> <p>When the bot is configured to
   * send utterances to Amazon Comprehend for sentiment analysis, this field
   * structure contains the result of the analysis.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex-2016-11-28/SentimentResponse">AWS
   * API Reference</a></p>
   */
  class SentimentResponse
  {
  public:
    AWS_LEXRUNTIMESERVICE_API SentimentResponse();
    AWS_LEXRUNTIMESERVICE_API SentimentResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API SentimentResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The inferred sentiment that Amazon Comprehend has the highest confidence
     * in.</p>
     */
    inline const Aws::String& GetSentimentLabel() const{ return m_sentimentLabel; }
    inline bool SentimentLabelHasBeenSet() const { return m_sentimentLabelHasBeenSet; }
    inline void SetSentimentLabel(const Aws::String& value) { m_sentimentLabelHasBeenSet = true; m_sentimentLabel = value; }
    inline void SetSentimentLabel(Aws::String&& value) { m_sentimentLabelHasBeenSet = true; m_sentimentLabel = std::move(value); }
    inline void SetSentimentLabel(const char* value) { m_sentimentLabelHasBeenSet = true; m_sentimentLabel.assign(value); }
    inline SentimentResponse& WithSentimentLabel(const Aws::String& value) { SetSentimentLabel(value); return *this;}
    inline SentimentResponse& WithSentimentLabel(Aws::String&& value) { SetSentimentLabel(std::move(value)); return *this;}
    inline SentimentResponse& WithSentimentLabel(const char* value) { SetSentimentLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The likelihood that the sentiment was correctly inferred.</p>
     */
    inline const Aws::String& GetSentimentScore() const{ return m_sentimentScore; }
    inline bool SentimentScoreHasBeenSet() const { return m_sentimentScoreHasBeenSet; }
    inline void SetSentimentScore(const Aws::String& value) { m_sentimentScoreHasBeenSet = true; m_sentimentScore = value; }
    inline void SetSentimentScore(Aws::String&& value) { m_sentimentScoreHasBeenSet = true; m_sentimentScore = std::move(value); }
    inline void SetSentimentScore(const char* value) { m_sentimentScoreHasBeenSet = true; m_sentimentScore.assign(value); }
    inline SentimentResponse& WithSentimentScore(const Aws::String& value) { SetSentimentScore(value); return *this;}
    inline SentimentResponse& WithSentimentScore(Aws::String&& value) { SetSentimentScore(std::move(value)); return *this;}
    inline SentimentResponse& WithSentimentScore(const char* value) { SetSentimentScore(value); return *this;}
    ///@}
  private:

    Aws::String m_sentimentLabel;
    bool m_sentimentLabelHasBeenSet = false;

    Aws::String m_sentimentScore;
    bool m_sentimentScoreHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeService
} // namespace Aws
