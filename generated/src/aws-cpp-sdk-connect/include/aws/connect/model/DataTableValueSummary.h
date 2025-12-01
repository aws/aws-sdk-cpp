/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/DataTableAttributeValueType.h>
#include <aws/connect/model/DataTableLockVersion.h>
#include <aws/connect/model/PrimaryValueResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>A data table value summary.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DataTableValueSummary">AWS
 * API Reference</a></p>
 */
class DataTableValueSummary {
 public:
  AWS_CONNECT_API DataTableValueSummary() = default;
  AWS_CONNECT_API DataTableValueSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API DataTableValueSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The summary's record ID.</p>
   */
  inline const Aws::String& GetRecordId() const { return m_recordId; }
  inline bool RecordIdHasBeenSet() const { return m_recordIdHasBeenSet; }
  template <typename RecordIdT = Aws::String>
  void SetRecordId(RecordIdT&& value) {
    m_recordIdHasBeenSet = true;
    m_recordId = std::forward<RecordIdT>(value);
  }
  template <typename RecordIdT = Aws::String>
  DataTableValueSummary& WithRecordId(RecordIdT&& value) {
    SetRecordId(std::forward<RecordIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The summary's attribute ID.</p>
   */
  inline const Aws::String& GetAttributeId() const { return m_attributeId; }
  inline bool AttributeIdHasBeenSet() const { return m_attributeIdHasBeenSet; }
  template <typename AttributeIdT = Aws::String>
  void SetAttributeId(AttributeIdT&& value) {
    m_attributeIdHasBeenSet = true;
    m_attributeId = std::forward<AttributeIdT>(value);
  }
  template <typename AttributeIdT = Aws::String>
  DataTableValueSummary& WithAttributeId(AttributeIdT&& value) {
    SetAttributeId(std::forward<AttributeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The summary's primary values.</p>
   */
  inline const Aws::Vector<PrimaryValueResponse>& GetPrimaryValues() const { return m_primaryValues; }
  inline bool PrimaryValuesHasBeenSet() const { return m_primaryValuesHasBeenSet; }
  template <typename PrimaryValuesT = Aws::Vector<PrimaryValueResponse>>
  void SetPrimaryValues(PrimaryValuesT&& value) {
    m_primaryValuesHasBeenSet = true;
    m_primaryValues = std::forward<PrimaryValuesT>(value);
  }
  template <typename PrimaryValuesT = Aws::Vector<PrimaryValueResponse>>
  DataTableValueSummary& WithPrimaryValues(PrimaryValuesT&& value) {
    SetPrimaryValues(std::forward<PrimaryValuesT>(value));
    return *this;
  }
  template <typename PrimaryValuesT = PrimaryValueResponse>
  DataTableValueSummary& AddPrimaryValues(PrimaryValuesT&& value) {
    m_primaryValuesHasBeenSet = true;
    m_primaryValues.emplace_back(std::forward<PrimaryValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The summary's attribute name.</p>
   */
  inline const Aws::String& GetAttributeName() const { return m_attributeName; }
  inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
  template <typename AttributeNameT = Aws::String>
  void SetAttributeName(AttributeNameT&& value) {
    m_attributeNameHasBeenSet = true;
    m_attributeName = std::forward<AttributeNameT>(value);
  }
  template <typename AttributeNameT = Aws::String>
  DataTableValueSummary& WithAttributeName(AttributeNameT&& value) {
    SetAttributeName(std::forward<AttributeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The summary's value type.</p>
   */
  inline DataTableAttributeValueType GetValueType() const { return m_valueType; }
  inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }
  inline void SetValueType(DataTableAttributeValueType value) {
    m_valueTypeHasBeenSet = true;
    m_valueType = value;
  }
  inline DataTableValueSummary& WithValueType(DataTableAttributeValueType value) {
    SetValueType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The summary's value.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  DataTableValueSummary& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The summary's lock version.</p>
   */
  inline const DataTableLockVersion& GetLockVersion() const { return m_lockVersion; }
  inline bool LockVersionHasBeenSet() const { return m_lockVersionHasBeenSet; }
  template <typename LockVersionT = DataTableLockVersion>
  void SetLockVersion(LockVersionT&& value) {
    m_lockVersionHasBeenSet = true;
    m_lockVersion = std::forward<LockVersionT>(value);
  }
  template <typename LockVersionT = DataTableLockVersion>
  DataTableValueSummary& WithLockVersion(LockVersionT&& value) {
    SetLockVersion(std::forward<LockVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The summary's last modified time.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  DataTableValueSummary& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The summary's last modified region.</p>
   */
  inline const Aws::String& GetLastModifiedRegion() const { return m_lastModifiedRegion; }
  inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }
  template <typename LastModifiedRegionT = Aws::String>
  void SetLastModifiedRegion(LastModifiedRegionT&& value) {
    m_lastModifiedRegionHasBeenSet = true;
    m_lastModifiedRegion = std::forward<LastModifiedRegionT>(value);
  }
  template <typename LastModifiedRegionT = Aws::String>
  DataTableValueSummary& WithLastModifiedRegion(LastModifiedRegionT&& value) {
    SetLastModifiedRegion(std::forward<LastModifiedRegionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recordId;
  bool m_recordIdHasBeenSet = false;

  Aws::String m_attributeId;
  bool m_attributeIdHasBeenSet = false;

  Aws::Vector<PrimaryValueResponse> m_primaryValues;
  bool m_primaryValuesHasBeenSet = false;

  Aws::String m_attributeName;
  bool m_attributeNameHasBeenSet = false;

  DataTableAttributeValueType m_valueType{DataTableAttributeValueType::NOT_SET};
  bool m_valueTypeHasBeenSet = false;

  Aws::String m_value;
  bool m_valueHasBeenSet = false;

  DataTableLockVersion m_lockVersion;
  bool m_lockVersionHasBeenSet = false;

  Aws::Utils::DateTime m_lastModifiedTime{};
  bool m_lastModifiedTimeHasBeenSet = false;

  Aws::String m_lastModifiedRegion;
  bool m_lastModifiedRegionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
