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
    AWS_MACHINELEARNING_API GetBatchPredictionResult() = default;
    AWS_MACHINELEARNING_API GetBatchPredictionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API GetBatchPredictionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An ID assigned to the <code>BatchPrediction</code> at creation. This value
     * should be identical to the value of the <code>BatchPredictionID</code> in the
     * request.</p>
     */
    inline const Aws::String& GetBatchPredictionId() const { return m_batchPredictionId; }
    template<typename BatchPredictionIdT = Aws::String>
    void SetBatchPredictionId(BatchPredictionIdT&& value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId = std::forward<BatchPredictionIdT>(value); }
    template<typename BatchPredictionIdT = Aws::String>
    GetBatchPredictionResult& WithBatchPredictionId(BatchPredictionIdT&& value) { SetBatchPredictionId(std::forward<BatchPredictionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>MLModel</code> that generated predictions for the
     * <code>BatchPrediction</code> request.</p>
     */
    inline const Aws::String& GetMLModelId() const { return m_mLModelId; }
    template<typename MLModelIdT = Aws::String>
    void SetMLModelId(MLModelIdT&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = std::forward<MLModelIdT>(value); }
    template<typename MLModelIdT = Aws::String>
    GetBatchPredictionResult& WithMLModelId(MLModelIdT&& value) { SetMLModelId(std::forward<MLModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>DataSource</code> that was used to create the
     * <code>BatchPrediction</code>. </p>
     */
    inline const Aws::String& GetBatchPredictionDataSourceId() const { return m_batchPredictionDataSourceId; }
    template<typename BatchPredictionDataSourceIdT = Aws::String>
    void SetBatchPredictionDataSourceId(BatchPredictionDataSourceIdT&& value) { m_batchPredictionDataSourceIdHasBeenSet = true; m_batchPredictionDataSourceId = std::forward<BatchPredictionDataSourceIdT>(value); }
    template<typename BatchPredictionDataSourceIdT = Aws::String>
    GetBatchPredictionResult& WithBatchPredictionDataSourceId(BatchPredictionDataSourceIdT&& value) { SetBatchPredictionDataSourceId(std::forward<BatchPredictionDataSourceIdT>(value)); return *this;}
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
    GetBatchPredictionResult& WithInputDataLocationS3(InputDataLocationS3T&& value) { SetInputDataLocationS3(std::forward<InputDataLocationS3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS user account that invoked the <code>BatchPrediction</code>. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline const Aws::String& GetCreatedByIamUser() const { return m_createdByIamUser; }
    template<typename CreatedByIamUserT = Aws::String>
    void SetCreatedByIamUser(CreatedByIamUserT&& value) { m_createdByIamUserHasBeenSet = true; m_createdByIamUser = std::forward<CreatedByIamUserT>(value); }
    template<typename CreatedByIamUserT = Aws::String>
    GetBatchPredictionResult& WithCreatedByIamUser(CreatedByIamUserT&& value) { SetCreatedByIamUser(std::forward<CreatedByIamUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the <code>BatchPrediction</code> was created. The time is
     * expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetBatchPredictionResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the most recent edit to <code>BatchPrediction</code>. The time is
     * expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GetBatchPredictionResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetBatchPredictionResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    inline EntityStatus GetStatus() const { return m_status; }
    inline void SetStatus(EntityStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetBatchPredictionResult& WithStatus(EntityStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of an Amazon S3 bucket or directory to receive the operation
     * results.</p>
     */
    inline const Aws::String& GetOutputUri() const { return m_outputUri; }
    template<typename OutputUriT = Aws::String>
    void SetOutputUri(OutputUriT&& value) { m_outputUriHasBeenSet = true; m_outputUri = std::forward<OutputUriT>(value); }
    template<typename OutputUriT = Aws::String>
    GetBatchPredictionResult& WithOutputUri(OutputUriT&& value) { SetOutputUri(std::forward<OutputUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to the file that contains logs of the
     * <code>CreateBatchPrediction</code> operation.</p>
     */
    inline const Aws::String& GetLogUri() const { return m_logUri; }
    template<typename LogUriT = Aws::String>
    void SetLogUri(LogUriT&& value) { m_logUriHasBeenSet = true; m_logUri = std::forward<LogUriT>(value); }
    template<typename LogUriT = Aws::String>
    GetBatchPredictionResult& WithLogUri(LogUriT&& value) { SetLogUri(std::forward<LogUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the most recent details about processing the batch
     * prediction request.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    GetBatchPredictionResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate CPU time in milliseconds that Amazon Machine Learning spent
     * processing the <code>BatchPrediction</code>, normalized and scaled on
     * computation resources. <code>ComputeTime</code> is only available if the
     * <code>BatchPrediction</code> is in the <code>COMPLETED</code> state.</p>
     */
    inline long long GetComputeTime() const { return m_computeTime; }
    inline void SetComputeTime(long long value) { m_computeTimeHasBeenSet = true; m_computeTime = value; }
    inline GetBatchPredictionResult& WithComputeTime(long long value) { SetComputeTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>BatchPrediction</code> as <code>COMPLETED</code> or <code>FAILED</code>.
     * <code>FinishedAt</code> is only available when the <code>BatchPrediction</code>
     * is in the <code>COMPLETED</code> or <code>FAILED</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetFinishedAt() const { return m_finishedAt; }
    template<typename FinishedAtT = Aws::Utils::DateTime>
    void SetFinishedAt(FinishedAtT&& value) { m_finishedAtHasBeenSet = true; m_finishedAt = std::forward<FinishedAtT>(value); }
    template<typename FinishedAtT = Aws::Utils::DateTime>
    GetBatchPredictionResult& WithFinishedAt(FinishedAtT&& value) { SetFinishedAt(std::forward<FinishedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The epoch time when Amazon Machine Learning marked the
     * <code>BatchPrediction</code> as <code>INPROGRESS</code>. <code>StartedAt</code>
     * isn't available if the <code>BatchPrediction</code> is in the
     * <code>PENDING</code> state.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    GetBatchPredictionResult& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of total records that Amazon Machine Learning saw while processing
     * the <code>BatchPrediction</code>.</p>
     */
    inline long long GetTotalRecordCount() const { return m_totalRecordCount; }
    inline void SetTotalRecordCount(long long value) { m_totalRecordCountHasBeenSet = true; m_totalRecordCount = value; }
    inline GetBatchPredictionResult& WithTotalRecordCount(long long value) { SetTotalRecordCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of invalid records that Amazon Machine Learning saw while
     * processing the <code>BatchPrediction</code>.</p>
     */
    inline long long GetInvalidRecordCount() const { return m_invalidRecordCount; }
    inline void SetInvalidRecordCount(long long value) { m_invalidRecordCountHasBeenSet = true; m_invalidRecordCount = value; }
    inline GetBatchPredictionResult& WithInvalidRecordCount(long long value) { SetInvalidRecordCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBatchPredictionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_batchPredictionId;
    bool m_batchPredictionIdHasBeenSet = false;

    Aws::String m_mLModelId;
    bool m_mLModelIdHasBeenSet = false;

    Aws::String m_batchPredictionDataSourceId;
    bool m_batchPredictionDataSourceIdHasBeenSet = false;

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

    Aws::String m_outputUri;
    bool m_outputUriHasBeenSet = false;

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

    long long m_totalRecordCount{0};
    bool m_totalRecordCountHasBeenSet = false;

    long long m_invalidRecordCount{0};
    bool m_invalidRecordCountHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
