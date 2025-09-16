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

class PayloadConfig {
 public:
  AWS_RESTJSONPROTOCOL_API PayloadConfig() = default;
  AWS_RESTJSONPROTOCOL_API PayloadConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API PayloadConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline int GetData() const { return m_data; }
  inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
  inline void SetData(int value) {
    m_dataHasBeenSet = true;
    m_data = value;
  }
  inline PayloadConfig& WithData(int value) {
    SetData(value);
    return *this;
  }
  ///@}
 private:
  int m_data{0};
  bool m_dataHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
