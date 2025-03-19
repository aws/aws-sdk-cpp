/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lookoutequipment/model/IngestionInputConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lookoutequipment/model/IngestionJobStatus.h>
#include <aws/lookoutequipment/model/DataQualitySummary.h>
#include <aws/lookoutequipment/model/IngestedFilesSummary.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class DescribeDataIngestionJobResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API DescribeDataIngestionJobResult() = default;
    AWS_LOOKOUTEQUIPMENT_API DescribeDataIngestionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API DescribeDataIngestionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates the job ID of the data ingestion job. </p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    DescribeDataIngestionJobResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset being used in the data
     * ingestion job. </p>
     */
    inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
    template<typename DatasetArnT = Aws::String>
    void SetDatasetArn(DatasetArnT&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::forward<DatasetArnT>(value); }
    template<typename DatasetArnT = Aws::String>
    DescribeDataIngestionJobResult& WithDatasetArn(DatasetArnT&& value) { SetDatasetArn(std::forward<DatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the S3 location configuration for the data input for the data
     * ingestion job. </p>
     */
    inline const IngestionInputConfiguration& GetIngestionInputConfiguration() const { return m_ingestionInputConfiguration; }
    template<typename IngestionInputConfigurationT = IngestionInputConfiguration>
    void SetIngestionInputConfiguration(IngestionInputConfigurationT&& value) { m_ingestionInputConfigurationHasBeenSet = true; m_ingestionInputConfiguration = std::forward<IngestionInputConfigurationT>(value); }
    template<typename IngestionInputConfigurationT = IngestionInputConfiguration>
    DescribeDataIngestionJobResult& WithIngestionInputConfiguration(IngestionInputConfigurationT&& value) { SetIngestionInputConfiguration(std::forward<IngestionInputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * data source being ingested. </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeDataIngestionJobResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the data ingestion job was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DescribeDataIngestionJobResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the <code>DataIngestionJob</code> operation. </p>
     */
    inline IngestionJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(IngestionJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeDataIngestionJobResult& WithStatus(IngestionJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the reason for failure when a data ingestion job has failed. </p>
     */
    inline const Aws::String& GetFailedReason() const { return m_failedReason; }
    template<typename FailedReasonT = Aws::String>
    void SetFailedReason(FailedReasonT&& value) { m_failedReasonHasBeenSet = true; m_failedReason = std::forward<FailedReasonT>(value); }
    template<typename FailedReasonT = Aws::String>
    DescribeDataIngestionJobResult& WithFailedReason(FailedReasonT&& value) { SetFailedReason(std::forward<FailedReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Gives statistics about a completed ingestion job. These statistics primarily
     * relate to quantifying incorrect data such as MissingCompleteSensorData,
     * MissingSensorData, UnsupportedDateFormats, InsufficientSensorData, and
     * DuplicateTimeStamps. </p>
     */
    inline const DataQualitySummary& GetDataQualitySummary() const { return m_dataQualitySummary; }
    template<typename DataQualitySummaryT = DataQualitySummary>
    void SetDataQualitySummary(DataQualitySummaryT&& value) { m_dataQualitySummaryHasBeenSet = true; m_dataQualitySummary = std::forward<DataQualitySummaryT>(value); }
    template<typename DataQualitySummaryT = DataQualitySummary>
    DescribeDataIngestionJobResult& WithDataQualitySummary(DataQualitySummaryT&& value) { SetDataQualitySummary(std::forward<DataQualitySummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const IngestedFilesSummary& GetIngestedFilesSummary() const { return m_ingestedFilesSummary; }
    template<typename IngestedFilesSummaryT = IngestedFilesSummary>
    void SetIngestedFilesSummary(IngestedFilesSummaryT&& value) { m_ingestedFilesSummaryHasBeenSet = true; m_ingestedFilesSummary = std::forward<IngestedFilesSummaryT>(value); }
    template<typename IngestedFilesSummaryT = IngestedFilesSummary>
    DescribeDataIngestionJobResult& WithIngestedFilesSummary(IngestedFilesSummaryT&& value) { SetIngestedFilesSummary(std::forward<IngestedFilesSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides details about status of the ingestion job that is currently in
     * progress. </p>
     */
    inline const Aws::String& GetStatusDetail() const { return m_statusDetail; }
    template<typename StatusDetailT = Aws::String>
    void SetStatusDetail(StatusDetailT&& value) { m_statusDetailHasBeenSet = true; m_statusDetail = std::forward<StatusDetailT>(value); }
    template<typename StatusDetailT = Aws::String>
    DescribeDataIngestionJobResult& WithStatusDetail(StatusDetailT&& value) { SetStatusDetail(std::forward<StatusDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the size of the ingested dataset. </p>
     */
    inline long long GetIngestedDataSize() const { return m_ingestedDataSize; }
    inline void SetIngestedDataSize(long long value) { m_ingestedDataSizeHasBeenSet = true; m_ingestedDataSize = value; }
    inline DescribeDataIngestionJobResult& WithIngestedDataSize(long long value) { SetIngestedDataSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the earliest timestamp corresponding to data that was successfully
     * ingested during this specific ingestion job. </p>
     */
    inline const Aws::Utils::DateTime& GetDataStartTime() const { return m_dataStartTime; }
    template<typename DataStartTimeT = Aws::Utils::DateTime>
    void SetDataStartTime(DataStartTimeT&& value) { m_dataStartTimeHasBeenSet = true; m_dataStartTime = std::forward<DataStartTimeT>(value); }
    template<typename DataStartTimeT = Aws::Utils::DateTime>
    DescribeDataIngestionJobResult& WithDataStartTime(DataStartTimeT&& value) { SetDataStartTime(std::forward<DataStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the latest timestamp corresponding to data that was successfully
     * ingested during this specific ingestion job. </p>
     */
    inline const Aws::Utils::DateTime& GetDataEndTime() const { return m_dataEndTime; }
    template<typename DataEndTimeT = Aws::Utils::DateTime>
    void SetDataEndTime(DataEndTimeT&& value) { m_dataEndTimeHasBeenSet = true; m_dataEndTime = std::forward<DataEndTimeT>(value); }
    template<typename DataEndTimeT = Aws::Utils::DateTime>
    DescribeDataIngestionJobResult& WithDataEndTime(DataEndTimeT&& value) { SetDataEndTime(std::forward<DataEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source dataset from which the data used
     * for the data ingestion job was imported from.</p>
     */
    inline const Aws::String& GetSourceDatasetArn() const { return m_sourceDatasetArn; }
    template<typename SourceDatasetArnT = Aws::String>
    void SetSourceDatasetArn(SourceDatasetArnT&& value) { m_sourceDatasetArnHasBeenSet = true; m_sourceDatasetArn = std::forward<SourceDatasetArnT>(value); }
    template<typename SourceDatasetArnT = Aws::String>
    DescribeDataIngestionJobResult& WithSourceDatasetArn(SourceDatasetArnT&& value) { SetSourceDatasetArn(std::forward<SourceDatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDataIngestionJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    IngestionInputConfiguration m_ingestionInputConfiguration;
    bool m_ingestionInputConfigurationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    IngestionJobStatus m_status{IngestionJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_failedReason;
    bool m_failedReasonHasBeenSet = false;

    DataQualitySummary m_dataQualitySummary;
    bool m_dataQualitySummaryHasBeenSet = false;

    IngestedFilesSummary m_ingestedFilesSummary;
    bool m_ingestedFilesSummaryHasBeenSet = false;

    Aws::String m_statusDetail;
    bool m_statusDetailHasBeenSet = false;

    long long m_ingestedDataSize{0};
    bool m_ingestedDataSizeHasBeenSet = false;

    Aws::Utils::DateTime m_dataStartTime{};
    bool m_dataStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_dataEndTime{};
    bool m_dataEndTimeHasBeenSet = false;

    Aws::String m_sourceDatasetArn;
    bool m_sourceDatasetArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
