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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/OperatingSystem.h>
#include <aws/gamelift/model/EC2InstanceType.h>
#include <aws/gamelift/model/InstanceStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Properties that describe an instance of a virtual computing resource that
   * hosts one or more game servers. A fleet contains zero or more
   * instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/Instance">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API Instance
  {
  public:
    Instance();
    Instance(const Aws::Utils::Json::JsonValue& jsonValue);
    Instance& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Unique identifier for a fleet that the instance is in.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet that the instance is in.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet that the instance is in.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>Unique identifier for a fleet that the instance is in.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet that the instance is in.</p>
     */
    inline Instance& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet that the instance is in.</p>
     */
    inline Instance& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet that the instance is in.</p>
     */
    inline Instance& WithFleetId(const char* value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for an instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>Unique identifier for an instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>Unique identifier for an instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>Unique identifier for an instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>Unique identifier for an instance.</p>
     */
    inline Instance& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>Unique identifier for an instance.</p>
     */
    inline Instance& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for an instance.</p>
     */
    inline Instance& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>IP address assigned to the instance.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>IP address assigned to the instance.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>IP address assigned to the instance.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>IP address assigned to the instance.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>IP address assigned to the instance.</p>
     */
    inline Instance& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>IP address assigned to the instance.</p>
     */
    inline Instance& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>IP address assigned to the instance.</p>
     */
    inline Instance& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}

    /**
     * <p>Operating system that is running on this instance. </p>
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p>Operating system that is running on this instance. </p>
     */
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }

    /**
     * <p>Operating system that is running on this instance. </p>
     */
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }

    /**
     * <p>Operating system that is running on this instance. </p>
     */
    inline Instance& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>Operating system that is running on this instance. </p>
     */
    inline Instance& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}

    /**
     * <p>EC2 instance type that defines the computing resources of this instance. </p>
     */
    inline const EC2InstanceType& GetType() const{ return m_type; }

    /**
     * <p>EC2 instance type that defines the computing resources of this instance. </p>
     */
    inline void SetType(const EC2InstanceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>EC2 instance type that defines the computing resources of this instance. </p>
     */
    inline void SetType(EC2InstanceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>EC2 instance type that defines the computing resources of this instance. </p>
     */
    inline Instance& WithType(const EC2InstanceType& value) { SetType(value); return *this;}

    /**
     * <p>EC2 instance type that defines the computing resources of this instance. </p>
     */
    inline Instance& WithType(EC2InstanceType&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Current status of the instance. Possible statuses include the following:</p>
     * <ul> <li> <p> <b>PENDING</b> – The instance is in the process of being created
     * and launching server processes as defined in the fleet's runtime configuration.
     * </p> </li> <li> <p> <b>ACTIVE</b> – The instance has been successfully created
     * and at least one server process has successfully launched and reported back to
     * Amazon GameLift that it is ready to host a game session. The instance is now
     * considered ready to host game sessions. </p> </li> <li> <p> <b>TERMINATING</b> –
     * The instance is in the process of shutting down. This may happen to reduce
     * capacity during a scaling down event or to recycle resources in the event of a
     * problem.</p> </li> </ul>
     */
    inline const InstanceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Current status of the instance. Possible statuses include the following:</p>
     * <ul> <li> <p> <b>PENDING</b> – The instance is in the process of being created
     * and launching server processes as defined in the fleet's runtime configuration.
     * </p> </li> <li> <p> <b>ACTIVE</b> – The instance has been successfully created
     * and at least one server process has successfully launched and reported back to
     * Amazon GameLift that it is ready to host a game session. The instance is now
     * considered ready to host game sessions. </p> </li> <li> <p> <b>TERMINATING</b> –
     * The instance is in the process of shutting down. This may happen to reduce
     * capacity during a scaling down event or to recycle resources in the event of a
     * problem.</p> </li> </ul>
     */
    inline void SetStatus(const InstanceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Current status of the instance. Possible statuses include the following:</p>
     * <ul> <li> <p> <b>PENDING</b> – The instance is in the process of being created
     * and launching server processes as defined in the fleet's runtime configuration.
     * </p> </li> <li> <p> <b>ACTIVE</b> – The instance has been successfully created
     * and at least one server process has successfully launched and reported back to
     * Amazon GameLift that it is ready to host a game session. The instance is now
     * considered ready to host game sessions. </p> </li> <li> <p> <b>TERMINATING</b> –
     * The instance is in the process of shutting down. This may happen to reduce
     * capacity during a scaling down event or to recycle resources in the event of a
     * problem.</p> </li> </ul>
     */
    inline void SetStatus(InstanceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Current status of the instance. Possible statuses include the following:</p>
     * <ul> <li> <p> <b>PENDING</b> – The instance is in the process of being created
     * and launching server processes as defined in the fleet's runtime configuration.
     * </p> </li> <li> <p> <b>ACTIVE</b> – The instance has been successfully created
     * and at least one server process has successfully launched and reported back to
     * Amazon GameLift that it is ready to host a game session. The instance is now
     * considered ready to host game sessions. </p> </li> <li> <p> <b>TERMINATING</b> –
     * The instance is in the process of shutting down. This may happen to reduce
     * capacity during a scaling down event or to recycle resources in the event of a
     * problem.</p> </li> </ul>
     */
    inline Instance& WithStatus(const InstanceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Current status of the instance. Possible statuses include the following:</p>
     * <ul> <li> <p> <b>PENDING</b> – The instance is in the process of being created
     * and launching server processes as defined in the fleet's runtime configuration.
     * </p> </li> <li> <p> <b>ACTIVE</b> – The instance has been successfully created
     * and at least one server process has successfully launched and reported back to
     * Amazon GameLift that it is ready to host a game session. The instance is now
     * considered ready to host game sessions. </p> </li> <li> <p> <b>TERMINATING</b> –
     * The instance is in the process of shutting down. This may happen to reduce
     * capacity during a scaling down event or to recycle resources in the event of a
     * problem.</p> </li> </ul>
     */
    inline Instance& WithStatus(InstanceStatus&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline Instance& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Time stamp indicating when this data object was created. Format is a number
     * expressed in Unix time as milliseconds (for example "1469498468.057").</p>
     */
    inline Instance& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:
    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet;
    OperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet;
    EC2InstanceType m_type;
    bool m_typeHasBeenSet;
    InstanceStatus m_status;
    bool m_statusHasBeenSet;
    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
