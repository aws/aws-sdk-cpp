/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/ServiceDiscovery.h>
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

ServiceDiscovery::ServiceDiscovery() : 
    m_awsCloudMapHasBeenSet(false),
    m_dnsHasBeenSet(false)
{
}

ServiceDiscovery::ServiceDiscovery(JsonView jsonValue) : 
    m_awsCloudMapHasBeenSet(false),
    m_dnsHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceDiscovery& ServiceDiscovery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsCloudMap"))
  {
    m_awsCloudMap = jsonValue.GetObject("awsCloudMap");

    m_awsCloudMapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dns"))
  {
    m_dns = jsonValue.GetObject("dns");

    m_dnsHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceDiscovery::Jsonize() const
{
  JsonValue payload;

  if(m_awsCloudMapHasBeenSet)
  {
   payload.WithObject("awsCloudMap", m_awsCloudMap.Jsonize());

  }

  if(m_dnsHasBeenSet)
  {
   payload.WithObject("dns", m_dns.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
