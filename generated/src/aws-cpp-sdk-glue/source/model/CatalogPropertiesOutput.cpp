﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CatalogPropertiesOutput.h>
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

CatalogPropertiesOutput::CatalogPropertiesOutput() : 
    m_dataLakeAccessPropertiesHasBeenSet(false),
    m_customPropertiesHasBeenSet(false)
{
}

CatalogPropertiesOutput::CatalogPropertiesOutput(JsonView jsonValue)
  : CatalogPropertiesOutput()
{
  *this = jsonValue;
}

CatalogPropertiesOutput& CatalogPropertiesOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataLakeAccessProperties"))
  {
    m_dataLakeAccessProperties = jsonValue.GetObject("DataLakeAccessProperties");

    m_dataLakeAccessPropertiesHasBeenSet = true;
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

JsonValue CatalogPropertiesOutput::Jsonize() const
{
  JsonValue payload;

  if(m_dataLakeAccessPropertiesHasBeenSet)
  {
   payload.WithObject("DataLakeAccessProperties", m_dataLakeAccessProperties.Jsonize());

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
