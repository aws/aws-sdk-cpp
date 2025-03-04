/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/SchemaVersionType.h>
#include <aws/iot-managed-integrations/model/SchemaVersionVisibility.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>List item describing a schema version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/SchemaVersionListItem">AWS
   * API Reference</a></p>
   */
  class SchemaVersionListItem
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API SchemaVersionListItem();
    AWS_IOTMANAGEDINTEGRATIONS_API SchemaVersionListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API SchemaVersionListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the schema version.</p>
     */
    inline const Aws::String& GetSchemaId() const{ return m_schemaId; }
    inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }
    inline void SetSchemaId(const Aws::String& value) { m_schemaIdHasBeenSet = true; m_schemaId = value; }
    inline void SetSchemaId(Aws::String&& value) { m_schemaIdHasBeenSet = true; m_schemaId = std::move(value); }
    inline void SetSchemaId(const char* value) { m_schemaIdHasBeenSet = true; m_schemaId.assign(value); }
    inline SchemaVersionListItem& WithSchemaId(const Aws::String& value) { SetSchemaId(value); return *this;}
    inline SchemaVersionListItem& WithSchemaId(Aws::String&& value) { SetSchemaId(std::move(value)); return *this;}
    inline SchemaVersionListItem& WithSchemaId(const char* value) { SetSchemaId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of schema version.</p>
     */
    inline const SchemaVersionType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const SchemaVersionType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(SchemaVersionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline SchemaVersionListItem& WithType(const SchemaVersionType& value) { SetType(value); return *this;}
    inline SchemaVersionListItem& WithType(SchemaVersionType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the schema version.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SchemaVersionListItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SchemaVersionListItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SchemaVersionListItem& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schema version.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline SchemaVersionListItem& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline SchemaVersionListItem& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline SchemaVersionListItem& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema version. If this is left blank, it defaults to the latest
     * version.</p>
     */
    inline const Aws::String& GetSemanticVersion() const{ return m_semanticVersion; }
    inline bool SemanticVersionHasBeenSet() const { return m_semanticVersionHasBeenSet; }
    inline void SetSemanticVersion(const Aws::String& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = value; }
    inline void SetSemanticVersion(Aws::String&& value) { m_semanticVersionHasBeenSet = true; m_semanticVersion = std::move(value); }
    inline void SetSemanticVersion(const char* value) { m_semanticVersionHasBeenSet = true; m_semanticVersion.assign(value); }
    inline SchemaVersionListItem& WithSemanticVersion(const Aws::String& value) { SetSemanticVersion(value); return *this;}
    inline SchemaVersionListItem& WithSemanticVersion(Aws::String&& value) { SetSemanticVersion(std::move(value)); return *this;}
    inline SchemaVersionListItem& WithSemanticVersion(const char* value) { SetSemanticVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility of the schema version.</p>
     */
    inline const SchemaVersionVisibility& GetVisibility() const{ return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(const SchemaVersionVisibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline void SetVisibility(SchemaVersionVisibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }
    inline SchemaVersionListItem& WithVisibility(const SchemaVersionVisibility& value) { SetVisibility(value); return *this;}
    inline SchemaVersionListItem& WithVisibility(SchemaVersionVisibility&& value) { SetVisibility(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_schemaId;
    bool m_schemaIdHasBeenSet = false;

    SchemaVersionType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_semanticVersion;
    bool m_semanticVersionHasBeenSet = false;

    SchemaVersionVisibility m_visibility;
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
