/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace JsonProtocol {
namespace Model {

class SimpleStruct {
 public:
  AWS_JSONPROTOCOL_API SimpleStruct() = default;
  AWS_JSONPROTOCOL_API SimpleStruct(Aws::Utils::Json::JsonView jsonValue);
  AWS_JSONPROTOCOL_API SimpleStruct& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_JSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  SimpleStruct& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_value;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace JsonProtocol
}  // namespace Aws
