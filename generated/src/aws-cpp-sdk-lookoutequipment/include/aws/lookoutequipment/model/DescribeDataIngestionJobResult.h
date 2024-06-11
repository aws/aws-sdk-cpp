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
    AWS_LOOKOUTEQUIPMENT_API DescribeDataIngestionJobResult();
    AWS_LOOKOUTEQUIPMENT_API DescribeDataIngestionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API DescribeDataIngestionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Indicates the job ID of the data ingestion job. </p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline DescribeDataIngestionJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline DescribeDataIngestionJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline DescribeDataIngestionJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset being used in the data
     * ingestion job. </p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArn = value; }
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArn = std::move(value); }
    inline void SetDatasetArn(const char* value) { m_datasetArn.assign(value); }
    inline DescribeDataIngestionJobResult& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}
    inline DescribeDataIngestionJobResult& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}
    inline DescribeDataIngestionJobResult& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the S3 location configuration for the data input for the data
     * ingestion job. </p>
     */
    inline const IngestionInputConfiguration& GetIngestionInputConfiguration() const{ return m_ingestionInputConfiguration; }
    inline void SetIngestionInputConfiguration(const IngestionInputConfiguration& value) { m_ingestionInputConfiguration = value; }
    inline void SetIngestionInputConfiguration(IngestionInputConfiguration&& value) { m_ingestionInputConfiguration = std::move(value); }
    inline DescribeDataIngestionJobResult& WithIngestionInputConfiguration(const IngestionInputConfiguration& value) { SetIngestionInputConfiguration(value); return *this;}
    inline DescribeDataIngestionJobResult& WithIngestionInputConfiguration(IngestionInputConfiguration&& value) { SetIngestionInputConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * data source being ingested. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeDataIngestionJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeDataIngestionJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeDataIngestionJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the data ingestion job was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline DescribeDataIngestionJobResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DescribeDataIngestionJobResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the <code>DataIngestionJob</code> operation. </p>
     */
    inline const IngestionJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const IngestionJobStatus& value) { m_status = value; }
    inline void SetStatus(IngestionJobStatus&& value) { m_status = std::move(value); }
    inline DescribeDataIngestionJobResult& WithStatus(const IngestionJobStatus& value) { SetStatus(value); return *this;}
    inline DescribeDataIngestionJobResult& WithStatus(IngestionJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the reason for failure when a data ingestion job has failed. </p>
     */
    inline const Aws::String& GetFailedReason() const{ return m_failedReason; }
    inline void SetFailedReason(const Aws::String& value) { m_failedReason = value; }
    inline void SetFailedReason(Aws::String&& value) { m_failedReason = std::move(value); }
    inline void SetFailedReason(const char* value) { m_failedReason.assign(value); }
    inline DescribeDataIngestionJobResult& WithFailedReason(const Aws::String& value) { SetFailedReason(value); return *this;}
    inline DescribeDataIngestionJobResult& WithFailedReason(Aws::String&& value) { SetFailedReason(std::move(value)); return *this;}
    inline DescribeDataIngestionJobResult& WithFailedReason(const char* value) { SetFailedReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Gives statistics about a completed ingestion job. These statistics primarily
     * relate to quantifying incorrect data such as MissingCompleteSensorData,
     * MissingSensorData, UnsupportedDateFormats, InsufficientSensorData, and
     * DuplicateTimeStamps. </p>
     */
    inline const DataQualitySummary& GetDataQualitySummary() const{ return m_dataQualitySummary; }
    inline void SetDataQualitySummary(const DataQualitySummary& value) { m_dataQualitySummary = value; }
    inline void SetDataQualitySummary(DataQualitySummary&& value) { m_dataQualitySummary = std::move(value); }
    inline DescribeDataIngestionJobResult& WithDataQualitySummary(const DataQualitySummary& value) { SetDataQualitySummary(value); return *this;}
    inline DescribeDataIngestionJobResult& WithDataQualitySummary(DataQualitySummary&& value) { SetDataQualitySummary(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const IngestedFilesSummary& GetIngestedFilesSummary() const{ return m_ingestedFilesSummary; }
    inline void SetIngestedFilesSummary(const IngestedFilesSummary& value) { m_ingestedFilesSummary = value; }
    inline void SetIngestedFilesSummary(IngestedFilesSummary&& value) { m_ingestedFilesSummary = std::move(value); }
    inline DescribeDataIngestionJobResult& WithIngestedFilesSummary(const IngestedFilesSummary& value) { SetIngestedFilesSummary(value); return *this;}
    inline DescribeDataIngestionJobResult& WithIngestedFilesSummary(IngestedFilesSummary&& value) { SetIngestedFilesSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides details about status of the ingestion job that is currently in
     * progress. </p>
     */
    inline const Aws::String& GetStatusDetail() const{ return m_statusDetail; }
    inline void SetStatusDetail(const Aws::String& value) { m_statusDetail = value; }
    inline void SetStatusDetail(Aws::String&& value) { m_statusDetail = std::move(value); }
    inline void SetStatusDetail(const char* value) { m_statusDetail.assign(value); }
    inline DescribeDataIngestionJobResult& WithStatusDetail(const Aws::String& value) { SetStatusDetail(value); return *this;}
    inline DescribeDataIngestionJobResult& WithStatusDetail(Aws::String&& value) { SetStatusDetail(std::move(value)); return *this;}
    inline DescribeDataIngestionJobResult& WithStatusDetail(const char* value) { SetStatusDetail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the size of the ingested dataset. </p>
     */
    inline long long GetIngestedDataSize() const{ return m_ingestedDataSize; }
    inline void SetIngestedDataSize(long long value) { m_ingestedDataSize = value; }
    inline DescribeDataIngestionJobResult& WithIngestedDataSize(long long value) { SetIngestedDataSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the earliest timestamp corresponding to data that was successfully
     * ingested during this specific ingestion job. </p>
     */
    inline const Aws::Utils::DateTime& GetDataStartTime() const{ return m_dataStartTime; }
    inline void SetDataStartTime(const Aws::Utils::DateTime& value) { m_dataStartTime = value; }
    inline void SetDataStartTime(Aws::Utils::DateTime&& value) { m_dataStartTime = std::move(value); }
    inline DescribeDataIngestionJobResult& WithDataStartTime(const Aws::Utils::DateTime& value) { SetDataStartTime(value); return *this;}
    inline DescribeDataIngestionJobResult& WithDataStartTime(Aws::Utils::DateTime&& value) { SetDataStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the latest timestamp corresponding to data that was successfully
     * ingested during this specific ingestion job. </p>
     */
    inline const Aws::Utils::DateTime& GetDataEndTime() const{ return m_dataEndTime; }
    inline void SetDataEndTime(const Aws::Utils::DateTime& value) { m_dataEndTime = value; }
    inline void SetDataEndTime(Aws::Utils::DateTime&& value) { m_dataEndTime = std::move(value); }
    inline DescribeDataIngestionJobResult& WithDataEndTime(const Aws::Utils::DateTime& value) { SetDataEndTime(value); return *this;}
    inline DescribeDataIngestionJobResult& WithDataEndTime(Aws::Utils::DateTime&& value) { SetDataEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source dataset from which the data used
     * for the data ingestion job was imported from.</p>
     */
    inline const Aws::String& GetSourceDatasetArn() const{ return m_sourceDatasetArn; }
    inline void SetSourceDatasetArn(const Aws::String& value) { m_sourceDatasetArn = value; }
    inline void SetSourceDatasetArn(Aws::String&& value) { m_sourceDatasetArn = std::move(value); }
    inline void SetSourceDatasetArn(const char* value) { m_sourceDatasetArn.assign(value); }
    inline DescribeDataIngestionJobResult& WithSourceDatasetArn(const Aws::String& value) { SetSourceDatasetArn(value); return *this;}
    inline DescribeDataIngestionJobResult& WithSourceDatasetArn(Aws::String&& value) { SetSourceDatasetArn(std::move(value)); return *this;}
    inline DescribeDataIngestionJobResult& WithSourceDatasetArn(const char* value) { SetSourceDatasetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDataIngestionJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDataIngestionJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDataIngestionJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;

    Aws::String m_datasetArn;

    IngestionInputConfiguration m_ingestionInputConfiguration;

    Aws::String m_roleArn;

    Aws::Utils::DateTime m_createdAt;

    IngestionJobStatus m_status;

    Aws::String m_failedReason;

    DataQualitySummary m_dataQualitySummary;

    IngestedFilesSummary m_ingestedFilesSummary;

    Aws::String m_statusDetail;

    long long m_ingestedDataSize;

    Aws::Utils::DateTime m_dataStartTime;

    Aws::Utils::DateTime m_dataEndTime;

    Aws::String m_sourceDatasetArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
