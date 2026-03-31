/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/FieldValue.h>
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
 * <p>Represents the updated content of a <code>Custom</code> related
 * item.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CustomUpdateContent">AWS
 * API Reference</a></p>
 */
class CustomUpdateContent {
 public:
  AWS_CONNECTCASES_API CustomUpdateContent() = default;
  AWS_CONNECTCASES_API CustomUpdateContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API CustomUpdateContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>List of updated field values for the <code>Custom</code> related item. All
   * existing and new fields, and their associated values should be included. Fields
   * not included as part of this request will be removed.</p>
   */
  inline const Aws::Vector<FieldValue>& GetFields() const { return m_fields; }
  inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
  template <typename FieldsT = Aws::Vector<FieldValue>>
  void SetFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields = std::forward<FieldsT>(value);
  }
  template <typename FieldsT = Aws::Vector<FieldValue>>
  CustomUpdateContent& WithFields(FieldsT&& value) {
    SetFields(std::forward<FieldsT>(value));
    return *this;
  }
  template <typename FieldsT = FieldValue>
  CustomUpdateContent& AddFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields.emplace_back(std::forward<FieldsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<FieldValue> m_fields;
  bool m_fieldsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
