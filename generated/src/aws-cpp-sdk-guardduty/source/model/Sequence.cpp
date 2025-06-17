/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/Sequence.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

Sequence::Sequence(JsonView jsonValue)
{
  *this = jsonValue;
}

Sequence& Sequence::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("uid"))
  {
    m_uid = jsonValue.GetString("uid");
    m_uidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("actors"))
  {
    Aws::Utils::Array<JsonView> actorsJsonList = jsonValue.GetArray("actors");
    for(unsigned actorsIndex = 0; actorsIndex < actorsJsonList.GetLength(); ++actorsIndex)
    {
      m_actors.push_back(actorsJsonList[actorsIndex].AsObject());
    }
    m_actorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resources"))
  {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsObject());
    }
    m_resourcesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endpoints"))
  {
    Aws::Utils::Array<JsonView> endpointsJsonList = jsonValue.GetArray("endpoints");
    for(unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex)
    {
      m_endpoints.push_back(endpointsJsonList[endpointsIndex].AsObject());
    }
    m_endpointsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("signals"))
  {
    Aws::Utils::Array<JsonView> signalsJsonList = jsonValue.GetArray("signals");
    for(unsigned signalsIndex = 0; signalsIndex < signalsJsonList.GetLength(); ++signalsIndex)
    {
      m_signals.push_back(signalsJsonList[signalsIndex].AsObject());
    }
    m_signalsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sequenceIndicators"))
  {
    Aws::Utils::Array<JsonView> sequenceIndicatorsJsonList = jsonValue.GetArray("sequenceIndicators");
    for(unsigned sequenceIndicatorsIndex = 0; sequenceIndicatorsIndex < sequenceIndicatorsJsonList.GetLength(); ++sequenceIndicatorsIndex)
    {
      m_sequenceIndicators.push_back(sequenceIndicatorsJsonList[sequenceIndicatorsIndex].AsObject());
    }
    m_sequenceIndicatorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("additionalSequenceTypes"))
  {
    Aws::Utils::Array<JsonView> additionalSequenceTypesJsonList = jsonValue.GetArray("additionalSequenceTypes");
    for(unsigned additionalSequenceTypesIndex = 0; additionalSequenceTypesIndex < additionalSequenceTypesJsonList.GetLength(); ++additionalSequenceTypesIndex)
    {
      m_additionalSequenceTypes.push_back(additionalSequenceTypesJsonList[additionalSequenceTypesIndex].AsString());
    }
    m_additionalSequenceTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue Sequence::Jsonize() const
{
  JsonValue payload;

  if(m_uidHasBeenSet)
  {
   payload.WithString("uid", m_uid);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_actorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actorsJsonList(m_actors.size());
   for(unsigned actorsIndex = 0; actorsIndex < actorsJsonList.GetLength(); ++actorsIndex)
   {
     actorsJsonList[actorsIndex].AsObject(m_actors[actorsIndex].Jsonize());
   }
   payload.WithArray("actors", std::move(actorsJsonList));

  }

  if(m_resourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsObject(m_resources[resourcesIndex].Jsonize());
   }
   payload.WithArray("resources", std::move(resourcesJsonList));

  }

  if(m_endpointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> endpointsJsonList(m_endpoints.size());
   for(unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex)
   {
     endpointsJsonList[endpointsIndex].AsObject(m_endpoints[endpointsIndex].Jsonize());
   }
   payload.WithArray("endpoints", std::move(endpointsJsonList));

  }

  if(m_signalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> signalsJsonList(m_signals.size());
   for(unsigned signalsIndex = 0; signalsIndex < signalsJsonList.GetLength(); ++signalsIndex)
   {
     signalsJsonList[signalsIndex].AsObject(m_signals[signalsIndex].Jsonize());
   }
   payload.WithArray("signals", std::move(signalsJsonList));

  }

  if(m_sequenceIndicatorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sequenceIndicatorsJsonList(m_sequenceIndicators.size());
   for(unsigned sequenceIndicatorsIndex = 0; sequenceIndicatorsIndex < sequenceIndicatorsJsonList.GetLength(); ++sequenceIndicatorsIndex)
   {
     sequenceIndicatorsJsonList[sequenceIndicatorsIndex].AsObject(m_sequenceIndicators[sequenceIndicatorsIndex].Jsonize());
   }
   payload.WithArray("sequenceIndicators", std::move(sequenceIndicatorsJsonList));

  }

  if(m_additionalSequenceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalSequenceTypesJsonList(m_additionalSequenceTypes.size());
   for(unsigned additionalSequenceTypesIndex = 0; additionalSequenceTypesIndex < additionalSequenceTypesJsonList.GetLength(); ++additionalSequenceTypesIndex)
   {
     additionalSequenceTypesJsonList[additionalSequenceTypesIndex].AsString(m_additionalSequenceTypes[additionalSequenceTypesIndex]);
   }
   payload.WithArray("additionalSequenceTypes", std::move(additionalSequenceTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
