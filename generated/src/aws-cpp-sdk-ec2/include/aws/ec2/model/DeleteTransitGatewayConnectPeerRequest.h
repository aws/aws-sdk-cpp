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
    AWS_EC2_API DeleteTransitGatewayConnectPeerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTransitGatewayConnectPeer"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline const Aws::String& GetTransitGatewayConnectPeerId() const{ return m_transitGatewayConnectPeerId; }

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline bool TransitGatewayConnectPeerIdHasBeenSet() const { return m_transitGatewayConnectPeerIdHasBeenSet; }

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline void SetTransitGatewayConnectPeerId(const Aws::String& value) { m_transitGatewayConnectPeerIdHasBeenSet = true; m_transitGatewayConnectPeerId = value; }

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline void SetTransitGatewayConnectPeerId(Aws::String&& value) { m_transitGatewayConnectPeerIdHasBeenSet = true; m_transitGatewayConnectPeerId = std::move(value); }

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline void SetTransitGatewayConnectPeerId(const char* value) { m_transitGatewayConnectPeerIdHasBeenSet = true; m_transitGatewayConnectPeerId.assign(value); }

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline DeleteTransitGatewayConnectPeerRequest& WithTransitGatewayConnectPeerId(const Aws::String& value) { SetTransitGatewayConnectPeerId(value); return *this;}

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline DeleteTransitGatewayConnectPeerRequest& WithTransitGatewayConnectPeerId(Aws::String&& value) { SetTransitGatewayConnectPeerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline DeleteTransitGatewayConnectPeerRequest& WithTransitGatewayConnectPeerId(const char* value) { SetTransitGatewayConnectPeerId(value); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DeleteTransitGatewayConnectPeerRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_transitGatewayConnectPeerId;
    bool m_transitGatewayConnectPeerIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
