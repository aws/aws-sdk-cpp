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
  class GetInstanceAccessRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API GetInstanceAccessRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInstanceAccess"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the fleet that contains the instance you want to
     * access. You can request access to instances in EC2 fleets with the following
     * statuses: <code>ACTIVATING</code>, <code>ACTIVE</code>, or <code>ERROR</code>.
     * Use either a fleet ID or an ARN value. </p>  <p>You can access fleets in
     * <code>ERROR</code> status for a short period of time before Amazon GameLift
     * deletes them.</p> 
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet that contains the instance you want to
     * access. You can request access to instances in EC2 fleets with the following
     * statuses: <code>ACTIVATING</code>, <code>ACTIVE</code>, or <code>ERROR</code>.
     * Use either a fleet ID or an ARN value. </p>  <p>You can access fleets in
     * <code>ERROR</code> status for a short period of time before Amazon GameLift
     * deletes them.</p> 
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet that contains the instance you want to
     * access. You can request access to instances in EC2 fleets with the following
     * statuses: <code>ACTIVATING</code>, <code>ACTIVE</code>, or <code>ERROR</code>.
     * Use either a fleet ID or an ARN value. </p>  <p>You can access fleets in
     * <code>ERROR</code> status for a short period of time before Amazon GameLift
     * deletes them.</p> 
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet that contains the instance you want to
     * access. You can request access to instances in EC2 fleets with the following
     * statuses: <code>ACTIVATING</code>, <code>ACTIVE</code>, or <code>ERROR</code>.
     * Use either a fleet ID or an ARN value. </p>  <p>You can access fleets in
     * <code>ERROR</code> status for a short period of time before Amazon GameLift
     * deletes them.</p> 
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet that contains the instance you want to
     * access. You can request access to instances in EC2 fleets with the following
     * statuses: <code>ACTIVATING</code>, <code>ACTIVE</code>, or <code>ERROR</code>.
     * Use either a fleet ID or an ARN value. </p>  <p>You can access fleets in
     * <code>ERROR</code> status for a short period of time before Amazon GameLift
     * deletes them.</p> 
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet that contains the instance you want to
     * access. You can request access to instances in EC2 fleets with the following
     * statuses: <code>ACTIVATING</code>, <code>ACTIVE</code>, or <code>ERROR</code>.
     * Use either a fleet ID or an ARN value. </p>  <p>You can access fleets in
     * <code>ERROR</code> status for a short period of time before Amazon GameLift
     * deletes them.</p> 
     */
    inline GetInstanceAccessRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet that contains the instance you want to
     * access. You can request access to instances in EC2 fleets with the following
     * statuses: <code>ACTIVATING</code>, <code>ACTIVE</code>, or <code>ERROR</code>.
     * Use either a fleet ID or an ARN value. </p>  <p>You can access fleets in
     * <code>ERROR</code> status for a short period of time before Amazon GameLift
     * deletes them.</p> 
     */
    inline GetInstanceAccessRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet that contains the instance you want to
     * access. You can request access to instances in EC2 fleets with the following
     * statuses: <code>ACTIVATING</code>, <code>ACTIVE</code>, or <code>ERROR</code>.
     * Use either a fleet ID or an ARN value. </p>  <p>You can access fleets in
     * <code>ERROR</code> status for a short period of time before Amazon GameLift
     * deletes them.</p> 
     */
    inline GetInstanceAccessRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>A unique identifier for the instance you want to access. You can access an
     * instance in any status.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>A unique identifier for the instance you want to access. You can access an
     * instance in any status.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>A unique identifier for the instance you want to access. You can access an
     * instance in any status.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>A unique identifier for the instance you want to access. You can access an
     * instance in any status.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>A unique identifier for the instance you want to access. You can access an
     * instance in any status.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>A unique identifier for the instance you want to access. You can access an
     * instance in any status.</p>
     */
    inline GetInstanceAccessRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>A unique identifier for the instance you want to access. You can access an
     * instance in any status.</p>
     */
    inline GetInstanceAccessRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the instance you want to access. You can access an
     * instance in any status.</p>
     */
    inline GetInstanceAccessRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
