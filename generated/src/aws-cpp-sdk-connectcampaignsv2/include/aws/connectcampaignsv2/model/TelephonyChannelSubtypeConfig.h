/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcampaignsv2/model/TelephonyOutboundMode.h>
#include <aws/connectcampaignsv2/model/TelephonyOutboundConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>Telephony Channel Subtype config</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/TelephonyChannelSubtypeConfig">AWS
   * API Reference</a></p>
   */
  class TelephonyChannelSubtypeConfig
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API TelephonyChannelSubtypeConfig() = default;
    AWS_CONNECTCAMPAIGNSV2_API TelephonyChannelSubtypeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API TelephonyChannelSubtypeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline double GetCapacity() const { return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    inline void SetCapacity(double value) { m_capacityHasBeenSet = true; m_capacity = value; }
    inline TelephonyChannelSubtypeConfig& WithCapacity(double value) { SetCapacity(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectQueueId() const { return m_connectQueueId; }
    inline bool ConnectQueueIdHasBeenSet() const { return m_connectQueueIdHasBeenSet; }
    template<typename ConnectQueueIdT = Aws::String>
    void SetConnectQueueId(ConnectQueueIdT&& value) { m_connectQueueIdHasBeenSet = true; m_connectQueueId = std::forward<ConnectQueueIdT>(value); }
    template<typename ConnectQueueIdT = Aws::String>
    TelephonyChannelSubtypeConfig& WithConnectQueueId(ConnectQueueIdT&& value) { SetConnectQueueId(std::forward<ConnectQueueIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TelephonyOutboundMode& GetOutboundMode() const { return m_outboundMode; }
    inline bool OutboundModeHasBeenSet() const { return m_outboundModeHasBeenSet; }
    template<typename OutboundModeT = TelephonyOutboundMode>
    void SetOutboundMode(OutboundModeT&& value) { m_outboundModeHasBeenSet = true; m_outboundMode = std::forward<OutboundModeT>(value); }
    template<typename OutboundModeT = TelephonyOutboundMode>
    TelephonyChannelSubtypeConfig& WithOutboundMode(OutboundModeT&& value) { SetOutboundMode(std::forward<OutboundModeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TelephonyOutboundConfig& GetDefaultOutboundConfig() const { return m_defaultOutboundConfig; }
    inline bool DefaultOutboundConfigHasBeenSet() const { return m_defaultOutboundConfigHasBeenSet; }
    template<typename DefaultOutboundConfigT = TelephonyOutboundConfig>
    void SetDefaultOutboundConfig(DefaultOutboundConfigT&& value) { m_defaultOutboundConfigHasBeenSet = true; m_defaultOutboundConfig = std::forward<DefaultOutboundConfigT>(value); }
    template<typename DefaultOutboundConfigT = TelephonyOutboundConfig>
    TelephonyChannelSubtypeConfig& WithDefaultOutboundConfig(DefaultOutboundConfigT&& value) { SetDefaultOutboundConfig(std::forward<DefaultOutboundConfigT>(value)); return *this;}
    ///@}
  private:

    double m_capacity{0.0};
    bool m_capacityHasBeenSet = false;

    Aws::String m_connectQueueId;
    bool m_connectQueueIdHasBeenSet = false;

    TelephonyOutboundMode m_outboundMode;
    bool m_outboundModeHasBeenSet = false;

    TelephonyOutboundConfig m_defaultOutboundConfig;
    bool m_defaultOutboundConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
