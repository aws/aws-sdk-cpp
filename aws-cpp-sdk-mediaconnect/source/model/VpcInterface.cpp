/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/VpcInterface.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

VpcInterface::VpcInterface() : 
    m_nameHasBeenSet(false),
    m_networkInterfaceIdsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

VpcInterface::VpcInterface(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_networkInterfaceIdsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
  *this = jsonValue;
}

VpcInterface& VpcInterface::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkInterfaceIds"))
  {
    Array<JsonView> networkInterfaceIdsJsonList = jsonValue.GetArray("networkInterfaceIds");
    for(unsigned networkInterfaceIdsIndex = 0; networkInterfaceIdsIndex < networkInterfaceIdsJsonList.GetLength(); ++networkInterfaceIdsIndex)
    {
      m_networkInterfaceIds.push_back(networkInterfaceIdsJsonList[networkInterfaceIdsIndex].AsString());
    }
    m_networkInterfaceIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("securityGroupIds"))
  {
    Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("securityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subnetId"))
  {
    m_subnetId = jsonValue.GetString("subnetId");

    m_subnetIdHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcInterface::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_networkInterfaceIdsHasBeenSet)
  {
   Array<JsonValue> networkInterfaceIdsJsonList(m_networkInterfaceIds.size());
   for(unsigned networkInterfaceIdsIndex = 0; networkInterfaceIdsIndex < networkInterfaceIdsJsonList.GetLength(); ++networkInterfaceIdsIndex)
   {
     networkInterfaceIdsJsonList[networkInterfaceIdsIndex].AsString(m_networkInterfaceIds[networkInterfaceIdsIndex]);
   }
   payload.WithArray("networkInterfaceIds", std::move(networkInterfaceIdsJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_securityGroupIdsHasBeenSet)
  {
   Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("securityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("subnetId", m_subnetId);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
