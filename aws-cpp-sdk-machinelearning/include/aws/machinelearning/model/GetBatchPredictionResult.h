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
   * <p>Represents the output of a <code>GetBatchPrediction</code> operation and
   * describes a <code>BatchPrediction</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/GetBatchPredictionOutput">AWS
   * API Reference</a></p>
   */
  class AWS_MACHINELEARNING_API GetBatchPredictionResult
  {
  public:
    GetBatchPredictionResult();
    GetBatchPredictionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetBatchPredictionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation. This value
     * should be identical to the value of the <code>BatchPredictionID</code> in the
     * request.</p>
     */
    inline const Aws::String& GetBatchPredictionId() const{ return m_batchPredictionId; }

    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation. This value
     * should be identical to the value of the <code>BatchPredictionID</code> in the
     * request.</p>
     */
    inline void SetBatchPredictionId(const Aws::String& value) { m_batchPredictionId = value; }

    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation. This value
     * should be identical to the value of the <code>BatchPredictionID</code> in the
     * request.</p>
     */
    inline void SetBatchPredictionId(Aws::String&& value) { m_batchPredictionId = std::move(value); }

    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation. This value
     * should be identical to the value of the <code>BatchPredictionID</code> in the
     * request.</p>
     */
    inline void SetBatchPredictionId(const char* value) { m_batchPredictionId.assign(value); }

    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation. This value
     * should be identical to the value of the <code>BatchPredictionID</code> in the
     * request.</p>
     */
    inline GetBatchPredictionResult& WithBatchPredictionId(const Aws::String& value) { SetBatchPredictionId(value); return *this;}

    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation. This value
     * should be identical to the value of the <code>BatchPredictionID</code> in the
     * request.</p>
     */
    inline GetBatchPredictionResult& WithBatchPredictionId(Aws::String&& value) { SetBatchPredictionId(std::move(value)); return *this;}

    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation. This value
     * should be identical to the value of the <code>BatchPredictionID</code> in the
     * request.</p>
     */
    inline GetBatchPredictionResult& WithBatchPredictionId(const char* value) { SetBatchPredictionId(value); return *this;}


    /**
     * <p>The ID of the <code>MLModel</code> that generated predictions for the
     * <code>BatchPrediction</code> request.</p>
     */
    inline const Aws::String& GetMLModelId() const{ return m_mLModelId; }

    /**
     * <p>The ID of the <code>MLModel</code> that generated predictions for the
     * <code>BatchPrediction</code> request.</p>
     */
    inline void SetMLModelId(const Aws::String& value) { m_mLModelId = value; }

    /**
     * <p>The ID of the <code>MLModel</code> that generated predictions for the
     * <code>BatchPrediction</code> request.</p>
     */
    inline void SetMLModelId(Aws::String&& value) { m_mLModelId = std::move(value); }

    /**
     * <p>The ID of the <code>MLModel</code> that generated predictions for the
     * <code>BatchPrediction</code> request.</p>
     */
    inline void SetMLModelId(const char* value) { m_mLModelId.assign(value); }

    /**
     * <p>The ID of the <code>MLModel</code> that generated predictions for the
     * <code>BatchPrediction</code> request.</p>
     */
    inline GetBatchPredictionResult& WithMLModelId(const Aws::String& value) { SetMLModelId(value); return *this;}

    /**
     * <p>The ID of the <code>MLModel</code> that generated predictions for the
     * <code>BatchPrediction</code> request.</p>
     */
    inline GetBatchPredictionResult& WithMLModelId(Aws::String&& value) { SetMLModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the <code>MLModel</code> that generated predictions for the
     * <code>BatchPrediction</code> request.</p>
     */
    inline GetBatchPredictionResult& WithMLModelId(const char* value) { SetMLModelId(value); return *this;}


    /**
     * <p>The ID of the <code>DataSource</code> that was used to create the
     * <code>BatchPrediction</code>. </p>
     */
    inline const Aws::String& GetBatchPredictionDataSourceId() const{ return m_batchPredictionDataSourceId; }

    /**
     * <p>The ID of the <code>DataSource</code> that was used to create the
     * <code>BatchPrediction</code>. </p>
     */
    inline void SetBatchPredictionDataSourceId(const Aws::String& value) { m_batchPredictionDataSourceId = value; }

    /**
     * <p>The ID of the <code>DataSource</code> that was used to create the
     * <code>BatchPrediction</code>. </p>
     */
    inline void SetBatchPredictionDataSourceId(Aws::String&& value) { m_batchPredictionDataSourceId = std::move(value); }

    /**
     * <p>The ID of the <code>DataSource</code> that was used to create the
     * <code>BatchPrediction</code>. </p>
     */
    inline void SetBatchPredictionDataSourceId(const char* value) { m_batchPredictionDataSourceId.assign(value); }

    /**
     * <p>The ID of the <code>DataSource</code> that was used to create the
     * <code>BatchPrediction</code>. </p>
     */
    inline GetBatchPredictionResult& WithBatchPredictionDataSourceId(const Aws::String& value) { SetBatchPredictionDataSourceId(value); return *this;}

    /**
     * <p>The ID of the <code>DataSource</code> that was used to create the
     * <code>BatchPrediction</code>. </p>
     */
    inline GetBatchPredictionResult& WithBatchPredictionDataSourceId(Aws::String&& value) { SetBatchPredictionDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the <code>DataSource</code> that was used to create the
     * <code>BatchPrediction</code>. </p>
     */
    inline GetBatchPredictionResult& WithBatchPredictionDataSourceId(const char* value) { SetBatchPredictionDataSourceId(value); return *this;}


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
    inline GetBatchPredictionResult& WithInputDataLocationS3(const Aws::String& value) { SetInputDataLocationS3(value); return *this;}

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline GetBatchPredictionResult& WithInputDataLocationS3(Aws::String&& value) { SetInputDataLocationS3(std::move(value)); return *this;}

    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline GetBatchPredictionResult& WithInputDataLocationS3(const char* value) { SetInputDataLocationS3(value); return *this;}


    /**
     * <p>The AWS user account that invoked the <code>BatchPrediction</code>. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline const Aws::String& GetCreatedByIamUser() const{ return m_createdByIamUser; }

    /**
     * <p>The AWS user account that invoked the <code>BatchPrediction</code>. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline void SetCreatedByIamUser(const Aws::String& value) { m_createdByIamUser = value; }

    /**
     * <p>The AWS user account that invoked the <code>BatchPrediction</code>. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline void SetCreatedByIamUser(Aws::String&& value) { m_createdByIamUser = std::move(value); }

    /**
     * <p>The AWS user account that invoked the <code>BatchPrediction</code>. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline void SetCreatedByIamUser(const char* value) { m_createdByIamUser.assign(value); }

    /**
     * <p>The AWS user account that invoked the <code>BatchPrediction</code>. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline GetBatchPredictionResult& WithCreatedByIamUser(const Aws::String& value) { SetCreatedByIamUser(value); return *this;}

    /**
     * <p>The AWS user account that invoked the <code>BatchPrediction</code>. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline GetBatchPredictionResult& WithCreatedByIamUser(Aws::String&& value) { SetCreatedByIamUser(std::move(value)); return *this;}

    /**
     * <p>The AWS user account that invoked the <code>BatchPrediction</code>. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline GetBatchPredictionResult& WithCreatedByIamUser(const char* value) { SetCreatedByIamUser(value); return *this;}


    /**
     * <p>The time when the <code>BatchPrediction</code> was created. The time is
     * expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time when the <code>BatchPrediction</code> was created. The time is
     * expressed in epoch time.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The time when the <code>BatchPrediction</code> was created. The time is
     * expressed in epoch time.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The time when the <code>BatchPrediction</code> was created. The time is
     * expressed in epoch time.</p>
     */
    inline GetBatchPredictionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time when the <code>BatchPrediction</code> was created. The time is
     * expressed in epoch time.</p>
     */
    inline GetBatchPredictionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time of the most recent edit to <code>BatchPrediction</code>. The time is
     * expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time of the most recent edit to <code>BatchPrediction</code>. The time is
     * expressed in epoch time.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>The time of the most recent edit to <code>BatchPrediction</code>. The time is
     * expressed in epoch time.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The time of the most recent edit to <code>BatchPrediction</code>. The time is
     * expressed in epoch time.</p>
     */
    inline GetBatchPredictionResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time of the most recent edit to <code>BatchPrediction</code>. The time is
     * expressed in epoch time.</p>
     */
    inline GetBatchPredictionResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.</p>
     */
    inline GetBatchPredictionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.</p>
     */
    inline GetBatchPredictionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.</p>
     */
    inline GetBatchPredictionResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the <code>BatchPrediction</code>, which can be one of the
     * following values:</p> <ul> <li> <code>PENDING</code> - Amazon Machine Learning
     * (Amazon ML) submitted a request to generate batch predictions.</li> <li>
     * <code>INPROGRESS</code> - The batch predictions are in progress.</li> <li>
     * <code>FAILED</code> - The request to perform a batch prediction did not run to
     * completion. It is not usable.</li> <li> <code>COMPLETED</code> - The batch
     * prediction process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>BatchPrediction</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline const EntityStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the <code>BatchPrediction</code>, which can be one of the
     * following values:</p> <ul> <li> <code>PENDING</code> - Amazon Machine Learning
     * (Amazon ML) submitted a request to generate batch predictions.</li> <li>
     * <code>INPROGRESS</code> - The batch predictions are in progress.</li> <li>
     * <code>FAILED</code> - The request to perform a batch prediction did not run to
     * completion. It is not usable.</li> <li> <code>COMPLETED</code> - The batch
     * prediction process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>BatchPrediction</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline void SetStatus(const EntityStatus& value) { m_status = value; }

    /**
     * <p>The status of the <code>BatchPrediction</code>, which can be one of the
     * following values:</p> <ul> <li> <code>PENDING</code> - Amazon Machine Learning
     * (Amazon ML) submitted a request to generate batch predictions.</li> <li>
     * <code>INPROGRESS</code> - The batch predictions are in progress.</li> <li>
     * <code>FAILED</code> - The request to perform a batch prediction did not run to
     * completion. It is not usable.</li> <li> <code>COMPLETED</code> - The batch
     * prediction process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>BatchPrediction</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline void SetStatus(EntityStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the <code>BatchPrediction</code>, which can be one of the
     * following values:</p> <ul> <li> <code>PENDING</code> - Amazon Machine Learning
     * (Amazon ML) submitted a request to generate batch predictions.</li> <li>
     * <code>INPROGRESS</code> - The batch predictions are in progress.</li> <li>
     * <code>FAILED</code> - The request to perform a batch prediction did not run to
     * completion. It is not usable.</li> <li> <code>COMPLETED</code> - The batch
     * prediction process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>BatchPrediction</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline GetBatchPredictionResult& WithStatus(const EntityStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the <code>BatchPrediction</code>, which can be one of the
     * following values:</p> <ul> <li> <code>PENDING</code> - Amazon Machine Learning
     * (Amazon ML) submitted a request to generate batch predictions.</li> <li>
     * <code>INPROGRESS</code> - The batch predictions are in progress.</li> <li>
     * <code>FAILED</code> - The request to perform a batch prediction did not run to
     * completion. It is not usable.</li> <li> <code>COMPLETED</code> - The batch
     * prediction process completed successfully.</li> <li> <code>DELETED</code> - The
     * <code>BatchPrediction</code> is marked as deleted. It is not usable.</li> </ul>
     */
    inline GetBatchPredictionResult& WithStatus(EntityStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The location of an Amazon S3 bucket or directory to receive the operation
     * results.</p>
     */
    inline const Aws::String& GetOutputUri() const{ return m_outputUri; }

    /**
     * <p>The location of an Amazon S3 bucket or directory to receive the operation
     * results.</p>
     */
    inline void SetOutputUri(const Aws::String& value) { m_outputUri = value; }

    /**
     * <p>The location of an Amazon S3 bucket or directory to receive the operation
     * results.</p>
     */
    inline void SetOutputUri(Aws::String&& value) { m_outputUri = std::move(value); }

    /**
     * <p>The location of an Amazon S3 bucket or directory to receive the operation
     * results.</p>
     */
    inline void SetOutputUri(const char* value) { m_outputUri.assign(value); }

    /**
     * <p>The location of an Amazon S3 bucket or directory to receive the operation
     * results.</p>
     */
    inline GetBatchPredictionResult& WithOutputUri(const Aws::String& value) { SetOutputUri(value); return *this;}

    /**
     * <p>The location of an Amazon S3 bucket or directory to receive the operation
     * results.</p>
     */
    inline GetBatchPredictionResult& WithOutputUri(Aws::String&& value) { SetOutputUri(std::move(value)); return *this;}

    /**
     * <p>The location of an Amazon S3 bucket or directory to receive the operation
     * results.</p>
     */
    inline GetBatchPredictionResult& WithOutputUri(const char* value) { SetOutputUri(value); return *this;}


    /**
     * <p>A link to the file that contains logs of the
     * <code>CreateBatchPrediction</code> operation.</p>
     */
    inline const Aws::String& GetLogUri() const{ return m_logUri; }

    /**
     * <p>A link to the file that contains logs of the
     * <code>CreateBatchPrediction</code> operation.</p>
     */
    inline void SetLogUri(const Aws::String& value) { m_logUri = value; }

    /**
     * <p>A link to the file that contains logs of the
     * <code>CreateBatchPrediction</code> operation.</p>
     */
    inline void SetLogUri(Aws::String&& value) { m_logUri = std::move(value); }

    /**
     * <p>A link to the file that contains logs of the
     * <code>CreateBatchPrediction</code> operation.</p>
     */
    inline void SetLogUri(const char* value) { m_logUri.assign(value); }

    /**
     * <p>A link to the file that contains logs of the
     * <code>CreateBatchPrediction</code> operation.</p>
     */
    inline GetBatchPredictionResult& WithLogUri(const Aws::String& value) { SetLogUri(value); return *this;}

    /**
     * <p>A link to the file that contains logs of the
     * <code>CreateBatchPrediction</code> operation.</p>
     */
    inline GetBatchPredictionResult& WithLogUri(Aws::String&& value) { SetLogUri(std::move(value)); return *this;}

    /**
     * <p>A link to the file that contains logs of the
     * <code>CreateBatchPrediction</code> operation.</p>
     */
    inline GetBatchPredictionResult& WithLogUri(const char* value) { SetLogUri(value); return *this;}


    /**
     * <p>A description of the most recent details about processing the batch
     * prediction request.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A description of the most recent details about processing the batch
     * prediction request.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>A description of the most recent details about processing the batch
     * prediction request.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>A description of the most recent details about processing the batch
     * prediction request.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>A description of the most recent details about processing the batch
     * prediction request.</p>
     */
    inline GetBatchPredictionResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A description of the most recent details about processing the batch
     * prediction request.</p>
     */
    inline GetBatchPredictionResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A description of the most recent details about processing the batch
     * prediction request.</p>
     */
    inline GetBatchPredictionResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The approximate CPU time in milliseconds that Amazon Machine Learning spent
     * processing the <code>BatchPrediction</code>, normalized and scaled on
     * computation resources. <code>ComputeTime</code> is only available if the
     * <code>BatchPrediction</code> is in the <code>COMPLETED</code> state.</p>
     */
    inline long long GetComputeTime() const{ return m_computeTime; }

    /**
     * <p>The approximate CPU time in milliseconds that Amazon Machine Learning spent
     * processing the <code>BatchPrediction</code>, normalized and scaled on
     * computation resources. <code>ComputeTime</code> is only available if the
     * <code>BatchPrediction</code> is in the <code>COMPLETED</code> state.</p>
     */
    inline void SetComputeTime(long long value) { m_computeTime = value; }

    /**
     * <p>The approximate CPU time in milliseconds that Amazon Machine Learning spent
     * processing the <code>BatchPrediction</code>, normalized and scaled on
     * computation resources. <code>ComputeTime</code> is only available if the
     * <code>BatchPrediction</code> is in the <code>COMPLETED</code> state.</p>
     */
    inline GetBatchPredictionResult& WithComputeTime(long long value) { SetComputeTime(value); return *this;}


    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>BatchPrediction</code> as <code>COMPLETED</code> or <code>FAILED</code>.
     * <code>FinishedAt</code> is only available when the <code>BatchPrediction</code>
     * is in the <code>COMPLETED</code> or <code>FAILED</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetFinishedAt() const{ return m_finishedAt; }

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>BatchPrediction</code> as <code>COMPLETED</code> or <code>FAILED</code>.
     * <code>FinishedAt</code> is only available when the <code>BatchPrediction</code>
     * is in the <code>COMPLETED</code> or <code>FAILED</code> state.</p>
     */
    inline void SetFinishedAt(const Aws::Utils::DateTime& value) { m_finishedAt = value; }

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>BatchPrediction</code> as <code>COMPLETED</code> or <code>FAILED</code>.
     * <code>FinishedAt</code> is only available when the <code>BatchPrediction</code>
     * is in the <code>COMPLETED</code> or <code>FAILED</code> state.</p>
     */
    inline void SetFinishedAt(Aws::Utils::DateTime&& value) { m_finishedAt = std::move(value); }

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>BatchPrediction</code> as <code>COMPLETED</code> or <code>FAILED</code>.
     * <code>FinishedAt</code> is only available when the <code>BatchPrediction</code>
     * is in the <code>COMPLETED</code> or <code>FAILED</code> state.</p>
     */
    inline GetBatchPredictionResult& WithFinishedAt(const Aws::Utils::DateTime& value) { SetFinishedAt(value); return *this;}

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>BatchPrediction</code> as <code>COMPLETED</code> or <code>FAILED</code>.
     * <code>FinishedAt</code> is only available when the <code>BatchPrediction</code>
     * is in the <code>COMPLETED</code> or <code>FAILED</code> state.</p>
     */
    inline GetBatchPredictionResult& WithFinishedAt(Aws::Utils::DateTime&& value) { SetFinishedAt(std::move(value)); return *this;}


    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>BatchPrediction</code> as <code>INPROGRESS</code>. <code>StartedAt</code>
     * isn't available if the <code>BatchPrediction</code> is in the
     * <code>PENDING</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>BatchPrediction</code> as <code>INPROGRESS</code>. <code>StartedAt</code>
     * isn't available if the <code>BatchPrediction</code> is in the
     * <code>PENDING</code> state.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>BatchPrediction</code> as <code>INPROGRESS</code>. <code>StartedAt</code>
     * isn't available if the <code>BatchPrediction</code> is in the
     * <code>PENDING</code> state.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>BatchPrediction</code> as <code>INPROGRESS</code>. <code>StartedAt</code>
     * isn't available if the <code>BatchPrediction</code> is in the
     * <code>PENDING</code> state.</p>
     */
    inline GetBatchPredictionResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>BatchPrediction</code> as <code>INPROGRESS</code>. <code>StartedAt</code>
     * isn't available if the <code>BatchPrediction</code> is in the
     * <code>PENDING</code> state.</p>
     */
    inline GetBatchPredictionResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The number of total records that Amazon Machine Learning saw while processing
     * the <code>BatchPrediction</code>.</p>
     */
    inline long long GetTotalRecordCount() const{ return m_totalRecordCount; }

    /**
     * <p>The number of total records that Amazon Machine Learning saw while processing
     * the <code>BatchPrediction</code>.</p>
     */
    inline void SetTotalRecordCount(long long value) { m_totalRecordCount = value; }

    /**
     * <p>The number of total records that Amazon Machine Learning saw while processing
     * the <code>BatchPrediction</code>.</p>
     */
    inline GetBatchPredictionResult& WithTotalRecordCount(long long value) { SetTotalRecordCount(value); return *this;}


    /**
     * <p>The number of invalid records that Amazon Machine Learning saw while
     * processing the <code>BatchPrediction</code>.</p>
     */
    inline long long GetInvalidRecordCount() const{ return m_invalidRecordCount; }

    /**
     * <p>The number of invalid records that Amazon Machine Learning saw while
     * processing the <code>BatchPrediction</code>.</p>
     */
    inline void SetInvalidRecordCount(long long value) { m_invalidRecordCount = value; }

    /**
     * <p>The number of invalid records that Amazon Machine Learning saw while
     * processing the <code>BatchPrediction</code>.</p>
     */
    inline GetBatchPredictionResult& WithInvalidRecordCount(long long value) { SetInvalidRecordCount(value); return *this;}

  private:

    Aws::String m_batchPredictionId;

    Aws::String m_mLModelId;

    Aws::String m_batchPredictionDataSourceId;

    Aws::String m_inputDataLocationS3;

    Aws::String m_createdByIamUser;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_name;

    EntityStatus m_status;

    Aws::String m_outputUri;

    Aws::String m_logUri;

    Aws::String m_message;

    long long m_computeTime;

    Aws::Utils::DateTime m_finishedAt;

    Aws::Utils::DateTime m_startedAt;

    long long m_totalRecordCount;

    long long m_invalidRecordCount;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
