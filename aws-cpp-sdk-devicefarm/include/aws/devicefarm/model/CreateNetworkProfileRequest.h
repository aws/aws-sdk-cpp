/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DEVICEFARM_API CreateNetworkProfileRequest : public DeviceFarmRequest
  {
  public:
    CreateNetworkProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNetworkProfile"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to create a
     * network profile.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to create a
     * network profile.</p>
     */
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to create a
     * network profile.</p>
     */
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to create a
     * network profile.</p>
     */
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to create a
     * network profile.</p>
     */
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to create a
     * network profile.</p>
     */
    inline CreateNetworkProfileRequest& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to create a
     * network profile.</p>
     */
    inline CreateNetworkProfileRequest& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to create a
     * network profile.</p>
     */
    inline CreateNetworkProfileRequest& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}


    /**
     * <p>The name you wish to specify for the new network profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name you wish to specify for the new network profile.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name you wish to specify for the new network profile.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name you wish to specify for the new network profile.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name you wish to specify for the new network profile.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name you wish to specify for the new network profile.</p>
     */
    inline CreateNetworkProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name you wish to specify for the new network profile.</p>
     */
    inline CreateNetworkProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name you wish to specify for the new network profile.</p>
     */
    inline CreateNetworkProfileRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the network profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the network profile.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the network profile.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the network profile.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the network profile.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the network profile.</p>
     */
    inline CreateNetworkProfileRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the network profile.</p>
     */
    inline CreateNetworkProfileRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the network profile.</p>
     */
    inline CreateNetworkProfileRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of network profile you wish to create. Valid values are listed
     * below.</p>
     */
    inline const NetworkProfileType& GetType() const{ return m_type; }

    /**
     * <p>The type of network profile you wish to create. Valid values are listed
     * below.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of network profile you wish to create. Valid values are listed
     * below.</p>
     */
    inline void SetType(const NetworkProfileType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of network profile you wish to create. Valid values are listed
     * below.</p>
     */
    inline void SetType(NetworkProfileType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of network profile you wish to create. Valid values are listed
     * below.</p>
     */
    inline CreateNetworkProfileRequest& WithType(const NetworkProfileType& value) { SetType(value); return *this;}

    /**
     * <p>The type of network profile you wish to create. Valid values are listed
     * below.</p>
     */
    inline CreateNetworkProfileRequest& WithType(NetworkProfileType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The data throughput rate in bits per second, as an integer from 0 to
     * 104857600.</p>
     */
    inline long long GetUplinkBandwidthBits() const{ return m_uplinkBandwidthBits; }

    /**
     * <p>The data throughput rate in bits per second, as an integer from 0 to
     * 104857600.</p>
     */
    inline bool UplinkBandwidthBitsHasBeenSet() const { return m_uplinkBandwidthBitsHasBeenSet; }

    /**
     * <p>The data throughput rate in bits per second, as an integer from 0 to
     * 104857600.</p>
     */
    inline void SetUplinkBandwidthBits(long long value) { m_uplinkBandwidthBitsHasBeenSet = true; m_uplinkBandwidthBits = value; }

    /**
     * <p>The data throughput rate in bits per second, as an integer from 0 to
     * 104857600.</p>
     */
    inline CreateNetworkProfileRequest& WithUplinkBandwidthBits(long long value) { SetUplinkBandwidthBits(value); return *this;}


    /**
     * <p>The data throughput rate in bits per second, as an integer from 0 to
     * 104857600.</p>
     */
    inline long long GetDownlinkBandwidthBits() const{ return m_downlinkBandwidthBits; }

    /**
     * <p>The data throughput rate in bits per second, as an integer from 0 to
     * 104857600.</p>
     */
    inline bool DownlinkBandwidthBitsHasBeenSet() const { return m_downlinkBandwidthBitsHasBeenSet; }

    /**
     * <p>The data throughput rate in bits per second, as an integer from 0 to
     * 104857600.</p>
     */
    inline void SetDownlinkBandwidthBits(long long value) { m_downlinkBandwidthBitsHasBeenSet = true; m_downlinkBandwidthBits = value; }

    /**
     * <p>The data throughput rate in bits per second, as an integer from 0 to
     * 104857600.</p>
     */
    inline CreateNetworkProfileRequest& WithDownlinkBandwidthBits(long long value) { SetDownlinkBandwidthBits(value); return *this;}


    /**
     * <p>Delay time for all packets to destination in milliseconds as an integer from
     * 0 to 2000.</p>
     */
    inline long long GetUplinkDelayMs() const{ return m_uplinkDelayMs; }

    /**
     * <p>Delay time for all packets to destination in milliseconds as an integer from
     * 0 to 2000.</p>
     */
    inline bool UplinkDelayMsHasBeenSet() const { return m_uplinkDelayMsHasBeenSet; }

    /**
     * <p>Delay time for all packets to destination in milliseconds as an integer from
     * 0 to 2000.</p>
     */
    inline void SetUplinkDelayMs(long long value) { m_uplinkDelayMsHasBeenSet = true; m_uplinkDelayMs = value; }

    /**
     * <p>Delay time for all packets to destination in milliseconds as an integer from
     * 0 to 2000.</p>
     */
    inline CreateNetworkProfileRequest& WithUplinkDelayMs(long long value) { SetUplinkDelayMs(value); return *this;}


    /**
     * <p>Delay time for all packets to destination in milliseconds as an integer from
     * 0 to 2000.</p>
     */
    inline long long GetDownlinkDelayMs() const{ return m_downlinkDelayMs; }

    /**
     * <p>Delay time for all packets to destination in milliseconds as an integer from
     * 0 to 2000.</p>
     */
    inline bool DownlinkDelayMsHasBeenSet() const { return m_downlinkDelayMsHasBeenSet; }

    /**
     * <p>Delay time for all packets to destination in milliseconds as an integer from
     * 0 to 2000.</p>
     */
    inline void SetDownlinkDelayMs(long long value) { m_downlinkDelayMsHasBeenSet = true; m_downlinkDelayMs = value; }

    /**
     * <p>Delay time for all packets to destination in milliseconds as an integer from
     * 0 to 2000.</p>
     */
    inline CreateNetworkProfileRequest& WithDownlinkDelayMs(long long value) { SetDownlinkDelayMs(value); return *this;}


    /**
     * <p>Time variation in the delay of received packets in milliseconds as an integer
     * from 0 to 2000.</p>
     */
    inline long long GetUplinkJitterMs() const{ return m_uplinkJitterMs; }

    /**
     * <p>Time variation in the delay of received packets in milliseconds as an integer
     * from 0 to 2000.</p>
     */
    inline bool UplinkJitterMsHasBeenSet() const { return m_uplinkJitterMsHasBeenSet; }

    /**
     * <p>Time variation in the delay of received packets in milliseconds as an integer
     * from 0 to 2000.</p>
     */
    inline void SetUplinkJitterMs(long long value) { m_uplinkJitterMsHasBeenSet = true; m_uplinkJitterMs = value; }

    /**
     * <p>Time variation in the delay of received packets in milliseconds as an integer
     * from 0 to 2000.</p>
     */
    inline CreateNetworkProfileRequest& WithUplinkJitterMs(long long value) { SetUplinkJitterMs(value); return *this;}


    /**
     * <p>Time variation in the delay of received packets in milliseconds as an integer
     * from 0 to 2000.</p>
     */
    inline long long GetDownlinkJitterMs() const{ return m_downlinkJitterMs; }

    /**
     * <p>Time variation in the delay of received packets in milliseconds as an integer
     * from 0 to 2000.</p>
     */
    inline bool DownlinkJitterMsHasBeenSet() const { return m_downlinkJitterMsHasBeenSet; }

    /**
     * <p>Time variation in the delay of received packets in milliseconds as an integer
     * from 0 to 2000.</p>
     */
    inline void SetDownlinkJitterMs(long long value) { m_downlinkJitterMsHasBeenSet = true; m_downlinkJitterMs = value; }

    /**
     * <p>Time variation in the delay of received packets in milliseconds as an integer
     * from 0 to 2000.</p>
     */
    inline CreateNetworkProfileRequest& WithDownlinkJitterMs(long long value) { SetDownlinkJitterMs(value); return *this;}


    /**
     * <p>Proportion of transmitted packets that fail to arrive from 0 to 100
     * percent.</p>
     */
    inline int GetUplinkLossPercent() const{ return m_uplinkLossPercent; }

    /**
     * <p>Proportion of transmitted packets that fail to arrive from 0 to 100
     * percent.</p>
     */
    inline bool UplinkLossPercentHasBeenSet() const { return m_uplinkLossPercentHasBeenSet; }

    /**
     * <p>Proportion of transmitted packets that fail to arrive from 0 to 100
     * percent.</p>
     */
    inline void SetUplinkLossPercent(int value) { m_uplinkLossPercentHasBeenSet = true; m_uplinkLossPercent = value; }

    /**
     * <p>Proportion of transmitted packets that fail to arrive from 0 to 100
     * percent.</p>
     */
    inline CreateNetworkProfileRequest& WithUplinkLossPercent(int value) { SetUplinkLossPercent(value); return *this;}


    /**
     * <p>Proportion of received packets that fail to arrive from 0 to 100 percent.</p>
     */
    inline int GetDownlinkLossPercent() const{ return m_downlinkLossPercent; }

    /**
     * <p>Proportion of received packets that fail to arrive from 0 to 100 percent.</p>
     */
    inline bool DownlinkLossPercentHasBeenSet() const { return m_downlinkLossPercentHasBeenSet; }

    /**
     * <p>Proportion of received packets that fail to arrive from 0 to 100 percent.</p>
     */
    inline void SetDownlinkLossPercent(int value) { m_downlinkLossPercentHasBeenSet = true; m_downlinkLossPercent = value; }

    /**
     * <p>Proportion of received packets that fail to arrive from 0 to 100 percent.</p>
     */
    inline CreateNetworkProfileRequest& WithDownlinkLossPercent(int value) { SetDownlinkLossPercent(value); return *this;}

  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    NetworkProfileType m_type;
    bool m_typeHasBeenSet;

    long long m_uplinkBandwidthBits;
    bool m_uplinkBandwidthBitsHasBeenSet;

    long long m_downlinkBandwidthBits;
    bool m_downlinkBandwidthBitsHasBeenSet;

    long long m_uplinkDelayMs;
    bool m_uplinkDelayMsHasBeenSet;

    long long m_downlinkDelayMs;
    bool m_downlinkDelayMsHasBeenSet;

    long long m_uplinkJitterMs;
    bool m_uplinkJitterMsHasBeenSet;

    long long m_downlinkJitterMs;
    bool m_downlinkJitterMsHasBeenSet;

    int m_uplinkLossPercent;
    bool m_uplinkLossPercentHasBeenSet;

    int m_downlinkLossPercent;
    bool m_downlinkLossPercentHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
