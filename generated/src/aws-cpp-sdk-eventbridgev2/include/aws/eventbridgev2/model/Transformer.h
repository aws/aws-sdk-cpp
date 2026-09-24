/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/JsonataConfiguration.h>
#include <aws/eventbridgev2/model/TransformerType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {

/**
 * <p>Transformer configuration for a subscriber.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/Transformer">AWS
 * API Reference</a></p>
 */
class Transformer {
 public:
  AWS_EVENTBRIDGEV2_API Transformer() = default;
  AWS_EVENTBRIDGEV2_API Transformer(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API Transformer& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Transform type.</p>
   */
  inline TransformerType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(TransformerType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline Transformer& WithType(TransformerType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>JSONata expression configuration. Required when Type is JSONATA.</p>
   */
  inline const JsonataConfiguration& GetJsonataConfiguration() const { return m_jsonataConfiguration; }
  inline bool JsonataConfigurationHasBeenSet() const { return m_jsonataConfigurationHasBeenSet; }
  template <typename JsonataConfigurationT = JsonataConfiguration>
  void SetJsonataConfiguration(JsonataConfigurationT&& value) {
    m_jsonataConfigurationHasBeenSet = true;
    m_jsonataConfiguration = std::forward<JsonataConfigurationT>(value);
  }
  template <typename JsonataConfigurationT = JsonataConfiguration>
  Transformer& WithJsonataConfiguration(JsonataConfigurationT&& value) {
    SetJsonataConfiguration(std::forward<JsonataConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  TransformerType m_type{TransformerType::NOT_SET};

  JsonataConfiguration m_jsonataConfiguration;
  bool m_typeHasBeenSet = false;
  bool m_jsonataConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
