/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/DnsProperties.h>
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

DnsProperties::DnsProperties() : 
    m_hostedZoneIdHasBeenSet(false)
{
}

DnsProperties::DnsProperties(JsonView jsonValue) : 
    m_hostedZoneIdHasBeenSet(false)
{
  *this = jsonValue;
}

DnsProperties& DnsProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HostedZoneId"))
  {
    m_hostedZoneId = jsonValue.GetString("HostedZoneId");

    m_hostedZoneIdHasBeenSet = true;
  }

  return *this;
}

JsonValue DnsProperties::Jsonize() const
{
  JsonValue payload;

  if(m_hostedZoneIdHasBeenSet)
  {
   payload.WithString("HostedZoneId", m_hostedZoneId);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
