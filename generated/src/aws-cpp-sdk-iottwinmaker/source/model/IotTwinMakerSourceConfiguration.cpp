/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/IotTwinMakerSourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

IotTwinMakerSourceConfiguration::IotTwinMakerSourceConfiguration() : 
    m_workspaceHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

IotTwinMakerSourceConfiguration::IotTwinMakerSourceConfiguration(JsonView jsonValue) : 
    m_workspaceHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
  *this = jsonValue;
}

IotTwinMakerSourceConfiguration& IotTwinMakerSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("workspace"))
  {
    m_workspace = jsonValue.GetString("workspace");

    m_workspaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filters"))
  {
    Aws::Utils::Array<JsonView> filtersJsonList = jsonValue.GetArray("filters");
    for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
    {
      m_filters.push_back(filtersJsonList[filtersIndex].AsObject());
    }
    m_filtersHasBeenSet = true;
  }

  return *this;
}

JsonValue IotTwinMakerSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_workspaceHasBeenSet)
  {
   payload.WithString("workspace", m_workspace);

  }

  if(m_filtersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> filtersJsonList(m_filters.size());
   for(unsigned filtersIndex = 0; filtersIndex < filtersJsonList.GetLength(); ++filtersIndex)
   {
     filtersJsonList[filtersIndex].AsObject(m_filters[filtersIndex].Jsonize());
   }
   payload.WithArray("filters", std::move(filtersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
