/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup-gateway/model/GatewayType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup-gateway/model/MaintenanceStartTime.h>
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
namespace BackupGateway
{
namespace Model
{

  /**
   * <p>The details of gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/GatewayDetails">AWS
   * API Reference</a></p>
   */
  class GatewayDetails
  {
  public:
    AWS_BACKUPGATEWAY_API GatewayDetails();
    AWS_BACKUPGATEWAY_API GatewayDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API GatewayDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the
     * <code>ListGateways</code> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetGatewayArn() const{ return m_gatewayArn; }
    inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }
    inline void SetGatewayArn(const Aws::String& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = value; }
    inline void SetGatewayArn(Aws::String&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::move(value); }
    inline void SetGatewayArn(const char* value) { m_gatewayArnHasBeenSet = true; m_gatewayArn.assign(value); }
    inline GatewayDetails& WithGatewayArn(const Aws::String& value) { SetGatewayArn(value); return *this;}
    inline GatewayDetails& WithGatewayArn(Aws::String&& value) { SetGatewayArn(std::move(value)); return *this;}
    inline GatewayDetails& WithGatewayArn(const char* value) { SetGatewayArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the gateway.</p>
     */
    inline const Aws::String& GetGatewayDisplayName() const{ return m_gatewayDisplayName; }
    inline bool GatewayDisplayNameHasBeenSet() const { return m_gatewayDisplayNameHasBeenSet; }
    inline void SetGatewayDisplayName(const Aws::String& value) { m_gatewayDisplayNameHasBeenSet = true; m_gatewayDisplayName = value; }
    inline void SetGatewayDisplayName(Aws::String&& value) { m_gatewayDisplayNameHasBeenSet = true; m_gatewayDisplayName = std::move(value); }
    inline void SetGatewayDisplayName(const char* value) { m_gatewayDisplayNameHasBeenSet = true; m_gatewayDisplayName.assign(value); }
    inline GatewayDetails& WithGatewayDisplayName(const Aws::String& value) { SetGatewayDisplayName(value); return *this;}
    inline GatewayDetails& WithGatewayDisplayName(Aws::String&& value) { SetGatewayDisplayName(std::move(value)); return *this;}
    inline GatewayDetails& WithGatewayDisplayName(const char* value) { SetGatewayDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the gateway type.</p>
     */
    inline const GatewayType& GetGatewayType() const{ return m_gatewayType; }
    inline bool GatewayTypeHasBeenSet() const { return m_gatewayTypeHasBeenSet; }
    inline void SetGatewayType(const GatewayType& value) { m_gatewayTypeHasBeenSet = true; m_gatewayType = value; }
    inline void SetGatewayType(GatewayType&& value) { m_gatewayTypeHasBeenSet = true; m_gatewayType = std::move(value); }
    inline GatewayDetails& WithGatewayType(const GatewayType& value) { SetGatewayType(value); return *this;}
    inline GatewayDetails& WithGatewayType(GatewayType&& value) { SetGatewayType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hypervisor ID of the gateway.</p>
     */
    inline const Aws::String& GetHypervisorId() const{ return m_hypervisorId; }
    inline bool HypervisorIdHasBeenSet() const { return m_hypervisorIdHasBeenSet; }
    inline void SetHypervisorId(const Aws::String& value) { m_hypervisorIdHasBeenSet = true; m_hypervisorId = value; }
    inline void SetHypervisorId(Aws::String&& value) { m_hypervisorIdHasBeenSet = true; m_hypervisorId = std::move(value); }
    inline void SetHypervisorId(const char* value) { m_hypervisorIdHasBeenSet = true; m_hypervisorId.assign(value); }
    inline GatewayDetails& WithHypervisorId(const Aws::String& value) { SetHypervisorId(value); return *this;}
    inline GatewayDetails& WithHypervisorId(Aws::String&& value) { SetHypervisorId(std::move(value)); return *this;}
    inline GatewayDetails& WithHypervisorId(const char* value) { SetHypervisorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details showing the last time Backup gateway communicated with the cloud, in
     * Unix format and UTC time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSeenTime() const{ return m_lastSeenTime; }
    inline bool LastSeenTimeHasBeenSet() const { return m_lastSeenTimeHasBeenSet; }
    inline void SetLastSeenTime(const Aws::Utils::DateTime& value) { m_lastSeenTimeHasBeenSet = true; m_lastSeenTime = value; }
    inline void SetLastSeenTime(Aws::Utils::DateTime&& value) { m_lastSeenTimeHasBeenSet = true; m_lastSeenTime = std::move(value); }
    inline GatewayDetails& WithLastSeenTime(const Aws::Utils::DateTime& value) { SetLastSeenTime(value); return *this;}
    inline GatewayDetails& WithLastSeenTime(Aws::Utils::DateTime&& value) { SetLastSeenTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns your gateway's weekly maintenance start time including the day and
     * time of the week. Note that values are in terms of the gateway's time zone. Can
     * be weekly or monthly.</p>
     */
    inline const MaintenanceStartTime& GetMaintenanceStartTime() const{ return m_maintenanceStartTime; }
    inline bool MaintenanceStartTimeHasBeenSet() const { return m_maintenanceStartTimeHasBeenSet; }
    inline void SetMaintenanceStartTime(const MaintenanceStartTime& value) { m_maintenanceStartTimeHasBeenSet = true; m_maintenanceStartTime = value; }
    inline void SetMaintenanceStartTime(MaintenanceStartTime&& value) { m_maintenanceStartTimeHasBeenSet = true; m_maintenanceStartTime = std::move(value); }
    inline GatewayDetails& WithMaintenanceStartTime(const MaintenanceStartTime& value) { SetMaintenanceStartTime(value); return *this;}
    inline GatewayDetails& WithMaintenanceStartTime(MaintenanceStartTime&& value) { SetMaintenanceStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details showing the next update availability time of the gateway.</p>
     */
    inline const Aws::Utils::DateTime& GetNextUpdateAvailabilityTime() const{ return m_nextUpdateAvailabilityTime; }
    inline bool NextUpdateAvailabilityTimeHasBeenSet() const { return m_nextUpdateAvailabilityTimeHasBeenSet; }
    inline void SetNextUpdateAvailabilityTime(const Aws::Utils::DateTime& value) { m_nextUpdateAvailabilityTimeHasBeenSet = true; m_nextUpdateAvailabilityTime = value; }
    inline void SetNextUpdateAvailabilityTime(Aws::Utils::DateTime&& value) { m_nextUpdateAvailabilityTimeHasBeenSet = true; m_nextUpdateAvailabilityTime = std::move(value); }
    inline GatewayDetails& WithNextUpdateAvailabilityTime(const Aws::Utils::DateTime& value) { SetNextUpdateAvailabilityTime(value); return *this;}
    inline GatewayDetails& WithNextUpdateAvailabilityTime(Aws::Utils::DateTime&& value) { SetNextUpdateAvailabilityTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name for the virtual private cloud (VPC) endpoint the gateway uses to
     * connect to the cloud for backup gateway.</p>
     */
    inline const Aws::String& GetVpcEndpoint() const{ return m_vpcEndpoint; }
    inline bool VpcEndpointHasBeenSet() const { return m_vpcEndpointHasBeenSet; }
    inline void SetVpcEndpoint(const Aws::String& value) { m_vpcEndpointHasBeenSet = true; m_vpcEndpoint = value; }
    inline void SetVpcEndpoint(Aws::String&& value) { m_vpcEndpointHasBeenSet = true; m_vpcEndpoint = std::move(value); }
    inline void SetVpcEndpoint(const char* value) { m_vpcEndpointHasBeenSet = true; m_vpcEndpoint.assign(value); }
    inline GatewayDetails& WithVpcEndpoint(const Aws::String& value) { SetVpcEndpoint(value); return *this;}
    inline GatewayDetails& WithVpcEndpoint(Aws::String&& value) { SetVpcEndpoint(std::move(value)); return *this;}
    inline GatewayDetails& WithVpcEndpoint(const char* value) { SetVpcEndpoint(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayArn;
    bool m_gatewayArnHasBeenSet = false;

    Aws::String m_gatewayDisplayName;
    bool m_gatewayDisplayNameHasBeenSet = false;

    GatewayType m_gatewayType;
    bool m_gatewayTypeHasBeenSet = false;

    Aws::String m_hypervisorId;
    bool m_hypervisorIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastSeenTime;
    bool m_lastSeenTimeHasBeenSet = false;

    MaintenanceStartTime m_maintenanceStartTime;
    bool m_maintenanceStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_nextUpdateAvailabilityTime;
    bool m_nextUpdateAvailabilityTimeHasBeenSet = false;

    Aws::String m_vpcEndpoint;
    bool m_vpcEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
