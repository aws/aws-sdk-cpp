/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteSignpostLabel.h>
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

RouteSignpostLabel::RouteSignpostLabel(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteSignpostLabel& RouteSignpostLabel::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RouteNumber"))
  {
    m_routeNumber = jsonValue.GetObject("RouteNumber");
    m_routeNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetObject("Text");
    m_textHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteSignpostLabel::Jsonize() const
{
  JsonValue payload;

  if(m_routeNumberHasBeenSet)
  {
   payload.WithObject("RouteNumber", m_routeNumber.Jsonize());

  }

  if(m_textHasBeenSet)
  {
   payload.WithObject("Text", m_text.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
