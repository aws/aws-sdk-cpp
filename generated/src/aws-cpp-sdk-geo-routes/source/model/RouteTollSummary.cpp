/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteTollSummary.h>
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

RouteTollSummary::RouteTollSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteTollSummary& RouteTollSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Total"))
  {
    m_total = jsonValue.GetObject("Total");
    m_totalHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTollSummary::Jsonize() const
{
  JsonValue payload;

  if(m_totalHasBeenSet)
  {
   payload.WithObject("Total", m_total.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
