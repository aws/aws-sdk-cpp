/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The evaluation metrics associated with the evaluated model.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/FlywheelModelEvaluationMetrics">AWS
   * API Reference</a></p>
   */
  class FlywheelModelEvaluationMetrics
  {
  public:
    AWS_COMPREHEND_API FlywheelModelEvaluationMetrics();
    AWS_COMPREHEND_API FlywheelModelEvaluationMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API FlywheelModelEvaluationMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The average F1 score from the evaluation metrics.</p>
     */
    inline double GetAverageF1Score() const{ return m_averageF1Score; }

    /**
     * <p>The average F1 score from the evaluation metrics.</p>
     */
    inline bool AverageF1ScoreHasBeenSet() const { return m_averageF1ScoreHasBeenSet; }

    /**
     * <p>The average F1 score from the evaluation metrics.</p>
     */
    inline void SetAverageF1Score(double value) { m_averageF1ScoreHasBeenSet = true; m_averageF1Score = value; }

    /**
     * <p>The average F1 score from the evaluation metrics.</p>
     */
    inline FlywheelModelEvaluationMetrics& WithAverageF1Score(double value) { SetAverageF1Score(value); return *this;}


    /**
     * <p>Average precision metric for the model.</p>
     */
    inline double GetAveragePrecision() const{ return m_averagePrecision; }

    /**
     * <p>Average precision metric for the model.</p>
     */
    inline bool AveragePrecisionHasBeenSet() const { return m_averagePrecisionHasBeenSet; }

    /**
     * <p>Average precision metric for the model.</p>
     */
    inline void SetAveragePrecision(double value) { m_averagePrecisionHasBeenSet = true; m_averagePrecision = value; }

    /**
     * <p>Average precision metric for the model.</p>
     */
    inline FlywheelModelEvaluationMetrics& WithAveragePrecision(double value) { SetAveragePrecision(value); return *this;}


    /**
     * <p>Average recall metric for the model.</p>
     */
    inline double GetAverageRecall() const{ return m_averageRecall; }

    /**
     * <p>Average recall metric for the model.</p>
     */
    inline bool AverageRecallHasBeenSet() const { return m_averageRecallHasBeenSet; }

    /**
     * <p>Average recall metric for the model.</p>
     */
    inline void SetAverageRecall(double value) { m_averageRecallHasBeenSet = true; m_averageRecall = value; }

    /**
     * <p>Average recall metric for the model.</p>
     */
    inline FlywheelModelEvaluationMetrics& WithAverageRecall(double value) { SetAverageRecall(value); return *this;}


    /**
     * <p>Average accuracy metric for the model.</p>
     */
    inline double GetAverageAccuracy() const{ return m_averageAccuracy; }

    /**
     * <p>Average accuracy metric for the model.</p>
     */
    inline bool AverageAccuracyHasBeenSet() const { return m_averageAccuracyHasBeenSet; }

    /**
     * <p>Average accuracy metric for the model.</p>
     */
    inline void SetAverageAccuracy(double value) { m_averageAccuracyHasBeenSet = true; m_averageAccuracy = value; }

    /**
     * <p>Average accuracy metric for the model.</p>
     */
    inline FlywheelModelEvaluationMetrics& WithAverageAccuracy(double value) { SetAverageAccuracy(value); return *this;}

  private:

    double m_averageF1Score;
    bool m_averageF1ScoreHasBeenSet = false;

    double m_averagePrecision;
    bool m_averagePrecisionHasBeenSet = false;

    double m_averageRecall;
    bool m_averageRecallHasBeenSet = false;

    double m_averageAccuracy;
    bool m_averageAccuracyHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
