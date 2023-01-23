/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/Domain.h>
#include <aws/forecast/model/DatasetType.h>
#include <aws/forecast/model/Schema.h>
#include <aws/forecast/model/EncryptionConfig.h>
#include <aws/core/utils/DateTime.h>
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
namespace ForecastService
{
namespace Model
{
  class DescribeDatasetResult
  {
  public:
    AWS_FORECASTSERVICE_API DescribeDatasetResult();
    AWS_FORECASTSERVICE_API DescribeDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribeDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline DescribeDatasetResult& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline DescribeDatasetResult& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline DescribeDatasetResult& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of the dataset.</p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetName = value; }

    /**
     * <p>The name of the dataset.</p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetName = std::move(value); }

    /**
     * <p>The name of the dataset.</p>
     */
    inline void SetDatasetName(const char* value) { m_datasetName.assign(value); }

    /**
     * <p>The name of the dataset.</p>
     */
    inline DescribeDatasetResult& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the dataset.</p>
     */
    inline DescribeDatasetResult& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset.</p>
     */
    inline DescribeDatasetResult& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p>The domain associated with the dataset.</p>
     */
    inline const Domain& GetDomain() const{ return m_domain; }

    /**
     * <p>The domain associated with the dataset.</p>
     */
    inline void SetDomain(const Domain& value) { m_domain = value; }

    /**
     * <p>The domain associated with the dataset.</p>
     */
    inline void SetDomain(Domain&& value) { m_domain = std::move(value); }

    /**
     * <p>The domain associated with the dataset.</p>
     */
    inline DescribeDatasetResult& WithDomain(const Domain& value) { SetDomain(value); return *this;}

    /**
     * <p>The domain associated with the dataset.</p>
     */
    inline DescribeDatasetResult& WithDomain(Domain&& value) { SetDomain(std::move(value)); return *this;}


    /**
     * <p>The dataset type.</p>
     */
    inline const DatasetType& GetDatasetType() const{ return m_datasetType; }

    /**
     * <p>The dataset type.</p>
     */
    inline void SetDatasetType(const DatasetType& value) { m_datasetType = value; }

    /**
     * <p>The dataset type.</p>
     */
    inline void SetDatasetType(DatasetType&& value) { m_datasetType = std::move(value); }

    /**
     * <p>The dataset type.</p>
     */
    inline DescribeDatasetResult& WithDatasetType(const DatasetType& value) { SetDatasetType(value); return *this;}

    /**
     * <p>The dataset type.</p>
     */
    inline DescribeDatasetResult& WithDatasetType(DatasetType&& value) { SetDatasetType(std::move(value)); return *this;}


    /**
     * <p>The frequency of data collection.</p> <p>Valid intervals are Y (Year), M
     * (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15 minutes),
     * 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For example, "M"
     * indicates every month and "30min" indicates every 30 minutes.</p>
     */
    inline const Aws::String& GetDataFrequency() const{ return m_dataFrequency; }

    /**
     * <p>The frequency of data collection.</p> <p>Valid intervals are Y (Year), M
     * (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15 minutes),
     * 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For example, "M"
     * indicates every month and "30min" indicates every 30 minutes.</p>
     */
    inline void SetDataFrequency(const Aws::String& value) { m_dataFrequency = value; }

    /**
     * <p>The frequency of data collection.</p> <p>Valid intervals are Y (Year), M
     * (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15 minutes),
     * 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For example, "M"
     * indicates every month and "30min" indicates every 30 minutes.</p>
     */
    inline void SetDataFrequency(Aws::String&& value) { m_dataFrequency = std::move(value); }

    /**
     * <p>The frequency of data collection.</p> <p>Valid intervals are Y (Year), M
     * (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15 minutes),
     * 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For example, "M"
     * indicates every month and "30min" indicates every 30 minutes.</p>
     */
    inline void SetDataFrequency(const char* value) { m_dataFrequency.assign(value); }

    /**
     * <p>The frequency of data collection.</p> <p>Valid intervals are Y (Year), M
     * (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15 minutes),
     * 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For example, "M"
     * indicates every month and "30min" indicates every 30 minutes.</p>
     */
    inline DescribeDatasetResult& WithDataFrequency(const Aws::String& value) { SetDataFrequency(value); return *this;}

    /**
     * <p>The frequency of data collection.</p> <p>Valid intervals are Y (Year), M
     * (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15 minutes),
     * 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For example, "M"
     * indicates every month and "30min" indicates every 30 minutes.</p>
     */
    inline DescribeDatasetResult& WithDataFrequency(Aws::String&& value) { SetDataFrequency(std::move(value)); return *this;}

    /**
     * <p>The frequency of data collection.</p> <p>Valid intervals are Y (Year), M
     * (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15 minutes),
     * 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For example, "M"
     * indicates every month and "30min" indicates every 30 minutes.</p>
     */
    inline DescribeDatasetResult& WithDataFrequency(const char* value) { SetDataFrequency(value); return *this;}


