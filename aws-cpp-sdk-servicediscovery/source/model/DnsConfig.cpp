/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/servicediscovery/model/DnsConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

DnsConfig::DnsConfig() : 
    m_namespaceIdHasBeenSet(false),
    m_routingPolicy(RoutingPolicy::NOT_SET),
    m_routingPolicyHasBeenSet(false),
    m_dnsRecordsHasBeenSet(false)
{
}

DnsConfig::DnsConfig(const JsonValue& jsonValue) : 
    m_namespaceIdHasBeenSet(false),
    m_routingPolicy(RoutingPolicy::NOT_SET),
    m_routingPolicyHasBeenSet(false),
    m_dnsRecordsHasBeenSet(false)
{
  *this = jsonValue;
}

DnsConfig& DnsConfig::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("NamespaceId"))
  {
    m_namespaceId = jsonValue.GetString("NamespaceId");

    m_namespaceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoutingPolicy"))
  {
    m_routingPolicy = RoutingPolicyMapper::GetRoutingPolicyForName(jsonValue.GetString("RoutingPolicy"));

    m_routingPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsRecords"))
  {
    Array<JsonValue> dnsRecordsJsonList = jsonValue.GetArray("DnsRecords");
    for(unsigned dnsRecordsIndex = 0; dnsRecordsIndex < dnsRecordsJsonList.GetLength(); ++dnsRecordsIndex)
    {
      m_dnsRecords.push_back(dnsRecordsJsonList[dnsRecordsIndex].AsObject());
    }
    m_dnsRecordsHasBeenSet = true;
  }

  return *this;
}

JsonValue DnsConfig::Jsonize() const
{
  JsonValue payload;

  if(m_namespaceIdHasBeenSet)
  {
   payload.WithString("NamespaceId", m_namespaceId);

  }

  if(m_routingPolicyHasBeenSet)
  {
   payload.WithString("RoutingPolicy", RoutingPolicyMapper::GetNameForRoutingPolicy(m_routingPolicy));
  }

  if(m_dnsRecordsHasBeenSet)
  {
   Array<JsonValue> dnsRecordsJsonList(m_dnsRecords.size());
   for(unsigned dnsRecordsIndex = 0; dnsRecordsIndex < dnsRecordsJsonList.GetLength(); ++dnsRecordsIndex)
   {
     dnsRecordsJsonList[dnsRecordsIndex].AsObject(m_dnsRecords[dnsRecordsIndex].Jsonize());
   }
   payload.WithArray("DnsRecords", std::move(dnsRecordsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
