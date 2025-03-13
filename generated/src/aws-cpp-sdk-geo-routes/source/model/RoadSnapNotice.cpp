/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RoadSnapNotice.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{

RoadSnapNotice::RoadSnapNotice(JsonView jsonValue)
{
  *this = jsonValue;
}

RoadSnapNotice& RoadSnapNotice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = RoadSnapNoticeCodeMapper::GetRoadSnapNoticeCodeForName(jsonValue.GetString("Code"));
    m_codeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");
    m_titleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TracePointIndexes"))
  {
    Aws::Utils::Array<JsonView> tracePointIndexesJsonList = jsonValue.GetArray("TracePointIndexes");
    for(unsigned tracePointIndexesIndex = 0; tracePointIndexesIndex < tracePointIndexesJsonList.GetLength(); ++tracePointIndexesIndex)
    {
      m_tracePointIndexes.push_back(tracePointIndexesJsonList[tracePointIndexesIndex].AsInteger());
    }
    m_tracePointIndexesHasBeenSet = true;
  }
  return *this;
}

JsonValue RoadSnapNotice::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", RoadSnapNoticeCodeMapper::GetNameForRoadSnapNoticeCode(m_code));
  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_tracePointIndexesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tracePointIndexesJsonList(m_tracePointIndexes.size());
   for(unsigned tracePointIndexesIndex = 0; tracePointIndexesIndex < tracePointIndexesJsonList.GetLength(); ++tracePointIndexesIndex)
   {
     tracePointIndexesJsonList[tracePointIndexesIndex].AsInteger(m_tracePointIndexes[tracePointIndexesIndex]);
   }
   payload.WithArray("TracePointIndexes", std::move(tracePointIndexesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
