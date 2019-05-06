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
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GetInstanceAccessInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API GetInstanceAccessRequest : public GameLiftRequest
  {
  public:
    GetInstanceAccessRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInstanceAccess"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique identifier for a fleet that contains the instance you want access to.
     * The fleet can be in any of the following statuses: <code>ACTIVATING</code>,
     * <code>ACTIVE</code>, or <code>ERROR</code>. Fleets with an <code>ERROR</code>
     * status may be accessible for a short time before they are deleted.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet that contains the instance you want access to.
     * The fleet can be in any of the following statuses: <code>ACTIVATING</code>,
     * <code>ACTIVE</code>, or <code>ERROR</code>. Fleets with an <code>ERROR</code>
     * status may be accessible for a short time before they are deleted.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>Unique identifier for a fleet that contains the instance you want access to.
     * The fleet can be in any of the following statuses: <code>ACTIVATING</code>,
     * <code>ACTIVE</code>, or <code>ERROR</code>. Fleets with an <code>ERROR</code>
     * status may be accessible for a short time before they are deleted.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet that contains the instance you want access to.
     * The fleet can be in any of the following statuses: <code>ACTIVATING</code>,
     * <code>ACTIVE</code>, or <code>ERROR</code>. Fleets with an <code>ERROR</code>
     * status may be accessible for a short time before they are deleted.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>Unique identifier for a fleet that contains the instance you want access to.
     * The fleet can be in any of the following statuses: <code>ACTIVATING</code>,
     * <code>ACTIVE</code>, or <code>ERROR</code>. Fleets with an <code>ERROR</code>
     * status may be accessible for a short time before they are deleted.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet that contains the instance you want access to.
     * The fleet can be in any of the following statuses: <code>ACTIVATING</code>,
     * <code>ACTIVE</code>, or <code>ERROR</code>. Fleets with an <code>ERROR</code>
     * status may be accessible for a short time before they are deleted.</p>
     */
    inline GetInstanceAccessRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet that contains the instance you want access to.
     * The fleet can be in any of the following statuses: <code>ACTIVATING</code>,
     * <code>ACTIVE</code>, or <code>ERROR</code>. Fleets with an <code>ERROR</code>
     * status may be accessible for a short time before they are deleted.</p>
     */
    inline GetInstanceAccessRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet that contains the instance you want access to.
     * The fleet can be in any of the following statuses: <code>ACTIVATING</code>,
     * <code>ACTIVE</code>, or <code>ERROR</code>. Fleets with an <code>ERROR</code>
     * status may be accessible for a short time before they are deleted.</p>
     */
    inline GetInstanceAccessRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>Unique identifier for an instance you want to get access to. You can access
     * an instance in any status.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>Unique identifier for an instance you want to get access to. You can access
     * an instance in any status.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>Unique identifier for an instance you want to get access to. You can access
     * an instance in any status.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>Unique identifier for an instance you want to get access to. You can access
     * an instance in any status.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>Unique identifier for an instance you want to get access to. You can access
     * an instance in any status.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>Unique identifier for an instance you want to get access to. You can access
     * an instance in any status.</p>
     */
    inline GetInstanceAccessRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>Unique identifier for an instance you want to get access to. You can access
     * an instance in any status.</p>
     */
    inline GetInstanceAccessRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for an instance you want to get access to. You can access
     * an instance in any status.</p>
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
