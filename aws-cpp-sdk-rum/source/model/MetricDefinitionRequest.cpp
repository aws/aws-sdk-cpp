/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rum/model/MetricDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchRUM
{
namespace Model
{

MetricDefinitionRequest::MetricDefinitionRequest() : 
    m_dimensionKeysHasBeenSet(false),
    m_eventPatternHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_unitLabelHasBeenSet(false),
    m_valueKeyHasBeenSet(false)
{
}

MetricDefinitionRequest::MetricDefinitionRequest(JsonView jsonValue) : 
    m_dimensionKeysHasBeenSet(false),
    m_eventPatternHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_unitLabelHasBeenSet(false),
    m_valueKeyHasBeenSet(false)
{
  *this = jsonValue;
}

MetricDefinitionRequest& MetricDefinitionRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DimensionKeys"))
  {
    Aws::Map<Aws::String, JsonView> dimensionKeysJsonMap = jsonValue.GetObject("DimensionKeys").GetAllObjects();
    for(auto& dimensionKeysItem : dimensionKeysJsonMap)
    {
      m_dimensionKeys[dimensionKeysItem.first] = dimensionKeysItem.second.AsString();
    }
    m_dimensionKeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventPattern"))
  {
    m_eventPattern = jsonValue.GetString("EventPattern");

    m_eventPatternHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnitLabel"))
  {
    m_unitLabel = jsonValue.GetString("UnitLabel");

    m_unitLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueKey"))
  {
    m_valueKey = jsonValue.GetString("ValueKey");

    m_valueKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricDefinitionRequest::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionKeysHasBeenSet)
  {
   JsonValue dimensionKeysJsonMap;
   for(auto& dimensionKeysItem : m_dimensionKeys)
   {
     dimensionKeysJsonMap.WithString(dimensionKeysItem.first, dimensionKeysItem.second);
   }
   payload.WithObject("DimensionKeys", std::move(dimensionKeysJsonMap));

  }

  if(m_eventPatternHasBeenSet)
  {
   payload.WithString("EventPattern", m_eventPattern);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_unitLabelHasBeenSet)
  {
   payload.WithString("UnitLabel", m_unitLabel);

  }

  if(m_valueKeyHasBeenSet)
  {
   payload.WithString("ValueKey", m_valueKey);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
