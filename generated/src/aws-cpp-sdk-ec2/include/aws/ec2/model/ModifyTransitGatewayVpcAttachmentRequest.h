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
    AWS_EC2_API ModifyTransitGatewayVpcAttachmentRequest() = default;

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
    inline const Aws::String& GetTransitGatewayAttachmentId() const { return m_transitGatewayAttachmentId; }
    inline bool TransitGatewayAttachmentIdHasBeenSet() const { return m_transitGatewayAttachmentIdHasBeenSet; }
    template<typename TransitGatewayAttachmentIdT = Aws::String>
    void SetTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::forward<TransitGatewayAttachmentIdT>(value); }
    template<typename TransitGatewayAttachmentIdT = Aws::String>
    ModifyTransitGatewayVpcAttachmentRequest& WithTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) { SetTransitGatewayAttachmentId(std::forward<TransitGatewayAttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of one or more subnets to add. You can specify at most one subnet per
     * Availability Zone.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddSubnetIds() const { return m_addSubnetIds; }
    inline bool AddSubnetIdsHasBeenSet() const { return m_addSubnetIdsHasBeenSet; }
    template<typename AddSubnetIdsT = Aws::Vector<Aws::String>>
    void SetAddSubnetIds(AddSubnetIdsT&& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds = std::forward<AddSubnetIdsT>(value); }
    template<typename AddSubnetIdsT = Aws::Vector<Aws::String>>
    ModifyTransitGatewayVpcAttachmentRequest& WithAddSubnetIds(AddSubnetIdsT&& value) { SetAddSubnetIds(std::forward<AddSubnetIdsT>(value)); return *this;}
    template<typename AddSubnetIdsT = Aws::String>
    ModifyTransitGatewayVpcAttachmentRequest& AddAddSubnetIds(AddSubnetIdsT&& value) { m_addSubnetIdsHasBeenSet = true; m_addSubnetIds.emplace_back(std::forward<AddSubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of one or more subnets to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveSubnetIds() const { return m_removeSubnetIds; }
    inline bool RemoveSubnetIdsHasBeenSet() const { return m_removeSubnetIdsHasBeenSet; }
    template<typename RemoveSubnetIdsT = Aws::Vector<Aws::String>>
    void SetRemoveSubnetIds(RemoveSubnetIdsT&& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds = std::forward<RemoveSubnetIdsT>(value); }
    template<typename RemoveSubnetIdsT = Aws::Vector<Aws::String>>
    ModifyTransitGatewayVpcAttachmentRequest& WithRemoveSubnetIds(RemoveSubnetIdsT&& value) { SetRemoveSubnetIds(std::forward<RemoveSubnetIdsT>(value)); return *this;}
    template<typename RemoveSubnetIdsT = Aws::String>
    ModifyTransitGatewayVpcAttachmentRequest& AddRemoveSubnetIds(RemoveSubnetIdsT&& value) { m_removeSubnetIdsHasBeenSet = true; m_removeSubnetIds.emplace_back(std::forward<RemoveSubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The new VPC attachment options.</p>
     */
    inline const ModifyTransitGatewayVpcAttachmentRequestOptions& GetOptions() const { return m_options; }
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }
    template<typename OptionsT = ModifyTransitGatewayVpcAttachmentRequestOptions>
    void SetOptions(OptionsT&& value) { m_optionsHasBeenSet = true; m_options = std::forward<OptionsT>(value); }
    template<typename OptionsT = ModifyTransitGatewayVpcAttachmentRequestOptions>
    ModifyTransitGatewayVpcAttachmentRequest& WithOptions(OptionsT&& value) { SetOptions(std::forward<OptionsT>(value)); return *this;}
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

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
