/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-runtime/LexRuntimeV2_EXPORTS.h>

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
   * <p>The individual sentiment responses for the utterance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/runtime.lex.v2-2020-08-07/SentimentScore">AWS
   * API Reference</a></p>
   */
  class SentimentScore
  {
  public:
    AWS_LEXRUNTIMEV2_API SentimentScore();
    AWS_LEXRUNTIMEV2_API SentimentScore(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API SentimentScore& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXRUNTIMEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of its
     * detection of the <code>POSITIVE</code> sentiment.</p>
     */
    inline double GetPositive() const{ return m_positive; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of its
     * detection of the <code>POSITIVE</code> sentiment.</p>
     */
    inline bool PositiveHasBeenSet() const { return m_positiveHasBeenSet; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of its
     * detection of the <code>POSITIVE</code> sentiment.</p>
     */
    inline void SetPositive(double value) { m_positiveHasBeenSet = true; m_positive = value; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of its
     * detection of the <code>POSITIVE</code> sentiment.</p>
     */
    inline SentimentScore& WithPositive(double value) { SetPositive(value); return *this;}


    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of its
     * detection of the <code>NEGATIVE</code> sentiment.</p>
     */
    inline double GetNegative() const{ return m_negative; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of its
     * detection of the <code>NEGATIVE</code> sentiment.</p>
     */
    inline bool NegativeHasBeenSet() const { return m_negativeHasBeenSet; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of its
     * detection of the <code>NEGATIVE</code> sentiment.</p>
     */
    inline void SetNegative(double value) { m_negativeHasBeenSet = true; m_negative = value; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of its
     * detection of the <code>NEGATIVE</code> sentiment.</p>
     */
    inline SentimentScore& WithNegative(double value) { SetNegative(value); return *this;}


    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of its
     * detection of the <code>NEUTRAL</code> sentiment.</p>
     */
    inline double GetNeutral() const{ return m_neutral; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of its
     * detection of the <code>NEUTRAL</code> sentiment.</p>
     */
    inline bool NeutralHasBeenSet() const { return m_neutralHasBeenSet; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of its
     * detection of the <code>NEUTRAL</code> sentiment.</p>
     */
    inline void SetNeutral(double value) { m_neutralHasBeenSet = true; m_neutral = value; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of its
     * detection of the <code>NEUTRAL</code> sentiment.</p>
     */
    inline SentimentScore& WithNeutral(double value) { SetNeutral(value); return *this;}


    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of its
     * detection of the <code>MIXED</code> sentiment.</p>
     */
    inline double GetMixed() const{ return m_mixed; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of its
     * detection of the <code>MIXED</code> sentiment.</p>
     */
    inline bool MixedHasBeenSet() const { return m_mixedHasBeenSet; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of its
     * detection of the <code>MIXED</code> sentiment.</p>
     */
    inline void SetMixed(double value) { m_mixedHasBeenSet = true; m_mixed = value; }

    /**
     * <p>The level of confidence that Amazon Comprehend has in the accuracy of its
     * detection of the <code>MIXED</code> sentiment.</p>
     */
    inline SentimentScore& WithMixed(double value) { SetMixed(value); return *this;}

  private:

    double m_positive;
    bool m_positiveHasBeenSet = false;

    double m_negative;
    bool m_negativeHasBeenSet = false;

    double m_neutral;
    bool m_neutralHasBeenSet = false;

    double m_mixed;
    bool m_mixedHasBeenSet = false;
  };

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
