/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/SchemaVersionType.h>
#include <aws/iot-managed-integrations/model/SchemaVersionVisibility.h>
#include <aws/core/utils/Document.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{
  class GetSchemaVersionResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API GetSchemaVersionResult();
    AWS_IOTMANAGEDINTEGRATIONS_API GetSchemaVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetSchemaVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The id of the schema version.</p>
     */
    inline const Aws::String& GetSchemaId() const{ return m_schemaId; }
    inline void SetSchemaId(const Aws::String& value) { m_schemaId = value; }
    inline void SetSchemaId(Aws::String&& value) { m_schemaId = std::move(value); }
    inline void SetSchemaId(const char* value) { m_schemaId.assign(value); }
    inline GetSchemaVersionResult& WithSchemaId(const Aws::String& value) { SetSchemaId(value); return *this;}
    inline GetSchemaVersionResult& WithSchemaId(Aws::String&& value) { SetSchemaId(std::move(value)); return *this;}
    inline GetSchemaVersionResult& WithSchemaId(const char* value) { SetSchemaId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of schema version.</p>
     */
    inline const SchemaVersionType& GetType() const{ return m_type; }
    inline void SetType(const SchemaVersionType& value) { m_type = value; }
    inline void SetType(SchemaVersionType&& value) { m_type = std::move(value); }
    inline GetSchemaVersionResult& WithType(const SchemaVersionType& value) { SetType(value); return *this;}
    inline GetSchemaVersionResult& WithType(SchemaVersionType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the schema version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetSchemaVersionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetSchemaVersionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetSchemaVersionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schema version.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline void SetNamespace(const Aws::String& value) { m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespace.assign(value); }
    inline GetSchemaVersionResult& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline GetSchemaVersionResult& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline GetSchemaVersionResult& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema version. If this is left blank, it defaults to the latest
     * version.</p>
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersion = value; }
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersion = std::move(value); }
    inline void SetSemanticVersion(const char* value) { m_semanticVersion.assign(value); }
    inline GetSchemaVersionResult& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}
    inline GetSchemaVersionResult& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}
    inline GetSchemaVersionResult& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility of the schema version.</p>
     */
    inline const SchemaVersionVisibility& GetVisibility() const{ return m_visibility; }
    inline void SetVisibility(const SchemaVersionVisibility& value) { m_visibility = value; }
    inline void SetVisibility(SchemaVersionVisibility&& value) { m_visibility = std::move(value); }
    inline GetSchemaVersionResult& WithVisibility(const SchemaVersionVisibility& value) { SetVisibility(value); return *this;}
    inline GetSchemaVersionResult& WithVisibility(SchemaVersionVisibility&& value) { SetVisibility(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema of the schema version.</p>
     */
    inline Aws::Utils::DocumentView GetSchema() const{ return m_schema; }
    inline void SetSchema(const Aws::Utils::Document& value) { m_schema = value; }
    inline void SetSchema(Aws::Utils::Document&& value) { m_schema = std::move(value); }
    inline GetSchemaVersionResult& WithSchema(const Aws::Utils::Document& value) { SetSchema(value); return *this;}
    inline GetSchemaVersionResult& WithSchema(Aws::Utils::Document&& value) { SetSchema(std::move(value)); return *this;}
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

    Aws::String m_schemaId;

    SchemaVersionType m_type;

    Aws::String m_description;

    Aws::String m_namespace;

    Aws::String m_semanticVersion;

    SchemaVersionVisibility m_visibility;

    Aws::Utils::Document m_schema;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
