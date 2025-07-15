/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/ServiceConnectTestTrafficHeaderMatchRules.h>
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

ServiceConnectTestTrafficHeaderMatchRules::ServiceConnectTestTrafficHeaderMatchRules(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceConnectTestTrafficHeaderMatchRules& ServiceConnectTestTrafficHeaderMatchRules::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("exact"))
  {
    m_exact = jsonValue.GetString("exact");
    m_exactHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceConnectTestTrafficHeaderMatchRules::Jsonize() const
{
  JsonValue payload;

  if(m_exactHasBeenSet)
  {
   payload.WithString("exact", m_exact);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
