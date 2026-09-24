/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/OnFailureConfiguration.h>

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
 * <p>Configuration for forwarding a partner event source's events through a
 * managed partner event bus.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/PartnerEventsSourceConfiguration">AWS
 * API Reference</a></p>
 */
class PartnerEventsSourceConfiguration {
 public:
  AWS_EVENTBRIDGEV2_API PartnerEventsSourceConfiguration() = default;
  AWS_EVENTBRIDGEV2_API PartnerEventsSourceConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API PartnerEventsSourceConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const Aws::String& GetPartnerEventSourceArn() const { return m_partnerEventSourceArn; }
  inline bool PartnerEventSourceArnHasBeenSet() const { return m_partnerEventSourceArnHasBeenSet; }
  template <typename PartnerEventSourceArnT = Aws::String>
  void SetPartnerEventSourceArn(PartnerEventSourceArnT&& value) {
    m_partnerEventSourceArnHasBeenSet = true;
    m_partnerEventSourceArn = std::forward<PartnerEventSourceArnT>(value);
  }
  template <typename PartnerEventSourceArnT = Aws::String>
  PartnerEventsSourceConfiguration& WithPartnerEventSourceArn(PartnerEventSourceArnT&& value) {
    SetPartnerEventSourceArn(std::forward<PartnerEventSourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter pattern, as a JSON string, that defines which of the partner event
   * source's events are forwarded to the event bus. If no pattern is specified, all
   * events from the partner event source are forwarded.</p>
   */
  inline const Aws::String& GetPattern() const { return m_pattern; }
  inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }
  template <typename PatternT = Aws::String>
  void SetPattern(PatternT&& value) {
    m_patternHasBeenSet = true;
    m_pattern = std::forward<PatternT>(value);
  }
  template <typename PatternT = Aws::String>
  PartnerEventsSourceConfiguration& WithPattern(PatternT&& value) {
    SetPattern(std::forward<PatternT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetPartnerBusKmsKeyIdentifier() const { return m_partnerBusKmsKeyIdentifier; }
  inline bool PartnerBusKmsKeyIdentifierHasBeenSet() const { return m_partnerBusKmsKeyIdentifierHasBeenSet; }
  template <typename PartnerBusKmsKeyIdentifierT = Aws::String>
  void SetPartnerBusKmsKeyIdentifier(PartnerBusKmsKeyIdentifierT&& value) {
    m_partnerBusKmsKeyIdentifierHasBeenSet = true;
    m_partnerBusKmsKeyIdentifier = std::forward<PartnerBusKmsKeyIdentifierT>(value);
  }
  template <typename PartnerBusKmsKeyIdentifierT = Aws::String>
  PartnerEventsSourceConfiguration& WithPartnerBusKmsKeyIdentifier(PartnerBusKmsKeyIdentifierT&& value) {
    SetPartnerBusKmsKeyIdentifier(std::forward<PartnerBusKmsKeyIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination for events that could not be forwarded, covering both the
   * forwarding target and the managed partner event bus.</p>
   */
  inline const OnFailureConfiguration& GetOnFailureConfiguration() const { return m_onFailureConfiguration; }
  inline bool OnFailureConfigurationHasBeenSet() const { return m_onFailureConfigurationHasBeenSet; }
  template <typename OnFailureConfigurationT = OnFailureConfiguration>
  void SetOnFailureConfiguration(OnFailureConfigurationT&& value) {
    m_onFailureConfigurationHasBeenSet = true;
    m_onFailureConfiguration = std::forward<OnFailureConfigurationT>(value);
  }
  template <typename OnFailureConfigurationT = OnFailureConfiguration>
  PartnerEventsSourceConfiguration& WithOnFailureConfiguration(OnFailureConfigurationT&& value) {
    SetOnFailureConfiguration(std::forward<OnFailureConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_partnerEventSourceArn;

  Aws::String m_pattern;

  Aws::String m_partnerBusKmsKeyIdentifier;

  OnFailureConfiguration m_onFailureConfiguration;
  bool m_partnerEventSourceArnHasBeenSet = false;
  bool m_patternHasBeenSet = false;
  bool m_partnerBusKmsKeyIdentifierHasBeenSet = false;
  bool m_onFailureConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
