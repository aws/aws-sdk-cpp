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
    AWS_BACKUPGATEWAY_API Gateway();
    AWS_BACKUPGATEWAY_API Gateway(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API Gateway& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the
     * <code>ListGateways</code> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetGatewayArn() const{ return m_gatewayArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the
     * <code>ListGateways</code> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the
     * <code>ListGateways</code> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline void SetGatewayArn(const Aws::String& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the
     * <code>ListGateways</code> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline void SetGatewayArn(Aws::String&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the
     * <code>ListGateways</code> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline void SetGatewayArn(const char* value) { m_gatewayArnHasBeenSet = true; m_gatewayArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the
     * <code>ListGateways</code> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline Gateway& WithGatewayArn(const Aws::String& value) { SetGatewayArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the
     * <code>ListGateways</code> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline Gateway& WithGatewayArn(Aws::String&& value) { SetGatewayArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the
     * <code>ListGateways</code> operation to return a list of gateways for your
     * account and Amazon Web Services Region.</p>
     */
    inline Gateway& WithGatewayArn(const char* value) { SetGatewayArn(value); return *this;}


    /**
     * <p>The display name of the gateway.</p>
     */
    inline const Aws::String& GetGatewayDisplayName() const{ return m_gatewayDisplayName; }

    /**
     * <p>The display name of the gateway.</p>
     */
    inline bool GatewayDisplayNameHasBeenSet() const { return m_gatewayDisplayNameHasBeenSet; }

    /**
     * <p>The display name of the gateway.</p>
     */
    inline void SetGatewayDisplayName(const Aws::String& value) { m_gatewayDisplayNameHasBeenSet = true; m_gatewayDisplayName = value; }

    /**
     * <p>The display name of the gateway.</p>
     */
    inline void SetGatewayDisplayName(Aws::String&& value) { m_gatewayDisplayNameHasBeenSet = true; m_gatewayDisplayName = std::move(value); }

    /**
     * <p>The display name of the gateway.</p>
     */
    inline void SetGatewayDisplayName(const char* value) { m_gatewayDisplayNameHasBeenSet = true; m_gatewayDisplayName.assign(value); }

    /**
     * <p>The display name of the gateway.</p>
     */
    inline Gateway& WithGatewayDisplayName(const Aws::String& value) { SetGatewayDisplayName(value); return *this;}

    /**
     * <p>The display name of the gateway.</p>
     */
    inline Gateway& WithGatewayDisplayName(Aws::String&& value) { SetGatewayDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the gateway.</p>
     */
    inline Gateway& WithGatewayDisplayName(const char* value) { SetGatewayDisplayName(value); return *this;}


    /**
     * <p>The type of the gateway.</p>
     */
    inline const GatewayType& GetGatewayType() const{ return m_gatewayType; }

    /**
     * <p>The type of the gateway.</p>
     */
    inline bool GatewayTypeHasBeenSet() const { return m_gatewayTypeHasBeenSet; }

    /**
     * <p>The type of the gateway.</p>
     */
    inline void SetGatewayType(const GatewayType& value) { m_gatewayTypeHasBeenSet = true; m_gatewayType = value; }

    /**
     * <p>The type of the gateway.</p>
     */
    inline void SetGatewayType(GatewayType&& value) { m_gatewayTypeHasBeenSet = true; m_gatewayType = std::move(value); }

    /**
     * <p>The type of the gateway.</p>
     */
    inline Gateway& WithGatewayType(const GatewayType& value) { SetGatewayType(value); return *this;}

    /**
     * <p>The type of the gateway.</p>
     */
    inline Gateway& WithGatewayType(GatewayType&& value) { SetGatewayType(std::move(value)); return *this;}


    /**
     * <p>The hypervisor ID of the gateway.</p>
     */
    inline const Aws::String& GetHypervisorId() const{ return m_hypervisorId; }

    /**
     * <p>The hypervisor ID of the gateway.</p>
     */
    inline bool HypervisorIdHasBeenSet() const { return m_hypervisorIdHasBeenSet; }

    /**
     * <p>The hypervisor ID of the gateway.</p>
     */
    inline void SetHypervisorId(const Aws::String& value) { m_hypervisorIdHasBeenSet = true; m_hypervisorId = value; }

    /**
     * <p>The hypervisor ID of the gateway.</p>
     */
    inline void SetHypervisorId(Aws::String&& value) { m_hypervisorIdHasBeenSet = true; m_hypervisorId = std::move(value); }

    /**
     * <p>The hypervisor ID of the gateway.</p>
     */
    inline void SetHypervisorId(const char* value) { m_hypervisorIdHasBeenSet = true; m_hypervisorId.assign(value); }

    /**
     * <p>The hypervisor ID of the gateway.</p>
     */
    inline Gateway& WithHypervisorId(const Aws::String& value) { SetHypervisorId(value); return *this;}

    /**
     * <p>The hypervisor ID of the gateway.</p>
     */
    inline Gateway& WithHypervisorId(Aws::String&& value) { SetHypervisorId(std::move(value)); return *this;}

    /**
     * <p>The hypervisor ID of the gateway.</p>
     */
    inline Gateway& WithHypervisorId(const char* value) { SetHypervisorId(value); return *this;}


    /**
     * <p>The last time Backup gateway communicated with the gateway, in Unix format
     * and UTC time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSeenTime() const{ return m_lastSeenTime; }

    /**
     * <p>The last time Backup gateway communicated with the gateway, in Unix format
     * and UTC time.</p>
     */
    inline bool LastSeenTimeHasBeenSet() const { return m_lastSeenTimeHasBeenSet; }

    /**
     * <p>The last time Backup gateway communicated with the gateway, in Unix format
     * and UTC time.</p>
     */
    inline void SetLastSeenTime(const Aws::Utils::DateTime& value) { m_lastSeenTimeHasBeenSet = true; m_lastSeenTime = value; }

    /**
     * <p>The last time Backup gateway communicated with the gateway, in Unix format
     * and UTC time.</p>
     */
    inline void SetLastSeenTime(Aws::Utils::DateTime&& value) { m_lastSeenTimeHasBeenSet = true; m_lastSeenTime = std::move(value); }

    /**
     * <p>The last time Backup gateway communicated with the gateway, in Unix format
     * and UTC time.</p>
     */
    inline Gateway& WithLastSeenTime(const Aws::Utils::DateTime& value) { SetLastSeenTime(value); return *this;}

    /**
     * <p>The last time Backup gateway communicated with the gateway, in Unix format
     * and UTC time.</p>
     */
    inline Gateway& WithLastSeenTime(Aws::Utils::DateTime&& value) { SetLastSeenTime(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
