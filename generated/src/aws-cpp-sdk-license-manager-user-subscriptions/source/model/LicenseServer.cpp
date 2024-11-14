/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/LicenseServer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

LicenseServer::LicenseServer() : 
    m_healthStatus(LicenseServerHealthStatus::NOT_SET),
    m_healthStatusHasBeenSet(false),
    m_ipv4AddressHasBeenSet(false),
    m_provisioningStatus(LicenseServerEndpointProvisioningStatus::NOT_SET),
    m_provisioningStatusHasBeenSet(false)
{
}

LicenseServer::LicenseServer(JsonView jsonValue)
  : LicenseServer()
{
  *this = jsonValue;
}

LicenseServer& LicenseServer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HealthStatus"))
  {
    m_healthStatus = LicenseServerHealthStatusMapper::GetLicenseServerHealthStatusForName(jsonValue.GetString("HealthStatus"));

    m_healthStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ipv4Address"))
  {
    m_ipv4Address = jsonValue.GetString("Ipv4Address");

    m_ipv4AddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisioningStatus"))
  {
    m_provisioningStatus = LicenseServerEndpointProvisioningStatusMapper::GetLicenseServerEndpointProvisioningStatusForName(jsonValue.GetString("ProvisioningStatus"));

    m_provisioningStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue LicenseServer::Jsonize() const
{
  JsonValue payload;

  if(m_healthStatusHasBeenSet)
  {
   payload.WithString("HealthStatus", LicenseServerHealthStatusMapper::GetNameForLicenseServerHealthStatus(m_healthStatus));
  }

  if(m_ipv4AddressHasBeenSet)
  {
   payload.WithString("Ipv4Address", m_ipv4Address);

  }

  if(m_provisioningStatusHasBeenSet)
  {
   payload.WithString("ProvisioningStatus", LicenseServerEndpointProvisioningStatusMapper::GetNameForLicenseServerEndpointProvisioningStatus(m_provisioningStatus));
  }

  return payload;
}

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
