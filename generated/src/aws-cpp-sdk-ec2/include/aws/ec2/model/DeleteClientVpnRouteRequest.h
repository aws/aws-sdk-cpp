/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class DeleteClientVpnRouteRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeleteClientVpnRouteRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteClientVpnRoute"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Client VPN endpoint from which the route is to be deleted.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const { return m_clientVpnEndpointId; }
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }
    template<typename ClientVpnEndpointIdT = Aws::String>
    void SetClientVpnEndpointId(ClientVpnEndpointIdT&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::forward<ClientVpnEndpointIdT>(value); }
    template<typename ClientVpnEndpointIdT = Aws::String>
    DeleteClientVpnRouteRequest& WithClientVpnEndpointId(ClientVpnEndpointIdT&& value) { SetClientVpnEndpointId(std::forward<ClientVpnEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the target subnet used by the route.</p>
     */
    inline const Aws::String& GetTargetVpcSubnetId() const { return m_targetVpcSubnetId; }
    inline bool TargetVpcSubnetIdHasBeenSet() const { return m_targetVpcSubnetIdHasBeenSet; }
    template<typename TargetVpcSubnetIdT = Aws::String>
    void SetTargetVpcSubnetId(TargetVpcSubnetIdT&& value) { m_targetVpcSubnetIdHasBeenSet = true; m_targetVpcSubnetId = std::forward<TargetVpcSubnetIdT>(value); }
    template<typename TargetVpcSubnetIdT = Aws::String>
    DeleteClientVpnRouteRequest& WithTargetVpcSubnetId(TargetVpcSubnetIdT&& value) { SetTargetVpcSubnetId(std::forward<TargetVpcSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 address range, in CIDR notation, of the route to be deleted.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const { return m_destinationCidrBlock; }
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }
    template<typename DestinationCidrBlockT = Aws::String>
    void SetDestinationCidrBlock(DestinationCidrBlockT&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::forward<DestinationCidrBlockT>(value); }
    template<typename DestinationCidrBlockT = Aws::String>
    DeleteClientVpnRouteRequest& WithDestinationCidrBlock(DestinationCidrBlockT&& value) { SetDestinationCidrBlock(std::forward<DestinationCidrBlockT>(value)); return *this;}
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
    inline DeleteClientVpnRouteRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet = false;

    Aws::String m_targetVpcSubnetId;
    bool m_targetVpcSubnetIdHasBeenSet = false;

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
