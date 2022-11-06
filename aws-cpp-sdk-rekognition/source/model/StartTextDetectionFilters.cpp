/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rekognition/model/StartTextDetectionFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

StartTextDetectionFilters::StartTextDetectionFilters() : 
    m_wordFilterHasBeenSet(false),
    m_regionsOfInterestHasBeenSet(false)
{
}

StartTextDetectionFilters::StartTextDetectionFilters(JsonView jsonValue) : 
    m_wordFilterHasBeenSet(false),
    m_regionsOfInterestHasBeenSet(false)
{
  *this = jsonValue;
}

StartTextDetectionFilters& StartTextDetectionFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WordFilter"))
  {
    m_wordFilter = jsonValue.GetObject("WordFilter");

    m_wordFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegionsOfInterest"))
  {
    Aws::Utils::Array<JsonView> regionsOfInterestJsonList = jsonValue.GetArray("RegionsOfInterest");
    for(unsigned regionsOfInterestIndex = 0; regionsOfInterestIndex < regionsOfInterestJsonList.GetLength(); ++regionsOfInterestIndex)
    {
      m_regionsOfInterest.push_back(regionsOfInterestJsonList[regionsOfInterestIndex].AsObject());
    }
    m_regionsOfInterestHasBeenSet = true;
  }

  return *this;
}

JsonValue StartTextDetectionFilters::Jsonize() const
{
  JsonValue payload;

  if(m_wordFilterHasBeenSet)
  {
   payload.WithObject("WordFilter", m_wordFilter.Jsonize());

  }

  if(m_regionsOfInterestHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionsOfInterestJsonList(m_regionsOfInterest.size());
   for(unsigned regionsOfInterestIndex = 0; regionsOfInterestIndex < regionsOfInterestJsonList.GetLength(); ++regionsOfInterestIndex)
   {
     regionsOfInterestJsonList[regionsOfInterestIndex].AsObject(m_regionsOfInterest[regionsOfInterestIndex].Jsonize());
   }
   payload.WithArray("RegionsOfInterest", std::move(regionsOfInterestJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws
