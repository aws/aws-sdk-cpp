/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/AdditionalDataset.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

AdditionalDataset::AdditionalDataset() : 
    m_nameHasBeenSet(false),
    m_configurationHasBeenSet(false)
{
}

AdditionalDataset::AdditionalDataset(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_configurationHasBeenSet(false)
{
  *this = jsonValue;
}

AdditionalDataset& AdditionalDataset::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Configuration"))
  {
    Aws::Map<Aws::String, JsonView> configurationJsonMap = jsonValue.GetObject("Configuration").GetAllObjects();
    for(auto& configurationItem : configurationJsonMap)
    {
      Aws::Utils::Array<JsonView> valuesJsonList = configurationItem.second.AsArray();
      Aws::Vector<Aws::String> valuesList;
      valuesList.reserve((size_t)valuesJsonList.GetLength());
      for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
      {
        valuesList.push_back(valuesJsonList[valuesIndex].AsString());
      }
      m_configuration[configurationItem.first] = std::move(valuesList);
    }
    m_configurationHasBeenSet = true;
  }

  return *this;
}

JsonValue AdditionalDataset::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_configurationHasBeenSet)
  {
   JsonValue configurationJsonMap;
   for(auto& configurationItem : m_configuration)
   {
     Aws::Utils::Array<JsonValue> valuesJsonList(configurationItem.second.size());
     for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
     {
       valuesJsonList[valuesIndex].AsString(configurationItem.second[valuesIndex]);
     }
     configurationJsonMap.WithArray(configurationItem.first, std::move(valuesJsonList));
   }
   payload.WithObject("Configuration", std::move(configurationJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
