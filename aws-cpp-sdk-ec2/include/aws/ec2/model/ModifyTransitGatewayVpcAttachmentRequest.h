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
#include <aws/ec2/model/ModifyTransitGatewayVpcAttachmentRequestOptions.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API ModifyTransitGatewayVpcAttachmentRequest : public EC2Request
  {
  public:
    ModifyTransitGatewayVpcAttachmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyTransitGatewayVpcAttachment"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const{ return m_transitGatewayAttachmentId; }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline void SetTransitGatewayAttachmentId(const Aws::String& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = value; }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline void SetTransitGatewayAttachmentId(Aws::String&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::move(value); }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline void SetTransitGatewayAttachmentId(const char* value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId.assign(value); }

    /**
     * <p>The ID of the attachment.</p>
     */
    inline ModifyTransitGatewayVpcAttachmentRequest& WithTransitGatewayAttachmentId(const Aws::String& value) { SetTransitGatewayAttachmentId(value); return *this;}

    /**
     * <p>The ID of the attachment.</p>
     */
    inline ModifyTransitGatewayVpcAttachmentRequest& WithTransitGatewayAttachmentId(Aws::String&& value) { SetTransitGatewayAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the attachment.</p>
     */
    inline ModifyTransitGatewayVpcAttachmentRequest& WithTransitGatewayAttachmentId(const char* value) { SetTransitGatewayAttachmentId(value); return *this;}


    /**
     * <p>The IDs of one or more subnets to add. You can specify at most one subnet per
     * Availability Zone.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddSubnetIds() const{ return m_addSubnetIds; }

    /**
     * <p>The IDs of one or more subnets to add. You can specify at most one subnet per
     * Availability Zone.</p>
     */
    inline bool AddSubnetIdsHasBeenSet() const { return m_addSubnetIdsHasBeenSet; }

    /**
     * <p>The IDs of one or more subnets to add. You can specify at most one subnet per
     * Availability Zone.</p>
     */
    inline void SetAddSubnetIds(const Aws::Vector<Aws::String>& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds = value; }

    /**
     * <p>The IDs of one or more subnets to add. You can specify at most one subnet per
     * Availability Zone.</p>
     */
    inline void SetAddSubnetIds(Aws::Vector<Aws::String>&& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds = std::move(value); }

    /**
     * <p>The IDs of one or more subnets to add. You can specify at most one subnet per
     * Availability Zone.</p>
     */
    inline ModifyTransitGatewayVpcAttachmentRequest& WithAddSubnetIds(const Aws::Vector<Aws::String>& value) { SetAddSubnetIds(value); return *this;}

    /**
     * <p>The IDs of one or more subnets to add. You can specify at most one subnet per
     * Availability Zone.</p>
     */
    inline ModifyTransitGatewayVpcAttachmentRequest& WithAddSubnetIds(Aws::Vector<Aws::String>&& value) { SetAddSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of one or more subnets to add. You can specify at most one subnet per
     * Availability Zone.</p>
     */
    inline ModifyTransitGatewayVpcAttachmentRequest& AddAddSubnetIds(const Aws::String& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds.push_back(value); return *this; }

    /**
     * <p>The IDs of one or more subnets to add. You can specify at most one subnet per
     * Availability Zone.</p>
     */
    inline ModifyTransitGatewayVpcAttachmentRequest& AddAddSubnetIds(Aws::String&& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of one or more subnets to add. You can specify at most one subnet per
     * Availability Zone.</p>
     */
    inline ModifyTransitGatewayVpcAttachmentRequest& AddAddSubnetIds(const char* value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds.push_back(value); return *this; }


    /**
     * <p>The IDs of one or more subnets to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveSubnetIds() const{ return m_removeSubnetIds; }

    /**
     * <p>The IDs of one or more subnets to remove.</p>
     */
    inline bool RemoveSubnetIdsHasBeenSet() const { return m_removeSubnetIdsHasBeenSet; }

    /**
     * <p>The IDs of one or more subnets to remove.</p>
     */
    inline void SetRemoveSubnetIds(const Aws::Vector<Aws::String>& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds = value; }

    /**
     * <p>The IDs of one or more subnets to remove.</p>
     */
    inline void SetRemoveSubnetIds(Aws::Vector<Aws::String>&& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds = std::move(value); }

    /**
     * <p>The IDs of one or more subnets to remove.</p>
     */
    inline ModifyTransitGatewayVpcAttachmentRequest& WithRemoveSubnetIds(const Aws::Vector<Aws::String>& value) { SetRemoveSubnetIds(value); return *this;}

    /**
     * <p>The IDs of one or more subnets to remove.</p>
     */
    inline ModifyTransitGatewayVpcAttachmentRequest& WithRemoveSubnetIds(Aws::Vector<Aws::String>&& value) { SetRemoveSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of one or more subnets to remove.</p>
     */
    inline ModifyTransitGatewayVpcAttachmentRequest& AddRemoveSubnetIds(const Aws::String& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds.push_back(value); return *this; }

    /**
     * <p>The IDs of one or more subnets to remove.</p>
     */
    inline ModifyTransitGatewayVpcAttachmentRequest& AddRemoveSubnetIds(Aws::String&& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of one or more subnets to remove.</p>
     */
    inline ModifyTransitGatewayVpcAttachmentRequest& AddRemoveSubnetIds(const char* value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds.push_back(value); return *this; }


    /**
     * <p>The new VPC attachment options.</p>
     */
    inline const ModifyTransitGatewayVpcAttachmentRequestOptions& GetOptions() const{ return m_options; }

    /**
     * <p>The new VPC attachment options.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The new VPC attachment options.</p>
     */
    inline void SetOptions(const ModifyTransitGatewayVpcAttachmentRequestOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The new VPC attachment options.</p>
     */
    inline void SetOptions(ModifyTransitGatewayVpcAttachmentRequestOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The new VPC attachment options.</p>
     */
    inline ModifyTransitGatewayVpcAttachmentRequest& WithOptions(const ModifyTransitGatewayVpcAttachmentRequestOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>The new VPC attachment options.</p>
     */
    inline ModifyTransitGatewayVpcAttachmentRequest& WithOptions(ModifyTransitGatewayVpcAttachmentRequestOptions&& value) { SetOptions(std::move(value)); return *this;}


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
    inline ModifyTransitGatewayVpcAttachmentRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet;

    Aws::Vector<Aws::String> m_addSubnetIds;
    bool m_addSubnetIdsHasBeenSet;

    Aws::Vector<Aws::String> m_removeSubnetIds;
    bool m_removeSubnetIdsHasBeenSet;

    ModifyTransitGatewayVpcAttachmentRequestOptions m_options;
    bool m_optionsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
