/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DataFormat.h>
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
  class GetSchemaByDefinitionResult
  {
  public:
    AWS_GLUE_API GetSchemaByDefinitionResult();
    AWS_GLUE_API GetSchemaByDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetSchemaByDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The schema ID of the schema version.</p>
     */
    inline const Aws::String& GetSchemaVersionId() const{ return m_schemaVersionId; }

    /**
     * <p>The schema ID of the schema version.</p>
     */
    inline void SetSchemaVersionId(const Aws::String& value) { m_schemaVersionId = value; }

    /**
     * <p>The schema ID of the schema version.</p>
     */
    inline void SetSchemaVersionId(Aws::String&& value) { m_schemaVersionId = std::move(value); }

    /**
     * <p>The schema ID of the schema version.</p>
     */
    inline void SetSchemaVersionId(const char* value) { m_schemaVersionId.assign(value); }

    /**
     * <p>The schema ID of the schema version.</p>
     */
    inline GetSchemaByDefinitionResult& WithSchemaVersionId(const Aws::String& value) { SetSchemaVersionId(value); return *this;}

    /**
     * <p>The schema ID of the schema version.</p>
     */
    inline GetSchemaByDefinitionResult& WithSchemaVersionId(Aws::String&& value) { SetSchemaVersionId(std::move(value)); return *this;}

    /**
     * <p>The schema ID of the schema version.</p>
     */
    inline GetSchemaByDefinitionResult& WithSchemaVersionId(const char* value) { SetSchemaVersionId(value); return *this;}


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
    inline GetSchemaByDefinitionResult& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline GetSchemaByDefinitionResult& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline GetSchemaByDefinitionResult& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


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
    inline GetSchemaByDefinitionResult& WithDataFormat(const DataFormat& value) { SetDataFormat(value); return *this;}

    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline GetSchemaByDefinitionResult& WithDataFormat(DataFormat&& value) { SetDataFormat(std::move(value)); return *this;}


    /**
     * <p>The status of the schema version.</p>
     */
    inline const SchemaVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the schema version.</p>
     */
    inline void SetStatus(const SchemaVersionStatus& value) { m_status = value; }

    /**
     * <p>The status of the schema version.</p>
     */
    inline void SetStatus(SchemaVersionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the schema version.</p>
     */
    inline GetSchemaByDefinitionResult& WithStatus(const SchemaVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the schema version.</p>
     */
    inline GetSchemaByDefinitionResult& WithStatus(SchemaVersionStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline GetSchemaByDefinitionResult& WithCreatedTime(const Aws::String& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time the schema was created.</p>
     */
    inline GetSchemaByDefinitionResult& WithCreatedTime(Aws::String&& value) { SetCreatedTime(std::move(value)); return *this;}

    /**
     * <p>The date and time the schema was created.</p>
     */
    inline GetSchemaByDefinitionResult& WithCreatedTime(const char* value) { SetCreatedTime(value); return *this;}

  private:

    Aws::String m_schemaVersionId;

    Aws::String m_schemaArn;

    DataFormat m_dataFormat;

    SchemaVersionStatus m_status;

    Aws::String m_createdTime;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
