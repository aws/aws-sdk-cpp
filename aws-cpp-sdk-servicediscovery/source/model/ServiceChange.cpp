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

#include <aws/servicediscovery/model/ServiceChange.h>
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

ServiceChange::ServiceChange() : 
    m_descriptionHasBeenSet(false),
    m_dnsConfigHasBeenSet(false),
    m_healthCheckConfigHasBeenSet(false)
{
}

ServiceChange::ServiceChange(const JsonValue& jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_dnsConfigHasBeenSet(false),
    m_healthCheckConfigHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceChange& ServiceChange::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsConfig"))
  {
    m_dnsConfig = jsonValue.GetObject("DnsConfig");

    m_dnsConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthCheckConfig"))
  {
    m_healthCheckConfig = jsonValue.GetObject("HealthCheckConfig");

    m_healthCheckConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceChange::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_dnsConfigHasBeenSet)
  {
   payload.WithObject("DnsConfig", m_dnsConfig.Jsonize());

  }

  if(m_healthCheckConfigHasBeenSet)
  {
   payload.WithObject("HealthCheckConfig", m_healthCheckConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
