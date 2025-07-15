/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ServiceConnectClientAlias.h>
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

ServiceConnectClientAlias::ServiceConnectClientAlias(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceConnectClientAlias& ServiceConnectClientAlias::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dnsName"))
  {
    m_dnsName = jsonValue.GetString("dnsName");
    m_dnsNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testTrafficRules"))
  {
    m_testTrafficRules = jsonValue.GetObject("testTrafficRules");
    m_testTrafficRulesHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceConnectClientAlias::Jsonize() const
{
  JsonValue payload;

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_dnsNameHasBeenSet)
  {
   payload.WithString("dnsName", m_dnsName);

  }

  if(m_testTrafficRulesHasBeenSet)
  {
   payload.WithObject("testTrafficRules", m_testTrafficRules.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
