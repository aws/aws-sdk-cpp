/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>

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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the option range used for scoring in numeric
   * questions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormNumericQuestionOption">AWS
   * API Reference</a></p>
   */
  class EvaluationFormNumericQuestionOption
  {
  public:
    AWS_CONNECT_API EvaluationFormNumericQuestionOption();
    AWS_CONNECT_API EvaluationFormNumericQuestionOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API EvaluationFormNumericQuestionOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum answer value of the range option.</p>
     */
    inline int GetMinValue() const{ return m_minValue; }

    /**
     * <p>The minimum answer value of the range option.</p>
     */
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }

    /**
     * <p>The minimum answer value of the range option.</p>
     */
    inline void SetMinValue(int value) { m_minValueHasBeenSet = true; m_minValue = value; }

    /**
     * <p>The minimum answer value of the range option.</p>
     */
    inline EvaluationFormNumericQuestionOption& WithMinValue(int value) { SetMinValue(value); return *this;}


    /**
     * <p>The maximum answer value of the range option.</p>
     */
    inline int GetMaxValue() const{ return m_maxValue; }

    /**
     * <p>The maximum answer value of the range option.</p>
     */
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }

    /**
     * <p>The maximum answer value of the range option.</p>
     */
    inline void SetMaxValue(int value) { m_maxValueHasBeenSet = true; m_maxValue = value; }

    /**
     * <p>The maximum answer value of the range option.</p>
     */
    inline EvaluationFormNumericQuestionOption& WithMaxValue(int value) { SetMaxValue(value); return *this;}


    /**
     * <p>The score assigned to answer values within the range option.</p>
     */
    inline int GetScore() const{ return m_score; }

    /**
     * <p>The score assigned to answer values within the range option.</p>
     */
    inline bool ScoreHasBeenSet() const { return m_scoreHasBeenSet; }

    /**
     * <p>The score assigned to answer values within the range option.</p>
     */
    inline void SetScore(int value) { m_scoreHasBeenSet = true; m_score = value; }

    /**
     * <p>The score assigned to answer values within the range option.</p>
     */
    inline EvaluationFormNumericQuestionOption& WithScore(int value) { SetScore(value); return *this;}


    /**
     * <p>The flag to mark the option as automatic fail. If an automatic fail answer is
     * provided, the overall evaluation gets a score of 0.</p>
     */
    inline bool GetAutomaticFail() const{ return m_automaticFail; }

    /**
     * <p>The flag to mark the option as automatic fail. If an automatic fail answer is
     * provided, the overall evaluation gets a score of 0.</p>
     */
    inline bool AutomaticFailHasBeenSet() const { return m_automaticFailHasBeenSet; }

    /**
     * <p>The flag to mark the option as automatic fail. If an automatic fail answer is
     * provided, the overall evaluation gets a score of 0.</p>
     */
    inline void SetAutomaticFail(bool value) { m_automaticFailHasBeenSet = true; m_automaticFail = value; }

    /**
     * <p>The flag to mark the option as automatic fail. If an automatic fail answer is
     * provided, the overall evaluation gets a score of 0.</p>
     */
    inline EvaluationFormNumericQuestionOption& WithAutomaticFail(bool value) { SetAutomaticFail(value); return *this;}

  private:

    int m_minValue;
    bool m_minValueHasBeenSet = false;

    int m_maxValue;
    bool m_maxValueHasBeenSet = false;

    int m_score;
    bool m_scoreHasBeenSet = false;

    bool m_automaticFail;
    bool m_automaticFailHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
