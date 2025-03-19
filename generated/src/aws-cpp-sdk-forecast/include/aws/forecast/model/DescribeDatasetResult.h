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
    AWS_FORECASTSERVICE_API DescribeDatasetResult() = default;
    AWS_FORECASTSERVICE_API DescribeDatasetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribeDatasetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dataset.</p>
     */
    inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
    template<typename DatasetArnT = Aws::String>
    void SetDatasetArn(DatasetArnT&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::forward<DatasetArnT>(value); }
    template<typename DatasetArnT = Aws::String>
    DescribeDatasetResult& WithDatasetArn(DatasetArnT&& value) { SetDatasetArn(std::forward<DatasetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetDatasetName() const { return m_datasetName; }
    template<typename DatasetNameT = Aws::String>
    void SetDatasetName(DatasetNameT&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::forward<DatasetNameT>(value); }
    template<typename DatasetNameT = Aws::String>
    DescribeDatasetResult& WithDatasetName(DatasetNameT&& value) { SetDatasetName(std::forward<DatasetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain associated with the dataset.</p>
     */
    inline Domain GetDomain() const { return m_domain; }
    inline void SetDomain(Domain value) { m_domainHasBeenSet = true; m_domain = value; }
    inline DescribeDatasetResult& WithDomain(Domain value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset type.</p>
     */
    inline DatasetType GetDatasetType() const { return m_datasetType; }
    inline void SetDatasetType(DatasetType value) { m_datasetTypeHasBeenSet = true; m_datasetType = value; }
    inline DescribeDatasetResult& WithDatasetType(DatasetType value) { SetDatasetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The frequency of data collection.</p> <p>Valid intervals are Y (Year), M
     * (Month), W (Week), D (Day), H (Hour), 30min (30 minutes), 15min (15 minutes),
     * 10min (10 minutes), 5min (5 minutes), and 1min (1 minute). For example, "M"
     * indicates every month and "30min" indicates every 30 minutes.</p>
     */
    inline const Aws::String& GetDataFrequency() const { return m_dataFrequency; }
    template<typename DataFrequencyT = Aws::String>
    void SetDataFrequency(DataFrequencyT&& value) { m_dataFrequencyHasBeenSet = true; m_dataFrequency = std::forward<DataFrequencyT>(value); }
    template<typename DataFrequencyT = Aws::String>
    DescribeDatasetResult& WithDataFrequency(DataFrequencyT&& value) { SetDataFrequency(std::forward<DataFrequencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>SchemaAttribute</code> objects that specify the dataset
     * fields. Each <code>SchemaAttribute</code> specifies the name and data type of a
     * field.</p>
     */
    inline const Schema& GetSchema() const { return m_schema; }
    template<typename SchemaT = Schema>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Schema>
    DescribeDatasetResult& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Management Service (KMS) key and the Identity and Access Management
     * (IAM) role that Amazon Forecast can assume to access the key.</p>
     */
    inline const EncryptionConfig& GetEncryptionConfig() const { return m_encryptionConfig; }
    template<typename EncryptionConfigT = EncryptionConfig>
    void SetEncryptionConfig(EncryptionConfigT&& value) { m_encryptionConfigHasBeenSet = true; m_encryptionConfig = std::forward<EncryptionConfigT>(value); }
    template<typename EncryptionConfigT = EncryptionConfig>
    DescribeDatasetResult& WithEncryptionConfig(EncryptionConfigT&& value) { SetEncryptionConfig(std::forward<EncryptionConfigT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DescribeDatasetResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the dataset was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeDatasetResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you create a dataset, <code>LastModificationTime</code> is the same as
     * <code>CreationTime</code>. While data is being imported to the dataset,
     * <code>LastModificationTime</code> is the current time of the
     * <code>DescribeDataset</code> call. After a <a
     * href="https://docs.aws.amazon.com/forecast/latest/dg/API_CreateDatasetImportJob.html">CreateDatasetImportJob</a>
     * operation has finished, <code>LastModificationTime</code> is when the import job
     * completed or failed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const { return m_lastModificationTime; }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    void SetLastModificationTime(LastModificationTimeT&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::forward<LastModificationTimeT>(value); }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    DescribeDatasetResult& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDatasetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    Domain m_domain{Domain::NOT_SET};
    bool m_domainHasBeenSet = false;

    DatasetType m_datasetType{DatasetType::NOT_SET};
    bool m_datasetTypeHasBeenSet = false;

    Aws::String m_dataFrequency;
    bool m_dataFrequencyHasBeenSet = false;

    Schema m_schema;
    bool m_schemaHasBeenSet = false;

    EncryptionConfig m_encryptionConfig;
    bool m_encryptionConfigHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime{};
    bool m_lastModificationTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
