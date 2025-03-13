/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class RegisterTransitGatewayMulticastGroupSourcesRequest : public EC2Request
  {
  public:
    AWS_EC2_API RegisterTransitGatewayMulticastGroupSourcesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterTransitGatewayMulticastGroupSources"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline const Aws::String& GetTransitGatewayMulticastDomainId() const { return m_transitGatewayMulticastDomainId; }
    inline bool TransitGatewayMulticastDomainIdHasBeenSet() const { return m_transitGatewayMulticastDomainIdHasBeenSet; }
    template<typename TransitGatewayMulticastDomainIdT = Aws::String>
    void SetTransitGatewayMulticastDomainId(TransitGatewayMulticastDomainIdT&& value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId = std::forward<TransitGatewayMulticastDomainIdT>(value); }
    template<typename TransitGatewayMulticastDomainIdT = Aws::String>
    RegisterTransitGatewayMulticastGroupSourcesRequest& WithTransitGatewayMulticastDomainId(TransitGatewayMulticastDomainIdT&& value) { SetTransitGatewayMulticastDomainId(std::forward<TransitGatewayMulticastDomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline const Aws::String& GetGroupIpAddress() const { return m_groupIpAddress; }
    inline bool GroupIpAddressHasBeenSet() const { return m_groupIpAddressHasBeenSet; }
    template<typename GroupIpAddressT = Aws::String>
    void SetGroupIpAddress(GroupIpAddressT&& value) { m_groupIpAddressHasBeenSet = true; m_groupIpAddress = std::forward<GroupIpAddressT>(value); }
    template<typename GroupIpAddressT = Aws::String>
    RegisterTransitGatewayMulticastGroupSourcesRequest& WithGroupIpAddress(GroupIpAddressT&& value) { SetGroupIpAddress(std::forward<GroupIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group sources' network interface IDs to register with the transit gateway
     * multicast group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNetworkInterfaceIds() const { return m_networkInterfaceIds; }
    inline bool NetworkInterfaceIdsHasBeenSet() const { return m_networkInterfaceIdsHasBeenSet; }
    template<typename NetworkInterfaceIdsT = Aws::Vector<Aws::String>>
    void SetNetworkInterfaceIds(NetworkInterfaceIdsT&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds = std::forward<NetworkInterfaceIdsT>(value); }
    template<typename NetworkInterfaceIdsT = Aws::Vector<Aws::String>>
    RegisterTransitGatewayMulticastGroupSourcesRequest& WithNetworkInterfaceIds(NetworkInterfaceIdsT&& value) { SetNetworkInterfaceIds(std::forward<NetworkInterfaceIdsT>(value)); return *this;}
    template<typename NetworkInterfaceIdsT = Aws::String>
    RegisterTransitGatewayMulticastGroupSourcesRequest& AddNetworkInterfaceIds(NetworkInterfaceIdsT&& value) { m_networkInterfaceIdsHasBeenSet = true; m_networkInterfaceIds.emplace_back(std::forward<NetworkInterfaceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline RegisterTransitGatewayMulticastGroupSourcesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_transitGatewayMulticastDomainId;
    bool m_transitGatewayMulticastDomainIdHasBeenSet = false;

    Aws::String m_groupIpAddress;
    bool m_groupIpAddressHasBeenSet = false;

    Aws::Vector<Aws::String> m_networkInterfaceIds;
    bool m_networkInterfaceIdsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
