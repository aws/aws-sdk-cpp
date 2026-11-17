/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/AutoIncludeFields.h>
#include <aws/connectcases/model/FieldIdentifier.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCases {
namespace Model {

/**
 * <p>Details of what case data is published through the case event stream. Use
 * <code>fields</code> to include a specific list of fields, and use
 * <code>autoIncludeFields</code> to automatically include a category of fields.
 * When both are set, the effective field set is the union of the
 * two.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CaseEventIncludedData">AWS
 * API Reference</a></p>
 */
class CaseEventIncludedData {
 public:
  AWS_CONNECTCASES_API CaseEventIncludedData() = default;
  AWS_CONNECTCASES_API CaseEventIncludedData(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API CaseEventIncludedData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>List of field identifiers to include in case event data.</p>
   */
  inline const Aws::Vector<FieldIdentifier>& GetFields() const { return m_fields; }
  inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
  template <typename FieldsT = Aws::Vector<FieldIdentifier>>
  void SetFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields = std::forward<FieldsT>(value);
  }
  template <typename FieldsT = Aws::Vector<FieldIdentifier>>
  CaseEventIncludedData& WithFields(FieldsT&& value) {
    SetFields(std::forward<FieldsT>(value));
    return *this;
  }
  template <typename FieldsT = FieldIdentifier>
  CaseEventIncludedData& AddFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields.emplace_back(std::forward<FieldsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Automatically include a category of fields in case event data, combined as a
   * union with any fields specified in <code>fields</code>. Valid values are
   * <code>All</code> (include all fields on the case), <code>System</code> (include
   * all system fields), and <code>Custom</code> (include all custom fields). When
   * this attribute is set, new fields added to the domain are picked up
   * automatically without another call to PutCaseEventConfiguration. For the full
   * behavior matrix and IAM requirements, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/case-event-streams.html">Case
   * event streams in Connect Customer Cases</a> in the <i>Connect Customer
   * Administrator Guide</i>.</p>
   */
  inline AutoIncludeFields GetAutoIncludeFields() const { return m_autoIncludeFields; }
  inline bool AutoIncludeFieldsHasBeenSet() const { return m_autoIncludeFieldsHasBeenSet; }
  inline void SetAutoIncludeFields(AutoIncludeFields value) {
    m_autoIncludeFieldsHasBeenSet = true;
    m_autoIncludeFields = value;
  }
  inline CaseEventIncludedData& WithAutoIncludeFields(AutoIncludeFields value) {
    SetAutoIncludeFields(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<FieldIdentifier> m_fields;

  AutoIncludeFields m_autoIncludeFields{AutoIncludeFields::NOT_SET};
  bool m_fieldsHasBeenSet = false;
  bool m_autoIncludeFieldsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
