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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/OperatingSystem.h>
#include <aws/gamelift/model/InstanceCredentials.h>
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
   * <p>Information required to remotely connect to a fleet instance. Access is
   * requested by calling <a>GetInstanceAccess</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/InstanceAccess">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API InstanceAccess
  {
  public:
    InstanceAccess();
    InstanceAccess(const Aws::Utils::Json::JsonValue& jsonValue);
    InstanceAccess& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Unique identifier for a fleet containing the instance being accessed.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet containing the instance being accessed.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet containing the instance being accessed.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>Unique identifier for a fleet containing the instance being accessed.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet containing the instance being accessed.</p>
     */
    inline InstanceAccess& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet containing the instance being accessed.</p>
     */
    inline InstanceAccess& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet containing the instance being accessed.</p>
     */
    inline InstanceAccess& WithFleetId(const char* value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for an instance being accessed.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>Unique identifier for an instance being accessed.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>Unique identifier for an instance being accessed.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>Unique identifier for an instance being accessed.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>Unique identifier for an instance being accessed.</p>
     */
    inline InstanceAccess& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>Unique identifier for an instance being accessed.</p>
     */
    inline InstanceAccess& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for an instance being accessed.</p>
     */
    inline InstanceAccess& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

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
    inline InstanceAccess& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>IP address assigned to the instance.</p>
     */
    inline InstanceAccess& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>IP address assigned to the instance.</p>
     */
    inline InstanceAccess& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}

    /**
     * <p>Operating system that is running on the instance.</p>
     */
    inline const OperatingSystem& GetOperatingSystem() const{ return m_operatingSystem; }

    /**
     * <p>Operating system that is running on the instance.</p>
     */
    inline void SetOperatingSystem(const OperatingSystem& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = value; }

    /**
     * <p>Operating system that is running on the instance.</p>
     */
    inline void SetOperatingSystem(OperatingSystem&& value) { m_operatingSystemHasBeenSet = true; m_operatingSystem = std::move(value); }

    /**
     * <p>Operating system that is running on the instance.</p>
     */
    inline InstanceAccess& WithOperatingSystem(const OperatingSystem& value) { SetOperatingSystem(value); return *this;}

    /**
     * <p>Operating system that is running on the instance.</p>
     */
    inline InstanceAccess& WithOperatingSystem(OperatingSystem&& value) { SetOperatingSystem(std::move(value)); return *this;}

    /**
     * <p>Credentials required to access the instance.</p>
     */
    inline const InstanceCredentials& GetCredentials() const{ return m_credentials; }

    /**
     * <p>Credentials required to access the instance.</p>
     */
    inline void SetCredentials(const InstanceCredentials& value) { m_credentialsHasBeenSet = true; m_credentials = value; }

    /**
     * <p>Credentials required to access the instance.</p>
     */
    inline void SetCredentials(InstanceCredentials&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }

    /**
     * <p>Credentials required to access the instance.</p>
     */
    inline InstanceAccess& WithCredentials(const InstanceCredentials& value) { SetCredentials(value); return *this;}

    /**
     * <p>Credentials required to access the instance.</p>
     */
    inline InstanceAccess& WithCredentials(InstanceCredentials&& value) { SetCredentials(std::move(value)); return *this;}

  private:
    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet;
    OperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet;
    InstanceCredentials m_credentials;
    bool m_credentialsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
