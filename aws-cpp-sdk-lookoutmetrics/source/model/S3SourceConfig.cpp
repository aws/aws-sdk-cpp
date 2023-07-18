﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/S3SourceConfig.h>
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

S3SourceConfig::S3SourceConfig() : 
    m_roleArnHasBeenSet(false),
    m_templatedPathListHasBeenSet(false),
    m_historicalDataPathListHasBeenSet(false),
    m_fileFormatDescriptorHasBeenSet(false)
{
}

S3SourceConfig::S3SourceConfig(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_templatedPathListHasBeenSet(false),
    m_historicalDataPathListHasBeenSet(false),
    m_fileFormatDescriptorHasBeenSet(false)
{
  *this = jsonValue;
}

S3SourceConfig& S3SourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplatedPathList"))
  {
    Array<JsonView> templatedPathListJsonList = jsonValue.GetArray("TemplatedPathList");
    for(unsigned templatedPathListIndex = 0; templatedPathListIndex < templatedPathListJsonList.GetLength(); ++templatedPathListIndex)
    {
      m_templatedPathList.push_back(templatedPathListJsonList[templatedPathListIndex].AsString());
    }
    m_templatedPathListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HistoricalDataPathList"))
  {
    Array<JsonView> historicalDataPathListJsonList = jsonValue.GetArray("HistoricalDataPathList");
    for(unsigned historicalDataPathListIndex = 0; historicalDataPathListIndex < historicalDataPathListJsonList.GetLength(); ++historicalDataPathListIndex)
    {
      m_historicalDataPathList.push_back(historicalDataPathListJsonList[historicalDataPathListIndex].AsString());
    }
    m_historicalDataPathListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileFormatDescriptor"))
  {
    m_fileFormatDescriptor = jsonValue.GetObject("FileFormatDescriptor");

    m_fileFormatDescriptorHasBeenSet = true;
  }

  return *this;
}

JsonValue S3SourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_templatedPathListHasBeenSet)
  {
   Array<JsonValue> templatedPathListJsonList(m_templatedPathList.size());
   for(unsigned templatedPathListIndex = 0; templatedPathListIndex < templatedPathListJsonList.GetLength(); ++templatedPathListIndex)
   {
     templatedPathListJsonList[templatedPathListIndex].AsString(m_templatedPathList[templatedPathListIndex]);
   }
   payload.WithArray("TemplatedPathList", std::move(templatedPathListJsonList));

  }

  if(m_historicalDataPathListHasBeenSet)
  {
   Array<JsonValue> historicalDataPathListJsonList(m_historicalDataPathList.size());
   for(unsigned historicalDataPathListIndex = 0; historicalDataPathListIndex < historicalDataPathListJsonList.GetLength(); ++historicalDataPathListIndex)
   {
     historicalDataPathListJsonList[historicalDataPathListIndex].AsString(m_historicalDataPathList[historicalDataPathListIndex]);
   }
   payload.WithArray("HistoricalDataPathList", std::move(historicalDataPathListJsonList));

  }

  if(m_fileFormatDescriptorHasBeenSet)
  {
   payload.WithObject("FileFormatDescriptor", m_fileFormatDescriptor.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
