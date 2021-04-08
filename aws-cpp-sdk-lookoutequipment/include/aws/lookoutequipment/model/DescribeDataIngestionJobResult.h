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
  class AWS_LOOKOUTEQUIPMENT_API DescribeDataIngestionJobResult
  {
  public:
    DescribeDataIngestionJobResult();
    DescribeDataIngestionJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDataIngestionJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Indicates the job ID of the data ingestion job. </p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>Indicates the job ID of the data ingestion job. </p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>Indicates the job ID of the data ingestion job. </p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>Indicates the job ID of the data ingestion job. </p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>Indicates the job ID of the data ingestion job. </p>
     */
    inline DescribeDataIngestionJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>Indicates the job ID of the data ingestion job. </p>
     */
    inline DescribeDataIngestionJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>Indicates the job ID of the data ingestion job. </p>
     */
    inline DescribeDataIngestionJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset being used in the data
     * ingestion job. </p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset being used in the data
     * ingestion job. </p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset being used in the data
     * ingestion job. </p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset being used in the data
     * ingestion job. </p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset being used in the data
     * ingestion job. </p>
     */
    inline DescribeDataIngestionJobResult& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset being used in the data
     * ingestion job. </p>
     */
    inline DescribeDataIngestionJobResult& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset being used in the data
     * ingestion job. </p>
     */
    inline DescribeDataIngestionJobResult& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


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
    inline DescribeDataIngestionJobResult& WithIngestionInputConfiguration(const IngestionInputConfiguration& value) { SetIngestionInputConfiguration(value); return *this;}

    /**
     * <p>Specifies the S3 location configuration for the data input for the data
     * ingestion job. </p>
     */
    inline DescribeDataIngestionJobResult& WithIngestionInputConfiguration(IngestionInputConfiguration&& value) { SetIngestionInputConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * data source being ingested. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * data source being ingested. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * data source being ingested. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * data source being ingested. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * data source being ingested. </p>
     */
    inline DescribeDataIngestionJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * data source being ingested. </p>
     */
    inline DescribeDataIngestionJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to access the
     * data source being ingested. </p>
     */
    inline DescribeDataIngestionJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The time at which the data ingestion job was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the data ingestion job was created. </p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The time at which the data ingestion job was created. </p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The time at which the data ingestion job was created. </p>
     */
    inline DescribeDataIngestionJobResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the data ingestion job was created. </p>
     */
    inline DescribeDataIngestionJobResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>Indicates the status of the <code>DataIngestionJob</code> operation. </p>
     */
    inline const IngestionJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates the status of the <code>DataIngestionJob</code> operation. </p>
     */
    inline void SetStatus(const IngestionJobStatus& value) { m_status = value; }

    /**
     * <p>Indicates the status of the <code>DataIngestionJob</code> operation. </p>
     */
    inline void SetStatus(IngestionJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Indicates the status of the <code>DataIngestionJob</code> operation. </p>
     */
    inline DescribeDataIngestionJobResult& WithStatus(const IngestionJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates the status of the <code>DataIngestionJob</code> operation. </p>
     */
    inline DescribeDataIngestionJobResult& WithStatus(IngestionJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Specifies the reason for failure when a data ingestion job has failed. </p>
     */
    inline const Aws::String& GetFailedReason() const{ return m_failedReason; }

    /**
     * <p>Specifies the reason for failure when a data ingestion job has failed. </p>
     */
    inline void SetFailedReason(const Aws::String& value) { m_failedReason = value; }

    /**
     * <p>Specifies the reason for failure when a data ingestion job has failed. </p>
     */
    inline void SetFailedReason(Aws::String&& value) { m_failedReason = std::move(value); }

    /**
     * <p>Specifies the reason for failure when a data ingestion job has failed. </p>
     */
    inline void SetFailedReason(const char* value) { m_failedReason.assign(value); }

    /**
     * <p>Specifies the reason for failure when a data ingestion job has failed. </p>
     */
    inline DescribeDataIngestionJobResult& WithFailedReason(const Aws::String& value) { SetFailedReason(value); return *this;}

    /**
     * <p>Specifies the reason for failure when a data ingestion job has failed. </p>
     */
    inline DescribeDataIngestionJobResult& WithFailedReason(Aws::String&& value) { SetFailedReason(std::move(value)); return *this;}

    /**
     * <p>Specifies the reason for failure when a data ingestion job has failed. </p>
     */
    inline DescribeDataIngestionJobResult& WithFailedReason(const char* value) { SetFailedReason(value); return *this;}

  private:

    Aws::String m_jobId;

    Aws::String m_datasetArn;

    IngestionInputConfiguration m_ingestionInputConfiguration;

    Aws::String m_roleArn;

    Aws::Utils::DateTime m_createdAt;

    IngestionJobStatus m_status;

    Aws::String m_failedReason;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
