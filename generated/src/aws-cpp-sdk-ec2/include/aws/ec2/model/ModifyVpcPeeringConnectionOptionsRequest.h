/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/PeeringConnectionOptionsRequest.h>
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
  class ModifyVpcPeeringConnectionOptionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVpcPeeringConnectionOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpcPeeringConnectionOptions"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The VPC peering connection options for the accepter VPC.</p>
     */
    inline const PeeringConnectionOptionsRequest& GetAccepterPeeringConnectionOptions() const { return m_accepterPeeringConnectionOptions; }
    inline bool AccepterPeeringConnectionOptionsHasBeenSet() const { return m_accepterPeeringConnectionOptionsHasBeenSet; }
    template<typename AccepterPeeringConnectionOptionsT = PeeringConnectionOptionsRequest>
    void SetAccepterPeeringConnectionOptions(AccepterPeeringConnectionOptionsT&& value) { m_accepterPeeringConnectionOptionsHasBeenSet = true; m_accepterPeeringConnectionOptions = std::forward<AccepterPeeringConnectionOptionsT>(value); }
    template<typename AccepterPeeringConnectionOptionsT = PeeringConnectionOptionsRequest>
    ModifyVpcPeeringConnectionOptionsRequest& WithAccepterPeeringConnectionOptions(AccepterPeeringConnectionOptionsT&& value) { SetAccepterPeeringConnectionOptions(std::forward<AccepterPeeringConnectionOptionsT>(value)); return *this;}
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
    inline ModifyVpcPeeringConnectionOptionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC peering connection options for the requester VPC.</p>
     */
    inline const PeeringConnectionOptionsRequest& GetRequesterPeeringConnectionOptions() const { return m_requesterPeeringConnectionOptions; }
    inline bool RequesterPeeringConnectionOptionsHasBeenSet() const { return m_requesterPeeringConnectionOptionsHasBeenSet; }
    template<typename RequesterPeeringConnectionOptionsT = PeeringConnectionOptionsRequest>
    void SetRequesterPeeringConnectionOptions(RequesterPeeringConnectionOptionsT&& value) { m_requesterPeeringConnectionOptionsHasBeenSet = true; m_requesterPeeringConnectionOptions = std::forward<RequesterPeeringConnectionOptionsT>(value); }
    template<typename RequesterPeeringConnectionOptionsT = PeeringConnectionOptionsRequest>
    ModifyVpcPeeringConnectionOptionsRequest& WithRequesterPeeringConnectionOptions(RequesterPeeringConnectionOptionsT&& value) { SetRequesterPeeringConnectionOptions(std::forward<RequesterPeeringConnectionOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const { return m_vpcPeeringConnectionId; }
    inline bool VpcPeeringConnectionIdHasBeenSet() const { return m_vpcPeeringConnectionIdHasBeenSet; }
    template<typename VpcPeeringConnectionIdT = Aws::String>
    void SetVpcPeeringConnectionId(VpcPeeringConnectionIdT&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::forward<VpcPeeringConnectionIdT>(value); }
    template<typename VpcPeeringConnectionIdT = Aws::String>
    ModifyVpcPeeringConnectionOptionsRequest& WithVpcPeeringConnectionId(VpcPeeringConnectionIdT&& value) { SetVpcPeeringConnectionId(std::forward<VpcPeeringConnectionIdT>(value)); return *this;}
    ///@}
  private:

    PeeringConnectionOptionsRequest m_accepterPeeringConnectionOptions;
    bool m_accepterPeeringConnectionOptionsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    PeeringConnectionOptionsRequest m_requesterPeeringConnectionOptions;
    bool m_requesterPeeringConnectionOptionsHasBeenSet = false;

    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
