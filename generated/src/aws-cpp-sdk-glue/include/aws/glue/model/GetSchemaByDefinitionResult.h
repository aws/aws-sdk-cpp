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
    AWS_GLUE_API GetSchemaByDefinitionResult() = default;
    AWS_GLUE_API GetSchemaByDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetSchemaByDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The schema ID of the schema version.</p>
     */
    inline const Aws::String& GetSchemaVersionId() const { return m_schemaVersionId; }
    template<typename SchemaVersionIdT = Aws::String>
    void SetSchemaVersionId(SchemaVersionIdT&& value) { m_schemaVersionIdHasBeenSet = true; m_schemaVersionId = std::forward<SchemaVersionIdT>(value); }
    template<typename SchemaVersionIdT = Aws::String>
    GetSchemaByDefinitionResult& WithSchemaVersionId(SchemaVersionIdT&& value) { SetSchemaVersionId(std::forward<SchemaVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the schema.</p>
     */
    inline const Aws::String& GetSchemaArn() const { return m_schemaArn; }
    template<typename SchemaArnT = Aws::String>
    void SetSchemaArn(SchemaArnT&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::forward<SchemaArnT>(value); }
    template<typename SchemaArnT = Aws::String>
    GetSchemaByDefinitionResult& WithSchemaArn(SchemaArnT&& value) { SetSchemaArn(std::forward<SchemaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data format of the schema definition. Currently <code>AVRO</code>,
     * <code>JSON</code> and <code>PROTOBUF</code> are supported.</p>
     */
    inline DataFormat GetDataFormat() const { return m_dataFormat; }
    inline void SetDataFormat(DataFormat value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }
    inline GetSchemaByDefinitionResult& WithDataFormat(DataFormat value) { SetDataFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the schema version.</p>
     */
    inline SchemaVersionStatus GetStatus() const { return m_status; }
    inline void SetStatus(SchemaVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetSchemaByDefinitionResult& WithStatus(SchemaVersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the schema was created.</p>
     */
    inline const Aws::String& GetCreatedTime() const { return m_createdTime; }
    template<typename CreatedTimeT = Aws::String>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::String>
    GetSchemaByDefinitionResult& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSchemaByDefinitionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_schemaVersionId;
    bool m_schemaVersionIdHasBeenSet = false;

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;

    DataFormat m_dataFormat{DataFormat::NOT_SET};
    bool m_dataFormatHasBeenSet = false;

    SchemaVersionStatus m_status{SchemaVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
