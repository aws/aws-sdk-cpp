/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ConfusionMatrix.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/ColumnImportance.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>The evaluation metrics for the find matches algorithm. The quality of your
   * machine learning transform is measured by getting your transform to predict some
   * matches and comparing the results to known matches from the same dataset. The
   * quality metrics are based on a subset of your data, so they are not
   * precise.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/FindMatchesMetrics">AWS
   * API Reference</a></p>
   */
  class FindMatchesMetrics
  {
  public:
    AWS_GLUE_API FindMatchesMetrics();
    AWS_GLUE_API FindMatchesMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API FindMatchesMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The area under the precision/recall curve (AUPRC) is a single number
     * measuring the overall quality of the transform, that is independent of the
     * choice made for precision vs. recall. Higher values indicate that you have a
     * more attractive precision vs. recall tradeoff.</p> <p>For more information, see
     * <a href="https://en.wikipedia.org/wiki/Precision_and_recall">Precision and
     * recall</a> in Wikipedia.</p>
     */
    inline double GetAreaUnderPRCurve() const{ return m_areaUnderPRCurve; }

    /**
     * <p>The area under the precision/recall curve (AUPRC) is a single number
     * measuring the overall quality of the transform, that is independent of the
     * choice made for precision vs. recall. Higher values indicate that you have a
     * more attractive precision vs. recall tradeoff.</p> <p>For more information, see
     * <a href="https://en.wikipedia.org/wiki/Precision_and_recall">Precision and
     * recall</a> in Wikipedia.</p>
     */
    inline bool AreaUnderPRCurveHasBeenSet() const { return m_areaUnderPRCurveHasBeenSet; }

    /**
     * <p>The area under the precision/recall curve (AUPRC) is a single number
     * measuring the overall quality of the transform, that is independent of the
     * choice made for precision vs. recall. Higher values indicate that you have a
     * more attractive precision vs. recall tradeoff.</p> <p>For more information, see
     * <a href="https://en.wikipedia.org/wiki/Precision_and_recall">Precision and
     * recall</a> in Wikipedia.</p>
     */
    inline void SetAreaUnderPRCurve(double value) { m_areaUnderPRCurveHasBeenSet = true; m_areaUnderPRCurve = value; }

    /**
     * <p>The area under the precision/recall curve (AUPRC) is a single number
     * measuring the overall quality of the transform, that is independent of the
     * choice made for precision vs. recall. Higher values indicate that you have a
     * more attractive precision vs. recall tradeoff.</p> <p>For more information, see
     * <a href="https://en.wikipedia.org/wiki/Precision_and_recall">Precision and
     * recall</a> in Wikipedia.</p>
     */
    inline FindMatchesMetrics& WithAreaUnderPRCurve(double value) { SetAreaUnderPRCurve(value); return *this;}


    /**
     * <p>The precision metric indicates when often your transform is correct when it
     * predicts a match. Specifically, it measures how well the transform finds true
     * positives from the total true positives possible.</p> <p>For more information,
     * see <a href="https://en.wikipedia.org/wiki/Precision_and_recall">Precision and
     * recall</a> in Wikipedia.</p>
     */
    inline double GetPrecision() const{ return m_precision; }

    /**
     * <p>The precision metric indicates when often your transform is correct when it
     * predicts a match. Specifically, it measures how well the transform finds true
     * positives from the total true positives possible.</p> <p>For more information,
     * see <a href="https://en.wikipedia.org/wiki/Precision_and_recall">Precision and
     * recall</a> in Wikipedia.</p>
     */
    inline bool PrecisionHasBeenSet() const { return m_precisionHasBeenSet; }

    /**
     * <p>The precision metric indicates when often your transform is correct when it
     * predicts a match. Specifically, it measures how well the transform finds true
     * positives from the total true positives possible.</p> <p>For more information,
     * see <a href="https://en.wikipedia.org/wiki/Precision_and_recall">Precision and
     * recall</a> in Wikipedia.</p>
     */
    inline void SetPrecision(double value) { m_precisionHasBeenSet = true; m_precision = value; }

    /**
     * <p>The precision metric indicates when often your transform is correct when it
     * predicts a match. Specifically, it measures how well the transform finds true
     * positives from the total true positives possible.</p> <p>For more information,
     * see <a href="https://en.wikipedia.org/wiki/Precision_and_recall">Precision and
     * recall</a> in Wikipedia.</p>
     */
    inline FindMatchesMetrics& WithPrecision(double value) { SetPrecision(value); return *this;}


    /**
     * <p>The recall metric indicates that for an actual match, how often your
     * transform predicts the match. Specifically, it measures how well the transform
     * finds true positives from the total records in the source data.</p> <p>For more
     * information, see <a
     * href="https://en.wikipedia.org/wiki/Precision_and_recall">Precision and
     * recall</a> in Wikipedia.</p>
     */
    inline double GetRecall() const{ return m_recall; }

    /**
     * <p>The recall metric indicates that for an actual match, how often your
     * transform predicts the match. Specifically, it measures how well the transform
     * finds true positives from the total records in the source data.</p> <p>For more
     * information, see <a
     * href="https://en.wikipedia.org/wiki/Precision_and_recall">Precision and
     * recall</a> in Wikipedia.</p>
     */
    inline bool RecallHasBeenSet() const { return m_recallHasBeenSet; }

    /**
     * <p>The recall metric indicates that for an actual match, how often your
     * transform predicts the match. Specifically, it measures how well the transform
     * finds true positives from the total records in the source data.</p> <p>For more
     * information, see <a
     * href="https://en.wikipedia.org/wiki/Precision_and_recall">Precision and
     * recall</a> in Wikipedia.</p>
     */
    inline void SetRecall(double value) { m_recallHasBeenSet = true; m_recall = value; }

    /**
     * <p>The recall metric indicates that for an actual match, how often your
     * transform predicts the match. Specifically, it measures how well the transform
     * finds true positives from the total records in the source data.</p> <p>For more
     * information, see <a
     * href="https://en.wikipedia.org/wiki/Precision_and_recall">Precision and
     * recall</a> in Wikipedia.</p>
     */
    inline FindMatchesMetrics& WithRecall(double value) { SetRecall(value); return *this;}


    /**
     * <p>The maximum F1 metric indicates the transform's accuracy between 0 and 1,
     * where 1 is the best accuracy.</p> <p>For more information, see <a
     * href="https://en.wikipedia.org/wiki/F1_score">F1 score</a> in Wikipedia.</p>
     */
    inline double GetF1() const{ return m_f1; }

    /**
     * <p>The maximum F1 metric indicates the transform's accuracy between 0 and 1,
     * where 1 is the best accuracy.</p> <p>For more information, see <a
     * href="https://en.wikipedia.org/wiki/F1_score">F1 score</a> in Wikipedia.</p>
     */
    inline bool F1HasBeenSet() const { return m_f1HasBeenSet; }

    /**
     * <p>The maximum F1 metric indicates the transform's accuracy between 0 and 1,
     * where 1 is the best accuracy.</p> <p>For more information, see <a
     * href="https://en.wikipedia.org/wiki/F1_score">F1 score</a> in Wikipedia.</p>
     */
    inline void SetF1(double value) { m_f1HasBeenSet = true; m_f1 = value; }

    /**
     * <p>The maximum F1 metric indicates the transform's accuracy between 0 and 1,
     * where 1 is the best accuracy.</p> <p>For more information, see <a
     * href="https://en.wikipedia.org/wiki/F1_score">F1 score</a> in Wikipedia.</p>
     */
    inline FindMatchesMetrics& WithF1(double value) { SetF1(value); return *this;}


    /**
     * <p>The confusion matrix shows you what your transform is predicting accurately
     * and what types of errors it is making.</p> <p>For more information, see <a
     * href="https://en.wikipedia.org/wiki/Confusion_matrix">Confusion matrix</a> in
     * Wikipedia.</p>
     */
    inline const ConfusionMatrix& GetConfusionMatrix() const{ return m_confusionMatrix; }

    /**
     * <p>The confusion matrix shows you what your transform is predicting accurately
     * and what types of errors it is making.</p> <p>For more information, see <a
     * href="https://en.wikipedia.org/wiki/Confusion_matrix">Confusion matrix</a> in
     * Wikipedia.</p>
     */
    inline bool ConfusionMatrixHasBeenSet() const { return m_confusionMatrixHasBeenSet; }

    /**
     * <p>The confusion matrix shows you what your transform is predicting accurately
     * and what types of errors it is making.</p> <p>For more information, see <a
     * href="https://en.wikipedia.org/wiki/Confusion_matrix">Confusion matrix</a> in
     * Wikipedia.</p>
     */
    inline void SetConfusionMatrix(const ConfusionMatrix& value) { m_confusionMatrixHasBeenSet = true; m_confusionMatrix = value; }

    /**
     * <p>The confusion matrix shows you what your transform is predicting accurately
     * and what types of errors it is making.</p> <p>For more information, see <a
     * href="https://en.wikipedia.org/wiki/Confusion_matrix">Confusion matrix</a> in
     * Wikipedia.</p>
     */
    inline void SetConfusionMatrix(ConfusionMatrix&& value) { m_confusionMatrixHasBeenSet = true; m_confusionMatrix = std::move(value); }

    /**
     * <p>The confusion matrix shows you what your transform is predicting accurately
     * and what types of errors it is making.</p> <p>For more information, see <a
     * href="https://en.wikipedia.org/wiki/Confusion_matrix">Confusion matrix</a> in
     * Wikipedia.</p>
     */
    inline FindMatchesMetrics& WithConfusionMatrix(const ConfusionMatrix& value) { SetConfusionMatrix(value); return *this;}

    /**
     * <p>The confusion matrix shows you what your transform is predicting accurately
     * and what types of errors it is making.</p> <p>For more information, see <a
     * href="https://en.wikipedia.org/wiki/Confusion_matrix">Confusion matrix</a> in
     * Wikipedia.</p>
     */
    inline FindMatchesMetrics& WithConfusionMatrix(ConfusionMatrix&& value) { SetConfusionMatrix(std::move(value)); return *this;}


    /**
     * <p>A list of <code>ColumnImportance</code> structures containing column
     * importance metrics, sorted in order of descending importance.</p>
     */
    inline const Aws::Vector<ColumnImportance>& GetColumnImportances() const{ return m_columnImportances; }

    /**
     * <p>A list of <code>ColumnImportance</code> structures containing column
     * importance metrics, sorted in order of descending importance.</p>
     */
    inline bool ColumnImportancesHasBeenSet() const { return m_columnImportancesHasBeenSet; }

    /**
     * <p>A list of <code>ColumnImportance</code> structures containing column
     * importance metrics, sorted in order of descending importance.</p>
     */
    inline void SetColumnImportances(const Aws::Vector<ColumnImportance>& value) { m_columnImportancesHasBeenSet = true; m_columnImportances = value; }

    /**
     * <p>A list of <code>ColumnImportance</code> structures containing column
     * importance metrics, sorted in order of descending importance.</p>
     */
    inline void SetColumnImportances(Aws::Vector<ColumnImportance>&& value) { m_columnImportancesHasBeenSet = true; m_columnImportances = std::move(value); }

    /**
     * <p>A list of <code>ColumnImportance</code> structures containing column
     * importance metrics, sorted in order of descending importance.</p>
     */
    inline FindMatchesMetrics& WithColumnImportances(const Aws::Vector<ColumnImportance>& value) { SetColumnImportances(value); return *this;}

    /**
     * <p>A list of <code>ColumnImportance</code> structures containing column
     * importance metrics, sorted in order of descending importance.</p>
     */
    inline FindMatchesMetrics& WithColumnImportances(Aws::Vector<ColumnImportance>&& value) { SetColumnImportances(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ColumnImportance</code> structures containing column
     * importance metrics, sorted in order of descending importance.</p>
     */
    inline FindMatchesMetrics& AddColumnImportances(const ColumnImportance& value) { m_columnImportancesHasBeenSet = true; m_columnImportances.push_back(value); return *this; }

    /**
     * <p>A list of <code>ColumnImportance</code> structures containing column
     * importance metrics, sorted in order of descending importance.</p>
     */
    inline FindMatchesMetrics& AddColumnImportances(ColumnImportance&& value) { m_columnImportancesHasBeenSet = true; m_columnImportances.push_back(std::move(value)); return *this; }

  private:

    double m_areaUnderPRCurve;
    bool m_areaUnderPRCurveHasBeenSet = false;

    double m_precision;
    bool m_precisionHasBeenSet = false;

    double m_recall;
    bool m_recallHasBeenSet = false;

    double m_f1;
    bool m_f1HasBeenSet = false;

    ConfusionMatrix m_confusionMatrix;
    bool m_confusionMatrixHasBeenSet = false;

    Aws::Vector<ColumnImportance> m_columnImportances;
    bool m_columnImportancesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
