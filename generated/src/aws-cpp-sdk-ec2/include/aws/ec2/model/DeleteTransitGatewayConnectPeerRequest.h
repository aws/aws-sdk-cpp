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
  class DeleteTransitGatewayConnectPeerRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeleteTransitGatewayConnectPeerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTransitGatewayConnectPeer"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline const Aws::String& GetTransitGatewayConnectPeerId() const { return m_transitGatewayConnectPeerId; }
    inline bool TransitGatewayConnectPeerIdHasBeenSet() const { return m_transitGatewayConnectPeerIdHasBeenSet; }
    template<typename TransitGatewayConnectPeerIdT = Aws::String>
    void SetTransitGatewayConnectPeerId(TransitGatewayConnectPeerIdT&& value) { m_transitGatewayConnectPeerIdHasBeenSet = true; m_transitGatewayConnectPeerId = std::forward<TransitGatewayConnectPeerIdT>(value); }
    template<typename TransitGatewayConnectPeerIdT = Aws::String>
    DeleteTransitGatewayConnectPeerRequest& WithTransitGatewayConnectPeerId(TransitGatewayConnectPeerIdT&& value) { SetTransitGatewayConnectPeerId(std::forward<TransitGatewayConnectPeerIdT>(value)); return *this;}
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
    inline DeleteTransitGatewayConnectPeerRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_transitGatewayConnectPeerId;
    bool m_transitGatewayConnectPeerIdHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
