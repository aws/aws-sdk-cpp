/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ModifyTransitGatewayVpcAttachmentRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyTransitGatewayVpcAttachmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyTransitGatewayVpcAttachment"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the attachment.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const{ return m_transitGatewayAttachmentId; }
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }
    inline void SetTransitGatewayAttachmentId(const Aws::String& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = value; }
    inline void SetTransitGatewayAttachmentId(Aws::String&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::move(value); }
    inline void SetTransitGatewayAttachmentId(const char* value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId.assign(value); }
    inline ModifyTransitGatewayVpcAttachmentRequest& WithTransitGatewayAttachmentId(const Aws::String& value) { SetTransitGatewayAttachmentId(value); return *this;}
    inline ModifyTransitGatewayVpcAttachmentRequest& WithTransitGatewayAttachmentId(Aws::String&& value) { SetTransitGatewayAttachmentId(std::move(value)); return *this;}
    inline ModifyTransitGatewayVpcAttachmentRequest& WithTransitGatewayAttachmentId(const char* value) { SetTransitGatewayAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of one or more subnets to add. You can specify at most one subnet per
     * Availability Zone.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddSubnetIds() const{ return m_addSubnetIds; }
    inline bool AddSubnetIdsHasBeenSet() const { return m_addSubnetIdsHasBeenSet; }
    inline void SetAddSubnetIds(const Aws::Vector<Aws::String>& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds = value; }
    inline void SetAddSubnetIds(Aws::Vector<Aws::String>&& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds = std::move(value); }
    inline ModifyTransitGatewayVpcAttachmentRequest& WithAddSubnetIds(const Aws::Vector<Aws::String>& value) { SetAddSubnetIds(value); return *this;}
    inline ModifyTransitGatewayVpcAttachmentRequest& WithAddSubnetIds(Aws::Vector<Aws::String>&& value) { SetAddSubnetIds(std::move(value)); return *this;}
    inline ModifyTransitGatewayVpcAttachmentRequest& AddAddSubnetIds(const Aws::String& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds.push_back(value); return *this; }
    inline ModifyTransitGatewayVpcAttachmentRequest& AddAddSubnetIds(Aws::String&& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds.push_back(std::move(value)); return *this; }
    inline ModifyTransitGatewayVpcAttachmentRequest& AddAddSubnetIds(const char* value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of one or more subnets to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveSubnetIds() const{ return m_removeSubnetIds; }
    inline bool RemoveSubnetIdsHasBeenSet() const { return m_removeSubnetIdsHasBeenSet; }
    inline void SetRemoveSubnetIds(const Aws::Vector<Aws::String>& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds = value; }
    inline void SetRemoveSubnetIds(Aws::Vector<Aws::String>&& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds = std::move(value); }
    inline ModifyTransitGatewayVpcAttachmentRequest& WithRemoveSubnetIds(const Aws::Vector<Aws::String>& value) { SetRemoveSubnetIds(value); return *this;}
    inline ModifyTransitGatewayVpcAttachmentRequest& WithRemoveSubnetIds(Aws::Vector<Aws::String>&& value) { SetRemoveSubnetIds(std::move(value)); return *this;}
    inline ModifyTransitGatewayVpcAttachmentRequest& AddRemoveSubnetIds(const Aws::String& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds.push_back(value); return *this; }
    inline ModifyTransitGatewayVpcAttachmentRequest& AddRemoveSubnetIds(Aws::String&& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds.push_back(std::move(value)); return *this; }
    inline ModifyTransitGatewayVpcAttachmentRequest& AddRemoveSubnetIds(const char* value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The new VPC attachment options.</p>
     */
    inline const ModifyTransitGatewayVpcAttachmentRequestOptions& GetOptions() const{ return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    inline void SetOptions(const ModifyTransitGatewayVpcAttachmentRequestOptions& value) { m_optionsHasBeenSet = true; m_options = value; }
    inline void SetOptions(ModifyTransitGatewayVpcAttachmentRequestOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }
    inline ModifyTransitGatewayVpcAttachmentRequest& WithOptions(const ModifyTransitGatewayVpcAttachmentRequestOptions& value) { SetOptions(value); return *this;}
    inline ModifyTransitGatewayVpcAttachmentRequest& WithOptions(ModifyTransitGatewayVpcAttachmentRequestOptions&& value) { SetOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyTransitGatewayVpcAttachmentRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_addSubnetIds;
    bool m_addSubnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeSubnetIds;
    bool m_removeSubnetIdsHasBeenSet = false;

    ModifyTransitGatewayVpcAttachmentRequestOptions m_options;
    bool m_optionsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
