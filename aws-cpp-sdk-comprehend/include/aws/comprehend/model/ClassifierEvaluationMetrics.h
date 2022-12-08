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
   * <p>Describes the result metrics for the test data associated with an
   * documentation classifier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/ClassifierEvaluationMetrics">AWS
   * API Reference</a></p>
   */
  class ClassifierEvaluationMetrics
  {
  public:
    AWS_COMPREHEND_API ClassifierEvaluationMetrics();
    AWS_COMPREHEND_API ClassifierEvaluationMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API ClassifierEvaluationMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fraction of the labels that were correct recognized. It is computed by
     * dividing the number of labels in the test documents that were correctly
     * recognized by the total number of labels in the test documents.</p>
     */
    inline double GetAccuracy() const{ return m_accuracy; }

    /**
     * <p>The fraction of the labels that were correct recognized. It is computed by
     * dividing the number of labels in the test documents that were correctly
     * recognized by the total number of labels in the test documents.</p>
     */
    inline bool AccuracyHasBeenSet() const { return m_accuracyHasBeenSet; }

    /**
     * <p>The fraction of the labels that were correct recognized. It is computed by
     * dividing the number of labels in the test documents that were correctly
     * recognized by the total number of labels in the test documents.</p>
     */
    inline void SetAccuracy(double value) { m_accuracyHasBeenSet = true; m_accuracy = value; }

    /**
     * <p>The fraction of the labels that were correct recognized. It is computed by
     * dividing the number of labels in the test documents that were correctly
     * recognized by the total number of labels in the test documents.</p>
     */
    inline ClassifierEvaluationMetrics& WithAccuracy(double value) { SetAccuracy(value); return *this;}


    /**
     * <p>A measure of the usefulness of the classifier results in the test data. High
     * precision means that the classifier returned substantially more relevant results
     * than irrelevant ones.</p>
     */
    inline double GetPrecision() const{ return m_precision; }

    /**
     * <p>A measure of the usefulness of the classifier results in the test data. High
     * precision means that the classifier returned substantially more relevant results
     * than irrelevant ones.</p>
     */
    inline bool PrecisionHasBeenSet() const { return m_precisionHasBeenSet; }

    /**
     * <p>A measure of the usefulness of the classifier results in the test data. High
     * precision means that the classifier returned substantially more relevant results
     * than irrelevant ones.</p>
     */
    inline void SetPrecision(double value) { m_precisionHasBeenSet = true; m_precision = value; }

    /**
     * <p>A measure of the usefulness of the classifier results in the test data. High
     * precision means that the classifier returned substantially more relevant results
     * than irrelevant ones.</p>
     */
    inline ClassifierEvaluationMetrics& WithPrecision(double value) { SetPrecision(value); return *this;}


    /**
     * <p>A measure of how complete the classifier results are for the test data. High
     * recall means that the classifier returned most of the relevant results. </p>
     */
    inline double GetRecall() const{ return m_recall; }

    /**
     * <p>A measure of how complete the classifier results are for the test data. High
     * recall means that the classifier returned most of the relevant results. </p>
     */
    inline bool RecallHasBeenSet() const { return m_recallHasBeenSet; }

    /**
     * <p>A measure of how complete the classifier results are for the test data. High
     * recall means that the classifier returned most of the relevant results. </p>
     */
    inline void SetRecall(double value) { m_recallHasBeenSet = true; m_recall = value; }

    /**
     * <p>A measure of how complete the classifier results are for the test data. High
     * recall means that the classifier returned most of the relevant results. </p>
     */
    inline ClassifierEvaluationMetrics& WithRecall(double value) { SetRecall(value); return *this;}


    /**
     * <p>A measure of how accurate the classifier results are for the test data. It is
     * derived from the <code>Precision</code> and <code>Recall</code> values. The
     * <code>F1Score</code> is the harmonic average of the two scores. The highest
     * score is 1, and the worst score is 0. </p>
     */
    inline double GetF1Score() const{ return m_f1Score; }

    /**
     * <p>A measure of how accurate the classifier results are for the test data. It is
     * derived from the <code>Precision</code> and <code>Recall</code> values. The
     * <code>F1Score</code> is the harmonic average of the two scores. The highest
     * score is 1, and the worst score is 0. </p>
     */
    inline bool F1ScoreHasBeenSet() const { return m_f1ScoreHasBeenSet; }

    /**
     * <p>A measure of how accurate the classifier results are for the test data. It is
     * derived from the <code>Precision</code> and <code>Recall</code> values. The
     * <code>F1Score</code> is the harmonic average of the two scores. The highest
     * score is 1, and the worst score is 0. </p>
     */
    inline void SetF1Score(double value) { m_f1ScoreHasBeenSet = true; m_f1Score = value; }

    /**
     * <p>A measure of how accurate the classifier results are for the test data. It is
     * derived from the <code>Precision</code> and <code>Recall</code> values. The
     * <code>F1Score</code> is the harmonic average of the two scores. The highest
     * score is 1, and the worst score is 0. </p>
     */
    inline ClassifierEvaluationMetrics& WithF1Score(double value) { SetF1Score(value); return *this;}


    /**
     * <p>A measure of the usefulness of the recognizer results in the test data. High
     * precision means that the recognizer returned substantially more relevant results
     * than irrelevant ones. Unlike the Precision metric which comes from averaging the
     * precision of all available labels, this is based on the overall score of all
     * precision scores added together.</p>
     */
    inline double GetMicroPrecision() const{ return m_microPrecision; }

    /**
     * <p>A measure of the usefulness of the recognizer results in the test data. High
     * precision means that the recognizer returned substantially more relevant results
     * than irrelevant ones. Unlike the Precision metric which comes from averaging the
     * precision of all available labels, this is based on the overall score of all
     * precision scores added together.</p>
     */
    inline bool MicroPrecisionHasBeenSet() const { return m_microPrecisionHasBeenSet; }

    /**
     * <p>A measure of the usefulness of the recognizer results in the test data. High
     * precision means that the recognizer returned substantially more relevant results
     * than irrelevant ones. Unlike the Precision metric which comes from averaging the
     * precision of all available labels, this is based on the overall score of all
     * precision scores added together.</p>
     */
    inline void SetMicroPrecision(double value) { m_microPrecisionHasBeenSet = true; m_microPrecision = value; }

    /**
     * <p>A measure of the usefulness of the recognizer results in the test data. High
     * precision means that the recognizer returned substantially more relevant results
     * than irrelevant ones. Unlike the Precision metric which comes from averaging the
     * precision of all available labels, this is based on the overall score of all
     * precision scores added together.</p>
     */
    inline ClassifierEvaluationMetrics& WithMicroPrecision(double value) { SetMicroPrecision(value); return *this;}


    /**
     * <p>A measure of how complete the classifier results are for the test data. High
     * recall means that the classifier returned most of the relevant results.
     * Specifically, this indicates how many of the correct categories in the text that
     * the model can predict. It is a percentage of correct categories in the text that
     * can found. Instead of averaging the recall scores of all labels (as with
     * Recall), micro Recall is based on the overall score of all recall scores added
     * together.</p>
     */
    inline double GetMicroRecall() const{ return m_microRecall; }

    /**
     * <p>A measure of how complete the classifier results are for the test data. High
     * recall means that the classifier returned most of the relevant results.
     * Specifically, this indicates how many of the correct categories in the text that
     * the model can predict. It is a percentage of correct categories in the text that
     * can found. Instead of averaging the recall scores of all labels (as with
     * Recall), micro Recall is based on the overall score of all recall scores added
     * together.</p>
     */
    inline bool MicroRecallHasBeenSet() const { return m_microRecallHasBeenSet; }

    /**
     * <p>A measure of how complete the classifier results are for the test data. High
     * recall means that the classifier returned most of the relevant results.
     * Specifically, this indicates how many of the correct categories in the text that
     * the model can predict. It is a percentage of correct categories in the text that
     * can found. Instead of averaging the recall scores of all labels (as with
     * Recall), micro Recall is based on the overall score of all recall scores added
     * together.</p>
     */
    inline void SetMicroRecall(double value) { m_microRecallHasBeenSet = true; m_microRecall = value; }

    /**
     * <p>A measure of how complete the classifier results are for the test data. High
     * recall means that the classifier returned most of the relevant results.
     * Specifically, this indicates how many of the correct categories in the text that
     * the model can predict. It is a percentage of correct categories in the text that
     * can found. Instead of averaging the recall scores of all labels (as with
     * Recall), micro Recall is based on the overall score of all recall scores added
     * together.</p>
     */
    inline ClassifierEvaluationMetrics& WithMicroRecall(double value) { SetMicroRecall(value); return *this;}


    /**
     * <p>A measure of how accurate the classifier results are for the test data. It is
     * a combination of the <code>Micro Precision</code> and <code>Micro Recall</code>
     * values. The <code>Micro F1Score</code> is the harmonic mean of the two scores.
     * The highest score is 1, and the worst score is 0.</p>
     */
    inline double GetMicroF1Score() const{ return m_microF1Score; }

    /**
     * <p>A measure of how accurate the classifier results are for the test data. It is
     * a combination of the <code>Micro Precision</code> and <code>Micro Recall</code>
     * values. The <code>Micro F1Score</code> is the harmonic mean of the two scores.
     * The highest score is 1, and the worst score is 0.</p>
     */
    inline bool MicroF1ScoreHasBeenSet() const { return m_microF1ScoreHasBeenSet; }

    /**
     * <p>A measure of how accurate the classifier results are for the test data. It is
     * a combination of the <code>Micro Precision</code> and <code>Micro Recall</code>
     * values. The <code>Micro F1Score</code> is the harmonic mean of the two scores.
     * The highest score is 1, and the worst score is 0.</p>
     */
    inline void SetMicroF1Score(double value) { m_microF1ScoreHasBeenSet = true; m_microF1Score = value; }

    /**
     * <p>A measure of how accurate the classifier results are for the test data. It is
     * a combination of the <code>Micro Precision</code> and <code>Micro Recall</code>
     * values. The <code>Micro F1Score</code> is the harmonic mean of the two scores.
     * The highest score is 1, and the worst score is 0.</p>
     */
    inline ClassifierEvaluationMetrics& WithMicroF1Score(double value) { SetMicroF1Score(value); return *this;}


    /**
     * <p>Indicates the fraction of labels that are incorrectly predicted. Also seen as
     * the fraction of wrong labels compared to the total number of labels. Scores
     * closer to zero are better.</p>
     */
    inline double GetHammingLoss() const{ return m_hammingLoss; }

    /**
     * <p>Indicates the fraction of labels that are incorrectly predicted. Also seen as
     * the fraction of wrong labels compared to the total number of labels. Scores
     * closer to zero are better.</p>
     */
    inline bool HammingLossHasBeenSet() const { return m_hammingLossHasBeenSet; }

    /**
     * <p>Indicates the fraction of labels that are incorrectly predicted. Also seen as
     * the fraction of wrong labels compared to the total number of labels. Scores
     * closer to zero are better.</p>
     */
    inline void SetHammingLoss(double value) { m_hammingLossHasBeenSet = true; m_hammingLoss = value; }

    /**
     * <p>Indicates the fraction of labels that are incorrectly predicted. Also seen as
     * the fraction of wrong labels compared to the total number of labels. Scores
     * closer to zero are better.</p>
     */
    inline ClassifierEvaluationMetrics& WithHammingLoss(double value) { SetHammingLoss(value); return *this;}

  private:

    double m_accuracy;
    bool m_accuracyHasBeenSet = false;

    double m_precision;
    bool m_precisionHasBeenSet = false;

    double m_recall;
    bool m_recallHasBeenSet = false;

    double m_f1Score;
    bool m_f1ScoreHasBeenSet = false;

    double m_microPrecision;
    bool m_microPrecisionHasBeenSet = false;

    double m_microRecall;
    bool m_microRecallHasBeenSet = false;

    double m_microF1Score;
    bool m_microF1ScoreHasBeenSet = false;

    double m_hammingLoss;
    bool m_hammingLossHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
