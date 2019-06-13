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
