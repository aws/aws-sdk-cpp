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
  class DeleteLocalGatewayRouteRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeleteLocalGatewayRouteRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteLocalGatewayRoute"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The CIDR range for the route. This must match the CIDR for the route
     * exactly.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const { return m_destinationCidrBlock; }
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }
    template<typename DestinationCidrBlockT = Aws::String>
    void SetDestinationCidrBlock(DestinationCidrBlockT&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::forward<DestinationCidrBlockT>(value); }
    template<typename DestinationCidrBlockT = Aws::String>
    DeleteLocalGatewayRouteRequest& WithDestinationCidrBlock(DestinationCidrBlockT&& value) { SetDestinationCidrBlock(std::forward<DestinationCidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the local gateway route table.</p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableId() const { return m_localGatewayRouteTableId; }
    inline bool LocalGatewayRouteTableIdHasBeenSet() const { return m_localGatewayRouteTableIdHasBeenSet; }
    template<typename LocalGatewayRouteTableIdT = Aws::String>
    void SetLocalGatewayRouteTableId(LocalGatewayRouteTableIdT&& value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId = std::forward<LocalGatewayRouteTableIdT>(value); }
    template<typename LocalGatewayRouteTableIdT = Aws::String>
    DeleteLocalGatewayRouteRequest& WithLocalGatewayRouteTableId(LocalGatewayRouteTableIdT&& value) { SetLocalGatewayRouteTableId(std::forward<LocalGatewayRouteTableIdT>(value)); return *this;}
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
    inline DeleteLocalGatewayRouteRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Use a prefix list in place of <code>DestinationCidrBlock</code>. You cannot
     * use <code>DestinationPrefixListId</code> and <code>DestinationCidrBlock</code>
     * in the same request. </p>
     */
    inline const Aws::String& GetDestinationPrefixListId() const { return m_destinationPrefixListId; }
    inline bool DestinationPrefixListIdHasBeenSet() const { return m_destinationPrefixListIdHasBeenSet; }
    template<typename DestinationPrefixListIdT = Aws::String>
    void SetDestinationPrefixListId(DestinationPrefixListIdT&& value) { m_destinationPrefixListIdHasBeenSet = true; m_destinationPrefixListId = std::forward<DestinationPrefixListIdT>(value); }
    template<typename DestinationPrefixListIdT = Aws::String>
    DeleteLocalGatewayRouteRequest& WithDestinationPrefixListId(DestinationPrefixListIdT&& value) { SetDestinationPrefixListId(std::forward<DestinationPrefixListIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet = false;

    Aws::String m_localGatewayRouteTableId;
    bool m_localGatewayRouteTableIdHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_destinationPrefixListId;
    bool m_destinationPrefixListIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
