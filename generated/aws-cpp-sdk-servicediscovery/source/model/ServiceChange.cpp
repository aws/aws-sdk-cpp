/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ServiceChange::ServiceChange(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_dnsConfigHasBeenSet(false),
    m_healthCheckConfigHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceChange& ServiceChange::operator =(JsonView jsonValue)
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
