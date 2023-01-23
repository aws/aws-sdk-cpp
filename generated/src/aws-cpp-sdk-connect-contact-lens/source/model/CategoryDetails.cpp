/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect-contact-lens/model/CategoryDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectContactLens
{
namespace Model
{

CategoryDetails::CategoryDetails() : 
    m_pointsOfInterestHasBeenSet(false)
{
}

CategoryDetails::CategoryDetails(JsonView jsonValue) : 
    m_pointsOfInterestHasBeenSet(false)
{
  *this = jsonValue;
}

CategoryDetails& CategoryDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PointsOfInterest"))
  {
    Aws::Utils::Array<JsonView> pointsOfInterestJsonList = jsonValue.GetArray("PointsOfInterest");
    for(unsigned pointsOfInterestIndex = 0; pointsOfInterestIndex < pointsOfInterestJsonList.GetLength(); ++pointsOfInterestIndex)
    {
      m_pointsOfInterest.push_back(pointsOfInterestJsonList[pointsOfInterestIndex].AsObject());
    }
    m_pointsOfInterestHasBeenSet = true;
  }

  return *this;
}

JsonValue CategoryDetails::Jsonize() const
{
  JsonValue payload;

  if(m_pointsOfInterestHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pointsOfInterestJsonList(m_pointsOfInterest.size());
   for(unsigned pointsOfInterestIndex = 0; pointsOfInterestIndex < pointsOfInterestJsonList.GetLength(); ++pointsOfInterestIndex)
   {
     pointsOfInterestJsonList[pointsOfInterestIndex].AsObject(m_pointsOfInterest[pointsOfInterestIndex].Jsonize());
   }
   payload.WithArray("PointsOfInterest", std::move(pointsOfInterestJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ConnectContactLens
} // namespace Aws
