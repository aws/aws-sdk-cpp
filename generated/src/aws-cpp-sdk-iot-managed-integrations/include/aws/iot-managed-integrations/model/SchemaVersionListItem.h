/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/SchemaVersionType.h>
#include <aws/iot-managed-integrations/model/SchemaVersionVisibility.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTManagedIntegrations {
namespace Model {

/**
 * <p>List item describing a schema version.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/SchemaVersionListItem">AWS
 * API Reference</a></p>
 */
class SchemaVersionListItem {
 public:
  AWS_IOTMANAGEDINTEGRATIONS_API SchemaVersionListItem() = default;
  AWS_IOTMANAGEDINTEGRATIONS_API SchemaVersionListItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTMANAGEDINTEGRATIONS_API SchemaVersionListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the schema version.</p>
   */
  inline const Aws::String& GetSchemaId() const { return m_schemaId; }
  inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }
  template <typename SchemaIdT = Aws::String>
  void SetSchemaId(SchemaIdT&& value) {
    m_schemaIdHasBeenSet = true;
    m_schemaId = std::forward<SchemaIdT>(value);
  }
  template <typename SchemaIdT = Aws::String>
  SchemaVersionListItem& WithSchemaId(SchemaIdT&& value) {
    SetSchemaId(std::forward<SchemaIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of schema version.</p>
   */
  inline SchemaVersionType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(SchemaVersionType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline SchemaVersionListItem& WithType(SchemaVersionType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the schema version.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  SchemaVersionListItem& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the schema version.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  SchemaVersionListItem& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schema version. If this is left blank, it defaults to the latest
   * version.</p>
   */
  inline const Aws::String& GetSemanticVersion() const { return m_semanticVersion; }
  inline bool SemanticVersionHasBeenSet() const { return m_semanticVersionHasBeenSet; }
  template <typename SemanticVersionT = Aws::String>
  void SetSemanticVersion(SemanticVersionT&& value) {
    m_semanticVersionHasBeenSet = true;
    m_semanticVersion = std::forward<SemanticVersionT>(value);
  }
  template <typename SemanticVersionT = Aws::String>
  SchemaVersionListItem& WithSemanticVersion(SemanticVersionT&& value) {
    SetSemanticVersion(std::forward<SemanticVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The visibility of the schema version.</p>
   */
  inline SchemaVersionVisibility GetVisibility() const { return m_visibility; }
  inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
  inline void SetVisibility(SchemaVersionVisibility value) {
    m_visibilityHasBeenSet = true;
    m_visibility = value;
  }
  inline SchemaVersionListItem& WithVisibility(SchemaVersionVisibility value) {
    SetVisibility(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_schemaId;

  SchemaVersionType m_type{SchemaVersionType::NOT_SET};

  Aws::String m_description;

  Aws::String m_namespace;

  Aws::String m_semanticVersion;

  SchemaVersionVisibility m_visibility{SchemaVersionVisibility::NOT_SET};
  bool m_schemaIdHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_semanticVersionHasBeenSet = false;
  bool m_visibilityHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
