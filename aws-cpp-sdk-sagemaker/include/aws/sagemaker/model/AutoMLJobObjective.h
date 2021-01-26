/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AutoMLMetricEnum.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies a metric to minimize or maximize as the objective of a
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLJobObjective">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API AutoMLJobObjective
  {
  public:
    AutoMLJobObjective();
    AutoMLJobObjective(Aws::Utils::Json::JsonView jsonValue);
    AutoMLJobObjective& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the objective metric used to measure the predictive quality of a
     * machine learning system. This metric is optimized during training to provide the
     * best estimate for model parameter values from data.</p> <p>Here are the
     * options:</p> <ul> <li> <p> <code>MSE</code>: The mean squared error (MSE) is the
     * average of the squared differences between the predicted and actual values. It
     * is used for regression. MSE values are always positive, the better a model is at
     * predicting the actual values the smaller the MSE value. When the data contains
     * outliers, they tend to dominate the MSE which might cause subpar prediction
     * performance.</p> </li> <li> <p> <code>Accuracy</code>: The ratio of the number
     * correctly classified items to the total number (correctly and incorrectly)
     * classified. It is used for binary and multiclass classification. Measures how
     * close the predicted class values are to the actual values. Accuracy values vary
     * between zero and one, one being perfect accuracy and zero perfect
     * inaccuracy.</p> </li> <li> <p> <code>F1</code>: The F1 score is the harmonic
     * mean of the precision and recall. It is used for binary classification into
     * classes traditionally referred to as positive and negative. Predictions are said
     * to be true when they match their actual (correct) class; false when they do not.
     * Precision is the ratio of the true positive predictions to all positive
     * predictions (including the false positives) in a data set and measures the
     * quality of the prediction when it predicts the positive class. Recall (or
     * sensitivity) is the ratio of the true positive predictions to all actual
     * positive instances and measures how completely a model predicts the actual class
     * members in a data set. The standard F1 score weighs precision and recall
     * equally. But which metric is paramount typically depends on specific aspects of
     * a problem. F1 scores vary between zero and one, one being the best possible
     * performance and zero the worst.</p> </li> <li> <p> <code>AUC</code>: The area
     * under the curve (AUC) metric is used to compare and evaluate binary
     * classification by algorithms such as logistic regression that return
     * probabilities. A threshold is needed to map the probabilities into
     * classifications. The relevant curve is the receiver operating characteristic
     * curve that plots the true positive rate (TPR) of predictions (or recall) against
     * the false positive rate (FPR) as a function of the threshold value, above which
     * a prediction is considered positive. Increasing the threshold results in fewer
     * false positives but more false negatives. AUC is the area under this receiver
     * operating characteristic curve and so provides an aggregated measure of the
     * model performance across all possible classification thresholds. The AUC score
     * can also be interpreted as the probability that a randomly selected positive
     * data point is more likely to be predicted positive than a randomly selected
     * negative example. AUC scores vary between zero and one, one being perfect
     * accuracy and one half not better than a random classifier. Values less that one
     * half predict worse than a random predictor and such consistently bad predictors
     * can be inverted to obtain better than random predictors.</p> </li> <li> <p>
     * <code>F1macro</code>: The F1macro score applies F1 scoring to multiclass
     * classification. In this context, you have multiple classes to predict. You just
     * calculate the precision and recall for each class as you did for the positive
     * class in binary classification. Then used these values to calculate the F1 score
     * for each class and average them to obtain the F1macro score. F1macro scores vary
     * between zero and one, one being the best possible performance and zero the
     * worst.</p> </li> </ul> <p>If you do not specify a metric explicitly, the default
     * behavior is to automatically use:</p> <ul> <li> <p> <code>MSE</code>: for
     * regression.</p> </li> <li> <p> <code>F1</code>: for binary classification</p>
     * </li> <li> <p> <code>Accuracy</code>: for multiclass classification.</p> </li>
     * </ul>
     */
    inline const AutoMLMetricEnum& GetMetricName() const{ return m_metricName; }

    /**
     * <p>The name of the objective metric used to measure the predictive quality of a
     * machine learning system. This metric is optimized during training to provide the
     * best estimate for model parameter values from data.</p> <p>Here are the
     * options:</p> <ul> <li> <p> <code>MSE</code>: The mean squared error (MSE) is the
     * average of the squared differences between the predicted and actual values. It
     * is used for regression. MSE values are always positive, the better a model is at
     * predicting the actual values the smaller the MSE value. When the data contains
     * outliers, they tend to dominate the MSE which might cause subpar prediction
     * performance.</p> </li> <li> <p> <code>Accuracy</code>: The ratio of the number
     * correctly classified items to the total number (correctly and incorrectly)
     * classified. It is used for binary and multiclass classification. Measures how
     * close the predicted class values are to the actual values. Accuracy values vary
     * between zero and one, one being perfect accuracy and zero perfect
     * inaccuracy.</p> </li> <li> <p> <code>F1</code>: The F1 score is the harmonic
     * mean of the precision and recall. It is used for binary classification into
     * classes traditionally referred to as positive and negative. Predictions are said
     * to be true when they match their actual (correct) class; false when they do not.
     * Precision is the ratio of the true positive predictions to all positive
     * predictions (including the false positives) in a data set and measures the
     * quality of the prediction when it predicts the positive class. Recall (or
     * sensitivity) is the ratio of the true positive predictions to all actual
     * positive instances and measures how completely a model predicts the actual class
     * members in a data set. The standard F1 score weighs precision and recall
     * equally. But which metric is paramount typically depends on specific aspects of
     * a problem. F1 scores vary between zero and one, one being the best possible
     * performance and zero the worst.</p> </li> <li> <p> <code>AUC</code>: The area
     * under the curve (AUC) metric is used to compare and evaluate binary
     * classification by algorithms such as logistic regression that return
     * probabilities. A threshold is needed to map the probabilities into
     * classifications. The relevant curve is the receiver operating characteristic
     * curve that plots the true positive rate (TPR) of predictions (or recall) against
     * the false positive rate (FPR) as a function of the threshold value, above which
     * a prediction is considered positive. Increasing the threshold results in fewer
     * false positives but more false negatives. AUC is the area under this receiver
     * operating characteristic curve and so provides an aggregated measure of the
     * model performance across all possible classification thresholds. The AUC score
     * can also be interpreted as the probability that a randomly selected positive
     * data point is more likely to be predicted positive than a randomly selected
     * negative example. AUC scores vary between zero and one, one being perfect
     * accuracy and one half not better than a random classifier. Values less that one
     * half predict worse than a random predictor and such consistently bad predictors
     * can be inverted to obtain better than random predictors.</p> </li> <li> <p>
     * <code>F1macro</code>: The F1macro score applies F1 scoring to multiclass
     * classification. In this context, you have multiple classes to predict. You just
     * calculate the precision and recall for each class as you did for the positive
     * class in binary classification. Then used these values to calculate the F1 score
     * for each class and average them to obtain the F1macro score. F1macro scores vary
     * between zero and one, one being the best possible performance and zero the
     * worst.</p> </li> </ul> <p>If you do not specify a metric explicitly, the default
     * behavior is to automatically use:</p> <ul> <li> <p> <code>MSE</code>: for
     * regression.</p> </li> <li> <p> <code>F1</code>: for binary classification</p>
     * </li> <li> <p> <code>Accuracy</code>: for multiclass classification.</p> </li>
     * </ul>
     */
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }

    /**
     * <p>The name of the objective metric used to measure the predictive quality of a
     * machine learning system. This metric is optimized during training to provide the
     * best estimate for model parameter values from data.</p> <p>Here are the
     * options:</p> <ul> <li> <p> <code>MSE</code>: The mean squared error (MSE) is the
     * average of the squared differences between the predicted and actual values. It
     * is used for regression. MSE values are always positive, the better a model is at
     * predicting the actual values the smaller the MSE value. When the data contains
     * outliers, they tend to dominate the MSE which might cause subpar prediction
     * performance.</p> </li> <li> <p> <code>Accuracy</code>: The ratio of the number
     * correctly classified items to the total number (correctly and incorrectly)
     * classified. It is used for binary and multiclass classification. Measures how
     * close the predicted class values are to the actual values. Accuracy values vary
     * between zero and one, one being perfect accuracy and zero perfect
     * inaccuracy.</p> </li> <li> <p> <code>F1</code>: The F1 score is the harmonic
     * mean of the precision and recall. It is used for binary classification into
     * classes traditionally referred to as positive and negative. Predictions are said
     * to be true when they match their actual (correct) class; false when they do not.
     * Precision is the ratio of the true positive predictions to all positive
     * predictions (including the false positives) in a data set and measures the
     * quality of the prediction when it predicts the positive class. Recall (or
     * sensitivity) is the ratio of the true positive predictions to all actual
     * positive instances and measures how completely a model predicts the actual class
     * members in a data set. The standard F1 score weighs precision and recall
     * equally. But which metric is paramount typically depends on specific aspects of
     * a problem. F1 scores vary between zero and one, one being the best possible
     * performance and zero the worst.</p> </li> <li> <p> <code>AUC</code>: The area
     * under the curve (AUC) metric is used to compare and evaluate binary
     * classification by algorithms such as logistic regression that return
     * probabilities. A threshold is needed to map the probabilities into
     * classifications. The relevant curve is the receiver operating characteristic
     * curve that plots the true positive rate (TPR) of predictions (or recall) against
     * the false positive rate (FPR) as a function of the threshold value, above which
     * a prediction is considered positive. Increasing the threshold results in fewer
     * false positives but more false negatives. AUC is the area under this receiver
     * operating characteristic curve and so provides an aggregated measure of the
     * model performance across all possible classification thresholds. The AUC score
     * can also be interpreted as the probability that a randomly selected positive
     * data point is more likely to be predicted positive than a randomly selected
     * negative example. AUC scores vary between zero and one, one being perfect
     * accuracy and one half not better than a random classifier. Values less that one
     * half predict worse than a random predictor and such consistently bad predictors
     * can be inverted to obtain better than random predictors.</p> </li> <li> <p>
     * <code>F1macro</code>: The F1macro score applies F1 scoring to multiclass
     * classification. In this context, you have multiple classes to predict. You just
     * calculate the precision and recall for each class as you did for the positive
     * class in binary classification. Then used these values to calculate the F1 score
     * for each class and average them to obtain the F1macro score. F1macro scores vary
     * between zero and one, one being the best possible performance and zero the
     * worst.</p> </li> </ul> <p>If you do not specify a metric explicitly, the default
     * behavior is to automatically use:</p> <ul> <li> <p> <code>MSE</code>: for
     * regression.</p> </li> <li> <p> <code>F1</code>: for binary classification</p>
     * </li> <li> <p> <code>Accuracy</code>: for multiclass classification.</p> </li>
     * </ul>
     */
    inline void SetMetricName(const AutoMLMetricEnum& value) { m_metricNameHasBeenSet = true; m_metricName = value; }

    /**
     * <p>The name of the objective metric used to measure the predictive quality of a
     * machine learning system. This metric is optimized during training to provide the
     * best estimate for model parameter values from data.</p> <p>Here are the
     * options:</p> <ul> <li> <p> <code>MSE</code>: The mean squared error (MSE) is the
     * average of the squared differences between the predicted and actual values. It
     * is used for regression. MSE values are always positive, the better a model is at
     * predicting the actual values the smaller the MSE value. When the data contains
     * outliers, they tend to dominate the MSE which might cause subpar prediction
     * performance.</p> </li> <li> <p> <code>Accuracy</code>: The ratio of the number
     * correctly classified items to the total number (correctly and incorrectly)
     * classified. It is used for binary and multiclass classification. Measures how
     * close the predicted class values are to the actual values. Accuracy values vary
     * between zero and one, one being perfect accuracy and zero perfect
     * inaccuracy.</p> </li> <li> <p> <code>F1</code>: The F1 score is the harmonic
     * mean of the precision and recall. It is used for binary classification into
     * classes traditionally referred to as positive and negative. Predictions are said
     * to be true when they match their actual (correct) class; false when they do not.
     * Precision is the ratio of the true positive predictions to all positive
     * predictions (including the false positives) in a data set and measures the
     * quality of the prediction when it predicts the positive class. Recall (or
     * sensitivity) is the ratio of the true positive predictions to all actual
     * positive instances and measures how completely a model predicts the actual class
     * members in a data set. The standard F1 score weighs precision and recall
     * equally. But which metric is paramount typically depends on specific aspects of
     * a problem. F1 scores vary between zero and one, one being the best possible
     * performance and zero the worst.</p> </li> <li> <p> <code>AUC</code>: The area
     * under the curve (AUC) metric is used to compare and evaluate binary
     * classification by algorithms such as logistic regression that return
     * probabilities. A threshold is needed to map the probabilities into
     * classifications. The relevant curve is the receiver operating characteristic
     * curve that plots the true positive rate (TPR) of predictions (or recall) against
     * the false positive rate (FPR) as a function of the threshold value, above which
     * a prediction is considered positive. Increasing the threshold results in fewer
     * false positives but more false negatives. AUC is the area under this receiver
     * operating characteristic curve and so provides an aggregated measure of the
     * model performance across all possible classification thresholds. The AUC score
     * can also be interpreted as the probability that a randomly selected positive
     * data point is more likely to be predicted positive than a randomly selected
     * negative example. AUC scores vary between zero and one, one being perfect
     * accuracy and one half not better than a random classifier. Values less that one
     * half predict worse than a random predictor and such consistently bad predictors
     * can be inverted to obtain better than random predictors.</p> </li> <li> <p>
     * <code>F1macro</code>: The F1macro score applies F1 scoring to multiclass
     * classification. In this context, you have multiple classes to predict. You just
     * calculate the precision and recall for each class as you did for the positive
     * class in binary classification. Then used these values to calculate the F1 score
     * for each class and average them to obtain the F1macro score. F1macro scores vary
     * between zero and one, one being the best possible performance and zero the
     * worst.</p> </li> </ul> <p>If you do not specify a metric explicitly, the default
     * behavior is to automatically use:</p> <ul> <li> <p> <code>MSE</code>: for
     * regression.</p> </li> <li> <p> <code>F1</code>: for binary classification</p>
     * </li> <li> <p> <code>Accuracy</code>: for multiclass classification.</p> </li>
     * </ul>
     */
    inline void SetMetricName(AutoMLMetricEnum&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }

    /**
     * <p>The name of the objective metric used to measure the predictive quality of a
     * machine learning system. This metric is optimized during training to provide the
     * best estimate for model parameter values from data.</p> <p>Here are the
     * options:</p> <ul> <li> <p> <code>MSE</code>: The mean squared error (MSE) is the
     * average of the squared differences between the predicted and actual values. It
     * is used for regression. MSE values are always positive, the better a model is at
     * predicting the actual values the smaller the MSE value. When the data contains
     * outliers, they tend to dominate the MSE which might cause subpar prediction
     * performance.</p> </li> <li> <p> <code>Accuracy</code>: The ratio of the number
     * correctly classified items to the total number (correctly and incorrectly)
     * classified. It is used for binary and multiclass classification. Measures how
     * close the predicted class values are to the actual values. Accuracy values vary
     * between zero and one, one being perfect accuracy and zero perfect
     * inaccuracy.</p> </li> <li> <p> <code>F1</code>: The F1 score is the harmonic
     * mean of the precision and recall. It is used for binary classification into
     * classes traditionally referred to as positive and negative. Predictions are said
     * to be true when they match their actual (correct) class; false when they do not.
     * Precision is the ratio of the true positive predictions to all positive
     * predictions (including the false positives) in a data set and measures the
     * quality of the prediction when it predicts the positive class. Recall (or
     * sensitivity) is the ratio of the true positive predictions to all actual
     * positive instances and measures how completely a model predicts the actual class
     * members in a data set. The standard F1 score weighs precision and recall
     * equally. But which metric is paramount typically depends on specific aspects of
     * a problem. F1 scores vary between zero and one, one being the best possible
     * performance and zero the worst.</p> </li> <li> <p> <code>AUC</code>: The area
     * under the curve (AUC) metric is used to compare and evaluate binary
     * classification by algorithms such as logistic regression that return
     * probabilities. A threshold is needed to map the probabilities into
     * classifications. The relevant curve is the receiver operating characteristic
     * curve that plots the true positive rate (TPR) of predictions (or recall) against
     * the false positive rate (FPR) as a function of the threshold value, above which
     * a prediction is considered positive. Increasing the threshold results in fewer
     * false positives but more false negatives. AUC is the area under this receiver
     * operating characteristic curve and so provides an aggregated measure of the
     * model performance across all possible classification thresholds. The AUC score
     * can also be interpreted as the probability that a randomly selected positive
     * data point is more likely to be predicted positive than a randomly selected
     * negative example. AUC scores vary between zero and one, one being perfect
     * accuracy and one half not better than a random classifier. Values less that one
     * half predict worse than a random predictor and such consistently bad predictors
     * can be inverted to obtain better than random predictors.</p> </li> <li> <p>
     * <code>F1macro</code>: The F1macro score applies F1 scoring to multiclass
     * classification. In this context, you have multiple classes to predict. You just
     * calculate the precision and recall for each class as you did for the positive
     * class in binary classification. Then used these values to calculate the F1 score
     * for each class and average them to obtain the F1macro score. F1macro scores vary
     * between zero and one, one being the best possible performance and zero the
     * worst.</p> </li> </ul> <p>If you do not specify a metric explicitly, the default
     * behavior is to automatically use:</p> <ul> <li> <p> <code>MSE</code>: for
     * regression.</p> </li> <li> <p> <code>F1</code>: for binary classification</p>
     * </li> <li> <p> <code>Accuracy</code>: for multiclass classification.</p> </li>
     * </ul>
     */
    inline AutoMLJobObjective& WithMetricName(const AutoMLMetricEnum& value) { SetMetricName(value); return *this;}

    /**
     * <p>The name of the objective metric used to measure the predictive quality of a
     * machine learning system. This metric is optimized during training to provide the
     * best estimate for model parameter values from data.</p> <p>Here are the
     * options:</p> <ul> <li> <p> <code>MSE</code>: The mean squared error (MSE) is the
     * average of the squared differences between the predicted and actual values. It
     * is used for regression. MSE values are always positive, the better a model is at
     * predicting the actual values the smaller the MSE value. When the data contains
     * outliers, they tend to dominate the MSE which might cause subpar prediction
     * performance.</p> </li> <li> <p> <code>Accuracy</code>: The ratio of the number
     * correctly classified items to the total number (correctly and incorrectly)
     * classified. It is used for binary and multiclass classification. Measures how
     * close the predicted class values are to the actual values. Accuracy values vary
     * between zero and one, one being perfect accuracy and zero perfect
     * inaccuracy.</p> </li> <li> <p> <code>F1</code>: The F1 score is the harmonic
     * mean of the precision and recall. It is used for binary classification into
     * classes traditionally referred to as positive and negative. Predictions are said
     * to be true when they match their actual (correct) class; false when they do not.
     * Precision is the ratio of the true positive predictions to all positive
     * predictions (including the false positives) in a data set and measures the
     * quality of the prediction when it predicts the positive class. Recall (or
     * sensitivity) is the ratio of the true positive predictions to all actual
     * positive instances and measures how completely a model predicts the actual class
     * members in a data set. The standard F1 score weighs precision and recall
     * equally. But which metric is paramount typically depends on specific aspects of
     * a problem. F1 scores vary between zero and one, one being the best possible
     * performance and zero the worst.</p> </li> <li> <p> <code>AUC</code>: The area
     * under the curve (AUC) metric is used to compare and evaluate binary
     * classification by algorithms such as logistic regression that return
     * probabilities. A threshold is needed to map the probabilities into
     * classifications. The relevant curve is the receiver operating characteristic
     * curve that plots the true positive rate (TPR) of predictions (or recall) against
     * the false positive rate (FPR) as a function of the threshold value, above which
     * a prediction is considered positive. Increasing the threshold results in fewer
     * false positives but more false negatives. AUC is the area under this receiver
     * operating characteristic curve and so provides an aggregated measure of the
     * model performance across all possible classification thresholds. The AUC score
     * can also be interpreted as the probability that a randomly selected positive
     * data point is more likely to be predicted positive than a randomly selected
     * negative example. AUC scores vary between zero and one, one being perfect
     * accuracy and one half not better than a random classifier. Values less that one
     * half predict worse than a random predictor and such consistently bad predictors
     * can be inverted to obtain better than random predictors.</p> </li> <li> <p>
     * <code>F1macro</code>: The F1macro score applies F1 scoring to multiclass
     * classification. In this context, you have multiple classes to predict. You just
     * calculate the precision and recall for each class as you did for the positive
     * class in binary classification. Then used these values to calculate the F1 score
     * for each class and average them to obtain the F1macro score. F1macro scores vary
     * between zero and one, one being the best possible performance and zero the
     * worst.</p> </li> </ul> <p>If you do not specify a metric explicitly, the default
     * behavior is to automatically use:</p> <ul> <li> <p> <code>MSE</code>: for
     * regression.</p> </li> <li> <p> <code>F1</code>: for binary classification</p>
     * </li> <li> <p> <code>Accuracy</code>: for multiclass classification.</p> </li>
     * </ul>
     */
    inline AutoMLJobObjective& WithMetricName(AutoMLMetricEnum&& value) { SetMetricName(std::move(value)); return *this;}

  private:

    AutoMLMetricEnum m_metricName;
    bool m_metricNameHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
