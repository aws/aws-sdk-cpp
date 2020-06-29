/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InstanceInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

InstanceInformation::InstanceInformation() : 
    m_instanceIdHasBeenSet(false),
    m_pingStatus(PingStatus::NOT_SET),
    m_pingStatusHasBeenSet(false),
    m_lastPingDateTimeHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_isLatestVersion(false),
    m_isLatestVersionHasBeenSet(false),
    m_platformType(PlatformType::NOT_SET),
    m_platformTypeHasBeenSet(false),
    m_platformNameHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_activationIdHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_registrationDateHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_iPAddressHasBeenSet(false),
    m_computerNameHasBeenSet(false),
    m_associationStatusHasBeenSet(false),
    m_lastAssociationExecutionDateHasBeenSet(false),
    m_lastSuccessfulAssociationExecutionDateHasBeenSet(false),
    m_associationOverviewHasBeenSet(false)
{
}

InstanceInformation::InstanceInformation(JsonView jsonValue) : 
    m_instanceIdHasBeenSet(false),
    m_pingStatus(PingStatus::NOT_SET),
    m_pingStatusHasBeenSet(false),
    m_lastPingDateTimeHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_isLatestVersion(false),
    m_isLatestVersionHasBeenSet(false),
    m_platformType(PlatformType::NOT_SET),
    m_platformTypeHasBeenSet(false),
    m_platformNameHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_activationIdHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_registrationDateHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_iPAddressHasBeenSet(false),
    m_computerNameHasBeenSet(false),
    m_associationStatusHasBeenSet(false),
    m_lastAssociationExecutionDateHasBeenSet(false),
    m_lastSuccessfulAssociationExecutionDateHasBeenSet(false),
    m_associationOverviewHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceInformation& InstanceInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PingStatus"))
  {
    m_pingStatus = PingStatusMapper::GetPingStatusForName(jsonValue.GetString("PingStatus"));

    m_pingStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastPingDateTime"))
  {
    m_lastPingDateTime = jsonValue.GetDouble("LastPingDateTime");

    m_lastPingDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AgentVersion"))
  {
    m_agentVersion = jsonValue.GetString("AgentVersion");

    m_agentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsLatestVersion"))
  {
    m_isLatestVersion = jsonValue.GetBool("IsLatestVersion");

    m_isLatestVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlatformType"))
  {
    m_platformType = PlatformTypeMapper::GetPlatformTypeForName(jsonValue.GetString("PlatformType"));

    m_platformTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlatformName"))
  {
    m_platformName = jsonValue.GetString("PlatformName");

    m_platformNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlatformVersion"))
  {
    m_platformVersion = jsonValue.GetString("PlatformVersion");

    m_platformVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActivationId"))
  {
    m_activationId = jsonValue.GetString("ActivationId");

    m_activationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IamRole"))
  {
    m_iamRole = jsonValue.GetString("IamRole");

    m_iamRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistrationDate"))
  {
    m_registrationDate = jsonValue.GetDouble("RegistrationDate");

    m_registrationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("ResourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IPAddress"))
  {
    m_iPAddress = jsonValue.GetString("IPAddress");

    m_iPAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComputerName"))
  {
    m_computerName = jsonValue.GetString("ComputerName");

    m_computerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationStatus"))
  {
    m_associationStatus = jsonValue.GetString("AssociationStatus");

    m_associationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastAssociationExecutionDate"))
  {
    m_lastAssociationExecutionDate = jsonValue.GetDouble("LastAssociationExecutionDate");

    m_lastAssociationExecutionDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSuccessfulAssociationExecutionDate"))
  {
    m_lastSuccessfulAssociationExecutionDate = jsonValue.GetDouble("LastSuccessfulAssociationExecutionDate");

    m_lastSuccessfulAssociationExecutionDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationOverview"))
  {
    m_associationOverview = jsonValue.GetObject("AssociationOverview");

    m_associationOverviewHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceInformation::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_pingStatusHasBeenSet)
  {
   payload.WithString("PingStatus", PingStatusMapper::GetNameForPingStatus(m_pingStatus));
  }

  if(m_lastPingDateTimeHasBeenSet)
  {
   payload.WithDouble("LastPingDateTime", m_lastPingDateTime.SecondsWithMSPrecision());
  }

  if(m_agentVersionHasBeenSet)
  {
   payload.WithString("AgentVersion", m_agentVersion);

  }

  if(m_isLatestVersionHasBeenSet)
  {
   payload.WithBool("IsLatestVersion", m_isLatestVersion);

  }

  if(m_platformTypeHasBeenSet)
  {
   payload.WithString("PlatformType", PlatformTypeMapper::GetNameForPlatformType(m_platformType));
  }

  if(m_platformNameHasBeenSet)
  {
   payload.WithString("PlatformName", m_platformName);

  }

  if(m_platformVersionHasBeenSet)
  {
   payload.WithString("PlatformVersion", m_platformVersion);

  }

  if(m_activationIdHasBeenSet)
  {
   payload.WithString("ActivationId", m_activationId);

  }

  if(m_iamRoleHasBeenSet)
  {
   payload.WithString("IamRole", m_iamRole);

  }

  if(m_registrationDateHasBeenSet)
  {
   payload.WithDouble("RegistrationDate", m_registrationDate.SecondsWithMSPrecision());
  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_iPAddressHasBeenSet)
  {
   payload.WithString("IPAddress", m_iPAddress);

  }

  if(m_computerNameHasBeenSet)
  {
   payload.WithString("ComputerName", m_computerName);

  }

  if(m_associationStatusHasBeenSet)
  {
   payload.WithString("AssociationStatus", m_associationStatus);

  }

  if(m_lastAssociationExecutionDateHasBeenSet)
  {
   payload.WithDouble("LastAssociationExecutionDate", m_lastAssociationExecutionDate.SecondsWithMSPrecision());
  }

  if(m_lastSuccessfulAssociationExecutionDateHasBeenSet)
  {
   payload.WithDouble("LastSuccessfulAssociationExecutionDate", m_lastSuccessfulAssociationExecutionDate.SecondsWithMSPrecision());
  }

  if(m_associationOverviewHasBeenSet)
  {
   payload.WithObject("AssociationOverview", m_associationOverview.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
