/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/PhysicalConnectionRequirements.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

PhysicalConnectionRequirements::PhysicalConnectionRequirements(JsonView jsonValue)
{
  *this = jsonValue;
}

PhysicalConnectionRequirements& PhysicalConnectionRequirements::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("availabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("availabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("securityGroupIdList"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdListJsonList = jsonValue.GetArray("securityGroupIdList");
    for(unsigned securityGroupIdListIndex = 0; securityGroupIdListIndex < securityGroupIdListJsonList.GetLength(); ++securityGroupIdListIndex)
    {
      m_securityGroupIdList.push_back(securityGroupIdListJsonList[securityGroupIdListIndex].AsString());
    }
    m_securityGroupIdListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subnetId"))
  {
    m_subnetId = jsonValue.GetString("subnetId");
    m_subnetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subnetIdList"))
  {
    Aws::Utils::Array<JsonView> subnetIdListJsonList = jsonValue.GetArray("subnetIdList");
    for(unsigned subnetIdListIndex = 0; subnetIdListIndex < subnetIdListJsonList.GetLength(); ++subnetIdListIndex)
    {
      m_subnetIdList.push_back(subnetIdListJsonList[subnetIdListIndex].AsString());
    }
    m_subnetIdListHasBeenSet = true;
  }
  return *this;
}

JsonValue PhysicalConnectionRequirements::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_securityGroupIdListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdListJsonList(m_securityGroupIdList.size());
   for(unsigned securityGroupIdListIndex = 0; securityGroupIdListIndex < securityGroupIdListJsonList.GetLength(); ++securityGroupIdListIndex)
   {
     securityGroupIdListJsonList[securityGroupIdListIndex].AsString(m_securityGroupIdList[securityGroupIdListIndex]);
   }
   payload.WithArray("securityGroupIdList", std::move(securityGroupIdListJsonList));

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("subnetId", m_subnetId);

  }

  if(m_subnetIdListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdListJsonList(m_subnetIdList.size());
   for(unsigned subnetIdListIndex = 0; subnetIdListIndex < subnetIdListJsonList.GetLength(); ++subnetIdListIndex)
   {
     subnetIdListJsonList[subnetIdListIndex].AsString(m_subnetIdList[subnetIdListIndex]);
   }
   payload.WithArray("subnetIdList", std::move(subnetIdListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
