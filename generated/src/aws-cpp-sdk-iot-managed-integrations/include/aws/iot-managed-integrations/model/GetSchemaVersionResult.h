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
    AWS_IOTMANAGEDINTEGRATIONS_API GetSchemaVersionResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API GetSchemaVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetSchemaVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The id of the schema version.</p>
     */
    inline const Aws::String& GetSchemaId() const { return m_schemaId; }
    template<typename SchemaIdT = Aws::String>
    void SetSchemaId(SchemaIdT&& value) { m_schemaIdHasBeenSet = true; m_schemaId = std::forward<SchemaIdT>(value); }
    template<typename SchemaIdT = Aws::String>
    GetSchemaVersionResult& WithSchemaId(SchemaIdT&& value) { SetSchemaId(std::forward<SchemaIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of schema version.</p>
     */
    inline SchemaVersionType GetType() const { return m_type; }
    inline void SetType(SchemaVersionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetSchemaVersionResult& WithType(SchemaVersionType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the schema version.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetSchemaVersionResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schema version.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    GetSchemaVersionResult& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema version. If this is left blank, it defaults to the latest
     * version.</p>
     */
    inline const Aws::String& GetSemanticVersion() const { return m_semanticVersion; }
    template<typename SemanticVersionT = Aws::String>
    void SetSemanticVersion(SemanticVersionT&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::forward<SemanticVersionT>(value); }
    template<typename SemanticVersionT = Aws::String>
    GetSchemaVersionResult& WithSemanticVersion(SemanticVersionT&& value) { SetSemanticVersion(std::forward<SemanticVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility of the schema version.</p>
     */
    inline SchemaVersionVisibility GetVisibility() const { return m_visibility; }
    inline void SetVisibility(SchemaVersionVisibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline GetSchemaVersionResult& WithVisibility(SchemaVersionVisibility value) { SetVisibility(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema of the schema version.</p>
     */
    inline Aws::Utils::DocumentView GetSchema() const { return m_schema; }
    template<typename SchemaT = Aws::Utils::Document>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::Utils::Document>
    GetSchemaVersionResult& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSchemaVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_schemaId;
    bool m_schemaIdHasBeenSet = false;

    SchemaVersionType m_type{SchemaVersionType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_semanticVersion;
    bool m_semanticVersionHasBeenSet = false;

    SchemaVersionVisibility m_visibility{SchemaVersionVisibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;

    Aws::Utils::Document m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
