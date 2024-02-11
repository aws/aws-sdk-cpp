/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Information and credentials that you can use to remotely connect to an
   * instance in an EC2 managed fleet. This data type is returned in response to a
   * call to <a>GetInstanceAccess</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/InstanceAccess">AWS
   * API Reference</a></p>
   */
  class InstanceAccess
  {
  public:
    AWS_GAMELIFT_API InstanceAccess();
    AWS_GAMELIFT_API InstanceAccess(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API InstanceAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the fleet containing the instance to be accessed.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet containing the instance to be accessed.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet containing the instance to be accessed.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet containing the instance to be accessed.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet containing the instance to be accessed.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet containing the instance to be accessed.</p>
     */
    inline InstanceAccess& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet containing the instance to be accessed.</p>
     */
    inline InstanceAccess& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet containing the instance to be accessed.</p>
     */
    inline InstanceAccess& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>A unique identifier for the instance to be accessed.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>A unique identifier for the instance to be accessed.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>A unique identifier for the instance to be accessed.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>A unique identifier for the instance to be accessed.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>A unique identifier for the instance to be accessed.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>A unique identifier for the instance to be accessed.</p>
     */
    inline InstanceAccess& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>A unique identifier for the instance to be accessed.</p>
     */
    inline InstanceAccess& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the instance to be accessed.</p>
     */
    inline InstanceAccess& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>IP address assigned to the instance.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>IP address assigned to the instance.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

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
    inline bool OperatingSystemHasBeenSet() const { return m_operatingSystemHasBeenSet; }

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
     * <p>Security credentials that are required to access the instance.</p>
     */
    inline const InstanceCredentials& GetCredentials() const{ return m_credentials; }

    /**
     * <p>Security credentials that are required to access the instance.</p>
     */
    inline bool CredentialsHasBeenSet() const { return m_credentialsHasBeenSet; }

    /**
     * <p>Security credentials that are required to access the instance.</p>
     */
    inline void SetCredentials(const InstanceCredentials& value) { m_credentialsHasBeenSet = true; m_credentials = value; }

    /**
     * <p>Security credentials that are required to access the instance.</p>
     */
    inline void SetCredentials(InstanceCredentials&& value) { m_credentialsHasBeenSet = true; m_credentials = std::move(value); }

    /**
     * <p>Security credentials that are required to access the instance.</p>
     */
    inline InstanceAccess& WithCredentials(const InstanceCredentials& value) { SetCredentials(value); return *this;}

    /**
     * <p>Security credentials that are required to access the instance.</p>
     */
    inline InstanceAccess& WithCredentials(InstanceCredentials&& value) { SetCredentials(std::move(value)); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    OperatingSystem m_operatingSystem;
    bool m_operatingSystemHasBeenSet = false;

    InstanceCredentials m_credentials;
    bool m_credentialsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
