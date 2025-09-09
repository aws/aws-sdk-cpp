/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PredefinedAttribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

PredefinedAttribute::PredefinedAttribute(JsonView jsonValue)
{
  *this = jsonValue;
}

PredefinedAttribute& PredefinedAttribute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Values"))
  {
    m_values = jsonValue.GetObject("Values");
    m_valuesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Purposes"))
  {
    Aws::Utils::Array<JsonView> purposesJsonList = jsonValue.GetArray("Purposes");
    for(unsigned purposesIndex = 0; purposesIndex < purposesJsonList.GetLength(); ++purposesIndex)
    {
      m_purposes.push_back(purposesJsonList[purposesIndex].AsString());
    }
    m_purposesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AttributeConfiguration"))
  {
    m_attributeConfiguration = jsonValue.GetObject("AttributeConfiguration");
    m_attributeConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedRegion"))
  {
    m_lastModifiedRegion = jsonValue.GetString("LastModifiedRegion");
    m_lastModifiedRegionHasBeenSet = true;
  }
  return *this;
}

JsonValue PredefinedAttribute::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_valuesHasBeenSet)
  {
   payload.WithObject("Values", m_values.Jsonize());

  }

  if(m_purposesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> purposesJsonList(m_purposes.size());
   for(unsigned purposesIndex = 0; purposesIndex < purposesJsonList.GetLength(); ++purposesIndex)
   {
     purposesJsonList[purposesIndex].AsString(m_purposes[purposesIndex]);
   }
   payload.WithArray("Purposes", std::move(purposesJsonList));

  }

  if(m_attributeConfigurationHasBeenSet)
  {
   payload.WithObject("AttributeConfiguration", m_attributeConfiguration.Jsonize());

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedRegionHasBeenSet)
  {
   payload.WithString("LastModifiedRegion", m_lastModifiedRegion);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
