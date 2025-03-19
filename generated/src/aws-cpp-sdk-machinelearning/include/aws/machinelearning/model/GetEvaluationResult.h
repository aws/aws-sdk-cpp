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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MachineLearning
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>GetEvaluation</code> operation and describes
   * an <code>Evaluation</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/GetEvaluationOutput">AWS
   * API Reference</a></p>
   */
  class GetEvaluationResult
  {
  public:
    AWS_MACHINELEARNING_API GetEvaluationResult() = default;
    AWS_MACHINELEARNING_API GetEvaluationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API GetEvaluationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The evaluation ID which is same as the <code>EvaluationId</code> in the
     * request.</p>
     */
    inline const Aws::String& GetEvaluationId() const { return m_evaluationId; }
    template<typename EvaluationIdT = Aws::String>
    void SetEvaluationId(EvaluationIdT&& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = std::forward<EvaluationIdT>(value); }
    template<typename EvaluationIdT = Aws::String>
    GetEvaluationResult& WithEvaluationId(EvaluationIdT&& value) { SetEvaluationId(std::forward<EvaluationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>MLModel</code> that was the focus of the evaluation.</p>
     */
    inline const Aws::String& GetMLModelId() const { return m_mLModelId; }
    template<typename MLModelIdT = Aws::String>
    void SetMLModelId(MLModelIdT&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = std::forward<MLModelIdT>(value); }
    template<typename MLModelIdT = Aws::String>
    GetEvaluationResult& WithMLModelId(MLModelIdT&& value) { SetMLModelId(std::forward<MLModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>DataSource</code> used for this evaluation.</p>
     */
    inline const Aws::String& GetEvaluationDataSourceId() const { return m_evaluationDataSourceId; }
    template<typename EvaluationDataSourceIdT = Aws::String>
    void SetEvaluationDataSourceId(EvaluationDataSourceIdT&& value) { m_evaluationDataSourceIdHasBeenSet = true; m_evaluationDataSourceId = std::forward<EvaluationDataSourceIdT>(value); }
    template<typename EvaluationDataSourceIdT = Aws::String>
    GetEvaluationResult& WithEvaluationDataSourceId(EvaluationDataSourceIdT&& value) { SetEvaluationDataSourceId(std::forward<EvaluationDataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline const Aws::String& GetInputDataLocationS3() const { return m_inputDataLocationS3; }
    template<typename InputDataLocationS3T = Aws::String>
    void SetInputDataLocationS3(InputDataLocationS3T&& value) { m_inputDataLocationS3HasBeenSet = true; m_inputDataLocationS3 = std::forward<InputDataLocationS3T>(value); }
    template<typename InputDataLocationS3T = Aws::String>
    GetEvaluationResult& WithInputDataLocationS3(InputDataLocationS3T&& value) { SetInputDataLocationS3(std::forward<InputDataLocationS3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS user account that invoked the evaluation. The account type can be
     * either an AWS root account or an AWS Identity and Access Management (IAM) user
     * account.</p>
     */
    inline const Aws::String& GetCreatedByIamUser() const { return m_createdByIamUser; }
    template<typename CreatedByIamUserT = Aws::String>
    void SetCreatedByIamUser(CreatedByIamUserT&& value) { m_createdByIamUserHasBeenSet = true; m_createdByIamUser = std::forward<CreatedByIamUserT>(value); }
    template<typename CreatedByIamUserT = Aws::String>
    GetEvaluationResult& WithCreatedByIamUser(CreatedByIamUserT&& value) { SetCreatedByIamUser(std::forward<CreatedByIamUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the <code>Evaluation</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetEvaluationResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the most recent edit to the <code>Evaluation</code>. The time is
     * expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GetEvaluationResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetEvaluationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the evaluation. This element can have one of the following
     * values:</p> <ul> <li> <p> <code>PENDING</code> - Amazon Machine Language (Amazon
     * ML) submitted a request to evaluate an <code>MLModel</code>.</p> </li> <li> <p>
     * <code>INPROGRESS</code> - The evaluation is underway.</p> </li> <li> <p>
     * <code>FAILED</code> - The request to evaluate an <code>MLModel</code> did not
     * run to completion. It is not usable.</p> </li> <li> <p> <code>COMPLETED</code> -
     * The evaluation process completed successfully.</p> </li> <li> <p>
     * <code>DELETED</code> - The <code>Evaluation</code> is marked as deleted. It is
     * not usable.</p> </li> </ul>
     */
    inline EntityStatus GetStatus() const { return m_status; }
    inline void SetStatus(EntityStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetEvaluationResult& WithStatus(EntityStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Measurements of how well the <code>MLModel</code> performed using
     * observations referenced by the <code>DataSource</code>. One of the following
     * metric is returned based on the type of the <code>MLModel</code>: </p> <ul> <li>
     * <p>BinaryAUC: A binary <code>MLModel</code> uses the Area Under the Curve (AUC)
     * technique to measure performance. </p> </li> <li> <p>RegressionRMSE: A
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
    template<typename PerformanceMetricsT = PerformanceMetrics>
    void SetPerformanceMetrics(PerformanceMetricsT&& value) { m_performanceMetricsHasBeenSet = true; m_performanceMetrics = std::forward<PerformanceMetricsT>(value); }
    template<typename PerformanceMetricsT = PerformanceMetrics>
    GetEvaluationResult& WithPerformanceMetrics(PerformanceMetricsT&& value) { SetPerformanceMetrics(std::forward<PerformanceMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to the file that contains logs of the <code>CreateEvaluation</code>
     * operation.</p>
     */
    inline const Aws::String& GetLogUri() const { return m_logUri; }
    template<typename LogUriT = Aws::String>
    void SetLogUri(LogUriT&& value) { m_logUriHasBeenSet = true; m_logUri = std::forward<LogUriT>(value); }
    template<typename LogUriT = Aws::String>
    GetEvaluationResult& WithLogUri(LogUriT&& value) { SetLogUri(std::forward<LogUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the most recent details about evaluating the
     * <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    GetEvaluationResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate CPU time in milliseconds that Amazon Machine Learning spent
     * processing the <code>Evaluation</code>, normalized and scaled on computation
     * resources. <code>ComputeTime</code> is only available if the
     * <code>Evaluation</code> is in the <code>COMPLETED</code> state.</p>
     */
    inline long long GetComputeTime() const { return m_computeTime; }
    inline void SetComputeTime(long long value) { m_computeTimeHasBeenSet = true; m_computeTime = value; }
    inline GetEvaluationResult& WithComputeTime(long long value) { SetComputeTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>Evaluation</code> as <code>COMPLETED</code> or <code>FAILED</code>.
     * <code>FinishedAt</code> is only available when the <code>Evaluation</code> is in
     * the <code>COMPLETED</code> or <code>FAILED</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetFinishedAt() const { return m_finishedAt; }
    template<typename FinishedAtT = Aws::Utils::DateTime>
    void SetFinishedAt(FinishedAtT&& value) { m_finishedAtHasBeenSet = true; m_finishedAt = std::forward<FinishedAtT>(value); }
    template<typename FinishedAtT = Aws::Utils::DateTime>
    GetEvaluationResult& WithFinishedAt(FinishedAtT&& value) { SetFinishedAt(std::forward<FinishedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>Evaluation</code> as <code>INPROGRESS</code>. <code>StartedAt</code> isn't
     * available if the <code>Evaluation</code> is in the <code>PENDING</code>
     * state.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    GetEvaluationResult& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetEvaluationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_logUri;
    bool m_logUriHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    long long m_computeTime{0};
    bool m_computeTimeHasBeenSet = false;

    Aws::Utils::DateTime m_finishedAt{};
    bool m_finishedAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
