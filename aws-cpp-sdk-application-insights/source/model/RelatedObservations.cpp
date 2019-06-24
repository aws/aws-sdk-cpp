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

#include <aws/application-insights/model/RelatedObservations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

RelatedObservations::RelatedObservations() : 
    m_observationListHasBeenSet(false)
{
}

RelatedObservations::RelatedObservations(JsonView jsonValue) : 
    m_observationListHasBeenSet(false)
{
  *this = jsonValue;
}

RelatedObservations& RelatedObservations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ObservationList"))
  {
    Array<JsonView> observationListJsonList = jsonValue.GetArray("ObservationList");
    for(unsigned observationListIndex = 0; observationListIndex < observationListJsonList.GetLength(); ++observationListIndex)
    {
      m_observationList.push_back(observationListJsonList[observationListIndex].AsObject());
    }
    m_observationListHasBeenSet = true;
  }

  return *this;
}

JsonValue RelatedObservations::Jsonize() const
{
  JsonValue payload;

  if(m_observationListHasBeenSet)
  {
   Array<JsonValue> observationListJsonList(m_observationList.size());
   for(unsigned observationListIndex = 0; observationListIndex < observationListJsonList.GetLength(); ++observationListIndex)
   {
     observationListJsonList[observationListIndex].AsObject(m_observationList[observationListIndex].Jsonize());
   }
   payload.WithArray("ObservationList", std::move(observationListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