    /**
     * <p>An array of <code>SchemaAttribute</code> objects that specify the dataset
     * fields. Each <code>SchemaAttribute</code> specifies the name and data type of a
     * field.</p>
     */
    inline const Schema& GetSchema() const{ return m_schema; }

    /**
     * <p>An array of <code>SchemaAttribute</code> objects that specify the dataset
     * fields. Each <code>SchemaAttribute</code> specifies the name and data type of a
     * field.</p>
     */
    inline void SetSchema(const Schema& value) { m_schema = value; }

    /**
     * <p>An array of <code>SchemaAttribute</code> objects that specify the dataset
     * fields. Each <code>SchemaAttribute</code> specifies the name and data type of a
     * field.</p>
     */
    inline void SetSchema(Schema&& value) { m_schema = std::move(value); }

    /**
     * <p>An array of <code>SchemaAttribute</code> objects that specify the dataset
     * fields. Each <code>SchemaAttribute</code> specifies the name and data type of a
     * field.</p>
     */
    inline DescribeDatasetResult& WithSchema(const Schema& value) { SetSchema(value); return *this;}

    /**
     * <p>An array of <code>SchemaAttribute</code> objects that specify the dataset
     * fields. Each <code>SchemaAttribute</code> specifies the name and data type of a
     * field.</p>
     */
    inline DescribeDatasetResult& WithSchema(Schema&& value) { SetSchema(std::move(value)); return *this;}


    /**
     * <p>The AWS Key Management Service (KMS) key and the AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline const EncryptionConfig& GetEncryptionConfig() const{ return m_encryptionConfig; }

    /**
     * <p>The AWS Key Management Service (KMS) key and the AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline void SetEncryptionConfig(const EncryptionConfig& value) { m_encryptionConfig = value; }

    /**
     * <p>The AWS Key Management Service (KMS) key and the AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline void SetEncryptionConfig(EncryptionConfig&& value) { m_encryptionConfig = std::move(value); }

    /**
     * <p>The AWS Key Management Service (KMS) key and the AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline DescribeDatasetResult& WithEncryptionConfig(const EncryptionConfig& value) { SetEncryptionConfig(value); return *this;}

    /**
     * <p>The AWS Key Management Service (KMS) key and the AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline DescribeDatasetResult& WithEncryptionConfig(EncryptionConfig&& value) { SetEncryptionConfig(std::move(value)); return *this;}


    /**
     * <p>The status of the dataset. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> <li> <p> <code>UPDATE_PENDING</code>,
     * <code>UPDATE_IN_PROGRESS</code>, <code>UPDATE_FAILED</code> </p> </li> </ul>
     * <p>The <code>UPDATE</code> states apply while data is imported to the dataset
     * from a call to the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>
     * operation and reflect the status of the dataset import job. For example, when
     * the import job status is <code>CREATE_IN_PROGRESS</code>, the status of the
     * dataset is <code>UPDATE_IN_PROGRESS</code>.</p>  <p>The
     * <code>Status</code> of the dataset must be <code>ACTIVE</code> before you can
     * import training data.</p> 
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the dataset. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> <li> <p> <code>UPDATE_PENDING</code>,
     * <code>UPDATE_IN_PROGRESS</code>, <code>UPDATE_FAILED</code> </p> </li> </ul>
     * <p>The <code>UPDATE</code> states apply while data is imported to the dataset
     * from a call to the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>
     * operation and reflect the status of the dataset import job. For example, when
     * the import job status is <code>CREATE_IN_PROGRESS</code>, the status of the
     * dataset is <code>UPDATE_IN_PROGRESS</code>.</p>  <p>The
     * <code>Status</code> of the dataset must be <code>ACTIVE</code> before you can
     * import training data.</p> 
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The status of the dataset. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> <li> <p> <code>UPDATE_PENDING</code>,
     * <code>UPDATE_IN_PROGRESS</code>, <code>UPDATE_FAILED</code> </p> </li> </ul>
     * <p>The <code>UPDATE</code> states apply while data is imported to the dataset
     * from a call to the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>
     * operation and reflect the status of the dataset import job. For example, when
     * the import job status is <code>CREATE_IN_PROGRESS</code>, the status of the
     * dataset is <code>UPDATE_IN_PROGRESS</code>.</p>  <p>The
     * <code>Status</code> of the dataset must be <code>ACTIVE</code> before you can
     * import training data.</p> 
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the dataset. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> <li> <p> <code>UPDATE_PENDING</code>,
     * <code>UPDATE_IN_PROGRESS</code>, <code>UPDATE_FAILED</code> </p> </li> </ul>
     * <p>The <code>UPDATE</code> states apply while data is imported to the dataset
     * from a call to the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>
     * operation and reflect the status of the dataset import job. For example, when
     * the import job status is <code>CREATE_IN_PROGRESS</code>, the status of the
     * dataset is <code>UPDATE_IN_PROGRESS</code>.</p>  <p>The
     * <code>Status</code> of the dataset must be <code>ACTIVE</code> before you can
     * import training data.</p> 
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The status of the dataset. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> <li> <p> <code>UPDATE_PENDING</code>,
     * <code>UPDATE_IN_PROGRESS</code>, <code>UPDATE_FAILED</code> </p> </li> </ul>
     * <p>The <code>UPDATE</code> states apply while data is imported to the dataset
     * from a call to the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>
     * operation and reflect the status of the dataset import job. For example, when
     * the import job status is <code>CREATE_IN_PROGRESS</code>, the status of the
     * dataset is <code>UPDATE_IN_PROGRESS</code>.</p>  <p>The
     * <code>Status</code> of the dataset must be <code>ACTIVE</code> before you can
     * import training data.</p> 
     */
    inline DescribeDatasetResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the dataset. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> <li> <p> <code>UPDATE_PENDING</code>,
     * <code>UPDATE_IN_PROGRESS</code>, <code>UPDATE_FAILED</code> </p> </li> </ul>
     * <p>The <code>UPDATE</code> states apply while data is imported to the dataset
     * from a call to the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>
     * operation and reflect the status of the dataset import job. For example, when
     * the import job status is <code>CREATE_IN_PROGRESS</code>, the status of the
     * dataset is <code>UPDATE_IN_PROGRESS</code>.</p>  <p>The
     * <code>Status</code> of the dataset must be <code>ACTIVE</code> before you can
     * import training data.</p> 
     */
    inline DescribeDatasetResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the dataset. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> <li> <p> <code>UPDATE_PENDING</code>,
     * <code>UPDATE_IN_PROGRESS</code>, <code>UPDATE_FAILED</code> </p> </li> </ul>
     * <p>The <code>UPDATE</code> states apply while data is imported to the dataset
     * from a call to the <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>
     * operation and reflect the status of the dataset import job. For example, when
     * the import job status is <code>CREATE_IN_PROGRESS</code>, the status of the
     * dataset is <code>UPDATE_IN_PROGRESS</code>.</p>  <p>The
     * <code>Status</code> of the dataset must be <code>ACTIVE</code> before you can
     * import training data.</p> 
     */
    inline DescribeDatasetResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>When the dataset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the dataset was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the dataset was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the dataset was created.</p>
     */
    inline DescribeDatasetResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the dataset was created.</p>
     */
    inline DescribeDatasetResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>When you create a dataset, <code>LastModificationTime</code> is the same as
     * <code>CreationTime</code>. While data is being imported to the dataset,
     * <code>LastModificationTime</code> is the current time of the
     * <code>DescribeDataset</code> call. After a <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>
     * operation has finished, <code>LastModificationTime</code> is when the import job
     * completed or failed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }

