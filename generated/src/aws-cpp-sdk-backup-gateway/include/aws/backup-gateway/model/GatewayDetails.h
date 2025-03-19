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
    AWS_BACKUPGATEWAY_API GatewayDetails() = default;
    AWS_BACKUPGATEWAY_API GatewayDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API GatewayDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the
     * <code>ListGateways</code> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetGatewayArn() const { return m_gatewayArn; }
    inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }
    template<typename GatewayArnT = Aws::String>
    void SetGatewayArn(GatewayArnT&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::forward<GatewayArnT>(value); }
    template<typename GatewayArnT = Aws::String>
    GatewayDetails& WithGatewayArn(GatewayArnT&& value) { SetGatewayArn(std::forward<GatewayArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the gateway.</p>
     */
    inline const Aws::String& GetGatewayDisplayName() const { return m_gatewayDisplayName; }
    inline bool GatewayDisplayNameHasBeenSet() const { return m_gatewayDisplayNameHasBeenSet; }
    template<typename GatewayDisplayNameT = Aws::String>
    void SetGatewayDisplayName(GatewayDisplayNameT&& value) { m_gatewayDisplayNameHasBeenSet = true; m_gatewayDisplayName = std::forward<GatewayDisplayNameT>(value); }
    template<typename GatewayDisplayNameT = Aws::String>
    GatewayDetails& WithGatewayDisplayName(GatewayDisplayNameT&& value) { SetGatewayDisplayName(std::forward<GatewayDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the gateway type.</p>
     */
    inline GatewayType GetGatewayType() const { return m_gatewayType; }
    inline bool GatewayTypeHasBeenSet() const { return m_gatewayTypeHasBeenSet; }
    inline void SetGatewayType(GatewayType value) { m_gatewayTypeHasBeenSet = true; m_gatewayType = value; }
    inline GatewayDetails& WithGatewayType(GatewayType value) { SetGatewayType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hypervisor ID of the gateway.</p>
     */
    inline const Aws::String& GetHypervisorId() const { return m_hypervisorId; }
    inline bool HypervisorIdHasBeenSet() const { return m_hypervisorIdHasBeenSet; }
    template<typename HypervisorIdT = Aws::String>
    void SetHypervisorId(HypervisorIdT&& value) { m_hypervisorIdHasBeenSet = true; m_hypervisorId = std::forward<HypervisorIdT>(value); }
    template<typename HypervisorIdT = Aws::String>
    GatewayDetails& WithHypervisorId(HypervisorIdT&& value) { SetHypervisorId(std::forward<HypervisorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details showing the last time Backup gateway communicated with the cloud, in
     * Unix format and UTC time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSeenTime() const { return m_lastSeenTime; }
    inline bool LastSeenTimeHasBeenSet() const { return m_lastSeenTimeHasBeenSet; }
    template<typename LastSeenTimeT = Aws::Utils::DateTime>
    void SetLastSeenTime(LastSeenTimeT&& value) { m_lastSeenTimeHasBeenSet = true; m_lastSeenTime = std::forward<LastSeenTimeT>(value); }
    template<typename LastSeenTimeT = Aws::Utils::DateTime>
    GatewayDetails& WithLastSeenTime(LastSeenTimeT&& value) { SetLastSeenTime(std::forward<LastSeenTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns your gateway's weekly maintenance start time including the day and
     * time of the week. Note that values are in terms of the gateway's time zone. Can
     * be weekly or monthly.</p>
     */
    inline const MaintenanceStartTime& GetMaintenanceStartTime() const { return m_maintenanceStartTime; }
    inline bool MaintenanceStartTimeHasBeenSet() const { return m_maintenanceStartTimeHasBeenSet; }
    template<typename MaintenanceStartTimeT = MaintenanceStartTime>
    void SetMaintenanceStartTime(MaintenanceStartTimeT&& value) { m_maintenanceStartTimeHasBeenSet = true; m_maintenanceStartTime = std::forward<MaintenanceStartTimeT>(value); }
    template<typename MaintenanceStartTimeT = MaintenanceStartTime>
    GatewayDetails& WithMaintenanceStartTime(MaintenanceStartTimeT&& value) { SetMaintenanceStartTime(std::forward<MaintenanceStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details showing the next update availability time of the gateway.</p>
     */
    inline const Aws::Utils::DateTime& GetNextUpdateAvailabilityTime() const { return m_nextUpdateAvailabilityTime; }
    inline bool NextUpdateAvailabilityTimeHasBeenSet() const { return m_nextUpdateAvailabilityTimeHasBeenSet; }
    template<typename NextUpdateAvailabilityTimeT = Aws::Utils::DateTime>
    void SetNextUpdateAvailabilityTime(NextUpdateAvailabilityTimeT&& value) { m_nextUpdateAvailabilityTimeHasBeenSet = true; m_nextUpdateAvailabilityTime = std::forward<NextUpdateAvailabilityTimeT>(value); }
    template<typename NextUpdateAvailabilityTimeT = Aws::Utils::DateTime>
    GatewayDetails& WithNextUpdateAvailabilityTime(NextUpdateAvailabilityTimeT&& value) { SetNextUpdateAvailabilityTime(std::forward<NextUpdateAvailabilityTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name for the virtual private cloud (VPC) endpoint the gateway uses to
     * connect to the cloud for backup gateway.</p>
     */
    inline const Aws::String& GetVpcEndpoint() const { return m_vpcEndpoint; }
    inline bool VpcEndpointHasBeenSet() const { return m_vpcEndpointHasBeenSet; }
    template<typename VpcEndpointT = Aws::String>
    void SetVpcEndpoint(VpcEndpointT&& value) { m_vpcEndpointHasBeenSet = true; m_vpcEndpoint = std::forward<VpcEndpointT>(value); }
    template<typename VpcEndpointT = Aws::String>
    GatewayDetails& WithVpcEndpoint(VpcEndpointT&& value) { SetVpcEndpoint(std::forward<VpcEndpointT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayArn;
    bool m_gatewayArnHasBeenSet = false;

    Aws::String m_gatewayDisplayName;
    bool m_gatewayDisplayNameHasBeenSet = false;

    GatewayType m_gatewayType{GatewayType::NOT_SET};
    bool m_gatewayTypeHasBeenSet = false;

    Aws::String m_hypervisorId;
    bool m_hypervisorIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastSeenTime{};
    bool m_lastSeenTimeHasBeenSet = false;

    MaintenanceStartTime m_maintenanceStartTime;
    bool m_maintenanceStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_nextUpdateAvailabilityTime{};
    bool m_nextUpdateAvailabilityTimeHasBeenSet = false;

    Aws::String m_vpcEndpoint;
    bool m_vpcEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
