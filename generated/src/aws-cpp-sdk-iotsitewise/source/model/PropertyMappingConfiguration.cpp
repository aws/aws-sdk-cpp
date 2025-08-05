/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/PropertyMappingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

PropertyMappingConfiguration::PropertyMappingConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PropertyMappingConfiguration& PropertyMappingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("matchByPropertyName"))
  {
    m_matchByPropertyName = jsonValue.GetBool("matchByPropertyName");
    m_matchByPropertyNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createMissingProperty"))
  {
    m_createMissingProperty = jsonValue.GetBool("createMissingProperty");
    m_createMissingPropertyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("overrides"))
  {
    Aws::Utils::Array<JsonView> overridesJsonList = jsonValue.GetArray("overrides");
    for(unsigned overridesIndex = 0; overridesIndex < overridesJsonList.GetLength(); ++overridesIndex)
    {
      m_overrides.push_back(overridesJsonList[overridesIndex].AsObject());
    }
    m_overridesHasBeenSet = true;
  }
  return *this;
}

JsonValue PropertyMappingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_matchByPropertyNameHasBeenSet)
  {
   payload.WithBool("matchByPropertyName", m_matchByPropertyName);

  }

  if(m_createMissingPropertyHasBeenSet)
  {
   payload.WithBool("createMissingProperty", m_createMissingProperty);

  }

  if(m_overridesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> overridesJsonList(m_overrides.size());
   for(unsigned overridesIndex = 0; overridesIndex < overridesJsonList.GetLength(); ++overridesIndex)
   {
     overridesJsonList[overridesIndex].AsObject(m_overrides[overridesIndex].Jsonize());
   }
   payload.WithArray("overrides", std::move(overridesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
