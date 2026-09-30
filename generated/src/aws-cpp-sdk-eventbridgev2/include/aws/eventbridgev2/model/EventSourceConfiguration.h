/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/AwsServiceEventsSourceConfiguration.h>
#include <aws/eventbridgev2/model/PartnerEventsSourceConfiguration.h>

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
 * <p>Discriminated EventSource configuration. Exactly one variant must be
 * set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/EventSourceConfiguration">AWS
 * API Reference</a></p>
 */
class EventSourceConfiguration {
 public:
  AWS_EVENTBRIDGEV2_API EventSourceConfiguration() = default;
  AWS_EVENTBRIDGEV2_API EventSourceConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API EventSourceConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const AwsServiceEventsSourceConfiguration& GetAwsServiceEventsConfiguration() const { return m_awsServiceEventsConfiguration; }
  inline bool AwsServiceEventsConfigurationHasBeenSet() const { return m_awsServiceEventsConfigurationHasBeenSet; }
  template <typename AwsServiceEventsConfigurationT = AwsServiceEventsSourceConfiguration>
  void SetAwsServiceEventsConfiguration(AwsServiceEventsConfigurationT&& value) {
    m_awsServiceEventsConfigurationHasBeenSet = true;
    m_awsServiceEventsConfiguration = std::forward<AwsServiceEventsConfigurationT>(value);
  }
  template <typename AwsServiceEventsConfigurationT = AwsServiceEventsSourceConfiguration>
  EventSourceConfiguration& WithAwsServiceEventsConfiguration(AwsServiceEventsConfigurationT&& value) {
    SetAwsServiceEventsConfiguration(std::forward<AwsServiceEventsConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const PartnerEventsSourceConfiguration& GetPartnerEventsConfiguration() const { return m_partnerEventsConfiguration; }
  inline bool PartnerEventsConfigurationHasBeenSet() const { return m_partnerEventsConfigurationHasBeenSet; }
  template <typename PartnerEventsConfigurationT = PartnerEventsSourceConfiguration>
  void SetPartnerEventsConfiguration(PartnerEventsConfigurationT&& value) {
    m_partnerEventsConfigurationHasBeenSet = true;
    m_partnerEventsConfiguration = std::forward<PartnerEventsConfigurationT>(value);
  }
  template <typename PartnerEventsConfigurationT = PartnerEventsSourceConfiguration>
  EventSourceConfiguration& WithPartnerEventsConfiguration(PartnerEventsConfigurationT&& value) {
    SetPartnerEventsConfiguration(std::forward<PartnerEventsConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  AwsServiceEventsSourceConfiguration m_awsServiceEventsConfiguration;

  PartnerEventsSourceConfiguration m_partnerEventsConfiguration;
  bool m_awsServiceEventsConfigurationHasBeenSet = false;
  bool m_partnerEventsConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
