/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/machinelearning/model/EntityStatus.h>
#include <aws/machinelearning/model/PerformanceMetrics.h>
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
namespace MachineLearning
{
namespace Model
{

  /**
   * <p> Represents the output of <code>GetEvaluation</code> operation. </p> <p>The
   * content consists of the detailed metadata and data file information and the
   * current status of the <code>Evaluation</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/Evaluation">AWS
   * API Reference</a></p>
   */
  class Evaluation
  {
  public:
    AWS_MACHINELEARNING_API Evaluation() = default;
    AWS_MACHINELEARNING_API Evaluation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API Evaluation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID that is assigned to the <code>Evaluation</code> at creation.</p>
     */
    inline const Aws::String& GetEvaluationId() const { return m_evaluationId; }
    inline bool EvaluationIdHasBeenSet() const { return m_evaluationIdHasBeenSet; }
    template<typename EvaluationIdT = Aws::String>
    void SetEvaluationId(EvaluationIdT&& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = std::forward<EvaluationIdT>(value); }
    template<typename EvaluationIdT = Aws::String>
    Evaluation& WithEvaluationId(EvaluationIdT&& value) { SetEvaluationId(std::forward<EvaluationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>MLModel</code> that is the focus of the evaluation.</p>
     */
    inline const Aws::String& GetMLModelId() const { return m_mLModelId; }
    inline bool MLModelIdHasBeenSet() const { return m_mLModelIdHasBeenSet; }
    template<typename MLModelIdT = Aws::String>
    void SetMLModelId(MLModelIdT&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = std::forward<MLModelIdT>(value); }
    template<typename MLModelIdT = Aws::String>
    Evaluation& WithMLModelId(MLModelIdT&& value) { SetMLModelId(std::forward<MLModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>DataSource</code> that is used to evaluate the
     * <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetEvaluationDataSourceId() const { return m_evaluationDataSourceId; }
    inline bool EvaluationDataSourceIdHasBeenSet() const { return m_evaluationDataSourceIdHasBeenSet; }
    template<typename EvaluationDataSourceIdT = Aws::String>
    void SetEvaluationDataSourceId(EvaluationDataSourceIdT&& value) { m_evaluationDataSourceIdHasBeenSet = true; m_evaluationDataSourceId = std::forward<EvaluationDataSourceIdT>(value); }
    template<typename EvaluationDataSourceIdT = Aws::String>
    Evaluation& WithEvaluationDataSourceId(EvaluationDataSourceIdT&& value) { SetEvaluationDataSourceId(std::forward<EvaluationDataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location and name of the data in Amazon Simple Storage Server (Amazon S3)
     * that is used in the evaluation.</p>
     */
    inline const Aws::String& GetInputDataLocationS3() const { return m_inputDataLocationS3; }
    inline bool InputDataLocationS3HasBeenSet() const { return m_inputDataLocationS3HasBeenSet; }
    template<typename InputDataLocationS3T = Aws::String>
    void SetInputDataLocationS3(InputDataLocationS3T&& value) { m_inputDataLocationS3HasBeenSet = true; m_inputDataLocationS3 = std::forward<InputDataLocationS3T>(value); }
    template<typename InputDataLocationS3T = Aws::String>
    Evaluation& WithInputDataLocationS3(InputDataLocationS3T&& value) { SetInputDataLocationS3(std::forward<InputDataLocationS3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS user account that invoked the evaluation. The account type can be
     * either an AWS root account or an AWS Identity and Access Management (IAM) user
     * account.</p>
     */
    inline const Aws::String& GetCreatedByIamUser() const { return m_createdByIamUser; }
    inline bool CreatedByIamUserHasBeenSet() const { return m_createdByIamUserHasBeenSet; }
    template<typename CreatedByIamUserT = Aws::String>
    void SetCreatedByIamUser(CreatedByIamUserT&& value) { m_createdByIamUserHasBeenSet = true; m_createdByIamUser = std::forward<CreatedByIamUserT>(value); }
    template<typename CreatedByIamUserT = Aws::String>
    Evaluation& WithCreatedByIamUser(CreatedByIamUserT&& value) { SetCreatedByIamUser(std::forward<CreatedByIamUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the <code>Evaluation</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Evaluation& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the most recent edit to the <code>Evaluation</code>. The time is
     * expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    Evaluation& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Evaluation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the evaluation. This element can have one of the following
     * values:</p> <ul> <li> <p> <code>PENDING</code> - Amazon Machine Learning (Amazon
     * ML) submitted a request to evaluate an <code>MLModel</code>.</p> </li> <li> <p>
     * <code>INPROGRESS</code> - The evaluation is underway.</p> </li> <li> <p>
     * <code>FAILED</code> - The request to evaluate an <code>MLModel</code> did not
     * run to completion. It is not usable.</p> </li> <li> <p> <code>COMPLETED</code> -
     * The evaluation process completed successfully.</p> </li> <li> <p>
     * <code>DELETED</code> - The <code>Evaluation</code> is marked as deleted. It is
     * not usable.</p> </li> </ul>
     */
    inline EntityStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EntityStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Evaluation& WithStatus(EntityStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Measurements of how well the <code>MLModel</code> performed, using
     * observations referenced by the <code>DataSource</code>. One of the following
     * metrics is returned, based on the type of the <code>MLModel</code>: </p> <ul>
     * <li> <p>BinaryAUC: A binary <code>MLModel</code> uses the Area Under the Curve
     * (AUC) technique to measure performance. </p> </li> <li> <p>RegressionRMSE: A
     * regression <code>MLModel</code> uses the Root Mean Square Error (RMSE) technique
     * to measure performance. RMSE measures the difference between predicted and
     * actual values for a single variable.</p> </li> <li> <p>MulticlassAvgFScore: A
     * multiclass <code>MLModel</code> uses the F1 score technique to measure
     * performance. </p> </li> </ul> <p> For more information about performance
     * metrics, please see the <a
     * href="https://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
     * Learning Developer Guide</a>. </p>
     */
    inline const PerformanceMetrics& GetPerformanceMetrics() const { return m_performanceMetrics; }
    inline bool PerformanceMetricsHasBeenSet() const { return m_performanceMetricsHasBeenSet; }
    template<typename PerformanceMetricsT = PerformanceMetrics>
    void SetPerformanceMetrics(PerformanceMetricsT&& value) { m_performanceMetricsHasBeenSet = true; m_performanceMetrics = std::forward<PerformanceMetricsT>(value); }
    template<typename PerformanceMetricsT = PerformanceMetrics>
    Evaluation& WithPerformanceMetrics(PerformanceMetricsT&& value) { SetPerformanceMetrics(std::forward<PerformanceMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the most recent details about evaluating the
     * <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    Evaluation& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline long long GetComputeTime() const { return m_computeTime; }
    inline bool ComputeTimeHasBeenSet() const { return m_computeTimeHasBeenSet; }
    inline void SetComputeTime(long long value) { m_computeTimeHasBeenSet = true; m_computeTime = value; }
    inline Evaluation& WithComputeTime(long long value) { SetComputeTime(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetFinishedAt() const { return m_finishedAt; }
    inline bool FinishedAtHasBeenSet() const { return m_finishedAtHasBeenSet; }
    template<typename FinishedAtT = Aws::Utils::DateTime>
    void SetFinishedAt(FinishedAtT&& value) { m_finishedAtHasBeenSet = true; m_finishedAt = std::forward<FinishedAtT>(value); }
    template<typename FinishedAtT = Aws::Utils::DateTime>
    Evaluation& WithFinishedAt(FinishedAtT&& value) { SetFinishedAt(std::forward<FinishedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    Evaluation& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_evaluationId;
    bool m_evaluationIdHasBeenSet = false;

    Aws::String m_mLModelId;
    bool m_mLModelIdHasBeenSet = false;

    Aws::String m_evaluationDataSourceId;
    bool m_evaluationDataSourceIdHasBeenSet = false;

    Aws::String m_inputDataLocationS3;
    bool m_inputDataLocationS3HasBeenSet = false;

    Aws::String m_createdByIamUser;
    bool m_createdByIamUserHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    EntityStatus m_status{EntityStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    PerformanceMetrics m_performanceMetrics;
    bool m_performanceMetricsHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    long long m_computeTime{0};
    bool m_computeTimeHasBeenSet = false;

    Aws::Utils::DateTime m_finishedAt{};
    bool m_finishedAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
