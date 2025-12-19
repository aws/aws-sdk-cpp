/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/DataTableAttributeValueType.h>
#include <aws/connect/model/DataTableLockVersion.h>
#include <aws/connect/model/Validation.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Represents an attribute (column) in a data table. Attributes define the
 * schema and validation rules for values that can be stored in the table. They
 * specify the data type, constraints, and whether the attribute is used as a
 * primary key for record identification.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DataTableAttribute">AWS
 * API Reference</a></p>
 */
class DataTableAttribute {
 public:
  AWS_CONNECT_API DataTableAttribute() = default;
  AWS_CONNECT_API DataTableAttribute(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API DataTableAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the attribute within the data table.</p>
   */
  inline const Aws::String& GetAttributeId() const { return m_attributeId; }
  inline bool AttributeIdHasBeenSet() const { return m_attributeIdHasBeenSet; }
  template <typename AttributeIdT = Aws::String>
  void SetAttributeId(AttributeIdT&& value) {
    m_attributeIdHasBeenSet = true;
    m_attributeId = std::forward<AttributeIdT>(value);
  }
  template <typename AttributeIdT = Aws::String>
  DataTableAttribute& WithAttributeId(AttributeIdT&& value) {
    SetAttributeId(std::forward<AttributeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable name of the attribute. Must be unique within the data
   * table and conform to Connect naming standards.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DataTableAttribute& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of value allowed for this attribute. Must be one of TEXT, TEXT_LIST,
   * NUMBER, NUMBER_LIST, or BOOLEAN. Determines how values are validated and
   * processed.</p>
   */
  inline DataTableAttributeValueType GetValueType() const { return m_valueType; }
  inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }
  inline void SetValueType(DataTableAttributeValueType value) {
    m_valueTypeHasBeenSet = true;
    m_valueType = value;
  }
  inline DataTableAttribute& WithValueType(DataTableAttributeValueType value) {
    SetValueType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional description explaining the purpose and usage of this
   * attribute.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  DataTableAttribute& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the data table that contains this attribute.</p>
   */
  inline const Aws::String& GetDataTableId() const { return m_dataTableId; }
  inline bool DataTableIdHasBeenSet() const { return m_dataTableIdHasBeenSet; }
  template <typename DataTableIdT = Aws::String>
  void SetDataTableId(DataTableIdT&& value) {
    m_dataTableIdHasBeenSet = true;
    m_dataTableId = std::forward<DataTableIdT>(value);
  }
  template <typename DataTableIdT = Aws::String>
  DataTableAttribute& WithDataTableId(DataTableIdT&& value) {
    SetDataTableId(std::forward<DataTableIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the data table that contains this
   * attribute.</p>
   */
  inline const Aws::String& GetDataTableArn() const { return m_dataTableArn; }
  inline bool DataTableArnHasBeenSet() const { return m_dataTableArnHasBeenSet; }
  template <typename DataTableArnT = Aws::String>
  void SetDataTableArn(DataTableArnT&& value) {
    m_dataTableArnHasBeenSet = true;
    m_dataTableArn = std::forward<DataTableArnT>(value);
  }
  template <typename DataTableArnT = Aws::String>
  DataTableAttribute& WithDataTableArn(DataTableArnT&& value) {
    SetDataTableArn(std::forward<DataTableArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Boolean indicating whether this attribute is used as a primary key for record
   * identification. Primary attributes must have unique value combinations and
   * cannot contain expressions.</p>
   */
  inline bool GetPrimary() const { return m_primary; }
  inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }
  inline void SetPrimary(bool value) {
    m_primaryHasBeenSet = true;
    m_primary = value;
  }
  inline DataTableAttribute& WithPrimary(bool value) {
    SetPrimary(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version identifier for this attribute, used for versioning and change
   * tracking.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  DataTableAttribute& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lock version for this attribute, used for optimistic locking to prevent
   * concurrent modification conflicts.</p>
   */
  inline const DataTableLockVersion& GetLockVersion() const { return m_lockVersion; }
  inline bool LockVersionHasBeenSet() const { return m_lockVersionHasBeenSet; }
  template <typename LockVersionT = DataTableLockVersion>
  void SetLockVersion(LockVersionT&& value) {
    m_lockVersionHasBeenSet = true;
    m_lockVersion = std::forward<LockVersionT>(value);
  }
  template <typename LockVersionT = DataTableLockVersion>
  DataTableAttribute& WithLockVersion(LockVersionT&& value) {
    SetLockVersion(std::forward<LockVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when this attribute was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  DataTableAttribute& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region where this attribute was last modified, used
   * for region replication.</p>
   */
  inline const Aws::String& GetLastModifiedRegion() const { return m_lastModifiedRegion; }
  inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }
  template <typename LastModifiedRegionT = Aws::String>
  void SetLastModifiedRegion(LastModifiedRegionT&& value) {
    m_lastModifiedRegionHasBeenSet = true;
    m_lastModifiedRegion = std::forward<LastModifiedRegionT>(value);
  }
  template <typename LastModifiedRegionT = Aws::String>
  DataTableAttribute& WithLastModifiedRegion(LastModifiedRegionT&& value) {
    SetLastModifiedRegion(std::forward<LastModifiedRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The validation rules applied to values of this attribute. Based on JSON
   * Schema Draft 2020-12 with additional Connect-specific validations for data
   * integrity.</p>
   */
  inline const Validation& GetValidation() const { return m_validation; }
  inline bool ValidationHasBeenSet() const { return m_validationHasBeenSet; }
  template <typename ValidationT = Validation>
  void SetValidation(ValidationT&& value) {
    m_validationHasBeenSet = true;
    m_validation = std::forward<ValidationT>(value);
  }
  template <typename ValidationT = Validation>
  DataTableAttribute& WithValidation(ValidationT&& value) {
    SetValidation(std::forward<ValidationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_attributeId;

  Aws::String m_name;

  DataTableAttributeValueType m_valueType{DataTableAttributeValueType::NOT_SET};

  Aws::String m_description;

  Aws::String m_dataTableId;

  Aws::String m_dataTableArn;

  bool m_primary{false};

  Aws::String m_version;

  DataTableLockVersion m_lockVersion;

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::String m_lastModifiedRegion;

  Validation m_validation;
  bool m_attributeIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_valueTypeHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_dataTableIdHasBeenSet = false;
  bool m_dataTableArnHasBeenSet = false;
  bool m_primaryHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_lockVersionHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_lastModifiedRegionHasBeenSet = false;
  bool m_validationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
