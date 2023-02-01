/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociation"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p> The ID of the local gateway route table. </p>
     */
    inline const Aws::String& GetLocalGatewayRouteTableId() const{ return m_localGatewayRouteTableId; }

    /**
     * <p> The ID of the local gateway route table. </p>
     */
    inline bool LocalGatewayRouteTableIdHasBeenSet() const { return m_localGatewayRouteTableIdHasBeenSet; }

    /**
     * <p> The ID of the local gateway route table. </p>
     */
    inline void SetLocalGatewayRouteTableId(const Aws::String& value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId = value; }

    /**
     * <p> The ID of the local gateway route table. </p>
     */
    inline void SetLocalGatewayRouteTableId(Aws::String&& value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId = std::move(value); }

    /**
     * <p> The ID of the local gateway route table. </p>
     */
    inline void SetLocalGatewayRouteTableId(const char* value) { m_localGatewayRouteTableIdHasBeenSet = true; m_localGatewayRouteTableId.assign(value); }

    /**
     * <p> The ID of the local gateway route table. </p>
     */
    inline CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& WithLocalGatewayRouteTableId(const Aws::String& value) { SetLocalGatewayRouteTableId(value); return *this;}

    /**
     * <p> The ID of the local gateway route table. </p>
     */
    inline CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& WithLocalGatewayRouteTableId(Aws::String&& value) { SetLocalGatewayRouteTableId(std::move(value)); return *this;}

    /**
     * <p> The ID of the local gateway route table. </p>
     */
    inline CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& WithLocalGatewayRouteTableId(const char* value) { SetLocalGatewayRouteTableId(value); return *this;}


    /**
     * <p> The ID of the local gateway route table virtual interface group association.
     * </p>
     */
    inline const Aws::String& GetLocalGatewayVirtualInterfaceGroupId() const{ return m_localGatewayVirtualInterfaceGroupId; }

    /**
     * <p> The ID of the local gateway route table virtual interface group association.
     * </p>
     */
    inline bool LocalGatewayVirtualInterfaceGroupIdHasBeenSet() const { return m_localGatewayVirtualInterfaceGroupIdHasBeenSet; }

    /**
     * <p> The ID of the local gateway route table virtual interface group association.
     * </p>
     */
    inline void SetLocalGatewayVirtualInterfaceGroupId(const Aws::String& value) { m_localGatewayVirtualInterfaceGroupIdHasBeenSet = true; m_localGatewayVirtualInterfaceGroupId = value; }

    /**
     * <p> The ID of the local gateway route table virtual interface group association.
     * </p>
     */
    inline void SetLocalGatewayVirtualInterfaceGroupId(Aws::String&& value) { m_localGatewayVirtualInterfaceGroupIdHasBeenSet = true; m_localGatewayVirtualInterfaceGroupId = std::move(value); }

    /**
     * <p> The ID of the local gateway route table virtual interface group association.
     * </p>
     */
    inline void SetLocalGatewayVirtualInterfaceGroupId(const char* value) { m_localGatewayVirtualInterfaceGroupIdHasBeenSet = true; m_localGatewayVirtualInterfaceGroupId.assign(value); }

    /**
     * <p> The ID of the local gateway route table virtual interface group association.
     * </p>
     */
    inline CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& WithLocalGatewayVirtualInterfaceGroupId(const Aws::String& value) { SetLocalGatewayVirtualInterfaceGroupId(value); return *this;}

    /**
     * <p> The ID of the local gateway route table virtual interface group association.
     * </p>
     */
    inline CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& WithLocalGatewayVirtualInterfaceGroupId(Aws::String&& value) { SetLocalGatewayVirtualInterfaceGroupId(std::move(value)); return *this;}

    /**
     * <p> The ID of the local gateway route table virtual interface group association.
     * </p>
     */
    inline CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& WithLocalGatewayVirtualInterfaceGroupId(const char* value) { SetLocalGatewayVirtualInterfaceGroupId(value); return *this;}


    /**
     * <p> The tags assigned to the local gateway route table virtual interface group
     * association. </p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p> The tags assigned to the local gateway route table virtual interface group
     * association. </p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p> The tags assigned to the local gateway route table virtual interface group
     * association. </p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p> The tags assigned to the local gateway route table virtual interface group
     * association. </p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p> The tags assigned to the local gateway route table virtual interface group
     * association. </p>
     */
    inline CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p> The tags assigned to the local gateway route table virtual interface group
     * association. </p>
     */
    inline CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p> The tags assigned to the local gateway route table virtual interface group
     * association. </p>
     */
    inline CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p> The tags assigned to the local gateway route table virtual interface group
     * association. </p>
     */
    inline CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


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
    inline CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_localGatewayRouteTableId;
    bool m_localGatewayRouteTableIdHasBeenSet = false;

    Aws::String m_localGatewayVirtualInterfaceGroupId;
    bool m_localGatewayVirtualInterfaceGroupIdHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
