/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/AnywhereConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

AnywhereConfiguration::AnywhereConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AnywhereConfiguration& AnywhereConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Cost"))
  {
    m_cost = jsonValue.GetString("Cost");
    m_costHasBeenSet = true;
  }
  return *this;
}

JsonValue AnywhereConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_costHasBeenSet)
  {
   payload.WithString("Cost", m_cost);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
