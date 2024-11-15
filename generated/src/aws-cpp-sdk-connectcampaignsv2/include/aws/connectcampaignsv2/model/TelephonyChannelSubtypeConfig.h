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
    AWS_CONNECTCAMPAIGNSV2_API TelephonyChannelSubtypeConfig();
    AWS_CONNECTCAMPAIGNSV2_API TelephonyChannelSubtypeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API TelephonyChannelSubtypeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline double GetCapacity() const{ return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    inline void SetCapacity(double value) { m_capacityHasBeenSet = true; m_capacity = value; }
    inline TelephonyChannelSubtypeConfig& WithCapacity(double value) { SetCapacity(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetConnectQueueId() const{ return m_connectQueueId; }
    inline bool ConnectQueueIdHasBeenSet() const { return m_connectQueueIdHasBeenSet; }
    inline void SetConnectQueueId(const Aws::String& value) { m_connectQueueIdHasBeenSet = true; m_connectQueueId = value; }
    inline void SetConnectQueueId(Aws::String&& value) { m_connectQueueIdHasBeenSet = true; m_connectQueueId = std::move(value); }
    inline void SetConnectQueueId(const char* value) { m_connectQueueIdHasBeenSet = true; m_connectQueueId.assign(value); }
    inline TelephonyChannelSubtypeConfig& WithConnectQueueId(const Aws::String& value) { SetConnectQueueId(value); return *this;}
    inline TelephonyChannelSubtypeConfig& WithConnectQueueId(Aws::String&& value) { SetConnectQueueId(std::move(value)); return *this;}
    inline TelephonyChannelSubtypeConfig& WithConnectQueueId(const char* value) { SetConnectQueueId(value); return *this;}
    ///@}

    ///@{
    
    inline const TelephonyOutboundMode& GetOutboundMode() const{ return m_outboundMode; }
    inline bool OutboundModeHasBeenSet() const { return m_outboundModeHasBeenSet; }
    inline void SetOutboundMode(const TelephonyOutboundMode& value) { m_outboundModeHasBeenSet = true; m_outboundMode = value; }
    inline void SetOutboundMode(TelephonyOutboundMode&& value) { m_outboundModeHasBeenSet = true; m_outboundMode = std::move(value); }
    inline TelephonyChannelSubtypeConfig& WithOutboundMode(const TelephonyOutboundMode& value) { SetOutboundMode(value); return *this;}
    inline TelephonyChannelSubtypeConfig& WithOutboundMode(TelephonyOutboundMode&& value) { SetOutboundMode(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const TelephonyOutboundConfig& GetDefaultOutboundConfig() const{ return m_defaultOutboundConfig; }
    inline bool DefaultOutboundConfigHasBeenSet() const { return m_defaultOutboundConfigHasBeenSet; }
    inline void SetDefaultOutboundConfig(const TelephonyOutboundConfig& value) { m_defaultOutboundConfigHasBeenSet = true; m_defaultOutboundConfig = value; }
    inline void SetDefaultOutboundConfig(TelephonyOutboundConfig&& value) { m_defaultOutboundConfigHasBeenSet = true; m_defaultOutboundConfig = std::move(value); }
    inline TelephonyChannelSubtypeConfig& WithDefaultOutboundConfig(const TelephonyOutboundConfig& value) { SetDefaultOutboundConfig(value); return *this;}
    inline TelephonyChannelSubtypeConfig& WithDefaultOutboundConfig(TelephonyOutboundConfig&& value) { SetDefaultOutboundConfig(std::move(value)); return *this;}
    ///@}
  private:

    double m_capacity;
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
