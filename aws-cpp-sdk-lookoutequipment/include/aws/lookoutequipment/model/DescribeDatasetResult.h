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
    AWS_LOOKOUTEQUIPMENT_API DescribeDatasetResult();
    AWS_LOOKOUTEQUIPMENT_API DescribeDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API DescribeDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the dataset being described. </p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of the dataset being described. </p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetName = value; }

    /**
     * <p>The name of the dataset being described. </p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetName = std::move(value); }

    /**
     * <p>The name of the dataset being described. </p>
     */
    inline void SetDatasetName(const char* value) { m_datasetName.assign(value); }

    /**
     * <p>The name of the dataset being described. </p>
     */
    inline DescribeDatasetResult& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the dataset being described. </p>
     */
    inline DescribeDatasetResult& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset being described. </p>
     */
    inline DescribeDatasetResult& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset being described. </p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset being described. </p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset being described. </p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset being described. </p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset being described. </p>
     */
    inline DescribeDatasetResult& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset being described. </p>
     */
    inline DescribeDatasetResult& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset being described. </p>
     */
    inline DescribeDatasetResult& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    /**
     * <p>Specifies the time the dataset was created in Lookout for Equipment. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Specifies the time the dataset was created in Lookout for Equipment. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>Specifies the time the dataset was created in Lookout for Equipment. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>Specifies the time the dataset was created in Lookout for Equipment. </p>
     */
    inline DescribeDatasetResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Specifies the time the dataset was created in Lookout for Equipment. </p>
     */
    inline DescribeDatasetResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Specifies the time the dataset was last updated, if it was. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>Specifies the time the dataset was last updated, if it was. </p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }

    /**
     * <p>Specifies the time the dataset was last updated, if it was. </p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }

    /**
     * <p>Specifies the time the dataset was last updated, if it was. </p>
     */
    inline DescribeDatasetResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>Specifies the time the dataset was last updated, if it was. </p>
     */
    inline DescribeDatasetResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>Indicates the status of the dataset. </p>
     */
    inline const DatasetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates the status of the dataset. </p>
     */
    inline void SetStatus(const DatasetStatus& value) { m_status = value; }

    /**
     * <p>Indicates the status of the dataset. </p>
     */
    inline void SetStatus(DatasetStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Indicates the status of the dataset. </p>
     */
    inline DescribeDatasetResult& WithStatus(const DatasetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates the status of the dataset. </p>
     */
    inline DescribeDatasetResult& WithStatus(DatasetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline void SetSchema(const Aws::String& value) { m_schema = value; }

    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline void SetSchema(Aws::String&& value) { m_schema = std::move(value); }

    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline void SetSchema(const char* value) { m_schema.assign(value); }

    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline DescribeDatasetResult& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline DescribeDatasetResult& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>A JSON description of the data that is in each time series dataset, including
     * names, column names, and data types. </p>
     */
    inline DescribeDatasetResult& WithSchema(const char* value) { SetSchema(value); return *this;}


    /**
     * <p>Provides the identifier of the KMS key used to encrypt dataset data by Amazon
     * Lookout for Equipment. </p>
     */
    inline const Aws::String& GetServerSideKmsKeyId() const{ return m_serverSideKmsKeyId; }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt dataset data by Amazon
     * Lookout for Equipment. </p>
     */
    inline void SetServerSideKmsKeyId(const Aws::String& value) { m_serverSideKmsKeyId = value; }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt dataset data by Amazon
     * Lookout for Equipment. </p>
     */
    inline void SetServerSideKmsKeyId(Aws::String&& value) { m_serverSideKmsKeyId = std::move(value); }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt dataset data by Amazon
     * Lookout for Equipment. </p>
     */
    inline void SetServerSideKmsKeyId(const char* value) { m_serverSideKmsKeyId.assign(value); }

    /**
     * <p>Provides the identifier of the KMS key used to encrypt dataset data by Amazon
     * Lookout for Equipment. </p>
     */
    inline DescribeDatasetResult& WithServerSideKmsKeyId(const Aws::String& value) { SetServerSideKmsKeyId(value); return *this;}

    /**
     * <p>Provides the identifier of the KMS key used to encrypt dataset data by Amazon
     * Lookout for Equipment. </p>
     */
    inline DescribeDatasetResult& WithServerSideKmsKeyId(Aws::String&& value) { SetServerSideKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>Provides the identifier of the KMS key used to encrypt dataset data by Amazon
     * Lookout for Equipment. </p>
     */
    inline DescribeDatasetResult& WithServerSideKmsKeyId(const char* value) { SetServerSideKmsKeyId(value); return *this;}


    /**
     * <p>Specifies the S3 location configuration for the data input for the data
     * ingestion job. </p>
     */
    inline const IngestionInputConfiguration& GetIngestionInputConfiguration() const{ return m_ingestionInputConfiguration; }

    /**
     * <p>Specifies the S3 location configuration for the data input for the data
     * ingestion job. </p>
     */
    inline void SetIngestionInputConfiguration(const IngestionInputConfiguration& value) { m_ingestionInputConfiguration = value; }

    /**
     * <p>Specifies the S3 location configuration for the data input for the data
     * ingestion job. </p>
     */
    inline void SetIngestionInputConfiguration(IngestionInputConfiguration&& value) { m_ingestionInputConfiguration = std::move(value); }

    /**
     * <p>Specifies the S3 location configuration for the data input for the data
     * ingestion job. </p>
     */
    inline DescribeDatasetResult& WithIngestionInputConfiguration(const IngestionInputConfiguration& value) { SetIngestionInputConfiguration(value); return *this;}

    /**
     * <p>Specifies the S3 location configuration for the data input for the data
     * ingestion job. </p>
     */
    inline DescribeDatasetResult& WithIngestionInputConfiguration(IngestionInputConfiguration&& value) { SetIngestionInputConfiguration(std::move(value)); return *this;}


    /**
     * <p> Gives statistics associated with the given dataset for the latest successful
     * associated ingestion job id. These statistics primarily relate to quantifying
     * incorrect data such as MissingCompleteSensorData, MissingSensorData,
     * UnsupportedDateFormats, InsufficientSensorData, and DuplicateTimeStamps. </p>
     */
    inline const DataQualitySummary& GetDataQualitySummary() const{ return m_dataQualitySummary; }

    /**
     * <p> Gives statistics associated with the given dataset for the latest successful
     * associated ingestion job id. These statistics primarily relate to quantifying
     * incorrect data such as MissingCompleteSensorData, MissingSensorData,
     * UnsupportedDateFormats, InsufficientSensorData, and DuplicateTimeStamps. </p>
     */
    inline void SetDataQualitySummary(const DataQualitySummary& value) { m_dataQualitySummary = value; }

    /**
     * <p> Gives statistics associated with the given dataset for the latest successful
     * associated ingestion job id. These statistics primarily relate to quantifying
     * incorrect data such as MissingCompleteSensorData, MissingSensorData,
     * UnsupportedDateFormats, InsufficientSensorData, and DuplicateTimeStamps. </p>
     */
    inline void SetDataQualitySummary(DataQualitySummary&& value) { m_dataQualitySummary = std::move(value); }

    /**
     * <p> Gives statistics associated with the given dataset for the latest successful
     * associated ingestion job id. These statistics primarily relate to quantifying
     * incorrect data such as MissingCompleteSensorData, MissingSensorData,
     * UnsupportedDateFormats, InsufficientSensorData, and DuplicateTimeStamps. </p>
     */
    inline DescribeDatasetResult& WithDataQualitySummary(const DataQualitySummary& value) { SetDataQualitySummary(value); return *this;}

    /**
     * <p> Gives statistics associated with the given dataset for the latest successful
     * associated ingestion job id. These statistics primarily relate to quantifying
     * incorrect data such as MissingCompleteSensorData, MissingSensorData,
     * UnsupportedDateFormats, InsufficientSensorData, and DuplicateTimeStamps. </p>
     */
    inline DescribeDatasetResult& WithDataQualitySummary(DataQualitySummary&& value) { SetDataQualitySummary(std::move(value)); return *this;}


    /**
     * <p> IngestedFilesSummary associated with the given dataset for the latest
     * successful associated ingestion job id. </p>
     */
    inline const IngestedFilesSummary& GetIngestedFilesSummary() const{ return m_ingestedFilesSummary; }

    /**
     * <p> IngestedFilesSummary associated with the given dataset for the latest
     * successful associated ingestion job id. </p>
     */
    inline void SetIngestedFilesSummary(const IngestedFilesSummary& value) { m_ingestedFilesSummary = value; }

    /**
     * <p> IngestedFilesSummary associated with the given dataset for the latest
     * successful associated ingestion job id. </p>
     */
    inline void SetIngestedFilesSummary(IngestedFilesSummary&& value) { m_ingestedFilesSummary = std::move(value); }

    /**
     * <p> IngestedFilesSummary associated with the given dataset for the latest
     * successful associated ingestion job id. </p>
     */
    inline DescribeDatasetResult& WithIngestedFilesSummary(const IngestedFilesSummary& value) { SetIngestedFilesSummary(value); return *this;}

    /**
     * <p> IngestedFilesSummary associated with the given dataset for the latest
     * successful associated ingestion job id. </p>
     */
    inline DescribeDatasetResult& WithIngestedFilesSummary(IngestedFilesSummary&& value) { SetIngestedFilesSummary(std::move(value)); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role that you are using for this
     * the data ingestion job. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role that you are using for this
     * the data ingestion job. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role that you are using for this
     * the data ingestion job. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role that you are using for this
     * the data ingestion job. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role that you are using for this
     * the data ingestion job. </p>
     */
    inline DescribeDatasetResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role that you are using for this
     * the data ingestion job. </p>
     */
    inline DescribeDatasetResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role that you are using for this
     * the data ingestion job. </p>
     */
    inline DescribeDatasetResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p> Indicates the earliest timestamp corresponding to data that was successfully
     * ingested during the most recent ingestion of this particular dataset. </p>
     */
    inline const Aws::Utils::DateTime& GetDataStartTime() const{ return m_dataStartTime; }

    /**
     * <p> Indicates the earliest timestamp corresponding to data that was successfully
     * ingested during the most recent ingestion of this particular dataset. </p>
     */
    inline void SetDataStartTime(const Aws::Utils::DateTime& value) { m_dataStartTime = value; }

    /**
     * <p> Indicates the earliest timestamp corresponding to data that was successfully
     * ingested during the most recent ingestion of this particular dataset. </p>
     */
    inline void SetDataStartTime(Aws::Utils::DateTime&& value) { m_dataStartTime = std::move(value); }

    /**
     * <p> Indicates the earliest timestamp corresponding to data that was successfully
     * ingested during the most recent ingestion of this particular dataset. </p>
     */
    inline DescribeDatasetResult& WithDataStartTime(const Aws::Utils::DateTime& value) { SetDataStartTime(value); return *this;}

    /**
     * <p> Indicates the earliest timestamp corresponding to data that was successfully
     * ingested during the most recent ingestion of this particular dataset. </p>
     */
    inline DescribeDatasetResult& WithDataStartTime(Aws::Utils::DateTime&& value) { SetDataStartTime(std::move(value)); return *this;}


    /**
     * <p> Indicates the latest timestamp corresponding to data that was successfully
     * ingested during the most recent ingestion of this particular dataset. </p>
     */
    inline const Aws::Utils::DateTime& GetDataEndTime() const{ return m_dataEndTime; }

    /**
     * <p> Indicates the latest timestamp corresponding to data that was successfully
     * ingested during the most recent ingestion of this particular dataset. </p>
     */
    inline void SetDataEndTime(const Aws::Utils::DateTime& value) { m_dataEndTime = value; }

    /**
     * <p> Indicates the latest timestamp corresponding to data that was successfully
     * ingested during the most recent ingestion of this particular dataset. </p>
     */
    inline void SetDataEndTime(Aws::Utils::DateTime&& value) { m_dataEndTime = std::move(value); }

    /**
     * <p> Indicates the latest timestamp corresponding to data that was successfully
     * ingested during the most recent ingestion of this particular dataset. </p>
     */
    inline DescribeDatasetResult& WithDataEndTime(const Aws::Utils::DateTime& value) { SetDataEndTime(value); return *this;}

    /**
     * <p> Indicates the latest timestamp corresponding to data that was successfully
     * ingested during the most recent ingestion of this particular dataset. </p>
     */
    inline DescribeDatasetResult& WithDataEndTime(Aws::Utils::DateTime&& value) { SetDataEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_datasetName;

    Aws::String m_datasetArn;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_lastUpdatedAt;

    DatasetStatus m_status;

    Aws::String m_schema;

    Aws::String m_serverSideKmsKeyId;

    IngestionInputConfiguration m_ingestionInputConfiguration;

    DataQualitySummary m_dataQualitySummary;

    IngestedFilesSummary m_ingestedFilesSummary;

    Aws::String m_roleArn;

    Aws::Utils::DateTime m_dataStartTime;

    Aws::Utils::DateTime m_dataEndTime;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
