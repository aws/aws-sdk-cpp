/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DataFormat.h>
#include <aws/glue/model/Compatibility.h>
#include <aws/glue/model/SchemaStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/SchemaVersionStatus.h>
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
namespace Glue
{
namespace Model
{
  class CreateSchemaResult
  {
  public:
    AWS_GLUE_API CreateSchemaResult();
    AWS_GLUE_API CreateSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API CreateSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the registry.</p>
     */
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }
    inline void SetRegistryName(const Aws::String& value) { m_registryName = value; }
    inline void SetRegistryName(Aws::String&& value) { m_registryName = std::move(value); }
    inline void SetRegistryName(const char* value) { m_registryName.assign(value); }
    inline CreateSchemaResult& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}
    inline CreateSchemaResult& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}
    inline CreateSchemaResult& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the registry.</p>
     */
    inline const Aws::String& GetRegistryArn() const{ return m_registryArn; }
    inline void SetRegistryArn(const Aws::String& value) { m_registryArn = value; }
    inline void SetRegistryArn(Aws::String&& value) { m_registryArn = std::move(value); }
    inline void SetRegistryArn(const char* value) { m_registryArn.assign(value); }
    inline CreateSchemaResult& WithRegistryArn(const Aws::String& value) { SetRegistryArn(value); return *this;}
    inline CreateSchemaResult& WithRegistryArn(Aws::String&& value) { SetRegistryArn(std::move(value)); return *this;}
    inline CreateSchemaResult& WithRegistryArn(const char* value) { SetRegistryArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schema.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }
    inline void SetSchemaName(const Aws::String& value) { m_schemaName = value; }
    inline void SetSchemaName(Aws::String&& value) { m_schemaName = std::move(value); }
    inline void SetSchemaName(const char* value) { m_schemaName.assign(value); }
    inline CreateSchemaResult& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}
    inline CreateSchemaResult& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}
    inline CreateSchemaResult& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArn = value; }
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArn = std::move(value); }
    inline void SetSchemaArn(const char* value) { m_schemaArn.assign(value); }
    inline CreateSchemaResult& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}
    inline CreateSchemaResult& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}
    inline CreateSchemaResult& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the schema if specified when created.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateSchemaResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateSchemaResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateSchemaResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline const DataFormat& GetDataFormat() const{ return m_dataFormat; }
    inline void SetDataFormat(const DataFormat& value) { m_dataFormat = value; }
    inline void SetDataFormat(DataFormat&& value) { m_dataFormat = std::move(value); }
    inline CreateSchemaResult& WithDataFormat(const DataFormat& value) { SetDataFormat(value); return *this;}
    inline CreateSchemaResult& WithDataFormat(DataFormat&& value) { SetDataFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema compatibility mode.</p>
     */
    inline const Compatibility& GetCompatibility() const{ return m_compatibility; }
    inline void SetCompatibility(const Compatibility& value) { m_compatibility = value; }
    inline void SetCompatibility(Compatibility&& value) { m_compatibility = std::move(value); }
    inline CreateSchemaResult& WithCompatibility(const Compatibility& value) { SetCompatibility(value); return *this;}
    inline CreateSchemaResult& WithCompatibility(Compatibility&& value) { SetCompatibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the checkpoint (the last time the compatibility mode
     * was changed).</p>
     */
    inline long long GetSchemaCheckpoint() const{ return m_schemaCheckpoint; }
    inline void SetSchemaCheckpoint(long long value) { m_schemaCheckpoint = value; }
    inline CreateSchemaResult& WithSchemaCheckpoint(long long value) { SetSchemaCheckpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version of the schema associated with the returned schema
     * definition.</p>
     */
    inline long long GetLatestSchemaVersion() const{ return m_latestSchemaVersion; }
    inline void SetLatestSchemaVersion(long long value) { m_latestSchemaVersion = value; }
    inline CreateSchemaResult& WithLatestSchemaVersion(long long value) { SetLatestSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next version of the schema associated with the returned schema
     * definition.</p>
     */
    inline long long GetNextSchemaVersion() const{ return m_nextSchemaVersion; }
    inline void SetNextSchemaVersion(long long value) { m_nextSchemaVersion = value; }
    inline CreateSchemaResult& WithNextSchemaVersion(long long value) { SetNextSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the schema. </p>
     */
    inline const SchemaStatus& GetSchemaStatus() const{ return m_schemaStatus; }
    inline void SetSchemaStatus(const SchemaStatus& value) { m_schemaStatus = value; }
    inline void SetSchemaStatus(SchemaStatus&& value) { m_schemaStatus = std::move(value); }
    inline CreateSchemaResult& WithSchemaStatus(const SchemaStatus& value) { SetSchemaStatus(value); return *this;}
    inline CreateSchemaResult& WithSchemaStatus(SchemaStatus&& value) { SetSchemaStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags for the schema.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline CreateSchemaResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateSchemaResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateSchemaResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline CreateSchemaResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateSchemaResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateSchemaResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateSchemaResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateSchemaResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateSchemaResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the first schema version.</p>
     */
    inline const Aws::String& GetSchemaVersionId() const{ return m_schemaVersionId; }
    inline void SetSchemaVersionId(const Aws::String& value) { m_schemaVersionId = value; }
    inline void SetSchemaVersionId(Aws::String&& value) { m_schemaVersionId = std::move(value); }
    inline void SetSchemaVersionId(const char* value) { m_schemaVersionId.assign(value); }
    inline CreateSchemaResult& WithSchemaVersionId(const Aws::String& value) { SetSchemaVersionId(value); return *this;}
    inline CreateSchemaResult& WithSchemaVersionId(Aws::String&& value) { SetSchemaVersionId(std::move(value)); return *this;}
    inline CreateSchemaResult& WithSchemaVersionId(const char* value) { SetSchemaVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the first schema version created.</p>
     */
    inline const SchemaVersionStatus& GetSchemaVersionStatus() const{ return m_schemaVersionStatus; }
    inline void SetSchemaVersionStatus(const SchemaVersionStatus& value) { m_schemaVersionStatus = value; }
    inline void SetSchemaVersionStatus(SchemaVersionStatus&& value) { m_schemaVersionStatus = std::move(value); }
    inline CreateSchemaResult& WithSchemaVersionStatus(const SchemaVersionStatus& value) { SetSchemaVersionStatus(value); return *this;}
    inline CreateSchemaResult& WithSchemaVersionStatus(SchemaVersionStatus&& value) { SetSchemaVersionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSchemaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSchemaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSchemaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_registryName;

    Aws::String m_registryArn;

    Aws::String m_schemaName;

    Aws::String m_schemaArn;

    Aws::String m_description;

    DataFormat m_dataFormat;

    Compatibility m_compatibility;

    long long m_schemaCheckpoint;

    long long m_latestSchemaVersion;

    long long m_nextSchemaVersion;

    SchemaStatus m_schemaStatus;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_schemaVersionId;

    SchemaVersionStatus m_schemaVersionStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
