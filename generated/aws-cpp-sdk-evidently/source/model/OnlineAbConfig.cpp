/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/OnlineAbConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

OnlineAbConfig::OnlineAbConfig() : 
    m_controlTreatmentNameHasBeenSet(false),
    m_treatmentWeightsHasBeenSet(false)
{
}

OnlineAbConfig::OnlineAbConfig(JsonView jsonValue) : 
    m_controlTreatmentNameHasBeenSet(false),
    m_treatmentWeightsHasBeenSet(false)
{
  *this = jsonValue;
}

OnlineAbConfig& OnlineAbConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("controlTreatmentName"))
  {
    m_controlTreatmentName = jsonValue.GetString("controlTreatmentName");

    m_controlTreatmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("treatmentWeights"))
  {
    Aws::Map<Aws::String, JsonView> treatmentWeightsJsonMap = jsonValue.GetObject("treatmentWeights").GetAllObjects();
    for(auto& treatmentWeightsItem : treatmentWeightsJsonMap)
    {
      m_treatmentWeights[treatmentWeightsItem.first] = treatmentWeightsItem.second.AsInt64();
    }
    m_treatmentWeightsHasBeenSet = true;
  }

  return *this;
}

JsonValue OnlineAbConfig::Jsonize() const
{
  JsonValue payload;

  if(m_controlTreatmentNameHasBeenSet)
  {
   payload.WithString("controlTreatmentName", m_controlTreatmentName);

  }

  if(m_treatmentWeightsHasBeenSet)
  {
   JsonValue treatmentWeightsJsonMap;
   for(auto& treatmentWeightsItem : m_treatmentWeights)
   {
     treatmentWeightsJsonMap.WithInt64(treatmentWeightsItem.first, treatmentWeightsItem.second);
   }
   payload.WithObject("treatmentWeights", std::move(treatmentWeightsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
