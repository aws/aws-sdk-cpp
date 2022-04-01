/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ReplicationSubnetGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

ReplicationSubnetGroup::ReplicationSubnetGroup() : 
    m_replicationSubnetGroupIdentifierHasBeenSet(false),
    m_replicationSubnetGroupDescriptionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetGroupStatusHasBeenSet(false),
    m_subnetsHasBeenSet(false)
{
}

ReplicationSubnetGroup::ReplicationSubnetGroup(JsonView jsonValue) : 
    m_replicationSubnetGroupIdentifierHasBeenSet(false),
    m_replicationSubnetGroupDescriptionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetGroupStatusHasBeenSet(false),
    m_subnetsHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationSubnetGroup& ReplicationSubnetGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReplicationSubnetGroupIdentifier"))
  {
    m_replicationSubnetGroupIdentifier = jsonValue.GetString("ReplicationSubnetGroupIdentifier");

    m_replicationSubnetGroupIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationSubnetGroupDescription"))
  {
    m_replicationSubnetGroupDescription = jsonValue.GetString("ReplicationSubnetGroupDescription");

    m_replicationSubnetGroupDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetGroupStatus"))
  {
    m_subnetGroupStatus = jsonValue.GetString("SubnetGroupStatus");

    m_subnetGroupStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subnets"))
  {
    Array<JsonView> subnetsJsonList = jsonValue.GetArray("Subnets");
    for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
    {
      m_subnets.push_back(subnetsJsonList[subnetsIndex].AsObject());
    }
    m_subnetsHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationSubnetGroup::Jsonize() const
{
  JsonValue payload;

  if(m_replicationSubnetGroupIdentifierHasBeenSet)
  {
   payload.WithString("ReplicationSubnetGroupIdentifier", m_replicationSubnetGroupIdentifier);

  }

  if(m_replicationSubnetGroupDescriptionHasBeenSet)
  {
   payload.WithString("ReplicationSubnetGroupDescription", m_replicationSubnetGroupDescription);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_subnetGroupStatusHasBeenSet)
  {
   payload.WithString("SubnetGroupStatus", m_subnetGroupStatus);

  }

  if(m_subnetsHasBeenSet)
  {
   Array<JsonValue> subnetsJsonList(m_subnets.size());
   for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
   {
     subnetsJsonList[subnetsIndex].AsObject(m_subnets[subnetsIndex].Jsonize());
   }
   payload.WithArray("Subnets", std::move(subnetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
