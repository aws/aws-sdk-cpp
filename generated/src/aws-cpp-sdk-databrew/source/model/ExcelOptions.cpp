/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/ExcelOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

ExcelOptions::ExcelOptions() : 
    m_sheetNamesHasBeenSet(false),
    m_sheetIndexesHasBeenSet(false),
    m_headerRow(false),
    m_headerRowHasBeenSet(false)
{
}

ExcelOptions::ExcelOptions(JsonView jsonValue) : 
    m_sheetNamesHasBeenSet(false),
    m_sheetIndexesHasBeenSet(false),
    m_headerRow(false),
    m_headerRowHasBeenSet(false)
{
  *this = jsonValue;
}

ExcelOptions& ExcelOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SheetNames"))
  {
    Aws::Utils::Array<JsonView> sheetNamesJsonList = jsonValue.GetArray("SheetNames");
    for(unsigned sheetNamesIndex = 0; sheetNamesIndex < sheetNamesJsonList.GetLength(); ++sheetNamesIndex)
    {
      m_sheetNames.push_back(sheetNamesJsonList[sheetNamesIndex].AsString());
    }
    m_sheetNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SheetIndexes"))
  {
    Aws::Utils::Array<JsonView> sheetIndexesJsonList = jsonValue.GetArray("SheetIndexes");
    for(unsigned sheetIndexesIndex = 0; sheetIndexesIndex < sheetIndexesJsonList.GetLength(); ++sheetIndexesIndex)
    {
      m_sheetIndexes.push_back(sheetIndexesJsonList[sheetIndexesIndex].AsInteger());
    }
    m_sheetIndexesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HeaderRow"))
  {
    m_headerRow = jsonValue.GetBool("HeaderRow");

    m_headerRowHasBeenSet = true;
  }

  return *this;
}

JsonValue ExcelOptions::Jsonize() const
{
  JsonValue payload;

  if(m_sheetNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sheetNamesJsonList(m_sheetNames.size());
   for(unsigned sheetNamesIndex = 0; sheetNamesIndex < sheetNamesJsonList.GetLength(); ++sheetNamesIndex)
   {
     sheetNamesJsonList[sheetNamesIndex].AsString(m_sheetNames[sheetNamesIndex]);
   }
   payload.WithArray("SheetNames", std::move(sheetNamesJsonList));

  }

  if(m_sheetIndexesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sheetIndexesJsonList(m_sheetIndexes.size());
   for(unsigned sheetIndexesIndex = 0; sheetIndexesIndex < sheetIndexesJsonList.GetLength(); ++sheetIndexesIndex)
   {
     sheetIndexesJsonList[sheetIndexesIndex].AsInteger(m_sheetIndexes[sheetIndexesIndex]);
   }
   payload.WithArray("SheetIndexes", std::move(sheetIndexesJsonList));

  }

  if(m_headerRowHasBeenSet)
  {
   payload.WithBool("HeaderRow", m_headerRow);

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
