/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteSignpost.h>
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

RouteSignpost::RouteSignpost(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteSignpost& RouteSignpost::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Labels"))
  {
    Aws::Utils::Array<JsonView> labelsJsonList = jsonValue.GetArray("Labels");
    for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
    {
      m_labels.push_back(labelsJsonList[labelsIndex].AsObject());
    }
    m_labelsHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteSignpost::Jsonize() const
{
  JsonValue payload;

  if(m_labelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> labelsJsonList(m_labels.size());
   for(unsigned labelsIndex = 0; labelsIndex < labelsJsonList.GetLength(); ++labelsIndex)
   {
     labelsJsonList[labelsIndex].AsObject(m_labels[labelsIndex].Jsonize());
   }
   payload.WithArray("Labels", std::move(labelsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