    /**
     * <p>When you create a dataset, <code>LastModificationTime</code> is the same as
     * <code>CreationTime</code>. While data is being imported to the dataset,
     * <code>LastModificationTime</code> is the current time of the
     * <code>DescribeDataset</code> call. After a <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>
     * operation has finished, <code>LastModificationTime</code> is when the import job
     * completed or failed.</p>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }

    /**
     * <p>When you create a dataset, <code>LastModificationTime</code> is the same as
     * <code>CreationTime</code>. While data is being imported to the dataset,
     * <code>LastModificationTime</code> is the current time of the
     * <code>DescribeDataset</code> call. After a <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>
     * operation has finished, <code>LastModificationTime</code> is when the import job
     * completed or failed.</p>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }

    /**
     * <p>When you create a dataset, <code>LastModificationTime</code> is the same as
     * <code>CreationTime</code>. While data is being imported to the dataset,
     * <code>LastModificationTime</code> is the current time of the
     * <code>DescribeDataset</code> call. After a <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>
     * operation has finished, <code>LastModificationTime</code> is when the import job
     * completed or failed.</p>
     */
    inline DescribeDatasetResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>When you create a dataset, <code>LastModificationTime</code> is the same as
     * <code>CreationTime</code>. While data is being imported to the dataset,
     * <code>LastModificationTime</code> is the current time of the
     * <code>DescribeDataset</code> call. After a <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>
     * operation has finished, <code>LastModificationTime</code> is when the import job
     * completed or failed.</p>
     */
    inline DescribeDatasetResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}

  private:

    Aws::String m_datasetArn;

    Aws::String m_datasetName;

    Domain m_domain;

    DatasetType m_datasetType;

    Aws::String m_dataFrequency;

    Schema m_schema;

    EncryptionConfig m_encryptionConfig;

    Aws::String m_status;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
