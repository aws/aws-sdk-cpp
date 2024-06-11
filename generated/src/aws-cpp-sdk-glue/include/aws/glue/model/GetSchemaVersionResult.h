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
  class GetSchemaVersionResult
  {
  public:
    AWS_GLUE_API GetSchemaVersionResult();
    AWS_GLUE_API GetSchemaVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetSchemaVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>SchemaVersionId</code> of the schema version.</p>
     */
    inline const Aws::String& GetSchemaVersionId() const{ return m_schemaVersionId; }
    inline void SetSchemaVersionId(const Aws::String& value) { m_schemaVersionId = value; }
    inline void SetSchemaVersionId(Aws::String&& value) { m_schemaVersionId = std::move(value); }
    inline void SetSchemaVersionId(const char* value) { m_schemaVersionId.assign(value); }
    inline GetSchemaVersionResult& WithSchemaVersionId(const Aws::String& value) { SetSchemaVersionId(value); return *this;}
    inline GetSchemaVersionResult& WithSchemaVersionId(Aws::String&& value) { SetSchemaVersionId(std::move(value)); return *this;}
    inline GetSchemaVersionResult& WithSchemaVersionId(const char* value) { SetSchemaVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema definition for the schema ID.</p>
     */
    inline const Aws::String& GetSchemaDefinition() const{ return m_schemaDefinition; }
    inline void SetSchemaDefinition(const Aws::String& value) { m_schemaDefinition = value; }
    inline void SetSchemaDefinition(Aws::String&& value) { m_schemaDefinition = std::move(value); }
    inline void SetSchemaDefinition(const char* value) { m_schemaDefinition.assign(value); }
    inline GetSchemaVersionResult& WithSchemaDefinition(const Aws::String& value) { SetSchemaDefinition(value); return *this;}
    inline GetSchemaVersionResult& WithSchemaDefinition(Aws::String&& value) { SetSchemaDefinition(std::move(value)); return *this;}
    inline GetSchemaVersionResult& WithSchemaDefinition(const char* value) { SetSchemaDefinition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline const DataFormat& GetDataFormat() const{ return m_dataFormat; }
    inline void SetDataFormat(const DataFormat& value) { m_dataFormat = value; }
    inline void SetDataFormat(DataFormat&& value) { m_dataFormat = std::move(value); }
    inline GetSchemaVersionResult& WithDataFormat(const DataFormat& value) { SetDataFormat(value); return *this;}
    inline GetSchemaVersionResult& WithDataFormat(DataFormat&& value) { SetDataFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArn = value; }
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArn = std::move(value); }
    inline void SetSchemaArn(const char* value) { m_schemaArn.assign(value); }
    inline GetSchemaVersionResult& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}
    inline GetSchemaVersionResult& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}
    inline GetSchemaVersionResult& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the schema.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }
    inline void SetVersionNumber(long long value) { m_versionNumber = value; }
    inline GetSchemaVersionResult& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the schema version. </p>
     */
    inline const SchemaVersionStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SchemaVersionStatus& value) { m_status = value; }
    inline void SetStatus(SchemaVersionStatus&& value) { m_status = std::move(value); }
    inline GetSchemaVersionResult& WithStatus(const SchemaVersionStatus& value) { SetStatus(value); return *this;}
    inline GetSchemaVersionResult& WithStatus(SchemaVersionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the schema version was created.</p>
     */
    inline const Aws::String& GetCreatedTime() const{ return m_createdTime; }
    inline void SetCreatedTime(const Aws::String& value) { m_createdTime = value; }
    inline void SetCreatedTime(Aws::String&& value) { m_createdTime = std::move(value); }
    inline void SetCreatedTime(const char* value) { m_createdTime.assign(value); }
    inline GetSchemaVersionResult& WithCreatedTime(const Aws::String& value) { SetCreatedTime(value); return *this;}
    inline GetSchemaVersionResult& WithCreatedTime(Aws::String&& value) { SetCreatedTime(std::move(value)); return *this;}
    inline GetSchemaVersionResult& WithCreatedTime(const char* value) { SetCreatedTime(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSchemaVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSchemaVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSchemaVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_schemaVersionId;

    Aws::String m_schemaDefinition;

    DataFormat m_dataFormat;

    Aws::String m_schemaArn;

    long long m_versionNumber;

    SchemaVersionStatus m_status;

    Aws::String m_createdTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
