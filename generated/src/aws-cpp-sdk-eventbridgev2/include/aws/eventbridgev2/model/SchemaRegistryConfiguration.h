/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/ConfluentPublicRegistryConfiguration.h>

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
 * <p>Schema registry settings used to encode open-format (Avro/Protobuf)
 * events.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/SchemaRegistryConfiguration">AWS
 * API Reference</a></p>
 */
class SchemaRegistryConfiguration {
 public:
  AWS_EVENTBRIDGEV2_API SchemaRegistryConfiguration() = default;
  AWS_EVENTBRIDGEV2_API SchemaRegistryConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API SchemaRegistryConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Glue Schema Registry ARN, or Confluent Cloud HTTPS URL.</p>
   */
  inline const Aws::String& GetRegistryUri() const { return m_registryUri; }
  inline bool RegistryUriHasBeenSet() const { return m_registryUriHasBeenSet; }
  template <typename RegistryUriT = Aws::String>
  void SetRegistryUri(RegistryUriT&& value) {
    m_registryUriHasBeenSet = true;
    m_registryUri = std::forward<RegistryUriT>(value);
  }
  template <typename RegistryUriT = Aws::String>
  SchemaRegistryConfiguration& WithRegistryUri(RegistryUriT&& value) {
    SetRegistryUri(std::forward<RegistryUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Required when RegistryUri is an HTTPS URL. Provides Connection-based auth for
   * Confluent Cloud.</p>
   */
  inline const ConfluentPublicRegistryConfiguration& GetConfluentPublicRegistryConfiguration() const {
    return m_confluentPublicRegistryConfiguration;
  }
  inline bool ConfluentPublicRegistryConfigurationHasBeenSet() const { return m_confluentPublicRegistryConfigurationHasBeenSet; }
  template <typename ConfluentPublicRegistryConfigurationT = ConfluentPublicRegistryConfiguration>
  void SetConfluentPublicRegistryConfiguration(ConfluentPublicRegistryConfigurationT&& value) {
    m_confluentPublicRegistryConfigurationHasBeenSet = true;
    m_confluentPublicRegistryConfiguration = std::forward<ConfluentPublicRegistryConfigurationT>(value);
  }
  template <typename ConfluentPublicRegistryConfigurationT = ConfluentPublicRegistryConfiguration>
  SchemaRegistryConfiguration& WithConfluentPublicRegistryConfiguration(ConfluentPublicRegistryConfigurationT&& value) {
    SetConfluentPublicRegistryConfiguration(std::forward<ConfluentPublicRegistryConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_registryUri;

  ConfluentPublicRegistryConfiguration m_confluentPublicRegistryConfiguration;
  bool m_registryUriHasBeenSet = false;
  bool m_confluentPublicRegistryConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
