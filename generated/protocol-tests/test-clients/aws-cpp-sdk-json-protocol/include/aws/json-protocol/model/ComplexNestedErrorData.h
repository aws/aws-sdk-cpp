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

class ComplexNestedErrorData {
 public:
  AWS_JSONPROTOCOL_API ComplexNestedErrorData() = default;
  AWS_JSONPROTOCOL_API ComplexNestedErrorData(Aws::Utils::Json::JsonView jsonValue);
  AWS_JSONPROTOCOL_API ComplexNestedErrorData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_JSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetFoo() const { return m_foo; }
  inline bool FooHasBeenSet() const { return m_fooHasBeenSet; }
  template <typename FooT = Aws::String>
  void SetFoo(FooT&& value) {
    m_fooHasBeenSet = true;
    m_foo = std::forward<FooT>(value);
  }
  template <typename FooT = Aws::String>
  ComplexNestedErrorData& WithFoo(FooT&& value) {
    SetFoo(std::forward<FooT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_foo;
  bool m_fooHasBeenSet = false;
};

}  // namespace Model
}  // namespace JsonProtocol
}  // namespace Aws
