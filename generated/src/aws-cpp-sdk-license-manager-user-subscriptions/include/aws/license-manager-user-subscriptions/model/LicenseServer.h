/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/model/LicenseServerHealthStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/LicenseServerEndpointProvisioningStatus.h>
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
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

  /**
   * <p>Information about a Remote Desktop Services (RDS) license
   * server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/LicenseServer">AWS
   * API Reference</a></p>
   */
  class LicenseServer
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseServer();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseServer(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The health status of the RDS license server.</p>
     */
    inline const LicenseServerHealthStatus& GetHealthStatus() const{ return m_healthStatus; }
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }
    inline void SetHealthStatus(const LicenseServerHealthStatus& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }
    inline void SetHealthStatus(LicenseServerHealthStatus&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::move(value); }
    inline LicenseServer& WithHealthStatus(const LicenseServerHealthStatus& value) { SetHealthStatus(value); return *this;}
    inline LicenseServer& WithHealthStatus(LicenseServerHealthStatus&& value) { SetHealthStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of domain IPv4 addresses that are used for the RDS license server.</p>
     */
    inline const Aws::String& GetIpv4Address() const{ return m_ipv4Address; }
    inline bool Ipv4AddressHasBeenSet() const { return m_ipv4AddressHasBeenSet; }
    inline void SetIpv4Address(const Aws::String& value) { m_ipv4AddressHasBeenSet = true; m_ipv4Address = value; }
    inline void SetIpv4Address(Aws::String&& value) { m_ipv4AddressHasBeenSet = true; m_ipv4Address = std::move(value); }
    inline void SetIpv4Address(const char* value) { m_ipv4AddressHasBeenSet = true; m_ipv4Address.assign(value); }
    inline LicenseServer& WithIpv4Address(const Aws::String& value) { SetIpv4Address(value); return *this;}
    inline LicenseServer& WithIpv4Address(Aws::String&& value) { SetIpv4Address(std::move(value)); return *this;}
    inline LicenseServer& WithIpv4Address(const char* value) { SetIpv4Address(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the provisioning process for the RDS license server.</p>
     */
    inline const LicenseServerEndpointProvisioningStatus& GetProvisioningStatus() const{ return m_provisioningStatus; }
    inline bool ProvisioningStatusHasBeenSet() const { return m_provisioningStatusHasBeenSet; }
    inline void SetProvisioningStatus(const LicenseServerEndpointProvisioningStatus& value) { m_provisioningStatusHasBeenSet = true; m_provisioningStatus = value; }
    inline void SetProvisioningStatus(LicenseServerEndpointProvisioningStatus&& value) { m_provisioningStatusHasBeenSet = true; m_provisioningStatus = std::move(value); }
    inline LicenseServer& WithProvisioningStatus(const LicenseServerEndpointProvisioningStatus& value) { SetProvisioningStatus(value); return *this;}
    inline LicenseServer& WithProvisioningStatus(LicenseServerEndpointProvisioningStatus&& value) { SetProvisioningStatus(std::move(value)); return *this;}
    ///@}
  private:

    LicenseServerHealthStatus m_healthStatus;
    bool m_healthStatusHasBeenSet = false;

    Aws::String m_ipv4Address;
    bool m_ipv4AddressHasBeenSet = false;

    LicenseServerEndpointProvisioningStatus m_provisioningStatus;
    bool m_provisioningStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
