/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/HybridCustomerInstancesSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

HybridCustomerInstancesSettings::HybridCustomerInstancesSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

HybridCustomerInstancesSettings& HybridCustomerInstancesSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomerDnsIps"))
  {
    Aws::Utils::Array<JsonView> customerDnsIpsJsonList = jsonValue.GetArray("CustomerDnsIps");
    for(unsigned customerDnsIpsIndex = 0; customerDnsIpsIndex < customerDnsIpsJsonList.GetLength(); ++customerDnsIpsIndex)
    {
      m_customerDnsIps.push_back(customerDnsIpsJsonList[customerDnsIpsIndex].AsString());
    }
    m_customerDnsIpsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceIds"))
  {
    Aws::Utils::Array<JsonView> instanceIdsJsonList = jsonValue.GetArray("InstanceIds");
    for(unsigned instanceIdsIndex = 0; instanceIdsIndex < instanceIdsJsonList.GetLength(); ++instanceIdsIndex)
    {
      m_instanceIds.push_back(instanceIdsJsonList[instanceIdsIndex].AsString());
    }
    m_instanceIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue HybridCustomerInstancesSettings::Jsonize() const
{
  JsonValue payload;

  if(m_customerDnsIpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customerDnsIpsJsonList(m_customerDnsIps.size());
   for(unsigned customerDnsIpsIndex = 0; customerDnsIpsIndex < customerDnsIpsJsonList.GetLength(); ++customerDnsIpsIndex)
   {
     customerDnsIpsJsonList[customerDnsIpsIndex].AsString(m_customerDnsIps[customerDnsIpsIndex]);
   }
   payload.WithArray("CustomerDnsIps", std::move(customerDnsIpsJsonList));

  }

  if(m_instanceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceIdsJsonList(m_instanceIds.size());
   for(unsigned instanceIdsIndex = 0; instanceIdsIndex < instanceIdsJsonList.GetLength(); ++instanceIdsIndex)
   {
     instanceIdsJsonList[instanceIdsIndex].AsString(m_instanceIds[instanceIdsIndex]);
   }
   payload.WithArray("InstanceIds", std::move(instanceIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
