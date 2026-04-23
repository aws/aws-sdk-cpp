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
   * <p>Describes the level of confidence that Amazon Comprehend has in the accuracy
   * of its detection of sentiments.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/SentimentScore">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHEND_API SentimentScore
  {
  public:
    SentimentScore();
    SentimentScore(Aws::Utils::Json::JsonView jsonValue);
    SentimentScore& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_positiveHasBeenSet;

    double m_negative;
    bool m_negativeHasBeenSet;

    double m_neutral;
    bool m_neutralHasBeenSet;

    double m_mixed;
    bool m_mixedHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
