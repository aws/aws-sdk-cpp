/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/Secondary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

Secondary::Secondary() : 
    m_routeHasBeenSet(false)
{
}

Secondary::Secondary(JsonView jsonValue) : 
    m_routeHasBeenSet(false)
{
  *this = jsonValue;
}

Secondary& Secondary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Route"))
  {
    m_route = jsonValue.GetString("Route");

    m_routeHasBeenSet = true;
  }

  return *this;
}

JsonValue Secondary::Jsonize() const
{
  JsonValue payload;

  if(m_routeHasBeenSet)
  {
   payload.WithString("Route", m_route);

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
