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
 * <p>A primary value response.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PrimaryValueResponse">AWS
 * API Reference</a></p>
 */
class PrimaryValueResponse {
 public:
  AWS_CONNECT_API PrimaryValueResponse() = default;
  AWS_CONNECT_API PrimaryValueResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API PrimaryValueResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The value's attribute name.</p>
   */
  inline const Aws::String& GetAttributeName() const { return m_attributeName; }
  inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
  template <typename AttributeNameT = Aws::String>
  void SetAttributeName(AttributeNameT&& value) {
    m_attributeNameHasBeenSet = true;
    m_attributeName = std::forward<AttributeNameT>(value);
  }
  template <typename AttributeNameT = Aws::String>
  PrimaryValueResponse& WithAttributeName(AttributeNameT&& value) {
    SetAttributeName(std::forward<AttributeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value's attribute ID.</p>
   */
  inline const Aws::String& GetAttributeId() const { return m_attributeId; }
  inline bool AttributeIdHasBeenSet() const { return m_attributeIdHasBeenSet; }
  template <typename AttributeIdT = Aws::String>
  void SetAttributeId(AttributeIdT&& value) {
    m_attributeIdHasBeenSet = true;
    m_attributeId = std::forward<AttributeIdT>(value);
  }
  template <typename AttributeIdT = Aws::String>
  PrimaryValueResponse& WithAttributeId(AttributeIdT&& value) {
    SetAttributeId(std::forward<AttributeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value's value.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  PrimaryValueResponse& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_attributeName;

  Aws::String m_attributeId;

  Aws::String m_value;
  bool m_attributeNameHasBeenSet = false;
  bool m_attributeIdHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
