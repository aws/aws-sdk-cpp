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
  class AWS_MACHINELEARNING_API Evaluation
  {
  public:
    Evaluation();
    Evaluation(Aws::Utils::Json::JsonView jsonValue);
    Evaluation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID that is assigned to the <code>Evaluation</code> at creation.</p>
     */
    inline const Aws::String& GetEvaluationId() const{ return m_evaluationId; }

    /**
     * <p>The ID that is assigned to the <code>Evaluation</code> at creation.</p>
     */
    inline bool EvaluationIdHasBeenSet() const { return m_evaluationIdHasBeenSet; }

    /**
     * <p>The ID that is assigned to the <code>Evaluation</code> at creation.</p>
     */
    inline void SetEvaluationId(const Aws::String& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = value; }

    /**
     * <p>The ID that is assigned to the <code>Evaluation</code> at creation.</p>
     */
    inline void SetEvaluationId(Aws::String&& value) { m_evaluationIdHasBeenSet = true; m_evaluationId = std::move(value); }

    /**
     * <p>The ID that is assigned to the <code>Evaluation</code> at creation.</p>
     */
    inline void SetEvaluationId(const char* value) { m_evaluationIdHasBeenSet = true; m_evaluationId.assign(value); }

    /**
     * <p>The ID that is assigned to the <code>Evaluation</code> at creation.</p>
     */
    inline Evaluation& WithEvaluationId(const Aws::String& value) { SetEvaluationId(value); return *this;}

    /**
     * <p>The ID that is assigned to the <code>Evaluation</code> at creation.</p>
     */
    inline Evaluation& WithEvaluationId(Aws::String&& value) { SetEvaluationId(std::move(value)); return *this;}

    /**
     * <p>The ID that is assigned to the <code>Evaluation</code> at creation.</p>
     */
    inline Evaluation& WithEvaluationId(const char* value) { SetEvaluationId(value); return *this;}


    /**
     * <p>The ID of the <code>MLModel</code> that is the focus of the evaluation.</p>
     */
    inline const Aws::String& GetMLModelId() const{ return m_mLModelId; }

    /**
     * <p>The ID of the <code>MLModel</code> that is the focus of the evaluation.</p>
     */
    inline bool MLModelIdHasBeenSet() const { return m_mLModelIdHasBeenSet; }

    /**
     * <p>The ID of the <code>MLModel</code> that is the focus of the evaluation.</p>
     */
    inline void SetMLModelId(const Aws::String& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = value; }

    /**
     * <p>The ID of the <code>MLModel</code> that is the focus of the evaluation.</p>
     */
    inline void SetMLModelId(Aws::String&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = std::move(value); }

    /**
     * <p>The ID of the <code>MLModel</code> that is the focus of the evaluation.</p>
     */
    inline void SetMLModelId(const char* value) { m_mLModelIdHasBeenSet = true; m_mLModelId.assign(value); }

    /**
     * <p>The ID of the <code>MLModel</code> that is the focus of the evaluation.</p>
     */
    inline Evaluation& WithMLModelId(const Aws::String& value) { SetMLModelId(value); return *this;}

    /**
     * <p>The ID of the <code>MLModel</code> that is the focus of the evaluation.</p>
     */
    inline Evaluation& WithMLModelId(Aws::String&& value) { SetMLModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the <code>MLModel</code> that is the focus of the evaluation.</p>
     */
    inline Evaluation& WithMLModelId(const char* value) { SetMLModelId(value); return *this;}


    /**
     * <p>The ID of the <code>DataSource</code> that is used to evaluate the
     * <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetEvaluationDataSourceId() const{ return m_evaluationDataSourceId; }

    /**
     * <p>The ID of the <code>DataSource</code> that is used to evaluate the
     * <code>MLModel</code>.</p>
     */
    inline bool EvaluationDataSourceIdHasBeenSet() const { return m_evaluationDataSourceIdHasBeenSet; }

    /**
     * <p>The ID of the <code>DataSource</code> that is used to evaluate the
     * <code>MLModel</code>.</p>
     */
    inline void SetEvaluationDataSourceId(const Aws::String& value) { m_evaluationDataSourceIdHasBeenSet = true; m_evaluationDataSourceId = value; }

    /**
     * <p>The ID of the <code>DataSource</code> that is used to evaluate the
     * <code>MLModel</code>.</p>
     */
    inline void SetEvaluationDataSourceId(Aws::String&& value) { m_evaluationDataSourceIdHasBeenSet = true; m_evaluationDataSourceId = std::move(value); }

    /**
     * <p>The ID of the <code>DataSource</code> that is used to evaluate the
     * <code>MLModel</code>.</p>
     */
    inline void SetEvaluationDataSourceId(const char* value) { m_evaluationDataSourceIdHasBeenSet = true; m_evaluationDataSourceId.assign(value); }

    /**
     * <p>The ID of the <code>DataSource</code> that is used to evaluate the
     * <code>MLModel</code>.</p>
     */
    inline Evaluation& WithEvaluationDataSourceId(const Aws::String& value) { SetEvaluationDataSourceId(value); return *this;}

    /**
     * <p>The ID of the <code>DataSource</code> that is used to evaluate the
     * <code>MLModel</code>.</p>
     */
    inline Evaluation& WithEvaluationDataSourceId(Aws::String&& value) { SetEvaluationDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the <code>DataSource</code> that is used to evaluate the
     * <code>MLModel</code>.</p>
     */
    inline Evaluation& WithEvaluationDataSourceId(const char* value) { SetEvaluationDataSourceId(value); return *this;}


    /**
     * <p>The location and name of the data in Amazon Simple Storage Server (Amazon S3)
     * that is used in the evaluation.</p>
     */
    inline const Aws::String& GetInputDataLocationS3() const{ return m_inputDataLocationS3; }

    /**
     * <p>The location and name of the data in Amazon Simple Storage Server (Amazon S3)
     * that is used in the evaluation.</p>
     */
    inline bool InputDataLocationS3HasBeenSet() const { return m_inputDataLocationS3HasBeenSet; }

    /**
     * <p>The location and name of the data in Amazon Simple Storage Server (Amazon S3)
     * that is used in the evaluation.</p>
     */
    inline void SetInputDataLocationS3(const Aws::String& value) { m_inputDataLocationS3HasBeenSet = true; m_inputDataLocationS3 = value; }

    /**
     * <p>The location and name of the data in Amazon Simple Storage Server (Amazon S3)
     * that is used in the evaluation.</p>
     */
    inline void SetInputDataLocationS3(Aws::String&& value) { m_inputDataLocationS3HasBeenSet = true; m_inputDataLocationS3 = std::move(value); }

    /**
     * <p>The location and name of the data in Amazon Simple Storage Server (Amazon S3)
     * that is used in the evaluation.</p>
     */
    inline void SetInputDataLocationS3(const char* value) { m_inputDataLocationS3HasBeenSet = true; m_inputDataLocationS3.assign(value); }

    /**
     * <p>The location and name of the data in Amazon Simple Storage Server (Amazon S3)
     * that is used in the evaluation.</p>
     */
    inline Evaluation& WithInputDataLocationS3(const Aws::String& value) { SetInputDataLocationS3(value); return *this;}

    /**
     * <p>The location and name of the data in Amazon Simple Storage Server (Amazon S3)
     * that is used in the evaluation.</p>
     */
    inline Evaluation& WithInputDataLocationS3(Aws::String&& value) { SetInputDataLocationS3(std::move(value)); return *this;}

    /**
     * <p>The location and name of the data in Amazon Simple Storage Server (Amazon S3)
     * that is used in the evaluation.</p>
     */
    inline Evaluation& WithInputDataLocationS3(const char* value) { SetInputDataLocationS3(value); return *this;}


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
    inline bool CreatedByIamUserHasBeenSet() const { return m_createdByIamUserHasBeenSet; }

    /**
     * <p>The AWS user account that invoked the evaluation. The account type can be
     * either an AWS root account or an AWS Identity and Access Management (IAM) user
     * account.</p>
     */
    inline void SetCreatedByIamUser(const Aws::String& value) { m_createdByIamUserHasBeenSet = true; m_createdByIamUser = value; }

    /**
     * <p>The AWS user account that invoked the evaluation. The account type can be
     * either an AWS root account or an AWS Identity and Access Management (IAM) user
     * account.</p>
     */
    inline void SetCreatedByIamUser(Aws::String&& value) { m_createdByIamUserHasBeenSet = true; m_createdByIamUser = std::move(value); }

    /**
     * <p>The AWS user account that invoked the evaluation. The account type can be
     * either an AWS root account or an AWS Identity and Access Management (IAM) user
     * account.</p>
     */
    inline void SetCreatedByIamUser(const char* value) { m_createdByIamUserHasBeenSet = true; m_createdByIamUser.assign(value); }

    /**
     * <p>The AWS user account that invoked the evaluation. The account type can be
     * either an AWS root account or an AWS Identity and Access Management (IAM) user
     * account.</p>
     */
    inline Evaluation& WithCreatedByIamUser(const Aws::String& value) { SetCreatedByIamUser(value); return *this;}

    /**
     * <p>The AWS user account that invoked the evaluation. The account type can be
     * either an AWS root account or an AWS Identity and Access Management (IAM) user
     * account.</p>
     */
    inline Evaluation& WithCreatedByIamUser(Aws::String&& value) { SetCreatedByIamUser(std::move(value)); return *this;}

    /**
     * <p>The AWS user account that invoked the evaluation. The account type can be
     * either an AWS root account or an AWS Identity and Access Management (IAM) user
     * account.</p>
     */
    inline Evaluation& WithCreatedByIamUser(const char* value) { SetCreatedByIamUser(value); return *this;}


    /**
     * <p>The time that the <code>Evaluation</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time that the <code>Evaluation</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time that the <code>Evaluation</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time that the <code>Evaluation</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time that the <code>Evaluation</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline Evaluation& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time that the <code>Evaluation</code> was created. The time is expressed
     * in epoch time.</p>
     */
    inline Evaluation& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time of the most recent edit to the <code>Evaluation</code>. The time is
     * expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time of the most recent edit to the <code>Evaluation</code>. The time is
     * expressed in epoch time.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The time of the most recent edit to the <code>Evaluation</code>. The time is
     * expressed in epoch time.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The time of the most recent edit to the <code>Evaluation</code>. The time is
     * expressed in epoch time.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The time of the most recent edit to the <code>Evaluation</code>. The time is
     * expressed in epoch time.</p>
     */
    inline Evaluation& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time of the most recent edit to the <code>Evaluation</code>. The time is
     * expressed in epoch time.</p>
     */
    inline Evaluation& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>. </p>
     */
    inline Evaluation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>. </p>
     */
    inline Evaluation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>Evaluation</code>. </p>
     */
    inline Evaluation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the evaluation. This element can have one of the following
     * values:</p> <ul> <li> <code>PENDING</code> - Amazon Machine Learning (Amazon ML)
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
     * values:</p> <ul> <li> <code>PENDING</code> - Amazon Machine Learning (Amazon ML)
     * submitted a request to evaluate an <code>MLModel</code>.</li> <li>
     * <code>INPROGRESS</code> - The evaluation is underway.</li> <li>
     * <code>FAILED</code> - The request to evaluate an <code>MLModel</code> did not
     * run to completion. It is not usable.</li> <li> <code>COMPLETED</code> - The
     * evaluation process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>Evaluation</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the evaluation. This element can have one of the following
     * values:</p> <ul> <li> <code>PENDING</code> - Amazon Machine Learning (Amazon ML)
     * submitted a request to evaluate an <code>MLModel</code>.</li> <li>
     * <code>INPROGRESS</code> - The evaluation is underway.</li> <li>
     * <code>FAILED</code> - The request to evaluate an <code>MLModel</code> did not
     * run to completion. It is not usable.</li> <li> <code>COMPLETED</code> - The
     * evaluation process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>Evaluation</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline void SetStatus(const EntityStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the evaluation. This element can have one of the following
     * values:</p> <ul> <li> <code>PENDING</code> - Amazon Machine Learning (Amazon ML)
     * submitted a request to evaluate an <code>MLModel</code>.</li> <li>
     * <code>INPROGRESS</code> - The evaluation is underway.</li> <li>
     * <code>FAILED</code> - The request to evaluate an <code>MLModel</code> did not
     * run to completion. It is not usable.</li> <li> <code>COMPLETED</code> - The
     * evaluation process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>Evaluation</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline void SetStatus(EntityStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the evaluation. This element can have one of the following
     * values:</p> <ul> <li> <code>PENDING</code> - Amazon Machine Learning (Amazon ML)
     * submitted a request to evaluate an <code>MLModel</code>.</li> <li>
     * <code>INPROGRESS</code> - The evaluation is underway.</li> <li>
     * <code>FAILED</code> - The request to evaluate an <code>MLModel</code> did not
     * run to completion. It is not usable.</li> <li> <code>COMPLETED</code> - The
     * evaluation process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>Evaluation</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline Evaluation& WithStatus(const EntityStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the evaluation. This element can have one of the following
     * values:</p> <ul> <li> <code>PENDING</code> - Amazon Machine Learning (Amazon ML)
     * submitted a request to evaluate an <code>MLModel</code>.</li> <li>
     * <code>INPROGRESS</code> - The evaluation is underway.</li> <li>
     * <code>FAILED</code> - The request to evaluate an <code>MLModel</code> did not
     * run to completion. It is not usable.</li> <li> <code>COMPLETED</code> - The
     * evaluation process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>Evaluation</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline Evaluation& WithStatus(EntityStatus&& value) { SetStatus(std::move(value)); return *this;}


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
     * href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
     * Learning Developer Guide</a>. </p>
     */
    inline const PerformanceMetrics& GetPerformanceMetrics() const{ return m_performanceMetrics; }

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
     * href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
     * Learning Developer Guide</a>. </p>
     */
    inline bool PerformanceMetricsHasBeenSet() const { return m_performanceMetricsHasBeenSet; }

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
     * href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
     * Learning Developer Guide</a>. </p>
     */
    inline void SetPerformanceMetrics(const PerformanceMetrics& value) { m_performanceMetricsHasBeenSet = true; m_performanceMetrics = value; }

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
     * href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
     * Learning Developer Guide</a>. </p>
     */
    inline void SetPerformanceMetrics(PerformanceMetrics&& value) { m_performanceMetricsHasBeenSet = true; m_performanceMetrics = std::move(value); }

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
     * href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
     * Learning Developer Guide</a>. </p>
     */
    inline Evaluation& WithPerformanceMetrics(const PerformanceMetrics& value) { SetPerformanceMetrics(value); return *this;}

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
     * href="http://docs.aws.amazon.com/machine-learning/latest/dg">Amazon Machine
     * Learning Developer Guide</a>. </p>
     */
    inline Evaluation& WithPerformanceMetrics(PerformanceMetrics&& value) { SetPerformanceMetrics(std::move(value)); return *this;}


    /**
     * <p>A description of the most recent details about evaluating the
     * <code>MLModel</code>.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A description of the most recent details about evaluating the
     * <code>MLModel</code>.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A description of the most recent details about evaluating the
     * <code>MLModel</code>.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A description of the most recent details about evaluating the
     * <code>MLModel</code>.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A description of the most recent details about evaluating the
     * <code>MLModel</code>.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A description of the most recent details about evaluating the
     * <code>MLModel</code>.</p>
     */
    inline Evaluation& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A description of the most recent details about evaluating the
     * <code>MLModel</code>.</p>
     */
    inline Evaluation& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A description of the most recent details about evaluating the
     * <code>MLModel</code>.</p>
     */
    inline Evaluation& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline long long GetComputeTime() const{ return m_computeTime; }

    
    inline bool ComputeTimeHasBeenSet() const { return m_computeTimeHasBeenSet; }

    
    inline void SetComputeTime(long long value) { m_computeTimeHasBeenSet = true; m_computeTime = value; }

    
    inline Evaluation& WithComputeTime(long long value) { SetComputeTime(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetFinishedAt() const{ return m_finishedAt; }

    
    inline bool FinishedAtHasBeenSet() const { return m_finishedAtHasBeenSet; }

    
    inline void SetFinishedAt(const Aws::Utils::DateTime& value) { m_finishedAtHasBeenSet = true; m_finishedAt = value; }

    
    inline void SetFinishedAt(Aws::Utils::DateTime&& value) { m_finishedAtHasBeenSet = true; m_finishedAt = std::move(value); }

    
    inline Evaluation& WithFinishedAt(const Aws::Utils::DateTime& value) { SetFinishedAt(value); return *this;}

    
    inline Evaluation& WithFinishedAt(Aws::Utils::DateTime&& value) { SetFinishedAt(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    
    inline Evaluation& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    
    inline Evaluation& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}

  private:

    Aws::String m_evaluationId;
    bool m_evaluationIdHasBeenSet;

    Aws::String m_mLModelId;
    bool m_mLModelIdHasBeenSet;

    Aws::String m_evaluationDataSourceId;
    bool m_evaluationDataSourceIdHasBeenSet;

    Aws::String m_inputDataLocationS3;
    bool m_inputDataLocationS3HasBeenSet;

    Aws::String m_createdByIamUser;
    bool m_createdByIamUserHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    EntityStatus m_status;
    bool m_statusHasBeenSet;

    PerformanceMetrics m_performanceMetrics;
    bool m_performanceMetricsHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    long long m_computeTime;
    bool m_computeTimeHasBeenSet;

    Aws::Utils::DateTime m_finishedAt;
    bool m_finishedAtHasBeenSet;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
