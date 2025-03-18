/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/Batch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

Batch::Batch(JsonView jsonValue)
{
  *this = jsonValue;
}

Batch& Batch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("batchJobName"))
  {
    m_batchJobName = jsonValue.GetString("batchJobName");
    m_batchJobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("batchJobParameters"))
  {
    Aws::Map<Aws::String, JsonView> batchJobParametersJsonMap = jsonValue.GetObject("batchJobParameters").GetAllObjects();
    for(auto& batchJobParametersItem : batchJobParametersJsonMap)
    {
      m_batchJobParameters[batchJobParametersItem.first] = batchJobParametersItem.second.AsString();
    }
    m_batchJobParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("exportDataSetNames"))
  {
    Aws::Utils::Array<JsonView> exportDataSetNamesJsonList = jsonValue.GetArray("exportDataSetNames");
    for(unsigned exportDataSetNamesIndex = 0; exportDataSetNamesIndex < exportDataSetNamesJsonList.GetLength(); ++exportDataSetNamesIndex)
    {
      m_exportDataSetNames.push_back(exportDataSetNamesJsonList[exportDataSetNamesIndex].AsString());
    }
    m_exportDataSetNamesHasBeenSet = true;
  }
  return *this;
}

JsonValue Batch::Jsonize() const
{
  JsonValue payload;

  if(m_batchJobNameHasBeenSet)
  {
   payload.WithString("batchJobName", m_batchJobName);

  }

  if(m_batchJobParametersHasBeenSet)
  {
   JsonValue batchJobParametersJsonMap;
   for(auto& batchJobParametersItem : m_batchJobParameters)
   {
     batchJobParametersJsonMap.WithString(batchJobParametersItem.first, batchJobParametersItem.second);
   }
   payload.WithObject("batchJobParameters", std::move(batchJobParametersJsonMap));

  }

  if(m_exportDataSetNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exportDataSetNamesJsonList(m_exportDataSetNames.size());
   for(unsigned exportDataSetNamesIndex = 0; exportDataSetNamesIndex < exportDataSetNamesJsonList.GetLength(); ++exportDataSetNamesIndex)
   {
     exportDataSetNamesJsonList[exportDataSetNamesIndex].AsString(m_exportDataSetNames[exportDataSetNamesIndex]);
   }
   payload.WithArray("exportDataSetNames", std::move(exportDataSetNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
