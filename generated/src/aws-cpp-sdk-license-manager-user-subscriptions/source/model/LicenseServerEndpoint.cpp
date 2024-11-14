/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-user-subscriptions/model/LicenseServerEndpoint.h>
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

LicenseServerEndpoint::LicenseServerEndpoint() : 
    m_creationTimeHasBeenSet(false),
    m_identityProviderArnHasBeenSet(false),
    m_licenseServerEndpointArnHasBeenSet(false),
    m_licenseServerEndpointIdHasBeenSet(false),
    m_licenseServerEndpointProvisioningStatus(LicenseServerEndpointProvisioningStatus::NOT_SET),
    m_licenseServerEndpointProvisioningStatusHasBeenSet(false),
    m_licenseServersHasBeenSet(false),
    m_serverEndpointHasBeenSet(false),
    m_serverType(ServerType::NOT_SET),
    m_serverTypeHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

LicenseServerEndpoint::LicenseServerEndpoint(JsonView jsonValue)
  : LicenseServerEndpoint()
{
  *this = jsonValue;
}

LicenseServerEndpoint& LicenseServerEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdentityProviderArn"))
  {
    m_identityProviderArn = jsonValue.GetString("IdentityProviderArn");

    m_identityProviderArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseServerEndpointArn"))
  {
    m_licenseServerEndpointArn = jsonValue.GetString("LicenseServerEndpointArn");

    m_licenseServerEndpointArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseServerEndpointId"))
  {
    m_licenseServerEndpointId = jsonValue.GetString("LicenseServerEndpointId");

    m_licenseServerEndpointIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseServerEndpointProvisioningStatus"))
  {
    m_licenseServerEndpointProvisioningStatus = LicenseServerEndpointProvisioningStatusMapper::GetLicenseServerEndpointProvisioningStatusForName(jsonValue.GetString("LicenseServerEndpointProvisioningStatus"));

    m_licenseServerEndpointProvisioningStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LicenseServers"))
  {
    Aws::Utils::Array<JsonView> licenseServersJsonList = jsonValue.GetArray("LicenseServers");
    for(unsigned licenseServersIndex = 0; licenseServersIndex < licenseServersJsonList.GetLength(); ++licenseServersIndex)
    {
      m_licenseServers.push_back(licenseServersJsonList[licenseServersIndex].AsObject());
    }
    m_licenseServersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerEndpoint"))
  {
    m_serverEndpoint = jsonValue.GetObject("ServerEndpoint");

    m_serverEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerType"))
  {
    m_serverType = ServerTypeMapper::GetServerTypeForName(jsonValue.GetString("ServerType"));

    m_serverTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue LicenseServerEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_identityProviderArnHasBeenSet)
  {
   payload.WithString("IdentityProviderArn", m_identityProviderArn);

  }

  if(m_licenseServerEndpointArnHasBeenSet)
  {
   payload.WithString("LicenseServerEndpointArn", m_licenseServerEndpointArn);

  }

  if(m_licenseServerEndpointIdHasBeenSet)
  {
   payload.WithString("LicenseServerEndpointId", m_licenseServerEndpointId);

  }

  if(m_licenseServerEndpointProvisioningStatusHasBeenSet)
  {
   payload.WithString("LicenseServerEndpointProvisioningStatus", LicenseServerEndpointProvisioningStatusMapper::GetNameForLicenseServerEndpointProvisioningStatus(m_licenseServerEndpointProvisioningStatus));
  }

  if(m_licenseServersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> licenseServersJsonList(m_licenseServers.size());
   for(unsigned licenseServersIndex = 0; licenseServersIndex < licenseServersJsonList.GetLength(); ++licenseServersIndex)
   {
     licenseServersJsonList[licenseServersIndex].AsObject(m_licenseServers[licenseServersIndex].Jsonize());
   }
   payload.WithArray("LicenseServers", std::move(licenseServersJsonList));

  }

  if(m_serverEndpointHasBeenSet)
  {
   payload.WithObject("ServerEndpoint", m_serverEndpoint.Jsonize());

  }

  if(m_serverTypeHasBeenSet)
  {
   payload.WithString("ServerType", ServerTypeMapper::GetNameForServerType(m_serverType));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
