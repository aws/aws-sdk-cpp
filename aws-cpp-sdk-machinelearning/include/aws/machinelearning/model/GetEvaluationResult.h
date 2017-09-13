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
  class AWS_MACHINELEARNING_API GetEvaluationResult
  {
  public:
    GetEvaluationResult();
    GetEvaluationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetEvaluationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The evaluation ID which is same as the <code>EvaluationId</code> in the
     * request.</p>
     */
    inline const Aws::String& GetEvaluationId() const{ return m_evaluationId; }

    /**
     * <p>The evaluation ID which is same as the <code>EvaluationId</code> in the
     * request.</p>
     */
    inline void SetEvaluationId(const Aws::String& value) { m_evaluationId = value; }

    /**
     * <p>The evaluation ID which is same as the <code>EvaluationId</code> in the
     * request.</p>
     */
    inline void SetEvaluationId(Aws::String&& value) { m_evaluationId = std::move(value); }

    /**
     * <p>The evaluation ID which is same as the <code>EvaluationId</code> in the
     * request.</p>
     */
    inline void SetEvaluationId(const char* value) { m_evaluationId.assign(value); }

    /**
     * <p>The evaluation ID which is same as the <code>EvaluationId</code> in the
     * request.</p>
     */
    inline GetEvaluationResult& WithEvaluationId(const Aws::String& value) { SetEvaluationId(value); return *this;}

    /**
     * <p>The evaluation ID which is same as the <code>EvaluationId</code> in the
     * request.</p>
     */
    inline GetEvaluationResult& WithEvaluationId(Aws::String&& value) { SetEvaluationId(std::move(value)); return *this;}

    /**
     * <p>The evaluation ID which is same as the <code>EvaluationId</code> in the
     * request.</p>
     */
    inline GetEvaluationResult& WithEvaluationId(const char* value) { SetEvaluationId(value); return *this;}


    /**
     * <p>The ID of the <code>MLModel</code> that was the focus of the evaluation.</p>
     */
    inline const Aws::String& GetMLModelId() const{ return m_mLModelId; }

    /**
     * <p>The ID of the <code>MLModel</code> that was the focus of the evaluation.</p>
     */
    inline void SetMLModelId(const Aws::String& value) { m_mLModelId = value; }

    /**
     * <p>The ID of the <code>MLModel</code> that was the focus of the evaluation.</p>
     */
    inline void SetMLModelId(Aws::String&& value) { m_mLModelId = std::move(value); }

    /**
     * <p>The ID of the <code>MLModel</code> that was the focus of the evaluation.</p>
     */
    inline void SetMLModelId(const char* value) { m_mLModelId.assign(value); }

    /**
     * <p>The ID of the <code>MLModel</code> that was the focus of the evaluation.</p>
     */
    inline GetEvaluationResult& WithMLModelId(const Aws::String& value) { SetMLModelId(value); return *this;}

    /**
     * <p>The ID of the <code>MLModel</code> that was the focus of the evaluation.</p>
     */
    inline GetEvaluationResult& WithMLModelId(Aws::String&& value) { SetMLModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the <code>MLModel</code> that was the focus of the evaluation.</p>
     */
    inline GetEvaluationResult& WithMLModelId(const char* value) { SetMLModelId(value); return *this;}


    /**
     * <p>The <code>DataSource</code> used for this evaluation.</p>
     */
    inline const Aws::String& GetEvaluationDataSourceId() const{ return m_evaluationDataSourceId; }

    /**
     * <p>The <code>DataSource</code> used for this evaluation.</p>
     */
    inline void SetEvaluationDataSourceId(const Aws::String& value) { m_evaluationDataSourceId = value; }

    /**
     * <p>The <code>DataSource</code> used for this evaluation.</p>
     */
    inline void SetEvaluationDataSourceId(Aws::String&& value) { m_evaluationDataSourceId = std::move(value); }

    /**
     * <p>The <code>DataSource</code> used for this evaluation.</p>
     */
    inline void SetEvaluationDataSourceId(const char* value) { m_evaluationDataSourceId.assign(value); }

    /**
     * <p>The <code>DataSource</code> used for this evaluation.</p>
     */
    inline GetEvaluationResult& WithEvaluationDataSourceId(const Aws::String& value) { SetEvaluationDataSourceId(value); return *this;}

    /**
     * <p>The <code>DataSource</code> used for this evaluation.</p>
     */
    inline GetEvaluationResult& WithEvaluationDataSourceId(Aws::String&& value) { SetEvaluationDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The <code>DataSource</code> used for this evaluation.</p>
     */
    inline GetEvaluationResult& WithEvaluationDataSourceId(const char* value) { SetEvaluationDataSourceId(value); return *this;}


    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline const Aws::String& GetInputDataLocationS3() const{ return m_inputDataLocationS3; }

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline void SetInputDataLocationS3(const Aws::String& value) { m_inputDataLocationS3 = value; }

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline void SetInputDataLocationS3(Aws::String&& value) { m_inputDataLocationS3 = std::move(value); }

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline void SetInputDataLocationS3(const char* value) { m_inputDataLocationS3.assign(value); }

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline GetEvaluationResult& WithInputDataLocationS3(const Aws::String& value) { SetInputDataLocationS3(value); return *this;}

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline GetEvaluationResult& WithInputDataLocationS3(Aws::String&& value) { SetInputDataLocationS3(std::move(value)); return *this;}

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline GetEvaluationResult& WithInputDataLocationS3(const char* value) { SetInputDataLocationS3(value); return *this;}


    /**
     * <p>The AWS user account that invoked the evaluation. The account type can be
     * either an AWS root account or an AWS Identity and Access Management (IAM) user
     * account.</p>
     */
    inline const Aws::String& GetCreatedByIamUser() const{ return m_createdByIamUser; }

    /**
     * <p>The AWS user account that invoked the evaluation. The account type can be
     * either an AWS root account or an AWS Identity and Access Management (IAM) user
     * account.</p>
     */
    inline void SetCreatedByIamUser(const Aws::String& value) { m_createdByIamUser = value; }

    /**
     * <p>The AWS user account that invoked the evaluation. The account type can be
     * either an AWS root account or an AWS Identity and Access Management (IAM) user
     * account.</p>
     */
    inline void SetCreatedByIamUser(Aws::String&& value) { m_createdByIamUser = std::move(value); }

    /**
     * <p>The AWS user account that invoked the evaluation. The account type can be
     * either an AWS root account or an AWS Identity and Access Management (IAM) user
     * account.</p>
     */
    inline void SetCreatedByIamUser(const char* value) { m_createdByIamUser.assign(value); }

    /**
     * <p>The AWS user account that invoked the evaluation. The account type can be
     * either an AWS root account or an AWS Identity and Access Management (IAM) user
     * account.</p>
     */
    inline GetEvaluationResult& WithCreatedByIamUser(const Aws::String& value) { SetCreatedByIamUser(value); return *this;}

    /**
     * <p>The AWS user account that invoked the evaluation. The account type can be
     * either an AWS root account or an AWS Identity and Access Management (IAM) user
     * account.</p>
     */
    inline GetEvaluationResult& WithCreatedByIamUser(Aws::String&& value) { SetCreatedByIamUser(std::move(value)); return *this;}

    /**
     * <p>The AWS user account that invoked the evaluation. The account type can be
     * either an AWS root account or an AWS Identity and Access Management (IAM) user
     * account.</p>
     */
    inline GetEvaluationResult& WithCreatedByIamUser(const char* value) { SetCreatedByIamUser(value); return *this;}


    /**
     * <p>The time that the <code>Evaluation</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time that the <code>Evaluation</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The time that the <code>Evaluation</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The time that the <code>Evaluation</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline GetEvaluationResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time that the <code>Evaluation</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline GetEvaluationResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time of the most recent edit to the <code>Evaluation</code>. The time is
     * expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time of the most recent edit to the <code>Evaluation</code>. The time is
     * expressed in epoch time.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The time of the most recent edit to the <code>Evaluation</code>. The time is
     * expressed in epoch time.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The time of the most recent edit to the <code>Evaluation</code>. The time is
     * expressed in epoch time.</p>
     */
    inline GetEvaluationResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time of the most recent edit to the <code>Evaluation</code>. The time is
     * expressed in epoch time.</p>
     */
    inline GetEvaluationResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>. </p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>. </p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>. </p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>. </p>
     */
    inline GetEvaluationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>. </p>
     */
    inline GetEvaluationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>. </p>
     */
    inline GetEvaluationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the evaluation. This element can have one of the following
     * values:</p> <ul> <li> <code>PENDING</code> - Amazon Machine Language (Amazon ML)
     * submitted a request to evaluate an <code>MLModel</code>.</li> <li>
     * <code>INPROGRESS</code> - The evaluation is underway.</li> <li>
     * <code>FAILED</code> - The request to evaluate an <code>MLModel</code> did not
     * run to completion. It is not usable.</li> <li> <code>COMPLETED</code> - The
     * evaluation process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>Evaluation</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline const EntityStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the evaluation. This element can have one of the following
     * values:</p> <ul> <li> <code>PENDING</code> - Amazon Machine Language (Amazon ML)
     * submitted a request to evaluate an <code>MLModel</code>.</li> <li>
     * <code>INPROGRESS</code> - The evaluation is underway.</li> <li>
     * <code>FAILED</code> - The request to evaluate an <code>MLModel</code> did not
     * run to completion. It is not usable.</li> <li> <code>COMPLETED</code> - The
     * evaluation process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>Evaluation</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline void SetStatus(const EntityStatus& value) { m_status = value; }

    /**
     * <p>The status of the evaluation. This element can have one of the following
     * values:</p> <ul> <li> <code>PENDING</code> - Amazon Machine Language (Amazon ML)
     * submitted a request to evaluate an <code>MLModel</code>.</li> <li>
     * <code>INPROGRESS</code> - The evaluation is underway.</li> <li>
     * <code>FAILED</code> - The request to evaluate an <code>MLModel</code> did not
     * run to completion. It is not usable.</li> <li> <code>COMPLETED</code> - The
     * evaluation process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>Evaluation</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline void SetStatus(EntityStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the evaluation. This element can have one of the following
     * values:</p> <ul> <li> <code>PENDING</code> - Amazon Machine Language (Amazon ML)
     * submitted a request to evaluate an <code>MLModel</code>.</li> <li>
     * <code>INPROGRESS</code> - The evaluation is underway.</li> <li>
     * <code>FAILED</code> - The request to evaluate an <code>MLModel</code> did not
     * run to completion. It is not usable.</li> <li> <code>COMPLETED</code> - The
     * evaluation process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>Evaluation</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline GetEvaluationResult& WithStatus(const EntityStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the evaluation. This element can have one of the following
     * values:</p> <ul> <li> <code>PENDING</code> - Amazon Machine Language (Amazon ML)
     * submitted a request to evaluate an <code>MLModel</code>.</li> <li>
     * <code>INPROGRESS</code> - The evaluation is underway.</li> <li>
     * <code>FAILED</code> - The request to evaluate an <code>MLModel</code> did not
     * run to completion. It is not usable.</li> <li> <code>COMPLETED</code> - The
     * evaluation process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>Evaluation</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline GetEvaluationResult& WithStatus(EntityStatus&& value) { SetStatus(std::move(value)); return *this;}


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
     * href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
     * Learning Developer Guide</a>. </p>
     */
    inline const PerformanceMetrics& GetPerformanceMetrics() const{ return m_performanceMetrics; }

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
     * href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
     * Learning Developer Guide</a>. </p>
     */
    inline void SetPerformanceMetrics(const PerformanceMetrics& value) { m_performanceMetrics = value; }

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
     * href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
     * Learning Developer Guide</a>. </p>
     */
    inline void SetPerformanceMetrics(PerformanceMetrics&& value) { m_performanceMetrics = std::move(value); }

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
     * href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
     * Learning Developer Guide</a>. </p>
     */
    inline GetEvaluationResult& WithPerformanceMetrics(const PerformanceMetrics& value) { SetPerformanceMetrics(value); return *this;}

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
     * href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
     * Learning Developer Guide</a>. </p>
     */
    inline GetEvaluationResult& WithPerformanceMetrics(PerformanceMetrics&& value) { SetPerformanceMetrics(std::move(value)); return *this;}


    /**
     * <p>A link to the file that contains logs of the <code>CreateEvaluation</code>
     * operation.</p>
     */
    inline const Aws::String& GetLogUri() const{ return m_logUri; }

    /**
     * <p>A link to the file that contains logs of the <code>CreateEvaluation</code>
     * operation.</p>
     */
    inline void SetLogUri(const Aws::String& value) { m_logUri = value; }

    /**
     * <p>A link to the file that contains logs of the <code>CreateEvaluation</code>
     * operation.</p>
     */
    inline void SetLogUri(Aws::String&& value) { m_logUri = std::move(value); }

    /**
     * <p>A link to the file that contains logs of the <code>CreateEvaluation</code>
     * operation.</p>
     */
    inline void SetLogUri(const char* value) { m_logUri.assign(value); }

    /**
     * <p>A link to the file that contains logs of the <code>CreateEvaluation</code>
     * operation.</p>
     */
    inline GetEvaluationResult& WithLogUri(const Aws::String& value) { SetLogUri(value); return *this;}

    /**
     * <p>A link to the file that contains logs of the <code>CreateEvaluation</code>
     * operation.</p>
     */
    inline GetEvaluationResult& WithLogUri(Aws::String&& value) { SetLogUri(std::move(value)); return *this;}

    /**
     * <p>A link to the file that contains logs of the <code>CreateEvaluation</code>
     * operation.</p>
     */
    inline GetEvaluationResult& WithLogUri(const char* value) { SetLogUri(value); return *this;}


    /**
     * <p>A description of the most recent details about evaluating the
     * <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A description of the most recent details about evaluating the
     * <code>MLModel</code>.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>A description of the most recent details about evaluating the
     * <code>MLModel</code>.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>A description of the most recent details about evaluating the
     * <code>MLModel</code>.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>A description of the most recent details about evaluating the
     * <code>MLModel</code>.</p>
     */
    inline GetEvaluationResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A description of the most recent details about evaluating the
     * <code>MLModel</code>.</p>
     */
    inline GetEvaluationResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A description of the most recent details about evaluating the
     * <code>MLModel</code>.</p>
     */
    inline GetEvaluationResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The approximate CPU time in milliseconds that Amazon Machine Learning spent
     * processing the <code>Evaluation</code>, normalized and scaled on computation
     * resources. <code>ComputeTime</code> is only available if the
     * <code>Evaluation</code> is in the <code>COMPLETED</code> state.</p>
     */
    inline long long GetComputeTime() const{ return m_computeTime; }

    /**
     * <p>The approximate CPU time in milliseconds that Amazon Machine Learning spent
     * processing the <code>Evaluation</code>, normalized and scaled on computation
     * resources. <code>ComputeTime</code> is only available if the
     * <code>Evaluation</code> is in the <code>COMPLETED</code> state.</p>
     */
    inline void SetComputeTime(long long value) { m_computeTime = value; }

    /**
     * <p>The approximate CPU time in milliseconds that Amazon Machine Learning spent
     * processing the <code>Evaluation</code>, normalized and scaled on computation
     * resources. <code>ComputeTime</code> is only available if the
     * <code>Evaluation</code> is in the <code>COMPLETED</code> state.</p>
     */
    inline GetEvaluationResult& WithComputeTime(long long value) { SetComputeTime(value); return *this;}


    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>Evaluation</code> as <code>COMPLETED</code> or <code>FAILED</code>.
     * <code>FinishedAt</code> is only available when the <code>Evaluation</code> is in
     * the <code>COMPLETED</code> or <code>FAILED</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetFinishedAt() const{ return m_finishedAt; }

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>Evaluation</code> as <code>COMPLETED</code> or <code>FAILED</code>.
     * <code>FinishedAt</code> is only available when the <code>Evaluation</code> is in
     * the <code>COMPLETED</code> or <code>FAILED</code> state.</p>
     */
    inline void SetFinishedAt(const Aws::Utils::DateTime& value) { m_finishedAt = value; }

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>Evaluation</code> as <code>COMPLETED</code> or <code>FAILED</code>.
     * <code>FinishedAt</code> is only available when the <code>Evaluation</code> is in
     * the <code>COMPLETED</code> or <code>FAILED</code> state.</p>
     */
    inline void SetFinishedAt(Aws::Utils::DateTime&& value) { m_finishedAt = std::move(value); }

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>Evaluation</code> as <code>COMPLETED</code> or <code>FAILED</code>.
     * <code>FinishedAt</code> is only available when the <code>Evaluation</code> is in
     * the <code>COMPLETED</code> or <code>FAILED</code> state.</p>
     */
    inline GetEvaluationResult& WithFinishedAt(const Aws::Utils::DateTime& value) { SetFinishedAt(value); return *this;}

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>Evaluation</code> as <code>COMPLETED</code> or <code>FAILED</code>.
     * <code>FinishedAt</code> is only available when the <code>Evaluation</code> is in
     * the <code>COMPLETED</code> or <code>FAILED</code> state.</p>
     */
    inline GetEvaluationResult& WithFinishedAt(Aws::Utils::DateTime&& value) { SetFinishedAt(std::move(value)); return *this;}


    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>Evaluation</code> as <code>INPROGRESS</code>. <code>StartedAt</code> isn't
     * available if the <code>Evaluation</code> is in the <code>PENDING</code>
     * state.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>Evaluation</code> as <code>INPROGRESS</code>. <code>StartedAt</code> isn't
     * available if the <code>Evaluation</code> is in the <code>PENDING</code>
     * state.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>Evaluation</code> as <code>INPROGRESS</code>. <code>StartedAt</code> isn't
     * available if the <code>Evaluation</code> is in the <code>PENDING</code>
     * state.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>Evaluation</code> as <code>INPROGRESS</code>. <code>StartedAt</code> isn't
     * available if the <code>Evaluation</code> is in the <code>PENDING</code>
     * state.</p>
     */
    inline GetEvaluationResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>Evaluation</code> as <code>INPROGRESS</code>. <code>StartedAt</code> isn't
     * available if the <code>Evaluation</code> is in the <code>PENDING</code>
     * state.</p>
     */
    inline GetEvaluationResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}

  private:

    Aws::String m_evaluationId;

    Aws::String m_mLModelId;

    Aws::String m_evaluationDataSourceId;

    Aws::String m_inputDataLocationS3;

    Aws::String m_createdByIamUser;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_name;

    EntityStatus m_status;

    PerformanceMetrics m_performanceMetrics;

    Aws::String m_logUri;

    Aws::String m_message;

    long long m_computeTime;

    Aws::Utils::DateTime m_finishedAt;

    Aws::Utils::DateTime m_startedAt;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
