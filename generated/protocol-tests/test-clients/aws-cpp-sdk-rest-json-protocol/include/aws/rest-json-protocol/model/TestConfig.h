/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RestJsonProtocol {
namespace Model {

class TestConfig {
 public:
  AWS_RESTJSONPROTOCOL_API TestConfig() = default;
  AWS_RESTJSONPROTOCOL_API TestConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API TestConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline int GetTimeout() const { return m_timeout; }
  inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
  inline void SetTimeout(int value) {
    m_timeoutHasBeenSet = true;
    m_timeout = value;
  }
  inline TestConfig& WithTimeout(int value) {
    SetTimeout(value);
    return *this;
  }
  ///@}
 private:
  int m_timeout{0};
  bool m_timeoutHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
