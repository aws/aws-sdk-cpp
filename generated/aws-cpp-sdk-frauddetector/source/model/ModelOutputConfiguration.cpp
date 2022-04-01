/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/ModelOutputConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

ModelOutputConfiguration::ModelOutputConfiguration() : 
    m_format(ModelOutputDataFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_jsonKeyToVariableMapHasBeenSet(false),
    m_csvIndexToVariableMapHasBeenSet(false)
{
}

ModelOutputConfiguration::ModelOutputConfiguration(JsonView jsonValue) : 
    m_format(ModelOutputDataFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_jsonKeyToVariableMapHasBeenSet(false),
    m_csvIndexToVariableMapHasBeenSet(false)
{
  *this = jsonValue;
}

ModelOutputConfiguration& ModelOutputConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("format"))
  {
    m_format = ModelOutputDataFormatMapper::GetModelOutputDataFormatForName(jsonValue.GetString("format"));

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jsonKeyToVariableMap"))
  {
    Aws::Map<Aws::String, JsonView> jsonKeyToVariableMapJsonMap = jsonValue.GetObject("jsonKeyToVariableMap").GetAllObjects();
    for(auto& jsonKeyToVariableMapItem : jsonKeyToVariableMapJsonMap)
    {
      m_jsonKeyToVariableMap[jsonKeyToVariableMapItem.first] = jsonKeyToVariableMapItem.second.AsString();
    }
    m_jsonKeyToVariableMapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("csvIndexToVariableMap"))
  {
    Aws::Map<Aws::String, JsonView> csvIndexToVariableMapJsonMap = jsonValue.GetObject("csvIndexToVariableMap").GetAllObjects();
    for(auto& csvIndexToVariableMapItem : csvIndexToVariableMapJsonMap)
    {
      m_csvIndexToVariableMap[csvIndexToVariableMapItem.first] = csvIndexToVariableMapItem.second.AsString();
    }
    m_csvIndexToVariableMapHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelOutputConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", ModelOutputDataFormatMapper::GetNameForModelOutputDataFormat(m_format));
  }

  if(m_jsonKeyToVariableMapHasBeenSet)
  {
   JsonValue jsonKeyToVariableMapJsonMap;
   for(auto& jsonKeyToVariableMapItem : m_jsonKeyToVariableMap)
   {
     jsonKeyToVariableMapJsonMap.WithString(jsonKeyToVariableMapItem.first, jsonKeyToVariableMapItem.second);
   }
   payload.WithObject("jsonKeyToVariableMap", std::move(jsonKeyToVariableMapJsonMap));

  }

  if(m_csvIndexToVariableMapHasBeenSet)
  {
   JsonValue csvIndexToVariableMapJsonMap;
   for(auto& csvIndexToVariableMapItem : m_csvIndexToVariableMap)
   {
     csvIndexToVariableMapJsonMap.WithString(csvIndexToVariableMapItem.first, csvIndexToVariableMapItem.second);
   }
   payload.WithObject("csvIndexToVariableMap", std::move(csvIndexToVariableMapJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
