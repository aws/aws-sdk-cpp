/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/LiveTailSessionUpdate.h>
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

LiveTailSessionUpdate::LiveTailSessionUpdate() : 
    m_sessionMetadataHasBeenSet(false),
    m_sessionResultsHasBeenSet(false)
{
}

LiveTailSessionUpdate::LiveTailSessionUpdate(JsonView jsonValue) : 
    m_sessionMetadataHasBeenSet(false),
    m_sessionResultsHasBeenSet(false)
{
  *this = jsonValue;
}

LiveTailSessionUpdate& LiveTailSessionUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sessionMetadata"))
  {
    m_sessionMetadata = jsonValue.GetObject("sessionMetadata");

    m_sessionMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionResults"))
  {
    Aws::Utils::Array<JsonView> sessionResultsJsonList = jsonValue.GetArray("sessionResults");
    for(unsigned sessionResultsIndex = 0; sessionResultsIndex < sessionResultsJsonList.GetLength(); ++sessionResultsIndex)
    {
      m_sessionResults.push_back(sessionResultsJsonList[sessionResultsIndex].AsObject());
    }
    m_sessionResultsHasBeenSet = true;
  }

  return *this;
}

JsonValue LiveTailSessionUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_sessionMetadataHasBeenSet)
  {
   payload.WithObject("sessionMetadata", m_sessionMetadata.Jsonize());

  }

  if(m_sessionResultsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sessionResultsJsonList(m_sessionResults.size());
   for(unsigned sessionResultsIndex = 0; sessionResultsIndex < sessionResultsJsonList.GetLength(); ++sessionResultsIndex)
   {
     sessionResultsJsonList[sessionResultsIndex].AsObject(m_sessionResults[sessionResultsIndex].Jsonize());
   }
   payload.WithArray("sessionResults", std::move(sessionResultsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
