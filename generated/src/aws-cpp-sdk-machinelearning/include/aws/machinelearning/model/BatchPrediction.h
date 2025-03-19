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
   * <p> Represents the output of a <code>GetBatchPrediction</code> operation.</p>
   * <p> The content consists of the detailed metadata, the status, and the data file
   * information of a <code>Batch Prediction</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/BatchPrediction">AWS
   * API Reference</a></p>
   */
  class BatchPrediction
  {
  public:
    AWS_MACHINELEARNING_API BatchPrediction() = default;
    AWS_MACHINELEARNING_API BatchPrediction(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API BatchPrediction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACHINELEARNING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID assigned to the <code>BatchPrediction</code> at creation. This value
     * should be identical to the value of the <code>BatchPredictionID</code> in the
     * request. </p>
     */
    inline const Aws::String& GetBatchPredictionId() const { return m_batchPredictionId; }
    inline bool BatchPredictionIdHasBeenSet() const { return m_batchPredictionIdHasBeenSet; }
    template<typename BatchPredictionIdT = Aws::String>
    void SetBatchPredictionId(BatchPredictionIdT&& value) { m_batchPredictionIdHasBeenSet = true; m_batchPredictionId = std::forward<BatchPredictionIdT>(value); }
    template<typename BatchPredictionIdT = Aws::String>
    BatchPrediction& WithBatchPredictionId(BatchPredictionIdT&& value) { SetBatchPredictionId(std::forward<BatchPredictionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>MLModel</code> that generated predictions for the
     * <code>BatchPrediction</code> request.</p>
     */
    inline const Aws::String& GetMLModelId() const { return m_mLModelId; }
    inline bool MLModelIdHasBeenSet() const { return m_mLModelIdHasBeenSet; }
    template<typename MLModelIdT = Aws::String>
    void SetMLModelId(MLModelIdT&& value) { m_mLModelIdHasBeenSet = true; m_mLModelId = std::forward<MLModelIdT>(value); }
    template<typename MLModelIdT = Aws::String>
    BatchPrediction& WithMLModelId(MLModelIdT&& value) { SetMLModelId(std::forward<MLModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>DataSource</code> that points to the group of
     * observations to predict.</p>
     */
    inline const Aws::String& GetBatchPredictionDataSourceId() const { return m_batchPredictionDataSourceId; }
    inline bool BatchPredictionDataSourceIdHasBeenSet() const { return m_batchPredictionDataSourceIdHasBeenSet; }
    template<typename BatchPredictionDataSourceIdT = Aws::String>
    void SetBatchPredictionDataSourceId(BatchPredictionDataSourceIdT&& value) { m_batchPredictionDataSourceIdHasBeenSet = true; m_batchPredictionDataSourceId = std::forward<BatchPredictionDataSourceIdT>(value); }
    template<typename BatchPredictionDataSourceIdT = Aws::String>
    BatchPrediction& WithBatchPredictionDataSourceId(BatchPredictionDataSourceIdT&& value) { SetBatchPredictionDataSourceId(std::forward<BatchPredictionDataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the data file or directory in Amazon Simple Storage Service
     * (Amazon S3).</p>
     */
    inline const Aws::String& GetInputDataLocationS3() const { return m_inputDataLocationS3; }
    inline bool InputDataLocationS3HasBeenSet() const { return m_inputDataLocationS3HasBeenSet; }
    template<typename InputDataLocationS3T = Aws::String>
    void SetInputDataLocationS3(InputDataLocationS3T&& value) { m_inputDataLocationS3HasBeenSet = true; m_inputDataLocationS3 = std::forward<InputDataLocationS3T>(value); }
    template<typename InputDataLocationS3T = Aws::String>
    BatchPrediction& WithInputDataLocationS3(InputDataLocationS3T&& value) { SetInputDataLocationS3(std::forward<InputDataLocationS3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS user account that invoked the <code>BatchPrediction</code>. The
     * account type can be either an AWS root account or an AWS Identity and Access
     * Management (IAM) user account.</p>
     */
    inline const Aws::String& GetCreatedByIamUser() const { return m_createdByIamUser; }
    inline bool CreatedByIamUserHasBeenSet() const { return m_createdByIamUserHasBeenSet; }
    template<typename CreatedByIamUserT = Aws::String>
    void SetCreatedByIamUser(CreatedByIamUserT&& value) { m_createdByIamUserHasBeenSet = true; m_createdByIamUser = std::forward<CreatedByIamUserT>(value); }
    template<typename CreatedByIamUserT = Aws::String>
    BatchPrediction& WithCreatedByIamUser(CreatedByIamUserT&& value) { SetCreatedByIamUser(std::forward<CreatedByIamUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the <code>BatchPrediction</code> was created. The time is
     * expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    BatchPrediction& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of the most recent edit to the <code>BatchPrediction</code>. The
     * time is expressed in epoch time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    BatchPrediction& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-supplied name or description of the <code>BatchPrediction</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    BatchPrediction& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the <code>BatchPrediction</code>. This element can have one of
     * the following values:</p> <ul> <li> <p> <code>PENDING</code> - Amazon Machine
     * Learning (Amazon ML) submitted a request to generate predictions for a batch of
     * observations.</p> </li> <li> <p> <code>INPROGRESS</code> - The process is
     * underway.</p> </li> <li> <p> <code>FAILED</code> - The request to perform a
     * batch prediction did not run to completion. It is not usable.</p> </li> <li> <p>
     * <code>COMPLETED</code> - The batch prediction process completed
     * successfully.</p> </li> <li> <p> <code>DELETED</code> - The
     * <code>BatchPrediction</code> is marked as deleted. It is not usable.</p> </li>
     * </ul>
     */
    inline EntityStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EntityStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline BatchPrediction& WithStatus(EntityStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of an Amazon S3 bucket or directory to receive the operation
     * results. The following substrings are not allowed in the <code>s3 key</code>
     * portion of the <code>outputURI</code> field: ':', '//', '/./', '/../'.</p>
     */
    inline const Aws::String& GetOutputUri() const { return m_outputUri; }
    inline bool OutputUriHasBeenSet() const { return m_outputUriHasBeenSet; }
    template<typename OutputUriT = Aws::String>
    void SetOutputUri(OutputUriT&& value) { m_outputUriHasBeenSet = true; m_outputUri = std::forward<OutputUriT>(value); }
    template<typename OutputUriT = Aws::String>
    BatchPrediction& WithOutputUri(OutputUriT&& value) { SetOutputUri(std::forward<OutputUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the most recent details about processing the batch
     * prediction request.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    BatchPrediction& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline long long GetComputeTime() const { return m_computeTime; }
    inline bool ComputeTimeHasBeenSet() const { return m_computeTimeHasBeenSet; }
    inline void SetComputeTime(long long value) { m_computeTimeHasBeenSet = true; m_computeTime = value; }
    inline BatchPrediction& WithComputeTime(long long value) { SetComputeTime(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetFinishedAt() const { return m_finishedAt; }
    inline bool FinishedAtHasBeenSet() const { return m_finishedAtHasBeenSet; }
    template<typename FinishedAtT = Aws::Utils::DateTime>
    void SetFinishedAt(FinishedAtT&& value) { m_finishedAtHasBeenSet = true; m_finishedAt = std::forward<FinishedAtT>(value); }
    template<typename FinishedAtT = Aws::Utils::DateTime>
    BatchPrediction& WithFinishedAt(FinishedAtT&& value) { SetFinishedAt(std::forward<FinishedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    BatchPrediction& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline long long GetTotalRecordCount() const { return m_totalRecordCount; }
    inline bool TotalRecordCountHasBeenSet() const { return m_totalRecordCountHasBeenSet; }
    inline void SetTotalRecordCount(long long value) { m_totalRecordCountHasBeenSet = true; m_totalRecordCount = value; }
    inline BatchPrediction& WithTotalRecordCount(long long value) { SetTotalRecordCount(value); return *this;}
    ///@}

    ///@{
    
    inline long long GetInvalidRecordCount() const { return m_invalidRecordCount; }
    inline bool InvalidRecordCountHasBeenSet() const { return m_invalidRecordCountHasBeenSet; }
    inline void SetInvalidRecordCount(long long value) { m_invalidRecordCountHasBeenSet = true; m_invalidRecordCount = value; }
    inline BatchPrediction& WithInvalidRecordCount(long long value) { SetInvalidRecordCount(value); return *this;}
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
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
