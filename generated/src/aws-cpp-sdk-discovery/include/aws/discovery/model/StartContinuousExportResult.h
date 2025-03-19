/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/discovery/model/DataSource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{
  class StartContinuousExportResult
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API StartContinuousExportResult() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API StartContinuousExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API StartContinuousExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID assigned to this export.</p>
     */
    inline const Aws::String& GetExportId() const { return m_exportId; }
    template<typename ExportIdT = Aws::String>
    void SetExportId(ExportIdT&& value) { m_exportIdHasBeenSet = true; m_exportId = std::forward<ExportIdT>(value); }
    template<typename ExportIdT = Aws::String>
    StartContinuousExportResult& WithExportId(ExportIdT&& value) { SetExportId(std::forward<ExportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the s3 bucket where the export data parquet files are stored.</p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    StartContinuousExportResult& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp representing when the continuous export was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    StartContinuousExportResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data collector used to gather this data (currently only offered
     * for AGENT).</p>
     */
    inline DataSource GetDataSource() const { return m_dataSource; }
    inline void SetDataSource(DataSource value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }
    inline StartContinuousExportResult& WithDataSource(DataSource value) { SetDataSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A dictionary which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSchemaStorageConfig() const { return m_schemaStorageConfig; }
    template<typename SchemaStorageConfigT = Aws::Map<Aws::String, Aws::String>>
    void SetSchemaStorageConfig(SchemaStorageConfigT&& value) { m_schemaStorageConfigHasBeenSet = true; m_schemaStorageConfig = std::forward<SchemaStorageConfigT>(value); }
    template<typename SchemaStorageConfigT = Aws::Map<Aws::String, Aws::String>>
    StartContinuousExportResult& WithSchemaStorageConfig(SchemaStorageConfigT&& value) { SetSchemaStorageConfig(std::forward<SchemaStorageConfigT>(value)); return *this;}
    template<typename SchemaStorageConfigKeyT = Aws::String, typename SchemaStorageConfigValueT = Aws::String>
    StartContinuousExportResult& AddSchemaStorageConfig(SchemaStorageConfigKeyT&& key, SchemaStorageConfigValueT&& value) {
      m_schemaStorageConfigHasBeenSet = true; m_schemaStorageConfig.emplace(std::forward<SchemaStorageConfigKeyT>(key), std::forward<SchemaStorageConfigValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartContinuousExportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_exportId;
    bool m_exportIdHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    DataSource m_dataSource{DataSource::NOT_SET};
    bool m_dataSourceHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_schemaStorageConfig;
    bool m_schemaStorageConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
