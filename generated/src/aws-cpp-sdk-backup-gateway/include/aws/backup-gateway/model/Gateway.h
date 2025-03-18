/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup-gateway/model/GatewayType.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A gateway is an Backup Gateway appliance that runs on the customer's network
   * to provide seamless connectivity to backup storage in the Amazon Web Services
   * Cloud.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/Gateway">AWS
   * API Reference</a></p>
   */
  class Gateway
  {
  public:
    AWS_BACKUPGATEWAY_API Gateway() = default;
    AWS_BACKUPGATEWAY_API Gateway(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API Gateway& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    Gateway& WithGatewayArn(GatewayArnT&& value) { SetGatewayArn(std::forward<GatewayArnT>(value)); return *this;}
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
    Gateway& WithGatewayDisplayName(GatewayDisplayNameT&& value) { SetGatewayDisplayName(std::forward<GatewayDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the gateway.</p>
     */
    inline GatewayType GetGatewayType() const { return m_gatewayType; }
    inline bool GatewayTypeHasBeenSet() const { return m_gatewayTypeHasBeenSet; }
    inline void SetGatewayType(GatewayType value) { m_gatewayTypeHasBeenSet = true; m_gatewayType = value; }
    inline Gateway& WithGatewayType(GatewayType value) { SetGatewayType(value); return *this;}
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
    Gateway& WithHypervisorId(HypervisorIdT&& value) { SetHypervisorId(std::forward<HypervisorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time Backup gateway communicated with the gateway, in Unix format
     * and UTC time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSeenTime() const { return m_lastSeenTime; }
    inline bool LastSeenTimeHasBeenSet() const { return m_lastSeenTimeHasBeenSet; }
    template<typename LastSeenTimeT = Aws::Utils::DateTime>
    void SetLastSeenTime(LastSeenTimeT&& value) { m_lastSeenTimeHasBeenSet = true; m_lastSeenTime = std::forward<LastSeenTimeT>(value); }
    template<typename LastSeenTimeT = Aws::Utils::DateTime>
    Gateway& WithLastSeenTime(LastSeenTimeT&& value) { SetLastSeenTime(std::forward<LastSeenTimeT>(value)); return *this;}
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
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
