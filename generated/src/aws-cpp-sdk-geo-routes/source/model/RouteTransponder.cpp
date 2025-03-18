/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteTransponder.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{

RouteTransponder::RouteTransponder(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteTransponder& RouteTransponder::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SystemName"))
  {
    m_systemName = jsonValue.GetString("SystemName");
    m_systemNameHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTransponder::Jsonize() const
{
  JsonValue payload;

  if(m_systemNameHasBeenSet)
  {
   payload.WithString("SystemName", m_systemName);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
