/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/BatchStepInput.h>
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

BatchStepInput::BatchStepInput(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchStepInput& BatchStepInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resource"))
  {
    m_resource = jsonValue.GetObject("resource");
    m_resourceHasBeenSet = true;
  }
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
  if(jsonValue.ValueExists("properties"))
  {
    m_properties = jsonValue.GetObject("properties");
    m_propertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchStepInput::Jsonize() const
{
  JsonValue payload;

  if(m_resourceHasBeenSet)
  {
   payload.WithObject("resource", m_resource.Jsonize());

  }

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

  if(m_propertiesHasBeenSet)
  {
   payload.WithObject("properties", m_properties.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
