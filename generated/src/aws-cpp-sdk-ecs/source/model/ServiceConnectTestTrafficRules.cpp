/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ServiceConnectTestTrafficRules.h>
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

ServiceConnectTestTrafficRules::ServiceConnectTestTrafficRules(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceConnectTestTrafficRules& ServiceConnectTestTrafficRules::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("header"))
  {
    m_header = jsonValue.GetObject("header");
    m_headerHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceConnectTestTrafficRules::Jsonize() const
{
  JsonValue payload;

  if(m_headerHasBeenSet)
  {
   payload.WithObject("header", m_header.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
