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
 * <p>Configuration for forwarding a single AWS service's events from the account's
 * default event bus.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/AwsServiceEventsSourceConfiguration">AWS
 * API Reference</a></p>
 */
class AwsServiceEventsSourceConfiguration {
 public:
  AWS_EVENTBRIDGEV2_API AwsServiceEventsSourceConfiguration() = default;
  AWS_EVENTBRIDGEV2_API AwsServiceEventsSourceConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API AwsServiceEventsSourceConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const Aws::String& GetAwsService() const { return m_awsService; }
  inline bool AwsServiceHasBeenSet() const { return m_awsServiceHasBeenSet; }
  template <typename AwsServiceT = Aws::String>
  void SetAwsService(AwsServiceT&& value) {
    m_awsServiceHasBeenSet = true;
    m_awsService = std::forward<AwsServiceT>(value);
  }
  template <typename AwsServiceT = Aws::String>
  AwsServiceEventsSourceConfiguration& WithAwsService(AwsServiceT&& value) {
    SetAwsService(std::forward<AwsServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter pattern, as a JSON string, that defines which of the service's
   * events are forwarded to the event bus. Do not include source, account, or region
   * as top-level fields. If no pattern is specified, all events from the service are
   * forwarded.</p>
   */
  inline const Aws::String& GetPattern() const { return m_pattern; }
  inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }
  template <typename PatternT = Aws::String>
  void SetPattern(PatternT&& value) {
    m_patternHasBeenSet = true;
    m_pattern = std::forward<PatternT>(value);
  }
  template <typename PatternT = Aws::String>
  AwsServiceEventsSourceConfiguration& WithPattern(PatternT&& value) {
    SetPattern(std::forward<PatternT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination for events that could not be forwarded.</p>
   */
  inline const OnFailureConfiguration& GetOnFailureConfiguration() const { return m_onFailureConfiguration; }
  inline bool OnFailureConfigurationHasBeenSet() const { return m_onFailureConfigurationHasBeenSet; }
  template <typename OnFailureConfigurationT = OnFailureConfiguration>
  void SetOnFailureConfiguration(OnFailureConfigurationT&& value) {
    m_onFailureConfigurationHasBeenSet = true;
    m_onFailureConfiguration = std::forward<OnFailureConfigurationT>(value);
  }
  template <typename OnFailureConfigurationT = OnFailureConfiguration>
  AwsServiceEventsSourceConfiguration& WithOnFailureConfiguration(OnFailureConfigurationT&& value) {
    SetOnFailureConfiguration(std::forward<OnFailureConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsService;

  Aws::String m_pattern;

  OnFailureConfiguration m_onFailureConfiguration;
  bool m_awsServiceHasBeenSet = false;
  bool m_patternHasBeenSet = false;
  bool m_onFailureConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
