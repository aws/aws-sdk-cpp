/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/IcebergEncryptedKey.h>
#include <aws/glue/model/IcebergPartitionSpec.h>
#include <aws/glue/model/IcebergSchema.h>
#include <aws/glue/model/IcebergSortOrder.h>
#include <aws/glue/model/IcebergUpdateAction.h>

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
 * <p>Defines a complete set of updates to be applied to an Iceberg table,
 * including schema changes, partitioning modifications, sort order adjustments,
 * location updates, and property changes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IcebergTableUpdate">AWS
 * API Reference</a></p>
 */
class IcebergTableUpdate {
 public:
  AWS_GLUE_API IcebergTableUpdate() = default;
  AWS_GLUE_API IcebergTableUpdate(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API IcebergTableUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The updated schema definition for the Iceberg table, specifying any changes
   * to field structure, data types, or schema metadata.</p>
   */
  inline const IcebergSchema& GetSchema() const { return m_schema; }
  inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
  template <typename SchemaT = IcebergSchema>
  void SetSchema(SchemaT&& value) {
    m_schemaHasBeenSet = true;
    m_schema = std::forward<SchemaT>(value);
  }
  template <typename SchemaT = IcebergSchema>
  IcebergTableUpdate& WithSchema(SchemaT&& value) {
    SetSchema(std::forward<SchemaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated partitioning specification that defines how the table data should
   * be reorganized and partitioned.</p>
   */
  inline const IcebergPartitionSpec& GetPartitionSpec() const { return m_partitionSpec; }
  inline bool PartitionSpecHasBeenSet() const { return m_partitionSpecHasBeenSet; }
  template <typename PartitionSpecT = IcebergPartitionSpec>
  void SetPartitionSpec(PartitionSpecT&& value) {
    m_partitionSpecHasBeenSet = true;
    m_partitionSpec = std::forward<PartitionSpecT>(value);
  }
  template <typename PartitionSpecT = IcebergPartitionSpec>
  IcebergTableUpdate& WithPartitionSpec(PartitionSpecT&& value) {
    SetPartitionSpec(std::forward<PartitionSpecT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated sort order specification that defines how data should be ordered
   * within partitions for optimal query performance.</p>
   */
  inline const IcebergSortOrder& GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  template <typename SortOrderT = IcebergSortOrder>
  void SetSortOrder(SortOrderT&& value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = std::forward<SortOrderT>(value);
  }
  template <typename SortOrderT = IcebergSortOrder>
  IcebergTableUpdate& WithSortOrder(SortOrderT&& value) {
    SetSortOrder(std::forward<SortOrderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated S3 location where the Iceberg table data will be stored.</p>
   */
  inline const Aws::String& GetLocation() const { return m_location; }
  inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
  template <typename LocationT = Aws::String>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = Aws::String>
  IcebergTableUpdate& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Updated key-value pairs of table properties and configuration settings for
   * the Iceberg table.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const { return m_properties; }
  inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
  template <typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
  void SetProperties(PropertiesT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties = std::forward<PropertiesT>(value);
  }
  template <typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
  IcebergTableUpdate& WithProperties(PropertiesT&& value) {
    SetProperties(std::forward<PropertiesT>(value));
    return *this;
  }
  template <typename PropertiesKeyT = Aws::String, typename PropertiesValueT = Aws::String>
  IcebergTableUpdate& AddProperties(PropertiesKeyT&& key, PropertiesValueT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties.emplace(std::forward<PropertiesKeyT>(key), std::forward<PropertiesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of update action to be performed on the Iceberg table. Defines the
   * specific operation such as adding schema, setting current schema, adding
   * partition spec, or managing encryption keys.</p>
   */
  inline IcebergUpdateAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(IcebergUpdateAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline IcebergTableUpdate& WithAction(IcebergUpdateAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Encryption key information associated with an Iceberg table update operation.
   * Used when adding or removing encryption keys from the table metadata during
   * table evolution.</p>
   */
  inline const IcebergEncryptedKey& GetEncryptionKey() const { return m_encryptionKey; }
  inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }
  template <typename EncryptionKeyT = IcebergEncryptedKey>
  void SetEncryptionKey(EncryptionKeyT&& value) {
    m_encryptionKeyHasBeenSet = true;
    m_encryptionKey = std::forward<EncryptionKeyT>(value);
  }
  template <typename EncryptionKeyT = IcebergEncryptedKey>
  IcebergTableUpdate& WithEncryptionKey(EncryptionKeyT&& value) {
    SetEncryptionKey(std::forward<EncryptionKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identifier of the encryption key involved in an Iceberg table update
   * operation. References the specific key being added to or removed from the
   * table's encryption configuration.</p>
   */
  inline const Aws::String& GetKeyId() const { return m_keyId; }
  inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
  template <typename KeyIdT = Aws::String>
  void SetKeyId(KeyIdT&& value) {
    m_keyIdHasBeenSet = true;
    m_keyId = std::forward<KeyIdT>(value);
  }
  template <typename KeyIdT = Aws::String>
  IcebergTableUpdate& WithKeyId(KeyIdT&& value) {
    SetKeyId(std::forward<KeyIdT>(value));
    return *this;
  }
  ///@}
 private:
  IcebergSchema m_schema;

  IcebergPartitionSpec m_partitionSpec;

  IcebergSortOrder m_sortOrder;

  Aws::String m_location;

  Aws::Map<Aws::String, Aws::String> m_properties;

  IcebergUpdateAction m_action{IcebergUpdateAction::NOT_SET};

  IcebergEncryptedKey m_encryptionKey;

  Aws::String m_keyId;
  bool m_schemaHasBeenSet = false;
  bool m_partitionSpecHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
  bool m_locationHasBeenSet = false;
  bool m_propertiesHasBeenSet = false;
  bool m_actionHasBeenSet = false;
  bool m_encryptionKeyHasBeenSet = false;
  bool m_keyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
