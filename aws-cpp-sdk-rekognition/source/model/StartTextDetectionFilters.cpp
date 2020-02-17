/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    Array<JsonView> regionsOfInterestJsonList = jsonValue.GetArray("RegionsOfInterest");
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
   Array<JsonValue> regionsOfInterestJsonList(m_regionsOfInterest.size());
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
