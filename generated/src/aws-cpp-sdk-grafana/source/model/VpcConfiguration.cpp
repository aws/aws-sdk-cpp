/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/VpcConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{

VpcConfiguration::VpcConfiguration() : 
    m_securityGroupIdsHasBeenSet(false),
    m_subnetIdsHasBeenSet(false)
{
}

VpcConfiguration::VpcConfiguration(JsonView jsonValue) : 
    m_securityGroupIdsHasBeenSet(false),
    m_subnetIdsHasBeenSet(false)
{
  *this = jsonValue;
}

VpcConfiguration& VpcConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("securityGroupIds"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("securityGroupIds");
    for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
    {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_securityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
   for(unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex)
   {
     securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
   }
   payload.WithArray("securityGroupIds", std::move(securityGroupIdsJsonList));

  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("subnetIds", std::move(subnetIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
