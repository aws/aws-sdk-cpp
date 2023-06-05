/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxEnvironment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

KxEnvironment::KxEnvironment() : 
    m_nameHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_status(EnvironmentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tgwStatus(TgwStatus::NOT_SET),
    m_tgwStatusHasBeenSet(false),
    m_dnsStatus(DnsStatus::NOT_SET),
    m_dnsStatusHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_environmentArnHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dedicatedServiceAccountIdHasBeenSet(false),
    m_transitGatewayConfigurationHasBeenSet(false),
    m_customDNSConfigurationHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_updateTimestampHasBeenSet(false),
    m_availabilityZoneIdsHasBeenSet(false),
    m_certificateAuthorityArnHasBeenSet(false)
{
}

KxEnvironment::KxEnvironment(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_status(EnvironmentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tgwStatus(TgwStatus::NOT_SET),
    m_tgwStatusHasBeenSet(false),
    m_dnsStatus(DnsStatus::NOT_SET),
    m_dnsStatusHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_environmentArnHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dedicatedServiceAccountIdHasBeenSet(false),
    m_transitGatewayConfigurationHasBeenSet(false),
    m_customDNSConfigurationHasBeenSet(false),
    m_creationTimestampHasBeenSet(false),
    m_updateTimestampHasBeenSet(false),
    m_availabilityZoneIdsHasBeenSet(false),
    m_certificateAuthorityArnHasBeenSet(false)
{
  *this = jsonValue;
}

KxEnvironment& KxEnvironment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

    m_environmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");

    m_awsAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = EnvironmentStatusMapper::GetEnvironmentStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tgwStatus"))
  {
    m_tgwStatus = TgwStatusMapper::GetTgwStatusForName(jsonValue.GetString("tgwStatus"));

    m_tgwStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dnsStatus"))
  {
    m_dnsStatus = DnsStatusMapper::GetDnsStatusForName(jsonValue.GetString("dnsStatus"));

    m_dnsStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentArn"))
  {
    m_environmentArn = jsonValue.GetString("environmentArn");

    m_environmentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dedicatedServiceAccountId"))
  {
    m_dedicatedServiceAccountId = jsonValue.GetString("dedicatedServiceAccountId");

    m_dedicatedServiceAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transitGatewayConfiguration"))
  {
    m_transitGatewayConfiguration = jsonValue.GetObject("transitGatewayConfiguration");

    m_transitGatewayConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customDNSConfiguration"))
  {
    Aws::Utils::Array<JsonView> customDNSConfigurationJsonList = jsonValue.GetArray("customDNSConfiguration");
    for(unsigned customDNSConfigurationIndex = 0; customDNSConfigurationIndex < customDNSConfigurationJsonList.GetLength(); ++customDNSConfigurationIndex)
    {
      m_customDNSConfiguration.push_back(customDNSConfigurationJsonList[customDNSConfigurationIndex].AsObject());
    }
    m_customDNSConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("creationTimestamp");

    m_creationTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateTimestamp"))
  {
    m_updateTimestamp = jsonValue.GetDouble("updateTimestamp");

    m_updateTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availabilityZoneIds"))
  {
    Aws::Utils::Array<JsonView> availabilityZoneIdsJsonList = jsonValue.GetArray("availabilityZoneIds");
    for(unsigned availabilityZoneIdsIndex = 0; availabilityZoneIdsIndex < availabilityZoneIdsJsonList.GetLength(); ++availabilityZoneIdsIndex)
    {
      m_availabilityZoneIds.push_back(availabilityZoneIdsJsonList[availabilityZoneIdsIndex].AsString());
    }
    m_availabilityZoneIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("certificateAuthorityArn"))
  {
    m_certificateAuthorityArn = jsonValue.GetString("certificateAuthorityArn");

    m_certificateAuthorityArnHasBeenSet = true;
  }

  return *this;
}

JsonValue KxEnvironment::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("awsAccountId", m_awsAccountId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", EnvironmentStatusMapper::GetNameForEnvironmentStatus(m_status));
  }

  if(m_tgwStatusHasBeenSet)
  {
   payload.WithString("tgwStatus", TgwStatusMapper::GetNameForTgwStatus(m_tgwStatus));
  }

  if(m_dnsStatusHasBeenSet)
  {
   payload.WithString("dnsStatus", DnsStatusMapper::GetNameForDnsStatus(m_dnsStatus));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_environmentArnHasBeenSet)
  {
   payload.WithString("environmentArn", m_environmentArn);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("kmsKeyId", m_kmsKeyId);

  }

  if(m_dedicatedServiceAccountIdHasBeenSet)
  {
   payload.WithString("dedicatedServiceAccountId", m_dedicatedServiceAccountId);

  }

  if(m_transitGatewayConfigurationHasBeenSet)
  {
   payload.WithObject("transitGatewayConfiguration", m_transitGatewayConfiguration.Jsonize());

  }

  if(m_customDNSConfigurationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customDNSConfigurationJsonList(m_customDNSConfiguration.size());
   for(unsigned customDNSConfigurationIndex = 0; customDNSConfigurationIndex < customDNSConfigurationJsonList.GetLength(); ++customDNSConfigurationIndex)
   {
     customDNSConfigurationJsonList[customDNSConfigurationIndex].AsObject(m_customDNSConfiguration[customDNSConfigurationIndex].Jsonize());
   }
   payload.WithArray("customDNSConfiguration", std::move(customDNSConfigurationJsonList));

  }

  if(m_creationTimestampHasBeenSet)
  {
   payload.WithDouble("creationTimestamp", m_creationTimestamp.SecondsWithMSPrecision());
  }

  if(m_updateTimestampHasBeenSet)
  {
   payload.WithDouble("updateTimestamp", m_updateTimestamp.SecondsWithMSPrecision());
  }

  if(m_availabilityZoneIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> availabilityZoneIdsJsonList(m_availabilityZoneIds.size());
   for(unsigned availabilityZoneIdsIndex = 0; availabilityZoneIdsIndex < availabilityZoneIdsJsonList.GetLength(); ++availabilityZoneIdsIndex)
   {
     availabilityZoneIdsJsonList[availabilityZoneIdsIndex].AsString(m_availabilityZoneIds[availabilityZoneIdsIndex]);
   }
   payload.WithArray("availabilityZoneIds", std::move(availabilityZoneIdsJsonList));

  }

  if(m_certificateAuthorityArnHasBeenSet)
  {
   payload.WithString("certificateAuthorityArn", m_certificateAuthorityArn);

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
