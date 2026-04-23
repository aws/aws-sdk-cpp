/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/SentimentType.h>
#include <aws/comprehend/model/SentimentScore.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>The result of calling the operation. The operation returns one object for
   * each document that is successfully processed by the operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/BatchDetectSentimentItemResult">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHEND_API BatchDetectSentimentItemResult
  {
  public:
    BatchDetectSentimentItemResult();
    BatchDetectSentimentItemResult(Aws::Utils::Json::JsonView jsonValue);
    BatchDetectSentimentItemResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The zero-based index of the document in the input list.</p>
     */
    inline int GetIndex() const{ return m_index; }

    /**
     * <p>The zero-based index of the document in the input list.</p>
     */
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }

    /**
     * <p>The zero-based index of the document in the input list.</p>
     */
    inline void SetIndex(int value) { m_indexHasBeenSet = true; m_index = value; }

    /**
     * <p>The zero-based index of the document in the input list.</p>
     */
    inline BatchDetectSentimentItemResult& WithIndex(int value) { SetIndex(value); return *this;}


    /**
     * <p>The sentiment detected in the document.</p>
     */
    inline const SentimentType& GetSentiment() const{ return m_sentiment; }

    /**
     * <p>The sentiment detected in the document.</p>
     */
    inline bool SentimentHasBeenSet() const { return m_sentimentHasBeenSet; }

    /**
     * <p>The sentiment detected in the document.</p>
     */
    inline void SetSentiment(const SentimentType& value) { m_sentimentHasBeenSet = true; m_sentiment = value; }

    /**
     * <p>The sentiment detected in the document.</p>
     */
    inline void SetSentiment(SentimentType&& value) { m_sentimentHasBeenSet = true; m_sentiment = std::move(value); }

    /**
     * <p>The sentiment detected in the document.</p>
     */
    inline BatchDetectSentimentItemResult& WithSentiment(const SentimentType& value) { SetSentiment(value); return *this;}

    /**
     * <p>The sentiment detected in the document.</p>
     */
    inline BatchDetectSentimentItemResult& WithSentiment(SentimentType&& value) { SetSentiment(std::move(value)); return *this;}


    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of its
     * sentiment detection.</p>
     */
    inline const SentimentScore& GetSentimentScore() const{ return m_sentimentScore; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of its
     * sentiment detection.</p>
     */
    inline bool SentimentScoreHasBeenSet() const { return m_sentimentScoreHasBeenSet; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of its
     * sentiment detection.</p>
     */
    inline void SetSentimentScore(const SentimentScore& value) { m_sentimentScoreHasBeenSet = true; m_sentimentScore = value; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of its
     * sentiment detection.</p>
     */
    inline void SetSentimentScore(SentimentScore&& value) { m_sentimentScoreHasBeenSet = true; m_sentimentScore = std::move(value); }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of its
     * sentiment detection.</p>
     */
    inline BatchDetectSentimentItemResult& WithSentimentScore(const SentimentScore& value) { SetSentimentScore(value); return *this;}

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of its
     * sentiment detection.</p>
     */
    inline BatchDetectSentimentItemResult& WithSentimentScore(SentimentScore&& value) { SetSentimentScore(std::move(value)); return *this;}

  private:

    int m_index;
    bool m_indexHasBeenSet;

    SentimentType m_sentiment;
    bool m_sentimentHasBeenSet;

    SentimentScore m_sentimentScore;
    bool m_sentimentScoreHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
