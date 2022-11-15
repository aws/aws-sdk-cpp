/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/Resource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

Resource::Resource() : 
    m_componentIdHasBeenSet(false),
    m_dnsTargetResourceHasBeenSet(false),
    m_readinessScopesHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
}

Resource::Resource(JsonView jsonValue) : 
    m_componentIdHasBeenSet(false),
    m_dnsTargetResourceHasBeenSet(false),
    m_readinessScopesHasBeenSet(false),
    m_resourceArnHasBeenSet(false)
{
  *this = jsonValue;
}

Resource& Resource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("componentId"))
  {
    m_componentId = jsonValue.GetString("componentId");

    m_componentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dnsTargetResource"))
  {
    m_dnsTargetResource = jsonValue.GetObject("dnsTargetResource");

    m_dnsTargetResourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("readinessScopes"))
  {
    Aws::Utils::Array<JsonView> readinessScopesJsonList = jsonValue.GetArray("readinessScopes");
    for(unsigned readinessScopesIndex = 0; readinessScopesIndex < readinessScopesJsonList.GetLength(); ++readinessScopesIndex)
    {
      m_readinessScopes.push_back(readinessScopesJsonList[readinessScopesIndex].AsString());
    }
    m_readinessScopesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");

    m_resourceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Resource::Jsonize() const
{
  JsonValue payload;

  if(m_componentIdHasBeenSet)
  {
   payload.WithString("componentId", m_componentId);

  }

  if(m_dnsTargetResourceHasBeenSet)
  {
   payload.WithObject("dnsTargetResource", m_dnsTargetResource.Jsonize());

  }

  if(m_readinessScopesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> readinessScopesJsonList(m_readinessScopes.size());
   for(unsigned readinessScopesIndex = 0; readinessScopesIndex < readinessScopesJsonList.GetLength(); ++readinessScopesIndex)
   {
     readinessScopesJsonList[readinessScopesIndex].AsString(m_readinessScopes[readinessScopesIndex]);
   }
   payload.WithArray("readinessScopes", std::move(readinessScopesJsonList));

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
