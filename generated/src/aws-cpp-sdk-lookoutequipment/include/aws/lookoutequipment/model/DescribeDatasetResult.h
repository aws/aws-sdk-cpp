/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lookoutequipment/model/DatasetStatus.h>
#include <aws/lookoutequipment/model/IngestionInputConfiguration.h>
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
  class DescribeDatasetResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API DescribeDatasetResult() = default;
    AWS_LOOKOUTEQUIPMENT_API DescribeDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API DescribeDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the dataset being described. </p>
     */
    inline const Aws::String& GetDatasetName() const { return m_datasetName; }
    template<typename DatasetNameT = Aws::String>
    void SetDatasetName(DatasetNameT&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::forward<DatasetNameT>(value); }
    template<typename DatasetNameT = Aws::String>
    DescribeDatasetResult& WithDatasetName(DatasetNameT&& value) { SetDatasetName(std::forward<DatasetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset being described. </p>
     */
    inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
    template<typename DatasetArnT = Aws::String>
    void SetDatasetArn(DatasetArnT&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::forward<DatasetArnT>(value); }
    template<typename DatasetArnT = Aws::String>
    DescribeDatasetResult& WithDatasetArn(DatasetArnT&& value) { SetDatasetArn(std::forward<DatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the time the dataset was created in Lookout for Equipment. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DescribeDatasetResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the time the dataset was last updated, if it was. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    DescribeDatasetResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the dataset. </p>
     */
    inline DatasetStatus GetStatus() const { return m_status; }
    inline void SetStatus(DatasetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeDatasetResult& WithStatus(DatasetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline const Aws::String& GetSchema() const { return m_schema; }
    template<typename SchemaT = Aws::String>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::String>
    DescribeDatasetResult& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the identifier of the KMS key used to encrypt dataset data by Amazon
     * Lookout for Equipment. </p>
     */
    inline const Aws::String& GetServerSideKmsKeyId() const { return m_serverSideKmsKeyId; }
    template<typename ServerSideKmsKeyIdT = Aws::String>
    void SetServerSideKmsKeyId(ServerSideKmsKeyIdT&& value) { m_serverSideKmsKeyIdHasBeenSet = true; m_serverSideKmsKeyId = std::forward<ServerSideKmsKeyIdT>(value); }
    template<typename ServerSideKmsKeyIdT = Aws::String>
    DescribeDatasetResult& WithServerSideKmsKeyId(ServerSideKmsKeyIdT&& value) { SetServerSideKmsKeyId(std::forward<ServerSideKmsKeyIdT>(value)); return *this;}
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
    DescribeDatasetResult& WithIngestionInputConfiguration(IngestionInputConfigurationT&& value) { SetIngestionInputConfiguration(std::forward<IngestionInputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Gives statistics associated with the given dataset for the latest successful
     * associated ingestion job id. These statistics primarily relate to quantifying
     * incorrect data such as MissingCompleteSensorData, MissingSensorData,
     * UnsupportedDateFormats, InsufficientSensorData, and DuplicateTimeStamps. </p>
     */
    inline const DataQualitySummary& GetDataQualitySummary() const { return m_dataQualitySummary; }
    template<typename DataQualitySummaryT = DataQualitySummary>
    void SetDataQualitySummary(DataQualitySummaryT&& value) { m_dataQualitySummaryHasBeenSet = true; m_dataQualitySummary = std::forward<DataQualitySummaryT>(value); }
    template<typename DataQualitySummaryT = DataQualitySummary>
    DescribeDatasetResult& WithDataQualitySummary(DataQualitySummaryT&& value) { SetDataQualitySummary(std::forward<DataQualitySummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>IngestedFilesSummary associated with the given dataset for the latest
     * successful associated ingestion job id. </p>
     */
    inline const IngestedFilesSummary& GetIngestedFilesSummary() const { return m_ingestedFilesSummary; }
    template<typename IngestedFilesSummaryT = IngestedFilesSummary>
    void SetIngestedFilesSummary(IngestedFilesSummaryT&& value) { m_ingestedFilesSummaryHasBeenSet = true; m_ingestedFilesSummary = std::forward<IngestedFilesSummaryT>(value); }
    template<typename IngestedFilesSummaryT = IngestedFilesSummary>
    DescribeDatasetResult& WithIngestedFilesSummary(IngestedFilesSummaryT&& value) { SetIngestedFilesSummary(std::forward<IngestedFilesSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role that you are using for this
     * the data ingestion job. </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeDatasetResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the earliest timestamp corresponding to data that was successfully
     * ingested during the most recent ingestion of this particular dataset. </p>
     */
    inline const Aws::Utils::DateTime& GetDataStartTime() const { return m_dataStartTime; }
    template<typename DataStartTimeT = Aws::Utils::DateTime>
    void SetDataStartTime(DataStartTimeT&& value) { m_dataStartTimeHasBeenSet = true; m_dataStartTime = std::forward<DataStartTimeT>(value); }
    template<typename DataStartTimeT = Aws::Utils::DateTime>
    DescribeDatasetResult& WithDataStartTime(DataStartTimeT&& value) { SetDataStartTime(std::forward<DataStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates the latest timestamp corresponding to data that was successfully
     * ingested during the most recent ingestion of this particular dataset. </p>
     */
    inline const Aws::Utils::DateTime& GetDataEndTime() const { return m_dataEndTime; }
    template<typename DataEndTimeT = Aws::Utils::DateTime>
    void SetDataEndTime(DataEndTimeT&& value) { m_dataEndTimeHasBeenSet = true; m_dataEndTime = std::forward<DataEndTimeT>(value); }
    template<typename DataEndTimeT = Aws::Utils::DateTime>
    DescribeDatasetResult& WithDataEndTime(DataEndTimeT&& value) { SetDataEndTime(std::forward<DataEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source dataset from which the current
     * data being described was imported from.</p>
     */
    inline const Aws::String& GetSourceDatasetArn() const { return m_sourceDatasetArn; }
    template<typename SourceDatasetArnT = Aws::String>
    void SetSourceDatasetArn(SourceDatasetArnT&& value) { m_sourceDatasetArnHasBeenSet = true; m_sourceDatasetArn = std::forward<SourceDatasetArnT>(value); }
    template<typename SourceDatasetArnT = Aws::String>
    DescribeDatasetResult& WithSourceDatasetArn(SourceDatasetArnT&& value) { SetSourceDatasetArn(std::forward<SourceDatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDatasetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    DatasetStatus m_status{DatasetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::String m_serverSideKmsKeyId;
    bool m_serverSideKmsKeyIdHasBeenSet = false;

    IngestionInputConfiguration m_ingestionInputConfiguration;
    bool m_ingestionInputConfigurationHasBeenSet = false;

    DataQualitySummary m_dataQualitySummary;
    bool m_dataQualitySummaryHasBeenSet = false;

    IngestedFilesSummary m_ingestedFilesSummary;
    bool m_ingestedFilesSummaryHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

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
