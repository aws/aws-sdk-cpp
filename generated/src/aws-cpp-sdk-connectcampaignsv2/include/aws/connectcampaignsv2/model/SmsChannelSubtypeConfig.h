/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/SmsOutboundMode.h>
#include <aws/connectcampaignsv2/model/SmsOutboundConfig.h>
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
   * <p>SMS Channel Subtype config</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/SmsChannelSubtypeConfig">AWS
   * API Reference</a></p>
   */
  class SmsChannelSubtypeConfig
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API SmsChannelSubtypeConfig();
    AWS_CONNECTCAMPAIGNSV2_API SmsChannelSubtypeConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API SmsChannelSubtypeConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline double GetCapacity() const{ return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    inline void SetCapacity(double value) { m_capacityHasBeenSet = true; m_capacity = value; }
    inline SmsChannelSubtypeConfig& WithCapacity(double value) { SetCapacity(value); return *this;}
    ///@}

    ///@{
    
    inline const SmsOutboundMode& GetOutboundMode() const{ return m_outboundMode; }
    inline bool OutboundModeHasBeenSet() const { return m_outboundModeHasBeenSet; }
    inline void SetOutboundMode(const SmsOutboundMode& value) { m_outboundModeHasBeenSet = true; m_outboundMode = value; }
    inline void SetOutboundMode(SmsOutboundMode&& value) { m_outboundModeHasBeenSet = true; m_outboundMode = std::move(value); }
    inline SmsChannelSubtypeConfig& WithOutboundMode(const SmsOutboundMode& value) { SetOutboundMode(value); return *this;}
    inline SmsChannelSubtypeConfig& WithOutboundMode(SmsOutboundMode&& value) { SetOutboundMode(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const SmsOutboundConfig& GetDefaultOutboundConfig() const{ return m_defaultOutboundConfig; }
    inline bool DefaultOutboundConfigHasBeenSet() const { return m_defaultOutboundConfigHasBeenSet; }
    inline void SetDefaultOutboundConfig(const SmsOutboundConfig& value) { m_defaultOutboundConfigHasBeenSet = true; m_defaultOutboundConfig = value; }
    inline void SetDefaultOutboundConfig(SmsOutboundConfig&& value) { m_defaultOutboundConfigHasBeenSet = true; m_defaultOutboundConfig = std::move(value); }
    inline SmsChannelSubtypeConfig& WithDefaultOutboundConfig(const SmsOutboundConfig& value) { SetDefaultOutboundConfig(value); return *this;}
    inline SmsChannelSubtypeConfig& WithDefaultOutboundConfig(SmsOutboundConfig&& value) { SetDefaultOutboundConfig(std::move(value)); return *this;}
    ///@}
  private:

    double m_capacity;
    bool m_capacityHasBeenSet = false;

    SmsOutboundMode m_outboundMode;
    bool m_outboundModeHasBeenSet = false;

    SmsOutboundConfig m_defaultOutboundConfig;
    bool m_defaultOutboundConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
