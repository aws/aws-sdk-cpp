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
  class AssignPrivateNatGatewayAddressRequest : public EC2Request
  {
  public:
    AWS_EC2_API AssignPrivateNatGatewayAddressRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssignPrivateNatGatewayAddress"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the NAT gateway.</p>
     */
    inline const Aws::String& GetNatGatewayId() const { return m_natGatewayId; }
    inline bool NatGatewayIdHasBeenSet() const { return m_natGatewayIdHasBeenSet; }
    template<typename NatGatewayIdT = Aws::String>
    void SetNatGatewayId(NatGatewayIdT&& value) { m_natGatewayIdHasBeenSet = true; m_natGatewayId = std::forward<NatGatewayIdT>(value); }
    template<typename NatGatewayIdT = Aws::String>
    AssignPrivateNatGatewayAddressRequest& WithNatGatewayId(NatGatewayIdT&& value) { SetNatGatewayId(std::forward<NatGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private IPv4 addresses you want to assign to the private NAT gateway.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrivateIpAddresses() const { return m_privateIpAddresses; }
    inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }
    template<typename PrivateIpAddressesT = Aws::Vector<Aws::String>>
    void SetPrivateIpAddresses(PrivateIpAddressesT&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::forward<PrivateIpAddressesT>(value); }
    template<typename PrivateIpAddressesT = Aws::Vector<Aws::String>>
    AssignPrivateNatGatewayAddressRequest& WithPrivateIpAddresses(PrivateIpAddressesT&& value) { SetPrivateIpAddresses(std::forward<PrivateIpAddressesT>(value)); return *this;}
    template<typename PrivateIpAddressesT = Aws::String>
    AssignPrivateNatGatewayAddressRequest& AddPrivateIpAddresses(PrivateIpAddressesT&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.emplace_back(std::forward<PrivateIpAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of private IP addresses to assign to the NAT gateway. You can't
     * specify this parameter when also specifying private IP addresses.</p>
     */
    inline int GetPrivateIpAddressCount() const { return m_privateIpAddressCount; }
    inline bool PrivateIpAddressCountHasBeenSet() const { return m_privateIpAddressCountHasBeenSet; }
    inline void SetPrivateIpAddressCount(int value) { m_privateIpAddressCountHasBeenSet = true; m_privateIpAddressCount = value; }
    inline AssignPrivateNatGatewayAddressRequest& WithPrivateIpAddressCount(int value) { SetPrivateIpAddressCount(value); return *this;}
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
    inline AssignPrivateNatGatewayAddressRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_natGatewayId;
    bool m_natGatewayIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_privateIpAddresses;
    bool m_privateIpAddressesHasBeenSet = false;

    int m_privateIpAddressCount{0};
    bool m_privateIpAddressCountHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
