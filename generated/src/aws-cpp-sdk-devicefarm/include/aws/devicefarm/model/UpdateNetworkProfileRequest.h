/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/NetworkProfileType.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   */
  class UpdateNetworkProfileRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API UpdateNetworkProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNetworkProfile"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to update
     * network profile settings.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline UpdateNetworkProfileRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateNetworkProfileRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateNetworkProfileRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the network profile about which you are returning
     * information.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateNetworkProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateNetworkProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateNetworkProfileRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the network profile about which you are returning
     * information.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateNetworkProfileRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateNetworkProfileRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateNetworkProfileRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of network profile to return information about. Valid values are
     * listed here.</p>
     */
    inline const NetworkProfileType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const NetworkProfileType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(NetworkProfileType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline UpdateNetworkProfileRequest& WithType(const NetworkProfileType& value) { SetType(value); return *this;}
    inline UpdateNetworkProfileRequest& WithType(NetworkProfileType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data throughput rate in bits per second, as an integer from 0 to
     * 104857600.</p>
     */
    inline long long GetUplinkBandwidthBits() const{ return m_uplinkBandwidthBits; }
    inline bool UplinkBandwidthBitsHasBeenSet() const { return m_uplinkBandwidthBitsHasBeenSet; }
    inline void SetUplinkBandwidthBits(long long value) { m_uplinkBandwidthBitsHasBeenSet = true; m_uplinkBandwidthBits = value; }
    inline UpdateNetworkProfileRequest& WithUplinkBandwidthBits(long long value) { SetUplinkBandwidthBits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data throughput rate in bits per second, as an integer from 0 to
     * 104857600.</p>
     */
    inline long long GetDownlinkBandwidthBits() const{ return m_downlinkBandwidthBits; }
    inline bool DownlinkBandwidthBitsHasBeenSet() const { return m_downlinkBandwidthBitsHasBeenSet; }
    inline void SetDownlinkBandwidthBits(long long value) { m_downlinkBandwidthBitsHasBeenSet = true; m_downlinkBandwidthBits = value; }
    inline UpdateNetworkProfileRequest& WithDownlinkBandwidthBits(long long value) { SetDownlinkBandwidthBits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Delay time for all packets to destination in milliseconds as an integer from
     * 0 to 2000.</p>
     */
    inline long long GetUplinkDelayMs() const{ return m_uplinkDelayMs; }
    inline bool UplinkDelayMsHasBeenSet() const { return m_uplinkDelayMsHasBeenSet; }
    inline void SetUplinkDelayMs(long long value) { m_uplinkDelayMsHasBeenSet = true; m_uplinkDelayMs = value; }
    inline UpdateNetworkProfileRequest& WithUplinkDelayMs(long long value) { SetUplinkDelayMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Delay time for all packets to destination in milliseconds as an integer from
     * 0 to 2000.</p>
     */
    inline long long GetDownlinkDelayMs() const{ return m_downlinkDelayMs; }
    inline bool DownlinkDelayMsHasBeenSet() const { return m_downlinkDelayMsHasBeenSet; }
    inline void SetDownlinkDelayMs(long long value) { m_downlinkDelayMsHasBeenSet = true; m_downlinkDelayMs = value; }
    inline UpdateNetworkProfileRequest& WithDownlinkDelayMs(long long value) { SetDownlinkDelayMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time variation in the delay of received packets in milliseconds as an integer
     * from 0 to 2000.</p>
     */
    inline long long GetUplinkJitterMs() const{ return m_uplinkJitterMs; }
    inline bool UplinkJitterMsHasBeenSet() const { return m_uplinkJitterMsHasBeenSet; }
    inline void SetUplinkJitterMs(long long value) { m_uplinkJitterMsHasBeenSet = true; m_uplinkJitterMs = value; }
    inline UpdateNetworkProfileRequest& WithUplinkJitterMs(long long value) { SetUplinkJitterMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time variation in the delay of received packets in milliseconds as an integer
     * from 0 to 2000.</p>
     */
    inline long long GetDownlinkJitterMs() const{ return m_downlinkJitterMs; }
    inline bool DownlinkJitterMsHasBeenSet() const { return m_downlinkJitterMsHasBeenSet; }
    inline void SetDownlinkJitterMs(long long value) { m_downlinkJitterMsHasBeenSet = true; m_downlinkJitterMs = value; }
    inline UpdateNetworkProfileRequest& WithDownlinkJitterMs(long long value) { SetDownlinkJitterMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Proportion of transmitted packets that fail to arrive from 0 to 100
     * percent.</p>
     */
    inline int GetUplinkLossPercent() const{ return m_uplinkLossPercent; }
    inline bool UplinkLossPercentHasBeenSet() const { return m_uplinkLossPercentHasBeenSet; }
    inline void SetUplinkLossPercent(int value) { m_uplinkLossPercentHasBeenSet = true; m_uplinkLossPercent = value; }
    inline UpdateNetworkProfileRequest& WithUplinkLossPercent(int value) { SetUplinkLossPercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Proportion of received packets that fail to arrive from 0 to 100 percent.</p>
     */
    inline int GetDownlinkLossPercent() const{ return m_downlinkLossPercent; }
    inline bool DownlinkLossPercentHasBeenSet() const { return m_downlinkLossPercentHasBeenSet; }
    inline void SetDownlinkLossPercent(int value) { m_downlinkLossPercentHasBeenSet = true; m_downlinkLossPercent = value; }
    inline UpdateNetworkProfileRequest& WithDownlinkLossPercent(int value) { SetDownlinkLossPercent(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    NetworkProfileType m_type;
    bool m_typeHasBeenSet = false;

    long long m_uplinkBandwidthBits;
    bool m_uplinkBandwidthBitsHasBeenSet = false;

    long long m_downlinkBandwidthBits;
    bool m_downlinkBandwidthBitsHasBeenSet = false;

    long long m_uplinkDelayMs;
    bool m_uplinkDelayMsHasBeenSet = false;

    long long m_downlinkDelayMs;
    bool m_downlinkDelayMsHasBeenSet = false;

    long long m_uplinkJitterMs;
    bool m_uplinkJitterMsHasBeenSet = false;

    long long m_downlinkJitterMs;
    bool m_downlinkJitterMsHasBeenSet = false;

    int m_uplinkLossPercent;
    bool m_uplinkLossPercentHasBeenSet = false;

    int m_downlinkLossPercent;
    bool m_downlinkLossPercentHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
