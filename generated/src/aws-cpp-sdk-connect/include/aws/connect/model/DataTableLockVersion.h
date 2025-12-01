/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
 * <p>Contains lock version information for different levels of a data table
 * hierarchy. Used for optimistic locking to prevent concurrent modification
 * conflicts. Each component has its own lock version that changes when that
 * component is modified.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DataTableLockVersion">AWS
 * API Reference</a></p>
 */
class DataTableLockVersion {
 public:
  AWS_CONNECT_API DataTableLockVersion() = default;
  AWS_CONNECT_API DataTableLockVersion(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API DataTableLockVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The lock version for the data table itself. Used for optimistic locking and
   * table versioning. Changes with each update to the table's metadata or
   * structure.</p>
   */
  inline const Aws::String& GetDataTable() const { return m_dataTable; }
  inline bool DataTableHasBeenSet() const { return m_dataTableHasBeenSet; }
  template <typename DataTableT = Aws::String>
  void SetDataTable(DataTableT&& value) {
    m_dataTableHasBeenSet = true;
    m_dataTable = std::forward<DataTableT>(value);
  }
  template <typename DataTableT = Aws::String>
  DataTableLockVersion& WithDataTable(DataTableT&& value) {
    SetDataTable(std::forward<DataTableT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lock version for a specific attribute. When the ValueLockLevel is
   * ATTRIBUTE, this version changes when any value for the attribute changes. For
   * other lock levels, it only changes when the attribute's properties are directly
   * updated.</p>
   */
  inline const Aws::String& GetAttribute() const { return m_attribute; }
  inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
  template <typename AttributeT = Aws::String>
  void SetAttribute(AttributeT&& value) {
    m_attributeHasBeenSet = true;
    m_attribute = std::forward<AttributeT>(value);
  }
  template <typename AttributeT = Aws::String>
  DataTableLockVersion& WithAttribute(AttributeT&& value) {
    SetAttribute(std::forward<AttributeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lock version for a specific set of primary values (record). This includes
   * the default record even if the table does not have any primary attributes. Used
   * for record-level locking.</p>
   */
  inline const Aws::String& GetPrimaryValues() const { return m_primaryValues; }
  inline bool PrimaryValuesHasBeenSet() const { return m_primaryValuesHasBeenSet; }
  template <typename PrimaryValuesT = Aws::String>
  void SetPrimaryValues(PrimaryValuesT&& value) {
    m_primaryValuesHasBeenSet = true;
    m_primaryValues = std::forward<PrimaryValuesT>(value);
  }
  template <typename PrimaryValuesT = Aws::String>
  DataTableLockVersion& WithPrimaryValues(PrimaryValuesT&& value) {
    SetPrimaryValues(std::forward<PrimaryValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lock version for a specific value. Changes each time the individual value
   * is modified. Used for the finest-grained locking control.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  DataTableLockVersion& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dataTable;
  bool m_dataTableHasBeenSet = false;

  Aws::String m_attribute;
  bool m_attributeHasBeenSet = false;

  Aws::String m_primaryValues;
  bool m_primaryValuesHasBeenSet = false;

  Aws::String m_value;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
