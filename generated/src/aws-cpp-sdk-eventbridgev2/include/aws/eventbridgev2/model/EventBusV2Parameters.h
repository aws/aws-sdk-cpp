/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/DeduplicationConfiguration.h>
#include <aws/eventbridgev2/model/EventBusV2SystemMetadata.h>

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
 * <p>Parameters for forwarding events to another EventBridge event
 * bus.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/EventBusV2Parameters">AWS
 * API Reference</a></p>
 */
class EventBusV2Parameters {
 public:
  AWS_EVENTBRIDGEV2_API EventBusV2Parameters() = default;
  AWS_EVENTBRIDGEV2_API EventBusV2Parameters(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API EventBusV2Parameters& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Customer-defined metadata forwarded with each event.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  EventBusV2Parameters& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
  EventBusV2Parameters& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Customer-controllable system metadata attached to each forwarded event.</p>
   */
  inline const EventBusV2SystemMetadata& GetSystemMetadata() const { return m_systemMetadata; }
  inline bool SystemMetadataHasBeenSet() const { return m_systemMetadataHasBeenSet; }
  template <typename SystemMetadataT = EventBusV2SystemMetadata>
  void SetSystemMetadata(SystemMetadataT&& value) {
    m_systemMetadataHasBeenSet = true;
    m_systemMetadata = std::forward<SystemMetadataT>(value);
  }
  template <typename SystemMetadataT = EventBusV2SystemMetadata>
  EventBusV2Parameters& WithSystemMetadata(SystemMetadataT&& value) {
    SetSystemMetadata(std::forward<SystemMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Deduplication settings applied to the forwarded events on the downstream
   * bus.</p>
   */
  inline const DeduplicationConfiguration& GetDeduplicationConfiguration() const { return m_deduplicationConfiguration; }
  inline bool DeduplicationConfigurationHasBeenSet() const { return m_deduplicationConfigurationHasBeenSet; }
  template <typename DeduplicationConfigurationT = DeduplicationConfiguration>
  void SetDeduplicationConfiguration(DeduplicationConfigurationT&& value) {
    m_deduplicationConfigurationHasBeenSet = true;
    m_deduplicationConfiguration = std::forward<DeduplicationConfigurationT>(value);
  }
  template <typename DeduplicationConfigurationT = DeduplicationConfiguration>
  EventBusV2Parameters& WithDeduplicationConfiguration(DeduplicationConfigurationT&& value) {
    SetDeduplicationConfiguration(std::forward<DeduplicationConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_metadata;

  EventBusV2SystemMetadata m_systemMetadata;

  DeduplicationConfiguration m_deduplicationConfiguration;
  bool m_metadataHasBeenSet = false;
  bool m_systemMetadataHasBeenSet = false;
  bool m_deduplicationConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
