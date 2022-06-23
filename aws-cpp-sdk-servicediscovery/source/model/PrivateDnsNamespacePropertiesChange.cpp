/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/PrivateDnsNamespacePropertiesChange.h>
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

PrivateDnsNamespacePropertiesChange::PrivateDnsNamespacePropertiesChange() : 
    m_dnsPropertiesHasBeenSet(false)
{
}

PrivateDnsNamespacePropertiesChange::PrivateDnsNamespacePropertiesChange(JsonView jsonValue) : 
    m_dnsPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

PrivateDnsNamespacePropertiesChange& PrivateDnsNamespacePropertiesChange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DnsProperties"))
  {
    m_dnsProperties = jsonValue.GetObject("DnsProperties");

    m_dnsPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue PrivateDnsNamespacePropertiesChange::Jsonize() const
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
