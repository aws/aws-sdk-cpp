/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/IcebergPartitionSpec.h>
#include <aws/glue/model/IcebergSchema.h>
#include <aws/glue/model/IcebergSortOrder.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>The Apache Iceberg table metadata, including format version, table
 * identifier, schemas, partition specifications, sort orders, and table
 * properties. This structure captures the current state of an Iceberg table's
 * metadata as managed by the Glue Data Catalog.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IcebergTableMetadata">AWS
 * API Reference</a></p>
 */
class IcebergTableMetadata {
 public:
  AWS_GLUE_API IcebergTableMetadata() = default;
  AWS_GLUE_API IcebergTableMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API IcebergTableMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Apache Iceberg table format version, such as <code>1</code> or
   * <code>2</code>. Determines the set of features and on-disk layout supported by
   * the table.</p>
   */
  inline const Aws::String& GetFormatVersion() const { return m_formatVersion; }
  inline bool FormatVersionHasBeenSet() const { return m_formatVersionHasBeenSet; }
  template <typename FormatVersionT = Aws::String>
  void SetFormatVersion(FormatVersionT&& value) {
    m_formatVersionHasBeenSet = true;
    m_formatVersion = std::forward<FormatVersionT>(value);
  }
  template <typename FormatVersionT = Aws::String>
  IcebergTableMetadata& WithFormatVersion(FormatVersionT&& value) {
    SetFormatVersion(std::forward<FormatVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier (UUID) for the Iceberg table, assigned when the table
   * is created and used to track the table across metadata updates.</p>
   */
  inline const Aws::String& GetTableUuid() const { return m_tableUuid; }
  inline bool TableUuidHasBeenSet() const { return m_tableUuidHasBeenSet; }
  template <typename TableUuidT = Aws::String>
  void SetTableUuid(TableUuidT&& value) {
    m_tableUuidHasBeenSet = true;
    m_tableUuid = std::forward<TableUuidT>(value);
  }
  template <typename TableUuidT = Aws::String>
  IcebergTableMetadata& WithTableUuid(TableUuidT&& value) {
    SetTableUuid(std::forward<TableUuidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The base S3 location where the Iceberg table's data and metadata files are
   * stored.</p>
   */
  inline const Aws::String& GetLocation() const { return m_location; }
  inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
  template <typename LocationT = Aws::String>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = Aws::String>
  IcebergTableMetadata& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of key-value pairs that define table-level properties and configuration
   * settings for the Iceberg table.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const { return m_properties; }
  inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
  template <typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
  void SetProperties(PropertiesT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties = std::forward<PropertiesT>(value);
  }
  template <typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
  IcebergTableMetadata& WithProperties(PropertiesT&& value) {
    SetProperties(std::forward<PropertiesT>(value));
    return *this;
  }
  template <typename PropertiesKeyT = Aws::String, typename PropertiesValueT = Aws::String>
  IcebergTableMetadata& AddProperties(PropertiesKeyT&& key, PropertiesValueT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties.emplace(std::forward<PropertiesKeyT>(key), std::forward<PropertiesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of schemas that have been associated with the Iceberg table over its
   * history, supporting schema evolution.</p>
   */
  inline const Aws::Vector<IcebergSchema>& GetSchemas() const { return m_schemas; }
  inline bool SchemasHasBeenSet() const { return m_schemasHasBeenSet; }
  template <typename SchemasT = Aws::Vector<IcebergSchema>>
  void SetSchemas(SchemasT&& value) {
    m_schemasHasBeenSet = true;
    m_schemas = std::forward<SchemasT>(value);
  }
  template <typename SchemasT = Aws::Vector<IcebergSchema>>
  IcebergTableMetadata& WithSchemas(SchemasT&& value) {
    SetSchemas(std::forward<SchemasT>(value));
    return *this;
  }
  template <typename SchemasT = IcebergSchema>
  IcebergTableMetadata& AddSchemas(SchemasT&& value) {
    m_schemasHasBeenSet = true;
    m_schemas.emplace_back(std::forward<SchemasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the schema that is currently active for the Iceberg table.
   * Matches an entry in <code>Schemas</code>.</p>
   */
  inline int GetCurrentSchemaId() const { return m_currentSchemaId; }
  inline bool CurrentSchemaIdHasBeenSet() const { return m_currentSchemaIdHasBeenSet; }
  inline void SetCurrentSchemaId(int value) {
    m_currentSchemaIdHasBeenSet = true;
    m_currentSchemaId = value;
  }
  inline IcebergTableMetadata& WithCurrentSchemaId(int value) {
    SetCurrentSchemaId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The highest column identifier that has been assigned in the Iceberg table's
   * schema, used to ensure unique IDs as new columns are added.</p>
   */
  inline int GetLastColumnId() const { return m_lastColumnId; }
  inline bool LastColumnIdHasBeenSet() const { return m_lastColumnIdHasBeenSet; }
  inline void SetLastColumnId(int value) {
    m_lastColumnIdHasBeenSet = true;
    m_lastColumnId = value;
  }
  inline IcebergTableMetadata& WithLastColumnId(int value) {
    SetLastColumnId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of partition specifications that have been associated with the
   * Iceberg table over its history, supporting partition evolution.</p>
   */
  inline const Aws::Vector<IcebergPartitionSpec>& GetPartitionSpecs() const { return m_partitionSpecs; }
  inline bool PartitionSpecsHasBeenSet() const { return m_partitionSpecsHasBeenSet; }
  template <typename PartitionSpecsT = Aws::Vector<IcebergPartitionSpec>>
  void SetPartitionSpecs(PartitionSpecsT&& value) {
    m_partitionSpecsHasBeenSet = true;
    m_partitionSpecs = std::forward<PartitionSpecsT>(value);
  }
  template <typename PartitionSpecsT = Aws::Vector<IcebergPartitionSpec>>
  IcebergTableMetadata& WithPartitionSpecs(PartitionSpecsT&& value) {
    SetPartitionSpecs(std::forward<PartitionSpecsT>(value));
    return *this;
  }
  template <typename PartitionSpecsT = IcebergPartitionSpec>
  IcebergTableMetadata& AddPartitionSpecs(PartitionSpecsT&& value) {
    m_partitionSpecsHasBeenSet = true;
    m_partitionSpecs.emplace_back(std::forward<PartitionSpecsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the partition specification that is currently used by
   * default when writing new data to the Iceberg table.</p>
   */
  inline int GetDefaultSpecId() const { return m_defaultSpecId; }
  inline bool DefaultSpecIdHasBeenSet() const { return m_defaultSpecIdHasBeenSet; }
  inline void SetDefaultSpecId(int value) {
    m_defaultSpecIdHasBeenSet = true;
    m_defaultSpecId = value;
  }
  inline IcebergTableMetadata& WithDefaultSpecId(int value) {
    SetDefaultSpecId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The highest partition field identifier that has been assigned across the
   * table's partition specifications.</p>
   */
  inline int GetLastPartitionId() const { return m_lastPartitionId; }
  inline bool LastPartitionIdHasBeenSet() const { return m_lastPartitionIdHasBeenSet; }
  inline void SetLastPartitionId(int value) {
    m_lastPartitionIdHasBeenSet = true;
    m_lastPartitionId = value;
  }
  inline IcebergTableMetadata& WithLastPartitionId(int value) {
    SetLastPartitionId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of sort order specifications that have been associated with the
   * Iceberg table over its history.</p>
   */
  inline const Aws::Vector<IcebergSortOrder>& GetSortOrders() const { return m_sortOrders; }
  inline bool SortOrdersHasBeenSet() const { return m_sortOrdersHasBeenSet; }
  template <typename SortOrdersT = Aws::Vector<IcebergSortOrder>>
  void SetSortOrders(SortOrdersT&& value) {
    m_sortOrdersHasBeenSet = true;
    m_sortOrders = std::forward<SortOrdersT>(value);
  }
  template <typename SortOrdersT = Aws::Vector<IcebergSortOrder>>
  IcebergTableMetadata& WithSortOrders(SortOrdersT&& value) {
    SetSortOrders(std::forward<SortOrdersT>(value));
    return *this;
  }
  template <typename SortOrdersT = IcebergSortOrder>
  IcebergTableMetadata& AddSortOrders(SortOrdersT&& value) {
    m_sortOrdersHasBeenSet = true;
    m_sortOrders.emplace_back(std::forward<SortOrdersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the sort order that is currently used by default when
   * writing new data to the Iceberg table.</p>
   */
  inline int GetDefaultSortOrderId() const { return m_defaultSortOrderId; }
  inline bool DefaultSortOrderIdHasBeenSet() const { return m_defaultSortOrderIdHasBeenSet; }
  inline void SetDefaultSortOrderId(int value) {
    m_defaultSortOrderIdHasBeenSet = true;
    m_defaultSortOrderId = value;
  }
  inline IcebergTableMetadata& WithDefaultSortOrderId(int value) {
    SetDefaultSortOrderId(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_formatVersion;

  Aws::String m_tableUuid;

  Aws::String m_location;

  Aws::Map<Aws::String, Aws::String> m_properties;

  Aws::Vector<IcebergSchema> m_schemas;

  int m_currentSchemaId{0};

  int m_lastColumnId{0};

  Aws::Vector<IcebergPartitionSpec> m_partitionSpecs;

  int m_defaultSpecId{0};

  int m_lastPartitionId{0};

  Aws::Vector<IcebergSortOrder> m_sortOrders;

  int m_defaultSortOrderId{0};
  bool m_formatVersionHasBeenSet = false;
  bool m_tableUuidHasBeenSet = false;
  bool m_locationHasBeenSet = false;
  bool m_propertiesHasBeenSet = false;
  bool m_schemasHasBeenSet = false;
  bool m_currentSchemaIdHasBeenSet = false;
  bool m_lastColumnIdHasBeenSet = false;
  bool m_partitionSpecsHasBeenSet = false;
  bool m_defaultSpecIdHasBeenSet = false;
  bool m_lastPartitionIdHasBeenSet = false;
  bool m_sortOrdersHasBeenSet = false;
  bool m_defaultSortOrderIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
