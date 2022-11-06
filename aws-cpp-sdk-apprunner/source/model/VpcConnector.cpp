/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/VpcConnector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

VpcConnector::VpcConnector() : 
    m_vpcConnectorNameHasBeenSet(false),
    m_vpcConnectorArnHasBeenSet(false),
    m_vpcConnectorRevision(0),
    m_vpcConnectorRevisionHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_status(VpcConnectorStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_deletedAtHasBeenSet(false)
{
}

VpcConnector::VpcConnector(JsonView jsonValue) : 
    m_vpcConnectorNameHasBeenSet(false),
    m_vpcConnectorArnHasBeenSet(false),
    m_vpcConnectorRevision(0),
    m_vpcConnectorRevisionHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_status(VpcConnectorStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_deletedAtHasBeenSet(false)
{
  *this = jsonValue;
}

VpcConnector& VpcConnector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VpcConnectorName"))
  {
    m_vpcConnectorName = jsonValue.GetString("VpcConnectorName");

    m_vpcConnectorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConnectorArn"))
  {
    m_vpcConnectorArn = jsonValue.GetString("VpcConnectorArn");

    m_vpcConnectorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConnectorRevision"))
  {
    m_vpcConnectorRevision = jsonValue.GetInteger("VpcConnectorRevision");

    m_vpcConnectorRevisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subnets"))
  {
    Aws::Utils::Array<JsonView> subnetsJsonList = jsonValue.GetArray("Subnets");
    for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
    {
      m_subnets.push_back(subnetsJsonList[subnetsIndex].AsString());
    }
    m_subnetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroups"))
  {
    Aws::Utils::Array<JsonView> securityGroupsJsonList = jsonValue.GetArray("SecurityGroups");
    for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
    {
      m_securityGroups.push_back(securityGroupsJsonList[securityGroupsIndex].AsString());
    }
    m_securityGroupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = VpcConnectorStatusMapper::GetVpcConnectorStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeletedAt"))
  {
    m_deletedAt = jsonValue.GetDouble("DeletedAt");

    m_deletedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcConnector::Jsonize() const
{
  JsonValue payload;

  if(m_vpcConnectorNameHasBeenSet)
  {
   payload.WithString("VpcConnectorName", m_vpcConnectorName);

  }

  if(m_vpcConnectorArnHasBeenSet)
  {
   payload.WithString("VpcConnectorArn", m_vpcConnectorArn);

  }

  if(m_vpcConnectorRevisionHasBeenSet)
  {
   payload.WithInteger("VpcConnectorRevision", m_vpcConnectorRevision);

  }

  if(m_subnetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetsJsonList(m_subnets.size());
   for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
   {
     subnetsJsonList[subnetsIndex].AsString(m_subnets[subnetsIndex]);
   }
   payload.WithArray("Subnets", std::move(subnetsJsonList));

  }

  if(m_securityGroupsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupsJsonList(m_securityGroups.size());
   for(unsigned securityGroupsIndex = 0; securityGroupsIndex < securityGroupsJsonList.GetLength(); ++securityGroupsIndex)
   {
     securityGroupsJsonList[securityGroupsIndex].AsString(m_securityGroups[securityGroupsIndex]);
   }
   payload.WithArray("SecurityGroups", std::move(securityGroupsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", VpcConnectorStatusMapper::GetNameForVpcConnectorStatus(m_status));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_deletedAtHasBeenSet)
  {
   payload.WithDouble("DeletedAt", m_deletedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
