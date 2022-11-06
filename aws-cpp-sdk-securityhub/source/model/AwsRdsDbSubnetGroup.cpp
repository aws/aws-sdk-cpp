/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsRdsDbSubnetGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsRdsDbSubnetGroup::AwsRdsDbSubnetGroup() : 
    m_dbSubnetGroupNameHasBeenSet(false),
    m_dbSubnetGroupDescriptionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetGroupStatusHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_dbSubnetGroupArnHasBeenSet(false)
{
}

AwsRdsDbSubnetGroup::AwsRdsDbSubnetGroup(JsonView jsonValue) : 
    m_dbSubnetGroupNameHasBeenSet(false),
    m_dbSubnetGroupDescriptionHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetGroupStatusHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_dbSubnetGroupArnHasBeenSet(false)
{
  *this = jsonValue;
}

AwsRdsDbSubnetGroup& AwsRdsDbSubnetGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DbSubnetGroupName"))
  {
    m_dbSubnetGroupName = jsonValue.GetString("DbSubnetGroupName");

    m_dbSubnetGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbSubnetGroupDescription"))
  {
    m_dbSubnetGroupDescription = jsonValue.GetString("DbSubnetGroupDescription");

    m_dbSubnetGroupDescriptionHasBeenSet = true;
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
    Aws::Utils::Array<JsonView> subnetsJsonList = jsonValue.GetArray("Subnets");
    for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
    {
      m_subnets.push_back(subnetsJsonList[subnetsIndex].AsObject());
    }
    m_subnetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DbSubnetGroupArn"))
  {
    m_dbSubnetGroupArn = jsonValue.GetString("DbSubnetGroupArn");

    m_dbSubnetGroupArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsRdsDbSubnetGroup::Jsonize() const
{
  JsonValue payload;

  if(m_dbSubnetGroupNameHasBeenSet)
  {
   payload.WithString("DbSubnetGroupName", m_dbSubnetGroupName);

  }

  if(m_dbSubnetGroupDescriptionHasBeenSet)
  {
   payload.WithString("DbSubnetGroupDescription", m_dbSubnetGroupDescription);

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
   Aws::Utils::Array<JsonValue> subnetsJsonList(m_subnets.size());
   for(unsigned subnetsIndex = 0; subnetsIndex < subnetsJsonList.GetLength(); ++subnetsIndex)
   {
     subnetsJsonList[subnetsIndex].AsObject(m_subnets[subnetsIndex].Jsonize());
   }
   payload.WithArray("Subnets", std::move(subnetsJsonList));

  }

  if(m_dbSubnetGroupArnHasBeenSet)
  {
   payload.WithString("DbSubnetGroupArn", m_dbSubnetGroupArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
