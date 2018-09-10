/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_APPLICATIONDISCOVERYSERVICE_API StartContinuousExportResult
  {
  public:
    StartContinuousExportResult();
    StartContinuousExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartContinuousExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique ID assigned to this export.</p>
     */
    inline const Aws::String& GetExportId() const{ return m_exportId; }

    /**
     * <p>The unique ID assigned to this export.</p>
     */
    inline void SetExportId(const Aws::String& value) { m_exportId = value; }

    /**
     * <p>The unique ID assigned to this export.</p>
     */
    inline void SetExportId(Aws::String&& value) { m_exportId = std::move(value); }

    /**
     * <p>The unique ID assigned to this export.</p>
     */
    inline void SetExportId(const char* value) { m_exportId.assign(value); }

    /**
     * <p>The unique ID assigned to this export.</p>
     */
    inline StartContinuousExportResult& WithExportId(const Aws::String& value) { SetExportId(value); return *this;}

    /**
     * <p>The unique ID assigned to this export.</p>
     */
    inline StartContinuousExportResult& WithExportId(Aws::String&& value) { SetExportId(std::move(value)); return *this;}

    /**
     * <p>The unique ID assigned to this export.</p>
     */
    inline StartContinuousExportResult& WithExportId(const char* value) { SetExportId(value); return *this;}


    /**
     * <p>The name of the s3 bucket where the export data parquet files are stored.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The name of the s3 bucket where the export data parquet files are stored.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3Bucket = value; }

    /**
     * <p>The name of the s3 bucket where the export data parquet files are stored.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3Bucket = std::move(value); }

    /**
     * <p>The name of the s3 bucket where the export data parquet files are stored.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3Bucket.assign(value); }

    /**
     * <p>The name of the s3 bucket where the export data parquet files are stored.</p>
     */
    inline StartContinuousExportResult& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The name of the s3 bucket where the export data parquet files are stored.</p>
     */
    inline StartContinuousExportResult& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The name of the s3 bucket where the export data parquet files are stored.</p>
     */
    inline StartContinuousExportResult& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The timestamp representing when the continuous export was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The timestamp representing when the continuous export was started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The timestamp representing when the continuous export was started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The timestamp representing when the continuous export was started.</p>
     */
    inline StartContinuousExportResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The timestamp representing when the continuous export was started.</p>
     */
    inline StartContinuousExportResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The type of data collector used to gather this data (currently only offered
     * for AGENT).</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The type of data collector used to gather this data (currently only offered
     * for AGENT).</p>
     */
    inline void SetDataSource(const DataSource& value) { m_dataSource = value; }

    /**
     * <p>The type of data collector used to gather this data (currently only offered
     * for AGENT).</p>
     */
    inline void SetDataSource(DataSource&& value) { m_dataSource = std::move(value); }

    /**
     * <p>The type of data collector used to gather this data (currently only offered
     * for AGENT).</p>
     */
    inline StartContinuousExportResult& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The type of data collector used to gather this data (currently only offered
     * for AGENT).</p>
     */
    inline StartContinuousExportResult& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>A dictionary which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSchemaStorageConfig() const{ return m_schemaStorageConfig; }

    /**
     * <p>A dictionary which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline void SetSchemaStorageConfig(const Aws::Map<Aws::String, Aws::String>& value) { m_schemaStorageConfig = value; }

    /**
     * <p>A dictionary which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline void SetSchemaStorageConfig(Aws::Map<Aws::String, Aws::String>&& value) { m_schemaStorageConfig = std::move(value); }

    /**
     * <p>A dictionary which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline StartContinuousExportResult& WithSchemaStorageConfig(const Aws::Map<Aws::String, Aws::String>& value) { SetSchemaStorageConfig(value); return *this;}

    /**
     * <p>A dictionary which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline StartContinuousExportResult& WithSchemaStorageConfig(Aws::Map<Aws::String, Aws::String>&& value) { SetSchemaStorageConfig(std::move(value)); return *this;}

    /**
     * <p>A dictionary which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline StartContinuousExportResult& AddSchemaStorageConfig(const Aws::String& key, const Aws::String& value) { m_schemaStorageConfig.emplace(key, value); return *this; }

    /**
     * <p>A dictionary which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline StartContinuousExportResult& AddSchemaStorageConfig(Aws::String&& key, const Aws::String& value) { m_schemaStorageConfig.emplace(std::move(key), value); return *this; }

    /**
     * <p>A dictionary which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline StartContinuousExportResult& AddSchemaStorageConfig(const Aws::String& key, Aws::String&& value) { m_schemaStorageConfig.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A dictionary which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline StartContinuousExportResult& AddSchemaStorageConfig(Aws::String&& key, Aws::String&& value) { m_schemaStorageConfig.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A dictionary which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline StartContinuousExportResult& AddSchemaStorageConfig(const char* key, Aws::String&& value) { m_schemaStorageConfig.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A dictionary which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline StartContinuousExportResult& AddSchemaStorageConfig(Aws::String&& key, const char* value) { m_schemaStorageConfig.emplace(std::move(key), value); return *this; }

    /**
     * <p>A dictionary which describes how the data is stored.</p> <ul> <li> <p>
     * <code>databaseName</code> - the name of the Glue database used to store the
     * schema.</p> </li> </ul>
     */
    inline StartContinuousExportResult& AddSchemaStorageConfig(const char* key, const char* value) { m_schemaStorageConfig.emplace(key, value); return *this; }

  private:

    Aws::String m_exportId;

    Aws::String m_s3Bucket;

    Aws::Utils::DateTime m_startTime;

    DataSource m_dataSource;

    Aws::Map<Aws::String, Aws::String> m_schemaStorageConfig;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
