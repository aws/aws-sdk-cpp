/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetBatchPredictionResult
  {
  public:
    AWS_MACHINELEARNING_API GetBatchPredictionResult();
    AWS_MACHINELEARNING_API GetBatchPredictionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API GetBatchPredictionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation. This value
     * should be identical to the value of the <code>BatchPredictionID</code> in the
     * request.</p>
     */
    inline const Aws::String& GetBatchPredictionId() const{ return m_batchPredictionId; }
    inline void SetBatchPredictionId(const Aws::String& value) { m_batchPredictionId = value; }
    inline void SetBatchPredictionId(Aws::String&& value) { m_batchPredictionId = std::move(value); }
    inline void SetBatchPredictionId(const char* value) { m_batchPredictionId.assign(value); }
    inline GetBatchPredictionResult& WithBatchPredictionId(const Aws::String& value) { SetBatchPredictionId(value); return *this;}
    inline GetBatchPredictionResult& WithBatchPredictionId(Aws::String&& value) { SetBatchPredictionId(std::move(value)); return *this;}
    inline GetBatchPredictionResult& WithBatchPredictionId(const char* value) { SetBatchPredictionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>MLModel</code> that generated predictions for the
     * <code>BatchPrediction</code> request.</p>
     */
    inline const Aws::String& GetMLModelId() const{ return m_mLModelId; }
    inline void SetMLModelId(const Aws::String& value) { m_mLModelId = value; }
    inline void SetMLModelId(Aws::String&& value) { m_mLModelId = std::move(value); }
    inline void SetMLModelId(const char* value) { m_mLModelId.assign(value); }
    inline GetBatchPredictionResult& WithMLModelId(const Aws::String& value) { SetMLModelId(value); return *this;}
    inline GetBatchPredictionResult& WithMLModelId(Aws::String&& value) { SetMLModelId(std::move(value)); return *this;}
    inline GetBatchPredictionResult& WithMLModelId(const char* value) { SetMLModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>DataSource</code> that was used to create the
     * <code>BatchPrediction</code>. </p>
     */
    inline const Aws::String& GetBatchPredictionDataSourceId() const{ return m_batchPredictionDataSourceId; }
    inline void SetBatchPredictionDataSourceId(const Aws::String& value) { m_batchPredictionDataSourceId = value; }
    inline void SetBatchPredictionDataSourceId(Aws::String&& value) { m_batchPredictionDataSourceId = std::move(value); }
    inline void SetBatchPredictionDataSourceId(const char* value) { m_batchPredictionDataSourceId.assign(value); }
    inline GetBatchPredictionResult& WithBatchPredictionDataSourceId(const Aws::String& value) { SetBatchPredictionDataSourceId(value); return *this;}
    inline GetBatchPredictionResult& WithBatchPredictionDataSourceId(Aws::String&& value) { SetBatchPredictionDataSourceId(std::move(value)); return *this;}
    inline GetBatchPredictionResult& WithBatchPredictionDataSourceId(const char* value) { SetBatchPredictionDataSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline const Aws::String& GetInputDataLocationS3() const{ return m_inputDataLocationS3; }
    inline void SetInputDataLocationS3(const Aws::String& value) { m_inputDataLocationS3 = value; }
    inline void SetInputDataLocationS3(Aws::String&& value) { m_inputDataLocationS3 = std::move(value); }
    inline void SetInputDataLocationS3(const char* value) { m_inputDataLocationS3.assign(value); }
    inline GetBatchPredictionResult& WithInputDataLocationS3(const Aws::String& value) { SetInputDataLocationS3(value); return *this;}
    inline GetBatchPredictionResult& WithInputDataLocationS3(Aws::String&& value) { SetInputDataLocationS3(std::move(value)); return *this;}
    inline GetBatchPredictionResult& WithInputDataLocationS3(const char* value) { SetInputDataLocationS3(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS user account that invoked the <code>BatchPrediction</code>. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline const Aws::String& GetCreatedByIamUser() const{ return m_createdByIamUser; }
    inline void SetCreatedByIamUser(const Aws::String& value) { m_createdByIamUser = value; }
    inline void SetCreatedByIamUser(Aws::String&& value) { m_createdByIamUser = std::move(value); }
    inline void SetCreatedByIamUser(const char* value) { m_createdByIamUser.assign(value); }
    inline GetBatchPredictionResult& WithCreatedByIamUser(const Aws::String& value) { SetCreatedByIamUser(value); return *this;}
    inline GetBatchPredictionResult& WithCreatedByIamUser(Aws::String&& value) { SetCreatedByIamUser(std::move(value)); return *this;}
    inline GetBatchPredictionResult& WithCreatedByIamUser(const char* value) { SetCreatedByIamUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the <code>BatchPrediction</code> was created. The time is
     * expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetBatchPredictionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetBatchPredictionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the most recent edit to <code>BatchPrediction</code>. The time is
     * expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline GetBatchPredictionResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline GetBatchPredictionResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetBatchPredictionResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetBatchPredictionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetBatchPredictionResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the <code>BatchPrediction</code>, which can be one of the
     * following values:</p> <ul> <li> <p> <code>PENDING</code> - Amazon Machine
     * Learning (Amazon ML) submitted a request to generate batch predictions.</p>
     * </li> <li> <p> <code>INPROGRESS</code> - The batch predictions are in
     * progress.</p> </li> <li> <p> <code>FAILED</code> - The request to perform a
     * batch prediction did not run to completion. It is not usable.</p> </li> <li> <p>
     * <code>COMPLETED</code> - The batch prediction process completed
     * successfully.</p> </li> <li> <p> <code>DELETED</code> - The
     * <code>BatchPrediction</code> is marked as deleted. It is not usable.</p> </li>
     * </ul>
     */
    inline const EntityStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const EntityStatus& value) { m_status = value; }
    inline void SetStatus(EntityStatus&& value) { m_status = std::move(value); }
    inline GetBatchPredictionResult& WithStatus(const EntityStatus& value) { SetStatus(value); return *this;}
    inline GetBatchPredictionResult& WithStatus(EntityStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of an Amazon S3 bucket or directory to receive the operation
     * results.</p>
     */
    inline const Aws::String& GetOutputUri() const{ return m_outputUri; }
    inline void SetOutputUri(const Aws::String& value) { m_outputUri = value; }
    inline void SetOutputUri(Aws::String&& value) { m_outputUri = std::move(value); }
    inline void SetOutputUri(const char* value) { m_outputUri.assign(value); }
    inline GetBatchPredictionResult& WithOutputUri(const Aws::String& value) { SetOutputUri(value); return *this;}
    inline GetBatchPredictionResult& WithOutputUri(Aws::String&& value) { SetOutputUri(std::move(value)); return *this;}
    inline GetBatchPredictionResult& WithOutputUri(const char* value) { SetOutputUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to the file that contains logs of the
     * <code>CreateBatchPrediction</code> operation.</p>
     */
    inline const Aws::String& GetLogUri() const{ return m_logUri; }
    inline void SetLogUri(const Aws::String& value) { m_logUri = value; }
    inline void SetLogUri(Aws::String&& value) { m_logUri = std::move(value); }
    inline void SetLogUri(const char* value) { m_logUri.assign(value); }
    inline GetBatchPredictionResult& WithLogUri(const Aws::String& value) { SetLogUri(value); return *this;}
    inline GetBatchPredictionResult& WithLogUri(Aws::String&& value) { SetLogUri(std::move(value)); return *this;}
    inline GetBatchPredictionResult& WithLogUri(const char* value) { SetLogUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the most recent details about processing the batch
     * prediction request.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline GetBatchPredictionResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline GetBatchPredictionResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline GetBatchPredictionResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate CPU time in milliseconds that Amazon Machine Learning spent
     * processing the <code>BatchPrediction</code>, normalized and scaled on
     * computation resources. <code>ComputeTime</code> is only available if the
     * <code>BatchPrediction</code> is in the <code>COMPLETED</code> state.</p>
     */
    inline long long GetComputeTime() const{ return m_computeTime; }
    inline void SetComputeTime(long long value) { m_computeTime = value; }
    inline GetBatchPredictionResult& WithComputeTime(long long value) { SetComputeTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>BatchPrediction</code> as <code>COMPLETED</code> or <code>FAILED</code>.
     * <code>FinishedAt</code> is only available when the <code>BatchPrediction</code>
     * is in the <code>COMPLETED</code> or <code>FAILED</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetFinishedAt() const{ return m_finishedAt; }
    inline void SetFinishedAt(const Aws::Utils::DateTime& value) { m_finishedAt = value; }
    inline void SetFinishedAt(Aws::Utils::DateTime&& value) { m_finishedAt = std::move(value); }
    inline GetBatchPredictionResult& WithFinishedAt(const Aws::Utils::DateTime& value) { SetFinishedAt(value); return *this;}
    inline GetBatchPredictionResult& WithFinishedAt(Aws::Utils::DateTime&& value) { SetFinishedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>BatchPrediction</code> as <code>INPROGRESS</code>. <code>StartedAt</code>
     * isn't available if the <code>BatchPrediction</code> is in the
     * <code>PENDING</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }
    inline GetBatchPredictionResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline GetBatchPredictionResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of total records that Amazon Machine Learning saw while processing
     * the <code>BatchPrediction</code>.</p>
     */
    inline long long GetTotalRecordCount() const{ return m_totalRecordCount; }
    inline void SetTotalRecordCount(long long value) { m_totalRecordCount = value; }
    inline GetBatchPredictionResult& WithTotalRecordCount(long long value) { SetTotalRecordCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of invalid records that Amazon Machine Learning saw while
     * processing the <code>BatchPrediction</code>.</p>
     */
    inline long long GetInvalidRecordCount() const{ return m_invalidRecordCount; }
    inline void SetInvalidRecordCount(long long value) { m_invalidRecordCount = value; }
    inline GetBatchPredictionResult& WithInvalidRecordCount(long long value) { SetInvalidRecordCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBatchPredictionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBatchPredictionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBatchPredictionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
