/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> observationListJsonList = jsonValue.GetArray("ObservationList");
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
   Aws::Utils::Array<JsonValue> observationListJsonList(m_observationList.size());
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
