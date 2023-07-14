/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/NamespaceProperties.h>
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

NamespaceProperties::NamespaceProperties() : 
    m_dnsPropertiesHasBeenSet(false),
    m_httpPropertiesHasBeenSet(false)
{
}

NamespaceProperties::NamespaceProperties(JsonView jsonValue) : 
    m_dnsPropertiesHasBeenSet(false),
    m_httpPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

NamespaceProperties& NamespaceProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DnsProperties"))
  {
    m_dnsProperties = jsonValue.GetObject("DnsProperties");

    m_dnsPropertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HttpProperties"))
  {
    m_httpProperties = jsonValue.GetObject("HttpProperties");

    m_httpPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue NamespaceProperties::Jsonize() const
{
  JsonValue payload;

  if(m_dnsPropertiesHasBeenSet)
  {
   payload.WithObject("DnsProperties", m_dnsProperties.Jsonize());

  }

  if(m_httpPropertiesHasBeenSet)
  {
   payload.WithObject("HttpProperties", m_httpProperties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
