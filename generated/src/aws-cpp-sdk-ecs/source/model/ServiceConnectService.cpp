/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ServiceConnectService.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

ServiceConnectService::ServiceConnectService() : 
    m_portNameHasBeenSet(false),
    m_discoveryNameHasBeenSet(false),
    m_clientAliasesHasBeenSet(false),
    m_ingressPortOverride(0),
    m_ingressPortOverrideHasBeenSet(false)
{
}

ServiceConnectService::ServiceConnectService(JsonView jsonValue) : 
    m_portNameHasBeenSet(false),
    m_discoveryNameHasBeenSet(false),
    m_clientAliasesHasBeenSet(false),
    m_ingressPortOverride(0),
    m_ingressPortOverrideHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceConnectService& ServiceConnectService::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("portName"))
  {
    m_portName = jsonValue.GetString("portName");

    m_portNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("discoveryName"))
  {
    m_discoveryName = jsonValue.GetString("discoveryName");

    m_discoveryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientAliases"))
  {
    Aws::Utils::Array<JsonView> clientAliasesJsonList = jsonValue.GetArray("clientAliases");
    for(unsigned clientAliasesIndex = 0; clientAliasesIndex < clientAliasesJsonList.GetLength(); ++clientAliasesIndex)
    {
      m_clientAliases.push_back(clientAliasesJsonList[clientAliasesIndex].AsObject());
    }
    m_clientAliasesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ingressPortOverride"))
  {
    m_ingressPortOverride = jsonValue.GetInteger("ingressPortOverride");

    m_ingressPortOverrideHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceConnectService::Jsonize() const
{
  JsonValue payload;

  if(m_portNameHasBeenSet)
  {
   payload.WithString("portName", m_portName);

  }

  if(m_discoveryNameHasBeenSet)
  {
   payload.WithString("discoveryName", m_discoveryName);

  }

  if(m_clientAliasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clientAliasesJsonList(m_clientAliases.size());
   for(unsigned clientAliasesIndex = 0; clientAliasesIndex < clientAliasesJsonList.GetLength(); ++clientAliasesIndex)
   {
     clientAliasesJsonList[clientAliasesIndex].AsObject(m_clientAliases[clientAliasesIndex].Jsonize());
   }
   payload.WithArray("clientAliases", std::move(clientAliasesJsonList));

  }

  if(m_ingressPortOverrideHasBeenSet)
  {
   payload.WithInteger("ingressPortOverride", m_ingressPortOverride);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
