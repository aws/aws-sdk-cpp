/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CatalogProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

CatalogProperties::CatalogProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

CatalogProperties& CatalogProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataLakeAccessProperties"))
  {
    m_dataLakeAccessProperties = jsonValue.GetObject("DataLakeAccessProperties");
    m_dataLakeAccessPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IcebergOptimizationProperties"))
  {
    m_icebergOptimizationProperties = jsonValue.GetObject("IcebergOptimizationProperties");
    m_icebergOptimizationPropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomProperties"))
  {
    Aws::Map<Aws::String, JsonView> customPropertiesJsonMap = jsonValue.GetObject("CustomProperties").GetAllObjects();
    for(auto& customPropertiesItem : customPropertiesJsonMap)
    {
      m_customProperties[customPropertiesItem.first] = customPropertiesItem.second.AsString();
    }
    m_customPropertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue CatalogProperties::Jsonize() const
{
  JsonValue payload;

  if(m_dataLakeAccessPropertiesHasBeenSet)
  {
   payload.WithObject("DataLakeAccessProperties", m_dataLakeAccessProperties.Jsonize());

  }

  if(m_icebergOptimizationPropertiesHasBeenSet)
  {
   payload.WithObject("IcebergOptimizationProperties", m_icebergOptimizationProperties.Jsonize());

  }

  if(m_customPropertiesHasBeenSet)
  {
   JsonValue customPropertiesJsonMap;
   for(auto& customPropertiesItem : m_customProperties)
   {
     customPropertiesJsonMap.WithString(customPropertiesItem.first, customPropertiesItem.second);
   }
   payload.WithObject("CustomProperties", std::move(customPropertiesJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
