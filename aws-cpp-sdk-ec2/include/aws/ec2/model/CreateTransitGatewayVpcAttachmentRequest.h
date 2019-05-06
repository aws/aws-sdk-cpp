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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/CreateTransitGatewayVpcAttachmentRequestOptions.h>
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
  class AWS_EC2_API CreateTransitGatewayVpcAttachmentRequest : public EC2Request
  {
  public:
    CreateTransitGatewayVpcAttachmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTransitGatewayVpcAttachment"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const{ return m_transitGatewayId; }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline bool TransitGatewayIdHasBeenSet() const { return m_transitGatewayIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline void SetTransitGatewayId(const Aws::String& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = value; }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline void SetTransitGatewayId(Aws::String&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::move(value); }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline void SetTransitGatewayId(const char* value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId.assign(value); }

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequest& WithTransitGatewayId(const Aws::String& value) { SetTransitGatewayId(value); return *this;}

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequest& WithTransitGatewayId(Aws::String&& value) { SetTransitGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequest& WithTransitGatewayId(const char* value) { SetTransitGatewayId(value); return *this;}


    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The IDs of one or more subnets. You can specify only one subnet per
     * Availability Zone. You must specify at least one subnet, but we recommend that
     * you specify two subnets for better availability. The transit gateway uses one IP
     * address from each specified subnet.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The IDs of one or more subnets. You can specify only one subnet per
     * Availability Zone. You must specify at least one subnet, but we recommend that
     * you specify two subnets for better availability. The transit gateway uses one IP
     * address from each specified subnet.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The IDs of one or more subnets. You can specify only one subnet per
     * Availability Zone. You must specify at least one subnet, but we recommend that
     * you specify two subnets for better availability. The transit gateway uses one IP
     * address from each specified subnet.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The IDs of one or more subnets. You can specify only one subnet per
     * Availability Zone. You must specify at least one subnet, but we recommend that
     * you specify two subnets for better availability. The transit gateway uses one IP
     * address from each specified subnet.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The IDs of one or more subnets. You can specify only one subnet per
     * Availability Zone. You must specify at least one subnet, but we recommend that
     * you specify two subnets for better availability. The transit gateway uses one IP
     * address from each specified subnet.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The IDs of one or more subnets. You can specify only one subnet per
     * Availability Zone. You must specify at least one subnet, but we recommend that
     * you specify two subnets for better availability. The transit gateway uses one IP
     * address from each specified subnet.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of one or more subnets. You can specify only one subnet per
     * Availability Zone. You must specify at least one subnet, but we recommend that
     * you specify two subnets for better availability. The transit gateway uses one IP
     * address from each specified subnet.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The IDs of one or more subnets. You can specify only one subnet per
     * Availability Zone. You must specify at least one subnet, but we recommend that
     * you specify two subnets for better availability. The transit gateway uses one IP
     * address from each specified subnet.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of one or more subnets. You can specify only one subnet per
     * Availability Zone. You must specify at least one subnet, but we recommend that
     * you specify two subnets for better availability. The transit gateway uses one IP
     * address from each specified subnet.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The VPC attachment options.</p>
     */
    inline const CreateTransitGatewayVpcAttachmentRequestOptions& GetOptions() const{ return m_options; }

    /**
     * <p>The VPC attachment options.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The VPC attachment options.</p>
     */
    inline void SetOptions(const CreateTransitGatewayVpcAttachmentRequestOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The VPC attachment options.</p>
     */
    inline void SetOptions(CreateTransitGatewayVpcAttachmentRequestOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The VPC attachment options.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequest& WithOptions(const CreateTransitGatewayVpcAttachmentRequestOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>The VPC attachment options.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequest& WithOptions(CreateTransitGatewayVpcAttachmentRequestOptions&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>The tags to apply to the VPC attachment.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the VPC attachment.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the VPC attachment.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the VPC attachment.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the VPC attachment.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the VPC attachment.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the VPC attachment.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the VPC attachment.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


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
    inline CreateTransitGatewayVpcAttachmentRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    CreateTransitGatewayVpcAttachmentRequestOptions m_options;
    bool m_optionsHasBeenSet;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
