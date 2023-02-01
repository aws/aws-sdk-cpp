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
  class GetSchemaResult
  {
  public:
    AWS_GLUE_API GetSchemaResult();
    AWS_GLUE_API GetSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the registry.</p>
     */
    inline const Aws::String& GetRegistryName() const{ return m_registryName; }

    /**
     * <p>The name of the registry.</p>
     */
    inline void SetRegistryName(const Aws::String& value) { m_registryName = value; }

    /**
     * <p>The name of the registry.</p>
     */
    inline void SetRegistryName(Aws::String&& value) { m_registryName = std::move(value); }

    /**
     * <p>The name of the registry.</p>
     */
    inline void SetRegistryName(const char* value) { m_registryName.assign(value); }

    /**
     * <p>The name of the registry.</p>
     */
    inline GetSchemaResult& WithRegistryName(const Aws::String& value) { SetRegistryName(value); return *this;}

    /**
     * <p>The name of the registry.</p>
     */
    inline GetSchemaResult& WithRegistryName(Aws::String&& value) { SetRegistryName(std::move(value)); return *this;}

    /**
     * <p>The name of the registry.</p>
     */
    inline GetSchemaResult& WithRegistryName(const char* value) { SetRegistryName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the registry.</p>
     */
    inline const Aws::String& GetRegistryArn() const{ return m_registryArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the registry.</p>
     */
    inline void SetRegistryArn(const Aws::String& value) { m_registryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the registry.</p>
     */
    inline void SetRegistryArn(Aws::String&& value) { m_registryArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the registry.</p>
     */
    inline void SetRegistryArn(const char* value) { m_registryArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the registry.</p>
     */
    inline GetSchemaResult& WithRegistryArn(const Aws::String& value) { SetRegistryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the registry.</p>
     */
    inline GetSchemaResult& WithRegistryArn(Aws::String&& value) { SetRegistryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the registry.</p>
     */
    inline GetSchemaResult& WithRegistryArn(const char* value) { SetRegistryArn(value); return *this;}


    /**
     * <p>The name of the schema.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(const Aws::String& value) { m_schemaName = value; }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(Aws::String&& value) { m_schemaName = std::move(value); }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(const char* value) { m_schemaName.assign(value); }

    /**
     * <p>The name of the schema.</p>
     */
    inline GetSchemaResult& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    /**
     * <p>The name of the schema.</p>
     */
    inline GetSchemaResult& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    /**
     * <p>The name of the schema.</p>
     */
    inline GetSchemaResult& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline GetSchemaResult& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline GetSchemaResult& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline GetSchemaResult& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


    /**
     * <p>A description of schema if specified when created</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of schema if specified when created</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of schema if specified when created</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of schema if specified when created</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of schema if specified when created</p>
     */
    inline GetSchemaResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of schema if specified when created</p>
     */
    inline GetSchemaResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of schema if specified when created</p>
     */
    inline GetSchemaResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline const DataFormat& GetDataFormat() const{ return m_dataFormat; }

    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline void SetDataFormat(const DataFormat& value) { m_dataFormat = value; }

    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline void SetDataFormat(DataFormat&& value) { m_dataFormat = std::move(value); }

    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline GetSchemaResult& WithDataFormat(const DataFormat& value) { SetDataFormat(value); return *this;}

    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline GetSchemaResult& WithDataFormat(DataFormat&& value) { SetDataFormat(std::move(value)); return *this;}


    /**
     * <p>The compatibility mode of the schema.</p>
     */
    inline const Compatibility& GetCompatibility() const{ return m_compatibility; }

    /**
     * <p>The compatibility mode of the schema.</p>
     */
    inline void SetCompatibility(const Compatibility& value) { m_compatibility = value; }

    /**
     * <p>The compatibility mode of the schema.</p>
     */
    inline void SetCompatibility(Compatibility&& value) { m_compatibility = std::move(value); }

    /**
     * <p>The compatibility mode of the schema.</p>
     */
    inline GetSchemaResult& WithCompatibility(const Compatibility& value) { SetCompatibility(value); return *this;}

    /**
     * <p>The compatibility mode of the schema.</p>
     */
    inline GetSchemaResult& WithCompatibility(Compatibility&& value) { SetCompatibility(std::move(value)); return *this;}


    /**
     * <p>The version number of the checkpoint (the last time the compatibility mode
     * was changed).</p>
     */
    inline long long GetSchemaCheckpoint() const{ return m_schemaCheckpoint; }

    /**
     * <p>The version number of the checkpoint (the last time the compatibility mode
     * was changed).</p>
     */
    inline void SetSchemaCheckpoint(long long value) { m_schemaCheckpoint = value; }

    /**
     * <p>The version number of the checkpoint (the last time the compatibility mode
     * was changed).</p>
     */
    inline GetSchemaResult& WithSchemaCheckpoint(long long value) { SetSchemaCheckpoint(value); return *this;}


    /**
     * <p>The latest version of the schema associated with the returned schema
     * definition.</p>
     */
    inline long long GetLatestSchemaVersion() const{ return m_latestSchemaVersion; }

    /**
     * <p>The latest version of the schema associated with the returned schema
     * definition.</p>
     */
    inline void SetLatestSchemaVersion(long long value) { m_latestSchemaVersion = value; }

    /**
     * <p>The latest version of the schema associated with the returned schema
     * definition.</p>
     */
    inline GetSchemaResult& WithLatestSchemaVersion(long long value) { SetLatestSchemaVersion(value); return *this;}


    /**
     * <p>The next version of the schema associated with the returned schema
     * definition.</p>
     */
    inline long long GetNextSchemaVersion() const{ return m_nextSchemaVersion; }

    /**
     * <p>The next version of the schema associated with the returned schema
     * definition.</p>
     */
    inline void SetNextSchemaVersion(long long value) { m_nextSchemaVersion = value; }

    /**
     * <p>The next version of the schema associated with the returned schema
     * definition.</p>
     */
    inline GetSchemaResult& WithNextSchemaVersion(long long value) { SetNextSchemaVersion(value); return *this;}


    /**
     * <p>The status of the schema.</p>
     */
    inline const SchemaStatus& GetSchemaStatus() const{ return m_schemaStatus; }

    /**
     * <p>The status of the schema.</p>
     */
    inline void SetSchemaStatus(const SchemaStatus& value) { m_schemaStatus = value; }

    /**
     * <p>The status of the schema.</p>
     */
    inline void SetSchemaStatus(SchemaStatus&& value) { m_schemaStatus = std::move(value); }

    /**
     * <p>The status of the schema.</p>
     */
    inline GetSchemaResult& WithSchemaStatus(const SchemaStatus& value) { SetSchemaStatus(value); return *this;}

    /**
     * <p>The status of the schema.</p>
     */
    inline GetSchemaResult& WithSchemaStatus(SchemaStatus&& value) { SetSchemaStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time the schema was created.</p>
     */
    inline const Aws::String& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The date and time the schema was created.</p>
     */
    inline void SetCreatedTime(const Aws::String& value) { m_createdTime = value; }

    /**
     * <p>The date and time the schema was created.</p>
     */
    inline void SetCreatedTime(Aws::String&& value) { m_createdTime = std::move(value); }

    /**
     * <p>The date and time the schema was created.</p>
     */
    inline void SetCreatedTime(const char* value) { m_createdTime.assign(value); }

    /**
     * <p>The date and time the schema was created.</p>
     */
    inline GetSchemaResult& WithCreatedTime(const Aws::String& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time the schema was created.</p>
     */
    inline GetSchemaResult& WithCreatedTime(Aws::String&& value) { SetCreatedTime(std::move(value)); return *this;}

    /**
     * <p>The date and time the schema was created.</p>
     */
    inline GetSchemaResult& WithCreatedTime(const char* value) { SetCreatedTime(value); return *this;}


    /**
     * <p>The date and time the schema was updated.</p>
     */
    inline const Aws::String& GetUpdatedTime() const{ return m_updatedTime; }

    /**
     * <p>The date and time the schema was updated.</p>
     */
    inline void SetUpdatedTime(const Aws::String& value) { m_updatedTime = value; }

    /**
     * <p>The date and time the schema was updated.</p>
     */
    inline void SetUpdatedTime(Aws::String&& value) { m_updatedTime = std::move(value); }

    /**
     * <p>The date and time the schema was updated.</p>
     */
    inline void SetUpdatedTime(const char* value) { m_updatedTime.assign(value); }

    /**
     * <p>The date and time the schema was updated.</p>
     */
    inline GetSchemaResult& WithUpdatedTime(const Aws::String& value) { SetUpdatedTime(value); return *this;}

    /**
     * <p>The date and time the schema was updated.</p>
     */
    inline GetSchemaResult& WithUpdatedTime(Aws::String&& value) { SetUpdatedTime(std::move(value)); return *this;}

    /**
     * <p>The date and time the schema was updated.</p>
     */
    inline GetSchemaResult& WithUpdatedTime(const char* value) { SetUpdatedTime(value); return *this;}

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

    Aws::String m_createdTime;

    Aws::String m_updatedTime;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
