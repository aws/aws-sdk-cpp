/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/PeeringConnectionOptionsRequest.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API ModifyVpcPeeringConnectionOptionsRequest : public EC2Request
  {
  public:
    ModifyVpcPeeringConnectionOptionsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>Checks whether you have the required permissions for the operation, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the operation, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the operation, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ModifyVpcPeeringConnectionOptionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const{ return m_vpcPeeringConnectionId; }

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnectionId(const Aws::String& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = value; }

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnectionId(Aws::String&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = value; }

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnectionId(const char* value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId.assign(value); }

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline ModifyVpcPeeringConnectionOptionsRequest& WithVpcPeeringConnectionId(const Aws::String& value) { SetVpcPeeringConnectionId(value); return *this;}

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline ModifyVpcPeeringConnectionOptionsRequest& WithVpcPeeringConnectionId(Aws::String&& value) { SetVpcPeeringConnectionId(value); return *this;}

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline ModifyVpcPeeringConnectionOptionsRequest& WithVpcPeeringConnectionId(const char* value) { SetVpcPeeringConnectionId(value); return *this;}

    /**
     * <p>The VPC peering connection options for the requester VPC.</p>
     */
    inline const PeeringConnectionOptionsRequest& GetRequesterPeeringConnectionOptions() const{ return m_requesterPeeringConnectionOptions; }

    /**
     * <p>The VPC peering connection options for the requester VPC.</p>
     */
    inline void SetRequesterPeeringConnectionOptions(const PeeringConnectionOptionsRequest& value) { m_requesterPeeringConnectionOptionsHasBeenSet = true; m_requesterPeeringConnectionOptions = value; }

    /**
     * <p>The VPC peering connection options for the requester VPC.</p>
     */
    inline void SetRequesterPeeringConnectionOptions(PeeringConnectionOptionsRequest&& value) { m_requesterPeeringConnectionOptionsHasBeenSet = true; m_requesterPeeringConnectionOptions = value; }

    /**
     * <p>The VPC peering connection options for the requester VPC.</p>
     */
    inline ModifyVpcPeeringConnectionOptionsRequest& WithRequesterPeeringConnectionOptions(const PeeringConnectionOptionsRequest& value) { SetRequesterPeeringConnectionOptions(value); return *this;}

    /**
     * <p>The VPC peering connection options for the requester VPC.</p>
     */
    inline ModifyVpcPeeringConnectionOptionsRequest& WithRequesterPeeringConnectionOptions(PeeringConnectionOptionsRequest&& value) { SetRequesterPeeringConnectionOptions(value); return *this;}

    /**
     * <p>The VPC peering connection options for the accepter VPC.</p>
     */
    inline const PeeringConnectionOptionsRequest& GetAccepterPeeringConnectionOptions() const{ return m_accepterPeeringConnectionOptions; }

    /**
     * <p>The VPC peering connection options for the accepter VPC.</p>
     */
    inline void SetAccepterPeeringConnectionOptions(const PeeringConnectionOptionsRequest& value) { m_accepterPeeringConnectionOptionsHasBeenSet = true; m_accepterPeeringConnectionOptions = value; }

    /**
     * <p>The VPC peering connection options for the accepter VPC.</p>
     */
    inline void SetAccepterPeeringConnectionOptions(PeeringConnectionOptionsRequest&& value) { m_accepterPeeringConnectionOptionsHasBeenSet = true; m_accepterPeeringConnectionOptions = value; }

    /**
     * <p>The VPC peering connection options for the accepter VPC.</p>
     */
    inline ModifyVpcPeeringConnectionOptionsRequest& WithAccepterPeeringConnectionOptions(const PeeringConnectionOptionsRequest& value) { SetAccepterPeeringConnectionOptions(value); return *this;}

    /**
     * <p>The VPC peering connection options for the accepter VPC.</p>
     */
    inline ModifyVpcPeeringConnectionOptionsRequest& WithAccepterPeeringConnectionOptions(PeeringConnectionOptionsRequest&& value) { SetAccepterPeeringConnectionOptions(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet;
    PeeringConnectionOptionsRequest m_requesterPeeringConnectionOptions;
    bool m_requesterPeeringConnectionOptionsHasBeenSet;
    PeeringConnectionOptionsRequest m_accepterPeeringConnectionOptions;
    bool m_accepterPeeringConnectionOptionsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
