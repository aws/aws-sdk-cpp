/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteContinueStepDetails.h>
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

RouteContinueStepDetails::RouteContinueStepDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteContinueStepDetails& RouteContinueStepDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Intersection"))
  {
    Aws::Utils::Array<JsonView> intersectionJsonList = jsonValue.GetArray("Intersection");
    for(unsigned intersectionIndex = 0; intersectionIndex < intersectionJsonList.GetLength(); ++intersectionIndex)
    {
      m_intersection.push_back(intersectionJsonList[intersectionIndex].AsObject());
    }
    m_intersectionHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteContinueStepDetails::Jsonize() const
{
  JsonValue payload;

  if(m_intersectionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> intersectionJsonList(m_intersection.size());
   for(unsigned intersectionIndex = 0; intersectionIndex < intersectionJsonList.GetLength(); ++intersectionIndex)
   {
     intersectionJsonList[intersectionIndex].AsObject(m_intersection[intersectionIndex].Jsonize());
   }
   payload.WithArray("Intersection", std::move(intersectionJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
