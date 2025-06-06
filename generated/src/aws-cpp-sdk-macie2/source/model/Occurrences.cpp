﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/Occurrences.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

Occurrences::Occurrences(JsonView jsonValue)
{
  *this = jsonValue;
}

Occurrences& Occurrences::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cells"))
  {
    Aws::Utils::Array<JsonView> cellsJsonList = jsonValue.GetArray("cells");
    for(unsigned cellsIndex = 0; cellsIndex < cellsJsonList.GetLength(); ++cellsIndex)
    {
      m_cells.push_back(cellsJsonList[cellsIndex].AsObject());
    }
    m_cellsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lineRanges"))
  {
    Aws::Utils::Array<JsonView> lineRangesJsonList = jsonValue.GetArray("lineRanges");
    for(unsigned lineRangesIndex = 0; lineRangesIndex < lineRangesJsonList.GetLength(); ++lineRangesIndex)
    {
      m_lineRanges.push_back(lineRangesJsonList[lineRangesIndex].AsObject());
    }
    m_lineRangesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("offsetRanges"))
  {
    Aws::Utils::Array<JsonView> offsetRangesJsonList = jsonValue.GetArray("offsetRanges");
    for(unsigned offsetRangesIndex = 0; offsetRangesIndex < offsetRangesJsonList.GetLength(); ++offsetRangesIndex)
    {
      m_offsetRanges.push_back(offsetRangesJsonList[offsetRangesIndex].AsObject());
    }
    m_offsetRangesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pages"))
  {
    Aws::Utils::Array<JsonView> pagesJsonList = jsonValue.GetArray("pages");
    for(unsigned pagesIndex = 0; pagesIndex < pagesJsonList.GetLength(); ++pagesIndex)
    {
      m_pages.push_back(pagesJsonList[pagesIndex].AsObject());
    }
    m_pagesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("records"))
  {
    Aws::Utils::Array<JsonView> recordsJsonList = jsonValue.GetArray("records");
    for(unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex)
    {
      m_records.push_back(recordsJsonList[recordsIndex].AsObject());
    }
    m_recordsHasBeenSet = true;
  }
  return *this;
}

JsonValue Occurrences::Jsonize() const
{
  JsonValue payload;

  if(m_cellsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cellsJsonList(m_cells.size());
   for(unsigned cellsIndex = 0; cellsIndex < cellsJsonList.GetLength(); ++cellsIndex)
   {
     cellsJsonList[cellsIndex].AsObject(m_cells[cellsIndex].Jsonize());
   }
   payload.WithArray("cells", std::move(cellsJsonList));

  }

  if(m_lineRangesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lineRangesJsonList(m_lineRanges.size());
   for(unsigned lineRangesIndex = 0; lineRangesIndex < lineRangesJsonList.GetLength(); ++lineRangesIndex)
   {
     lineRangesJsonList[lineRangesIndex].AsObject(m_lineRanges[lineRangesIndex].Jsonize());
   }
   payload.WithArray("lineRanges", std::move(lineRangesJsonList));

  }

  if(m_offsetRangesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> offsetRangesJsonList(m_offsetRanges.size());
   for(unsigned offsetRangesIndex = 0; offsetRangesIndex < offsetRangesJsonList.GetLength(); ++offsetRangesIndex)
   {
     offsetRangesJsonList[offsetRangesIndex].AsObject(m_offsetRanges[offsetRangesIndex].Jsonize());
   }
   payload.WithArray("offsetRanges", std::move(offsetRangesJsonList));

  }

  if(m_pagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pagesJsonList(m_pages.size());
   for(unsigned pagesIndex = 0; pagesIndex < pagesJsonList.GetLength(); ++pagesIndex)
   {
     pagesJsonList[pagesIndex].AsObject(m_pages[pagesIndex].Jsonize());
   }
   payload.WithArray("pages", std::move(pagesJsonList));

  }

  if(m_recordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recordsJsonList(m_records.size());
   for(unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex)
   {
     recordsJsonList[recordsIndex].AsObject(m_records[recordsIndex].Jsonize());
   }
   payload.WithArray("records", std::move(recordsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
