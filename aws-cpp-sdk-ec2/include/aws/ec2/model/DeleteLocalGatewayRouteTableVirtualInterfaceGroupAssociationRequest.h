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
  class DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociation"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p> The ID of the local gateway route table virtual interface group association.
     * </p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableVirtualInterfaceGroupAssociationId() const{ return m_localGatewayRouteTableVirtualInterfaceGroupAssociationId; }

    /**
     * <p> The ID of the local gateway route table virtual interface group association.
     * </p>
     */
    inline bool LocalGatewayRouteTableVirtualInterfaceGroupAssociationIdHasBeenSet() const { return m_localGatewayRouteTableVirtualInterfaceGroupAssociationIdHasBeenSet; }

    /**
     * <p> The ID of the local gateway route table virtual interface group association.
     * </p>
     */
    inline void SetLocalGatewayRouteTableVirtualInterfaceGroupAssociationId(const Aws::String& value) { m_localGatewayRouteTableVirtualInterfaceGroupAssociationIdHasBeenSet = true; m_localGatewayRouteTableVirtualInterfaceGroupAssociationId = value; }

    /**
     * <p> The ID of the local gateway route table virtual interface group association.
     * </p>
     */
    inline void SetLocalGatewayRouteTableVirtualInterfaceGroupAssociationId(Aws::String&& value) { m_localGatewayRouteTableVirtualInterfaceGroupAssociationIdHasBeenSet = true; m_localGatewayRouteTableVirtualInterfaceGroupAssociationId = std::move(value); }

    /**
     * <p> The ID of the local gateway route table virtual interface group association.
     * </p>
     */
    inline void SetLocalGatewayRouteTableVirtualInterfaceGroupAssociationId(const char* value) { m_localGatewayRouteTableVirtualInterfaceGroupAssociationIdHasBeenSet = true; m_localGatewayRouteTableVirtualInterfaceGroupAssociationId.assign(value); }

    /**
     * <p> The ID of the local gateway route table virtual interface group association.
     * </p>
     */
    inline DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& WithLocalGatewayRouteTableVirtualInterfaceGroupAssociationId(const Aws::String& value) { SetLocalGatewayRouteTableVirtualInterfaceGroupAssociationId(value); return *this;}

    /**
     * <p> The ID of the local gateway route table virtual interface group association.
     * </p>
     */
    inline DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& WithLocalGatewayRouteTableVirtualInterfaceGroupAssociationId(Aws::String&& value) { SetLocalGatewayRouteTableVirtualInterfaceGroupAssociationId(std::move(value)); return *this;}

    /**
     * <p> The ID of the local gateway route table virtual interface group association.
     * </p>
     */
    inline DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& WithLocalGatewayRouteTableVirtualInterfaceGroupAssociationId(const char* value) { SetLocalGatewayRouteTableVirtualInterfaceGroupAssociationId(value); return *this;}


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
    inline DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_localGatewayRouteTableVirtualInterfaceGroupAssociationId;
    bool m_localGatewayRouteTableVirtualInterfaceGroupAssociationIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
