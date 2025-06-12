/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/ControlMappingFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlCatalog
{
namespace Model
{

ControlMappingFilter::ControlMappingFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

ControlMappingFilter& ControlMappingFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ControlArns"))
  {
    Aws::Utils::Array<JsonView> controlArnsJsonList = jsonValue.GetArray("ControlArns");
    for(unsigned controlArnsIndex = 0; controlArnsIndex < controlArnsJsonList.GetLength(); ++controlArnsIndex)
    {
      m_controlArns.push_back(controlArnsJsonList[controlArnsIndex].AsString());
    }
    m_controlArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CommonControlArns"))
  {
    Aws::Utils::Array<JsonView> commonControlArnsJsonList = jsonValue.GetArray("CommonControlArns");
    for(unsigned commonControlArnsIndex = 0; commonControlArnsIndex < commonControlArnsJsonList.GetLength(); ++commonControlArnsIndex)
    {
      m_commonControlArns.push_back(commonControlArnsJsonList[commonControlArnsIndex].AsString());
    }
    m_commonControlArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MappingTypes"))
  {
    Aws::Utils::Array<JsonView> mappingTypesJsonList = jsonValue.GetArray("MappingTypes");
    for(unsigned mappingTypesIndex = 0; mappingTypesIndex < mappingTypesJsonList.GetLength(); ++mappingTypesIndex)
    {
      m_mappingTypes.push_back(MappingTypeMapper::GetMappingTypeForName(mappingTypesJsonList[mappingTypesIndex].AsString()));
    }
    m_mappingTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue ControlMappingFilter::Jsonize() const
{
  JsonValue payload;

  if(m_controlArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> controlArnsJsonList(m_controlArns.size());
   for(unsigned controlArnsIndex = 0; controlArnsIndex < controlArnsJsonList.GetLength(); ++controlArnsIndex)
   {
     controlArnsJsonList[controlArnsIndex].AsString(m_controlArns[controlArnsIndex]);
   }
   payload.WithArray("ControlArns", std::move(controlArnsJsonList));

  }

  if(m_commonControlArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commonControlArnsJsonList(m_commonControlArns.size());
   for(unsigned commonControlArnsIndex = 0; commonControlArnsIndex < commonControlArnsJsonList.GetLength(); ++commonControlArnsIndex)
   {
     commonControlArnsJsonList[commonControlArnsIndex].AsString(m_commonControlArns[commonControlArnsIndex]);
   }
   payload.WithArray("CommonControlArns", std::move(commonControlArnsJsonList));

  }

  if(m_mappingTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mappingTypesJsonList(m_mappingTypes.size());
   for(unsigned mappingTypesIndex = 0; mappingTypesIndex < mappingTypesJsonList.GetLength(); ++mappingTypesIndex)
   {
     mappingTypesJsonList[mappingTypesIndex].AsString(MappingTypeMapper::GetNameForMappingType(m_mappingTypes[mappingTypesIndex]));
   }
   payload.WithArray("MappingTypes", std::move(mappingTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
