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
  class AWS_EC2_API ModifyVpcPeeringConnectionOptionsRequest : public EC2Request
  {
  public:
    ModifyVpcPeeringConnectionOptionsRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpcPeeringConnectionOptions"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline void SetAccepterPeeringConnectionOptions(PeeringConnectionOptionsRequest&& value) { m_accepterPeeringConnectionOptionsHasBeenSet = true; m_accepterPeeringConnectionOptions = std::move(value); }

    /**
     * <p>The VPC peering connection options for the accepter VPC.</p>
     */
    inline ModifyVpcPeeringConnectionOptionsRequest& WithAccepterPeeringConnectionOptions(const PeeringConnectionOptionsRequest& value) { SetAccepterPeeringConnectionOptions(value); return *this;}

    /**
     * <p>The VPC peering connection options for the accepter VPC.</p>
     */
    inline ModifyVpcPeeringConnectionOptionsRequest& WithAccepterPeeringConnectionOptions(PeeringConnectionOptionsRequest&& value) { SetAccepterPeeringConnectionOptions(std::move(value)); return *this;}


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
    inline void SetRequesterPeeringConnectionOptions(PeeringConnectionOptionsRequest&& value) { m_requesterPeeringConnectionOptionsHasBeenSet = true; m_requesterPeeringConnectionOptions = std::move(value); }

    /**
     * <p>The VPC peering connection options for the requester VPC.</p>
     */
    inline ModifyVpcPeeringConnectionOptionsRequest& WithRequesterPeeringConnectionOptions(const PeeringConnectionOptionsRequest& value) { SetRequesterPeeringConnectionOptions(value); return *this;}

    /**
     * <p>The VPC peering connection options for the requester VPC.</p>
     */
    inline ModifyVpcPeeringConnectionOptionsRequest& WithRequesterPeeringConnectionOptions(PeeringConnectionOptionsRequest&& value) { SetRequesterPeeringConnectionOptions(std::move(value)); return *this;}


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
    inline void SetVpcPeeringConnectionId(Aws::String&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::move(value); }

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
    inline ModifyVpcPeeringConnectionOptionsRequest& WithVpcPeeringConnectionId(Aws::String&& value) { SetVpcPeeringConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline ModifyVpcPeeringConnectionOptionsRequest& WithVpcPeeringConnectionId(const char* value) { SetVpcPeeringConnectionId(value); return *this;}

  private:

    PeeringConnectionOptionsRequest m_accepterPeeringConnectionOptions;
    bool m_accepterPeeringConnectionOptionsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    PeeringConnectionOptionsRequest m_requesterPeeringConnectionOptions;
    bool m_requesterPeeringConnectionOptionsHasBeenSet;

    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
