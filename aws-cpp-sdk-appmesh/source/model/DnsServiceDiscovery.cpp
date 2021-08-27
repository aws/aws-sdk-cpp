/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/DnsServiceDiscovery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

DnsServiceDiscovery::DnsServiceDiscovery() : 
    m_hostnameHasBeenSet(false)
{
}

DnsServiceDiscovery::DnsServiceDiscovery(JsonView jsonValue) : 
    m_hostnameHasBeenSet(false)
{
  *this = jsonValue;
}

DnsServiceDiscovery& DnsServiceDiscovery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hostname"))
  {
    m_hostname = jsonValue.GetString("hostname");

    m_hostnameHasBeenSet = true;
  }

  return *this;
}

JsonValue DnsServiceDiscovery::Jsonize() const
{
  JsonValue payload;

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("hostname", m_hostname);

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
