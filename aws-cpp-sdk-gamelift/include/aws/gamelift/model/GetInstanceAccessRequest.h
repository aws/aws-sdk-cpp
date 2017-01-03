﻿/*
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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class AWS_GAMELIFT_API GetInstanceAccessRequest : public GameLiftRequest
  {
  public:
    GetInstanceAccessRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Unique identifier for a fleet. Specify the fleet that contain the instance
     * you want access to. The fleet can be in any of the following statuses:
     * ACTIVATING, ACTIVE, or ERROR. Fleets with an ERROR status can be accessed for a
     * few hours before being deleted.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet. Specify the fleet that contain the instance
     * you want access to. The fleet can be in any of the following statuses:
     * ACTIVATING, ACTIVE, or ERROR. Fleets with an ERROR status can be accessed for a
     * few hours before being deleted.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet. Specify the fleet that contain the instance
     * you want access to. The fleet can be in any of the following statuses:
     * ACTIVATING, ACTIVE, or ERROR. Fleets with an ERROR status can be accessed for a
     * few hours before being deleted.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet. Specify the fleet that contain the instance
     * you want access to. The fleet can be in any of the following statuses:
     * ACTIVATING, ACTIVE, or ERROR. Fleets with an ERROR status can be accessed for a
     * few hours before being deleted.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet. Specify the fleet that contain the instance
     * you want access to. The fleet can be in any of the following statuses:
     * ACTIVATING, ACTIVE, or ERROR. Fleets with an ERROR status can be accessed for a
     * few hours before being deleted.</p>
     */
    inline GetInstanceAccessRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet. Specify the fleet that contain the instance
     * you want access to. The fleet can be in any of the following statuses:
     * ACTIVATING, ACTIVE, or ERROR. Fleets with an ERROR status can be accessed for a
     * few hours before being deleted.</p>
     */
    inline GetInstanceAccessRequest& WithFleetId(Aws::String&& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet. Specify the fleet that contain the instance
     * you want access to. The fleet can be in any of the following statuses:
     * ACTIVATING, ACTIVE, or ERROR. Fleets with an ERROR status can be accessed for a
     * few hours before being deleted.</p>
     */
    inline GetInstanceAccessRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for an instance. Specify the instance you want to get
     * access to. You can access an instance in any status.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>Unique identifier for an instance. Specify the instance you want to get
     * access to. You can access an instance in any status.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>Unique identifier for an instance. Specify the instance you want to get
     * access to. You can access an instance in any status.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>Unique identifier for an instance. Specify the instance you want to get
     * access to. You can access an instance in any status.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>Unique identifier for an instance. Specify the instance you want to get
     * access to. You can access an instance in any status.</p>
     */
    inline GetInstanceAccessRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>Unique identifier for an instance. Specify the instance you want to get
     * access to. You can access an instance in any status.</p>
     */
    inline GetInstanceAccessRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>Unique identifier for an instance. Specify the instance you want to get
     * access to. You can access an instance in any status.</p>
     */
    inline GetInstanceAccessRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

  private:
    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
