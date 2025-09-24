/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/SubnetGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DAX
{
namespace Model
{

SubnetGroup::SubnetGroup(JsonView jsonValue)
{
  *this = jsonValue;
}

SubnetGroup& SubnetGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SubnetGroupName"))
  {
    m_subnetGroupName = jsonValue.GetString("SubnetGroupName");
    m_subnetGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");
    m_vpcIdHasBeenSet = true;
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
  if(jsonValue.ValueExists("SupportedNetworkTypes"))
  {
    Aws::Utils::Array<JsonView> supportedNetworkTypesJsonList = jsonValue.GetArray("SupportedNetworkTypes");
    for(unsigned supportedNetworkTypesIndex = 0; supportedNetworkTypesIndex < supportedNetworkTypesJsonList.GetLength(); ++supportedNetworkTypesIndex)
    {
      m_supportedNetworkTypes.push_back(NetworkTypeMapper::GetNetworkTypeForName(supportedNetworkTypesJsonList[supportedNetworkTypesIndex].AsString()));
    }
    m_supportedNetworkTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue SubnetGroup::Jsonize() const
{
  JsonValue payload;

  if(m_subnetGroupNameHasBeenSet)
  {
   payload.WithString("SubnetGroupName", m_subnetGroupName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

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

  if(m_supportedNetworkTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedNetworkTypesJsonList(m_supportedNetworkTypes.size());
   for(unsigned supportedNetworkTypesIndex = 0; supportedNetworkTypesIndex < supportedNetworkTypesJsonList.GetLength(); ++supportedNetworkTypesIndex)
   {
     supportedNetworkTypesJsonList[supportedNetworkTypesIndex].AsString(NetworkTypeMapper::GetNameForNetworkType(m_supportedNetworkTypes[supportedNetworkTypesIndex]));
   }
   payload.WithArray("SupportedNetworkTypes", std::move(supportedNetworkTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DAX
} // namespace Aws
