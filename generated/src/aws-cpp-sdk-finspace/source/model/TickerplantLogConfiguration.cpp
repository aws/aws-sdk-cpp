/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/TickerplantLogConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

TickerplantLogConfiguration::TickerplantLogConfiguration() : 
    m_tickerplantLogVolumesHasBeenSet(false)
{
}

TickerplantLogConfiguration::TickerplantLogConfiguration(JsonView jsonValue) : 
    m_tickerplantLogVolumesHasBeenSet(false)
{
  *this = jsonValue;
}

TickerplantLogConfiguration& TickerplantLogConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tickerplantLogVolumes"))
  {
    Aws::Utils::Array<JsonView> tickerplantLogVolumesJsonList = jsonValue.GetArray("tickerplantLogVolumes");
    for(unsigned tickerplantLogVolumesIndex = 0; tickerplantLogVolumesIndex < tickerplantLogVolumesJsonList.GetLength(); ++tickerplantLogVolumesIndex)
    {
      m_tickerplantLogVolumes.push_back(tickerplantLogVolumesJsonList[tickerplantLogVolumesIndex].AsString());
    }
    m_tickerplantLogVolumesHasBeenSet = true;
  }

  return *this;
}

JsonValue TickerplantLogConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_tickerplantLogVolumesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tickerplantLogVolumesJsonList(m_tickerplantLogVolumes.size());
   for(unsigned tickerplantLogVolumesIndex = 0; tickerplantLogVolumesIndex < tickerplantLogVolumesJsonList.GetLength(); ++tickerplantLogVolumesIndex)
   {
     tickerplantLogVolumesJsonList[tickerplantLogVolumesIndex].AsString(m_tickerplantLogVolumes[tickerplantLogVolumesIndex]);
   }
   payload.WithArray("tickerplantLogVolumes", std::move(tickerplantLogVolumesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
