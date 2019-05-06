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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteVpcPeeringConnectionInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DeleteVpcPeeringConnectionRequest : public GameLiftRequest
  {
  public:
    DeleteVpcPeeringConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVpcPeeringConnection"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique identifier for a fleet. This value must match the fleet ID referenced
     * in the VPC peering connection record.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet. This value must match the fleet ID referenced
     * in the VPC peering connection record.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>Unique identifier for a fleet. This value must match the fleet ID referenced
     * in the VPC peering connection record.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet. This value must match the fleet ID referenced
     * in the VPC peering connection record.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>Unique identifier for a fleet. This value must match the fleet ID referenced
     * in the VPC peering connection record.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet. This value must match the fleet ID referenced
     * in the VPC peering connection record.</p>
     */
    inline DeleteVpcPeeringConnectionRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet. This value must match the fleet ID referenced
     * in the VPC peering connection record.</p>
     */
    inline DeleteVpcPeeringConnectionRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet. This value must match the fleet ID referenced
     * in the VPC peering connection record.</p>
     */
    inline DeleteVpcPeeringConnectionRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>Unique identifier for a VPC peering connection. This value is included in the
     * <a>VpcPeeringConnection</a> object, which can be retrieved by calling
     * <a>DescribeVpcPeeringConnections</a>.</p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const{ return m_vpcPeeringConnectionId; }

    /**
     * <p>Unique identifier for a VPC peering connection. This value is included in the
     * <a>VpcPeeringConnection</a> object, which can be retrieved by calling
     * <a>DescribeVpcPeeringConnections</a>.</p>
     */
    inline bool VpcPeeringConnectionIdHasBeenSet() const { return m_vpcPeeringConnectionIdHasBeenSet; }

    /**
     * <p>Unique identifier for a VPC peering connection. This value is included in the
     * <a>VpcPeeringConnection</a> object, which can be retrieved by calling
     * <a>DescribeVpcPeeringConnections</a>.</p>
     */
    inline void SetVpcPeeringConnectionId(const Aws::String& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = value; }

    /**
     * <p>Unique identifier for a VPC peering connection. This value is included in the
     * <a>VpcPeeringConnection</a> object, which can be retrieved by calling
     * <a>DescribeVpcPeeringConnections</a>.</p>
     */
    inline void SetVpcPeeringConnectionId(Aws::String&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::move(value); }

    /**
     * <p>Unique identifier for a VPC peering connection. This value is included in the
     * <a>VpcPeeringConnection</a> object, which can be retrieved by calling
     * <a>DescribeVpcPeeringConnections</a>.</p>
     */
    inline void SetVpcPeeringConnectionId(const char* value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId.assign(value); }

    /**
     * <p>Unique identifier for a VPC peering connection. This value is included in the
     * <a>VpcPeeringConnection</a> object, which can be retrieved by calling
     * <a>DescribeVpcPeeringConnections</a>.</p>
     */
    inline DeleteVpcPeeringConnectionRequest& WithVpcPeeringConnectionId(const Aws::String& value) { SetVpcPeeringConnectionId(value); return *this;}

    /**
     * <p>Unique identifier for a VPC peering connection. This value is included in the
     * <a>VpcPeeringConnection</a> object, which can be retrieved by calling
     * <a>DescribeVpcPeeringConnections</a>.</p>
     */
    inline DeleteVpcPeeringConnectionRequest& WithVpcPeeringConnectionId(Aws::String&& value) { SetVpcPeeringConnectionId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a VPC peering connection. This value is included in the
     * <a>VpcPeeringConnection</a> object, which can be retrieved by calling
     * <a>DescribeVpcPeeringConnections</a>.</p>
     */
    inline DeleteVpcPeeringConnectionRequest& WithVpcPeeringConnectionId(const char* value) { SetVpcPeeringConnectionId(value); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;

    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
