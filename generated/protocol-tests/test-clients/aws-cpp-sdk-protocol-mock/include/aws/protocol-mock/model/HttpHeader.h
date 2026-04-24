/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/protocol-mock/ProtocolMock_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ProtocolMock {
namespace Model {

class HttpHeader {
 public:
  AWS_PROTOCOLMOCK_API HttpHeader() = default;
  AWS_PROTOCOLMOCK_API HttpHeader(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROTOCOLMOCK_API HttpHeader& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROTOCOLMOCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  HttpHeader& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetVal() const { return m_val; }
  inline bool ValHasBeenSet() const { return m_valHasBeenSet; }
  template <typename ValT = Aws::String>
  void SetVal(ValT&& value) {
    m_valHasBeenSet = true;
    m_val = std::forward<ValT>(value);
  }
  template <typename ValT = Aws::String>
  HttpHeader& WithVal(ValT&& value) {
    SetVal(std::forward<ValT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_key;
  bool m_keyHasBeenSet = false;

  Aws::String m_val;
  bool m_valHasBeenSet = false;
};

}  // namespace Model
}  // namespace ProtocolMock
}  // namespace Aws
