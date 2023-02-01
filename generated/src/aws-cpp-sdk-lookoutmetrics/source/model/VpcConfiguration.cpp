/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/VpcConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

VpcConfiguration::VpcConfiguration() : 
    m_subnetIdListHasBeenSet(false),
    m_securityGroupIdListHasBeenSet(false)
{
}

VpcConfiguration::VpcConfiguration(JsonView jsonValue) : 
    m_subnetIdListHasBeenSet(false),
    m_securityGroupIdListHasBeenSet(false)
{
  *this = jsonValue;
}

VpcConfiguration& VpcConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SubnetIdList"))
  {
    Aws::Utils::Array<JsonView> subnetIdListJsonList = jsonValue.GetArray("SubnetIdList");
    for(unsigned subnetIdListIndex = 0; subnetIdListIndex < subnetIdListJsonList.GetLength(); ++subnetIdListIndex)
    {
      m_subnetIdList.push_back(subnetIdListJsonList[subnetIdListIndex].AsString());
    }
    m_subnetIdListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroupIdList"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdListJsonList = jsonValue.GetArray("SecurityGroupIdList");
    for(unsigned securityGroupIdListIndex = 0; securityGroupIdListIndex < securityGroupIdListJsonList.GetLength(); ++securityGroupIdListIndex)
    {
      m_securityGroupIdList.push_back(securityGroupIdListJsonList[securityGroupIdListIndex].AsString());
    }
    m_securityGroupIdListHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_subnetIdListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdListJsonList(m_subnetIdList.size());
   for(unsigned subnetIdListIndex = 0; subnetIdListIndex < subnetIdListJsonList.GetLength(); ++subnetIdListIndex)
   {
     subnetIdListJsonList[subnetIdListIndex].AsString(m_subnetIdList[subnetIdListIndex]);
   }
   payload.WithArray("SubnetIdList", std::move(subnetIdListJsonList));

  }

  if(m_securityGroupIdListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdListJsonList(m_securityGroupIdList.size());
   for(unsigned securityGroupIdListIndex = 0; securityGroupIdListIndex < securityGroupIdListJsonList.GetLength(); ++securityGroupIdListIndex)
   {
     securityGroupIdListJsonList[securityGroupIdListIndex].AsString(m_securityGroupIdList[securityGroupIdListIndex]);
   }
   payload.WithArray("SecurityGroupIdList", std::move(securityGroupIdListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
