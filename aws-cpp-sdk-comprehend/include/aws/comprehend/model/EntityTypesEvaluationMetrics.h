﻿/**
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
   * <p>Detailed information about the accuracy of an entity recognizer for a
   * specific entity type. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/EntityTypesEvaluationMetrics">AWS
   * API Reference</a></p>
   */
  class AWS_COMPREHEND_API EntityTypesEvaluationMetrics
  {
  public:
    EntityTypesEvaluationMetrics();
    EntityTypesEvaluationMetrics(Aws::Utils::Json::JsonView jsonValue);
    EntityTypesEvaluationMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A measure of the usefulness of the recognizer results for a specific entity
     * type in the test data. High precision means that the recognizer returned
     * substantially more relevant results than irrelevant ones. </p>
     */
    inline double GetPrecision() const{ return m_precision; }

    /**
     * <p>A measure of the usefulness of the recognizer results for a specific entity
     * type in the test data. High precision means that the recognizer returned
     * substantially more relevant results than irrelevant ones. </p>
     */
    inline bool PrecisionHasBeenSet() const { return m_precisionHasBeenSet; }

    /**
     * <p>A measure of the usefulness of the recognizer results for a specific entity
     * type in the test data. High precision means that the recognizer returned
     * substantially more relevant results than irrelevant ones. </p>
     */
    inline void SetPrecision(double value) { m_precisionHasBeenSet = true; m_precision = value; }

    /**
     * <p>A measure of the usefulness of the recognizer results for a specific entity
     * type in the test data. High precision means that the recognizer returned
     * substantially more relevant results than irrelevant ones. </p>
     */
    inline EntityTypesEvaluationMetrics& WithPrecision(double value) { SetPrecision(value); return *this;}


    /**
     * <p>A measure of how complete the recognizer results are for a specific entity
     * type in the test data. High recall means that the recognizer returned most of
     * the relevant results.</p>
     */
    inline double GetRecall() const{ return m_recall; }

    /**
     * <p>A measure of how complete the recognizer results are for a specific entity
     * type in the test data. High recall means that the recognizer returned most of
     * the relevant results.</p>
     */
    inline bool RecallHasBeenSet() const { return m_recallHasBeenSet; }

    /**
     * <p>A measure of how complete the recognizer results are for a specific entity
     * type in the test data. High recall means that the recognizer returned most of
     * the relevant results.</p>
     */
    inline void SetRecall(double value) { m_recallHasBeenSet = true; m_recall = value; }

    /**
     * <p>A measure of how complete the recognizer results are for a specific entity
     * type in the test data. High recall means that the recognizer returned most of
     * the relevant results.</p>
     */
    inline EntityTypesEvaluationMetrics& WithRecall(double value) { SetRecall(value); return *this;}


    /**
     * <p>A measure of how accurate the recognizer results are for a specific entity
     * type in the test data. It is derived from the <code>Precision</code> and
     * <code>Recall</code> values. The <code>F1Score</code> is the harmonic average of
     * the two scores. The highest score is 1, and the worst score is 0. </p>
     */
    inline double GetF1Score() const{ return m_f1Score; }

    /**
     * <p>A measure of how accurate the recognizer results are for a specific entity
     * type in the test data. It is derived from the <code>Precision</code> and
     * <code>Recall</code> values. The <code>F1Score</code> is the harmonic average of
     * the two scores. The highest score is 1, and the worst score is 0. </p>
     */
    inline bool F1ScoreHasBeenSet() const { return m_f1ScoreHasBeenSet; }

    /**
     * <p>A measure of how accurate the recognizer results are for a specific entity
     * type in the test data. It is derived from the <code>Precision</code> and
     * <code>Recall</code> values. The <code>F1Score</code> is the harmonic average of
     * the two scores. The highest score is 1, and the worst score is 0. </p>
     */
    inline void SetF1Score(double value) { m_f1ScoreHasBeenSet = true; m_f1Score = value; }

    /**
     * <p>A measure of how accurate the recognizer results are for a specific entity
     * type in the test data. It is derived from the <code>Precision</code> and
     * <code>Recall</code> values. The <code>F1Score</code> is the harmonic average of
     * the two scores. The highest score is 1, and the worst score is 0. </p>
     */
    inline EntityTypesEvaluationMetrics& WithF1Score(double value) { SetF1Score(value); return *this;}

  private:

    double m_precision;
    bool m_precisionHasBeenSet;

    double m_recall;
    bool m_recallHasBeenSet;

    double m_f1Score;
    bool m_f1ScoreHasBeenSet;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
