/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/PublicDnsNamespaceProperties.h>
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

PublicDnsNamespaceProperties::PublicDnsNamespaceProperties() : 
    m_dnsPropertiesHasBeenSet(false)
{
}

PublicDnsNamespaceProperties::PublicDnsNamespaceProperties(JsonView jsonValue) : 
    m_dnsPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

PublicDnsNamespaceProperties& PublicDnsNamespaceProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DnsProperties"))
  {
    m_dnsProperties = jsonValue.GetObject("DnsProperties");

    m_dnsPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue PublicDnsNamespaceProperties::Jsonize() const
{
  JsonValue payload;

  if(m_dnsPropertiesHasBeenSet)
  {
   payload.WithObject("DnsProperties", m_dnsProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
