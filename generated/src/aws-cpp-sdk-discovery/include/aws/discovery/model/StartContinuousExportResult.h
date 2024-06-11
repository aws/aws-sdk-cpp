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
    AWS_APPLICATIONDISCOVERYSERVICE_API StartContinuousExportResult();
    AWS_APPLICATIONDISCOVERYSERVICE_API StartContinuousExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API StartContinuousExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID assigned to this export.</p>
     */
    inline const Aws::String& GetExportId() const{ return m_exportId; }
    inline void SetExportId(const Aws::String& value) { m_exportId = value; }
    inline void SetExportId(Aws::String&& value) { m_exportId = std::move(value); }
    inline void SetExportId(const char* value) { m_exportId.assign(value); }
    inline StartContinuousExportResult& WithExportId(const Aws::String& value) { SetExportId(value); return *this;}
    inline StartContinuousExportResult& WithExportId(Aws::String&& value) { SetExportId(std::move(value)); return *this;}
    inline StartContinuousExportResult& WithExportId(const char* value) { SetExportId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the s3 bucket where the export data parquet files are stored.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }
    inline void SetS3Bucket(const Aws::String& value) { m_s3Bucket = value; }
    inline void SetS3Bucket(Aws::String&& value) { m_s3Bucket = std::move(value); }
    inline void SetS3Bucket(const char* value) { m_s3Bucket.assign(value); }
    inline StartContinuousExportResult& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}
    inline StartContinuousExportResult& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}
    inline StartContinuousExportResult& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp representing when the continuous export was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline StartContinuousExportResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline StartContinuousExportResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of data collector used to gather this data (currently only offered
     * for AGENT).</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }
    inline void SetDataSource(const DataSource& value) { m_dataSource = value; }
    inline void SetDataSource(DataSource&& value) { m_dataSource = std::move(value); }
    inline StartContinuousExportResult& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}
    inline StartContinuousExportResult& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A dictionary which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSchemaStorageConfig() const{ return m_schemaStorageConfig; }
    inline void SetSchemaStorageConfig(const Aws::Map<Aws::String, Aws::String>& value) { m_schemaStorageConfig = value; }
    inline void SetSchemaStorageConfig(Aws::Map<Aws::String, Aws::String>&& value) { m_schemaStorageConfig = std::move(value); }
    inline StartContinuousExportResult& WithSchemaStorageConfig(const Aws::Map<Aws::String, Aws::String>& value) { SetSchemaStorageConfig(value); return *this;}
    inline StartContinuousExportResult& WithSchemaStorageConfig(Aws::Map<Aws::String, Aws::String>&& value) { SetSchemaStorageConfig(std::move(value)); return *this;}
    inline StartContinuousExportResult& AddSchemaStorageConfig(const Aws::String& key, const Aws::String& value) { m_schemaStorageConfig.emplace(key, value); return *this; }
    inline StartContinuousExportResult& AddSchemaStorageConfig(Aws::String&& key, const Aws::String& value) { m_schemaStorageConfig.emplace(std::move(key), value); return *this; }
    inline StartContinuousExportResult& AddSchemaStorageConfig(const Aws::String& key, Aws::String&& value) { m_schemaStorageConfig.emplace(key, std::move(value)); return *this; }
    inline StartContinuousExportResult& AddSchemaStorageConfig(Aws::String&& key, Aws::String&& value) { m_schemaStorageConfig.emplace(std::move(key), std::move(value)); return *this; }
    inline StartContinuousExportResult& AddSchemaStorageConfig(const char* key, Aws::String&& value) { m_schemaStorageConfig.emplace(key, std::move(value)); return *this; }
    inline StartContinuousExportResult& AddSchemaStorageConfig(Aws::String&& key, const char* value) { m_schemaStorageConfig.emplace(std::move(key), value); return *this; }
    inline StartContinuousExportResult& AddSchemaStorageConfig(const char* key, const char* value) { m_schemaStorageConfig.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartContinuousExportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartContinuousExportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartContinuousExportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_exportId;

    Aws::String m_s3Bucket;

    Aws::Utils::DateTime m_startTime;

    DataSource m_dataSource;

    Aws::Map<Aws::String, Aws::String> m_schemaStorageConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
