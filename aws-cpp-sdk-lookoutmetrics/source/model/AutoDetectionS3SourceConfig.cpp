/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/AutoDetectionS3SourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

AutoDetectionS3SourceConfig::AutoDetectionS3SourceConfig() : 
    m_templatedPathListHasBeenSet(false),
    m_historicalDataPathListHasBeenSet(false)
{
}

AutoDetectionS3SourceConfig::AutoDetectionS3SourceConfig(JsonView jsonValue) : 
    m_templatedPathListHasBeenSet(false),
    m_historicalDataPathListHasBeenSet(false)
{
  *this = jsonValue;
}

AutoDetectionS3SourceConfig& AutoDetectionS3SourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TemplatedPathList"))
  {
    Aws::Utils::Array<JsonView> templatedPathListJsonList = jsonValue.GetArray("TemplatedPathList");
    for(unsigned templatedPathListIndex = 0; templatedPathListIndex < templatedPathListJsonList.GetLength(); ++templatedPathListIndex)
    {
      m_templatedPathList.push_back(templatedPathListJsonList[templatedPathListIndex].AsString());
    }
    m_templatedPathListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HistoricalDataPathList"))
  {
    Aws::Utils::Array<JsonView> historicalDataPathListJsonList = jsonValue.GetArray("HistoricalDataPathList");
    for(unsigned historicalDataPathListIndex = 0; historicalDataPathListIndex < historicalDataPathListJsonList.GetLength(); ++historicalDataPathListIndex)
    {
      m_historicalDataPathList.push_back(historicalDataPathListJsonList[historicalDataPathListIndex].AsString());
    }
    m_historicalDataPathListHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoDetectionS3SourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_templatedPathListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> templatedPathListJsonList(m_templatedPathList.size());
   for(unsigned templatedPathListIndex = 0; templatedPathListIndex < templatedPathListJsonList.GetLength(); ++templatedPathListIndex)
   {
     templatedPathListJsonList[templatedPathListIndex].AsString(m_templatedPathList[templatedPathListIndex]);
   }
   payload.WithArray("TemplatedPathList", std::move(templatedPathListJsonList));

  }

  if(m_historicalDataPathListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> historicalDataPathListJsonList(m_historicalDataPathList.size());
   for(unsigned historicalDataPathListIndex = 0; historicalDataPathListIndex < historicalDataPathListJsonList.GetLength(); ++historicalDataPathListIndex)
   {
     historicalDataPathListJsonList[historicalDataPathListIndex].AsString(m_historicalDataPathList[historicalDataPathListIndex]);
   }
   payload.WithArray("HistoricalDataPathList", std::move(historicalDataPathListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
