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
  class CreateNetworkProfileRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API CreateNetworkProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNetworkProfile"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to create a
     * network profile.</p>
     */
    inline const Aws::String& GetProjectArn() const { return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    template<typename ProjectArnT = Aws::String>
    void SetProjectArn(ProjectArnT&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::forward<ProjectArnT>(value); }
    template<typename ProjectArnT = Aws::String>
    CreateNetworkProfileRequest& WithProjectArn(ProjectArnT&& value) { SetProjectArn(std::forward<ProjectArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the new network profile.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateNetworkProfileRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the network profile.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateNetworkProfileRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of network profile to create. Valid values are listed here.</p>
     */
    inline NetworkProfileType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(NetworkProfileType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateNetworkProfileRequest& WithType(NetworkProfileType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data throughput rate in bits per second, as an integer from 0 to
     * 104857600.</p>
     */
    inline long long GetUplinkBandwidthBits() const { return m_uplinkBandwidthBits; }
    inline bool UplinkBandwidthBitsHasBeenSet() const { return m_uplinkBandwidthBitsHasBeenSet; }
    inline void SetUplinkBandwidthBits(long long value) { m_uplinkBandwidthBitsHasBeenSet = true; m_uplinkBandwidthBits = value; }
    inline CreateNetworkProfileRequest& WithUplinkBandwidthBits(long long value) { SetUplinkBandwidthBits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data throughput rate in bits per second, as an integer from 0 to
     * 104857600.</p>
     */
    inline long long GetDownlinkBandwidthBits() const { return m_downlinkBandwidthBits; }
    inline bool DownlinkBandwidthBitsHasBeenSet() const { return m_downlinkBandwidthBitsHasBeenSet; }
    inline void SetDownlinkBandwidthBits(long long value) { m_downlinkBandwidthBitsHasBeenSet = true; m_downlinkBandwidthBits = value; }
    inline CreateNetworkProfileRequest& WithDownlinkBandwidthBits(long long value) { SetDownlinkBandwidthBits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Delay time for all packets to destination in milliseconds as an integer from
     * 0 to 2000.</p>
     */
    inline long long GetUplinkDelayMs() const { return m_uplinkDelayMs; }
    inline bool UplinkDelayMsHasBeenSet() const { return m_uplinkDelayMsHasBeenSet; }
    inline void SetUplinkDelayMs(long long value) { m_uplinkDelayMsHasBeenSet = true; m_uplinkDelayMs = value; }
    inline CreateNetworkProfileRequest& WithUplinkDelayMs(long long value) { SetUplinkDelayMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Delay time for all packets to destination in milliseconds as an integer from
     * 0 to 2000.</p>
     */
    inline long long GetDownlinkDelayMs() const { return m_downlinkDelayMs; }
    inline bool DownlinkDelayMsHasBeenSet() const { return m_downlinkDelayMsHasBeenSet; }
    inline void SetDownlinkDelayMs(long long value) { m_downlinkDelayMsHasBeenSet = true; m_downlinkDelayMs = value; }
    inline CreateNetworkProfileRequest& WithDownlinkDelayMs(long long value) { SetDownlinkDelayMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time variation in the delay of received packets in milliseconds as an integer
     * from 0 to 2000.</p>
     */
    inline long long GetUplinkJitterMs() const { return m_uplinkJitterMs; }
    inline bool UplinkJitterMsHasBeenSet() const { return m_uplinkJitterMsHasBeenSet; }
    inline void SetUplinkJitterMs(long long value) { m_uplinkJitterMsHasBeenSet = true; m_uplinkJitterMs = value; }
    inline CreateNetworkProfileRequest& WithUplinkJitterMs(long long value) { SetUplinkJitterMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time variation in the delay of received packets in milliseconds as an integer
     * from 0 to 2000.</p>
     */
    inline long long GetDownlinkJitterMs() const { return m_downlinkJitterMs; }
    inline bool DownlinkJitterMsHasBeenSet() const { return m_downlinkJitterMsHasBeenSet; }
    inline void SetDownlinkJitterMs(long long value) { m_downlinkJitterMsHasBeenSet = true; m_downlinkJitterMs = value; }
    inline CreateNetworkProfileRequest& WithDownlinkJitterMs(long long value) { SetDownlinkJitterMs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Proportion of transmitted packets that fail to arrive from 0 to 100
     * percent.</p>
     */
    inline int GetUplinkLossPercent() const { return m_uplinkLossPercent; }
    inline bool UplinkLossPercentHasBeenSet() const { return m_uplinkLossPercentHasBeenSet; }
    inline void SetUplinkLossPercent(int value) { m_uplinkLossPercentHasBeenSet = true; m_uplinkLossPercent = value; }
    inline CreateNetworkProfileRequest& WithUplinkLossPercent(int value) { SetUplinkLossPercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Proportion of received packets that fail to arrive from 0 to 100 percent.</p>
     */
    inline int GetDownlinkLossPercent() const { return m_downlinkLossPercent; }
    inline bool DownlinkLossPercentHasBeenSet() const { return m_downlinkLossPercentHasBeenSet; }
    inline void SetDownlinkLossPercent(int value) { m_downlinkLossPercentHasBeenSet = true; m_downlinkLossPercent = value; }
    inline CreateNetworkProfileRequest& WithDownlinkLossPercent(int value) { SetDownlinkLossPercent(value); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    NetworkProfileType m_type{NetworkProfileType::NOT_SET};
    bool m_typeHasBeenSet = false;

    long long m_uplinkBandwidthBits{0};
    bool m_uplinkBandwidthBitsHasBeenSet = false;

    long long m_downlinkBandwidthBits{0};
    bool m_downlinkBandwidthBitsHasBeenSet = false;

    long long m_uplinkDelayMs{0};
    bool m_uplinkDelayMsHasBeenSet = false;

    long long m_downlinkDelayMs{0};
    bool m_downlinkDelayMsHasBeenSet = false;

    long long m_uplinkJitterMs{0};
    bool m_uplinkJitterMsHasBeenSet = false;

    long long m_downlinkJitterMs{0};
    bool m_downlinkJitterMsHasBeenSet = false;

    int m_uplinkLossPercent{0};
    bool m_uplinkLossPercentHasBeenSet = false;

    int m_downlinkLossPercent{0};
    bool m_downlinkLossPercentHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
