/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/WhatsAppOutboundConfig.h>
#include <aws/connectcampaignsv2/model/WhatsAppOutboundMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCampaignsV2 {
namespace Model {

/**
 * <p>WhatsApp Channel Subtype config</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/WhatsAppChannelSubtypeConfig">AWS
 * API Reference</a></p>
 */
class WhatsAppChannelSubtypeConfig {
 public:
  AWS_CONNECTCAMPAIGNSV2_API WhatsAppChannelSubtypeConfig() = default;
  AWS_CONNECTCAMPAIGNSV2_API WhatsAppChannelSubtypeConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API WhatsAppChannelSubtypeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline double GetCapacity() const { return m_capacity; }
  inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
  inline void SetCapacity(double value) {
    m_capacityHasBeenSet = true;
    m_capacity = value;
  }
  inline WhatsAppChannelSubtypeConfig& WithCapacity(double value) {
    SetCapacity(value);
    return *this;
  }
  ///@}

  ///@{

  inline const WhatsAppOutboundMode& GetOutboundMode() const { return m_outboundMode; }
  inline bool OutboundModeHasBeenSet() const { return m_outboundModeHasBeenSet; }
  template <typename OutboundModeT = WhatsAppOutboundMode>
  void SetOutboundMode(OutboundModeT&& value) {
    m_outboundModeHasBeenSet = true;
    m_outboundMode = std::forward<OutboundModeT>(value);
  }
  template <typename OutboundModeT = WhatsAppOutboundMode>
  WhatsAppChannelSubtypeConfig& WithOutboundMode(OutboundModeT&& value) {
    SetOutboundMode(std::forward<OutboundModeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const WhatsAppOutboundConfig& GetDefaultOutboundConfig() const { return m_defaultOutboundConfig; }
  inline bool DefaultOutboundConfigHasBeenSet() const { return m_defaultOutboundConfigHasBeenSet; }
  template <typename DefaultOutboundConfigT = WhatsAppOutboundConfig>
  void SetDefaultOutboundConfig(DefaultOutboundConfigT&& value) {
    m_defaultOutboundConfigHasBeenSet = true;
    m_defaultOutboundConfig = std::forward<DefaultOutboundConfigT>(value);
  }
  template <typename DefaultOutboundConfigT = WhatsAppOutboundConfig>
  WhatsAppChannelSubtypeConfig& WithDefaultOutboundConfig(DefaultOutboundConfigT&& value) {
    SetDefaultOutboundConfig(std::forward<DefaultOutboundConfigT>(value));
    return *this;
  }
  ///@}
 private:
  double m_capacity{0.0};

  WhatsAppOutboundMode m_outboundMode;

  WhatsAppOutboundConfig m_defaultOutboundConfig;
  bool m_capacityHasBeenSet = false;
  bool m_outboundModeHasBeenSet = false;
  bool m_defaultOutboundConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCampaignsV2
}  // namespace Aws
