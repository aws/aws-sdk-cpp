/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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

class UnionWithJsonName {
 public:
  AWS_RESTJSONPROTOCOL_API UnionWithJsonName() = default;
  AWS_RESTJSONPROTOCOL_API UnionWithJsonName(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API UnionWithJsonName& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  UnionWithJsonName& WithFoo(FooT&& value) {
    SetFoo(std::forward<FooT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetBar() const { return m_bar; }
  inline bool BarHasBeenSet() const { return m_barHasBeenSet; }
  template <typename BarT = Aws::String>
  void SetBar(BarT&& value) {
    m_barHasBeenSet = true;
    m_bar = std::forward<BarT>(value);
  }
  template <typename BarT = Aws::String>
  UnionWithJsonName& WithBar(BarT&& value) {
    SetBar(std::forward<BarT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetBaz() const { return m_baz; }
  inline bool BazHasBeenSet() const { return m_bazHasBeenSet; }
  template <typename BazT = Aws::String>
  void SetBaz(BazT&& value) {
    m_bazHasBeenSet = true;
    m_baz = std::forward<BazT>(value);
  }
  template <typename BazT = Aws::String>
  UnionWithJsonName& WithBaz(BazT&& value) {
    SetBaz(std::forward<BazT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_foo;
  bool m_fooHasBeenSet = false;

  Aws::String m_bar;
  bool m_barHasBeenSet = false;

  Aws::String m_baz;
  bool m_bazHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
