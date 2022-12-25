/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   */
  class DeleteVpcPeeringConnectionRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API DeleteVpcPeeringConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVpcPeeringConnection"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the fleet. This fleet specified must match the fleet
     * referenced in the VPC peering connection record. You can use either the fleet ID
     * or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet. This fleet specified must match the fleet
     * referenced in the VPC peering connection record. You can use either the fleet ID
     * or ARN value.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet. This fleet specified must match the fleet
     * referenced in the VPC peering connection record. You can use either the fleet ID
     * or ARN value.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet. This fleet specified must match the fleet
     * referenced in the VPC peering connection record. You can use either the fleet ID
     * or ARN value.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet. This fleet specified must match the fleet
     * referenced in the VPC peering connection record. You can use either the fleet ID
     * or ARN value.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet. This fleet specified must match the fleet
     * referenced in the VPC peering connection record. You can use either the fleet ID
     * or ARN value.</p>
     */
    inline DeleteVpcPeeringConnectionRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet. This fleet specified must match the fleet
     * referenced in the VPC peering connection record. You can use either the fleet ID
     * or ARN value.</p>
     */
    inline DeleteVpcPeeringConnectionRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet. This fleet specified must match the fleet
     * referenced in the VPC peering connection record. You can use either the fleet ID
     * or ARN value.</p>
     */
    inline DeleteVpcPeeringConnectionRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>A unique identifier for a VPC peering connection.</p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const{ return m_vpcPeeringConnectionId; }

    /**
     * <p>A unique identifier for a VPC peering connection.</p>
     */
    inline bool VpcPeeringConnectionIdHasBeenSet() const { return m_vpcPeeringConnectionIdHasBeenSet; }

    /**
     * <p>A unique identifier for a VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnectionId(const Aws::String& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = value; }

    /**
     * <p>A unique identifier for a VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnectionId(Aws::String&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::move(value); }

    /**
     * <p>A unique identifier for a VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnectionId(const char* value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId.assign(value); }

    /**
     * <p>A unique identifier for a VPC peering connection.</p>
     */
    inline DeleteVpcPeeringConnectionRequest& WithVpcPeeringConnectionId(const Aws::String& value) { SetVpcPeeringConnectionId(value); return *this;}

    /**
     * <p>A unique identifier for a VPC peering connection.</p>
     */
    inline DeleteVpcPeeringConnectionRequest& WithVpcPeeringConnectionId(Aws::String&& value) { SetVpcPeeringConnectionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a VPC peering connection.</p>
     */
    inline DeleteVpcPeeringConnectionRequest& WithVpcPeeringConnectionId(const char* value) { SetVpcPeeringConnectionId(value); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
