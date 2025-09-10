/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSAllocator.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RestJsonProtocol {
namespace Model {
class RecursiveShapesInputOutputNested2;

class RecursiveShapesInputOutputNested1 {
 public:
  AWS_RESTJSONPROTOCOL_API RecursiveShapesInputOutputNested1() = default;
  AWS_RESTJSONPROTOCOL_API RecursiveShapesInputOutputNested1(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API RecursiveShapesInputOutputNested1& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetFoo() const { return m_foo; }
  inline bool FooHasBeenSet() const { return m_fooHasBeenSet; }
  template <typename FooT = Aws::String>
  void SetFoo(FooT&& value) {
    m_fooHasBeenSet = true;
    m_foo = std::forward<FooT>(value);
  }
  template <typename FooT = Aws::String>
  RecursiveShapesInputOutputNested1& WithFoo(FooT&& value) {
    SetFoo(std::forward<FooT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RecursiveShapesInputOutputNested2& GetNested() const { return *m_nested; }
  inline bool NestedHasBeenSet() const { return m_nestedHasBeenSet; }
  template <typename NestedT = RecursiveShapesInputOutputNested2>
  void SetNested(NestedT&& value) {
    m_nestedHasBeenSet = true;
    m_nested = Aws::MakeShared<RecursiveShapesInputOutputNested2>("RecursiveShapesInputOutputNested1", std::forward<NestedT>(value));
  }
  template <typename NestedT = RecursiveShapesInputOutputNested2>
  RecursiveShapesInputOutputNested1& WithNested(NestedT&& value) {
    SetNested(std::forward<NestedT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_foo;
  bool m_fooHasBeenSet = false;

  std::shared_ptr<RecursiveShapesInputOutputNested2> m_nested;
  bool m_nestedHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
