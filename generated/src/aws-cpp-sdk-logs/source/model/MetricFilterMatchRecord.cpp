/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/MetricFilterMatchRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

MetricFilterMatchRecord::MetricFilterMatchRecord() : 
    m_eventNumber(0),
    m_eventNumberHasBeenSet(false),
    m_eventMessageHasBeenSet(false),
    m_extractedValuesHasBeenSet(false)
{
}

MetricFilterMatchRecord::MetricFilterMatchRecord(JsonView jsonValue) : 
    m_eventNumber(0),
    m_eventNumberHasBeenSet(false),
    m_eventMessageHasBeenSet(false),
    m_extractedValuesHasBeenSet(false)
{
  *this = jsonValue;
}

MetricFilterMatchRecord& MetricFilterMatchRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventNumber"))
  {
    m_eventNumber = jsonValue.GetInt64("eventNumber");

    m_eventNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventMessage"))
  {
    m_eventMessage = jsonValue.GetString("eventMessage");

    m_eventMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("extractedValues"))
  {
    Aws::Map<Aws::String, JsonView> extractedValuesJsonMap = jsonValue.GetObject("extractedValues").GetAllObjects();
    for(auto& extractedValuesItem : extractedValuesJsonMap)
    {
      m_extractedValues[extractedValuesItem.first] = extractedValuesItem.second.AsString();
    }
    m_extractedValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue MetricFilterMatchRecord::Jsonize() const
{
  JsonValue payload;

  if(m_eventNumberHasBeenSet)
  {
   payload.WithInt64("eventNumber", m_eventNumber);

  }

  if(m_eventMessageHasBeenSet)
  {
   payload.WithString("eventMessage", m_eventMessage);

  }

  if(m_extractedValuesHasBeenSet)
  {
   JsonValue extractedValuesJsonMap;
   for(auto& extractedValuesItem : m_extractedValues)
   {
     extractedValuesJsonMap.WithString(extractedValuesItem.first, extractedValuesItem.second);
   }
   payload.WithObject("extractedValues", std::move(extractedValuesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
