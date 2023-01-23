/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/PropertyValueEntry.h>
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

PropertyValueEntry::PropertyValueEntry() : 
    m_entityPropertyReferenceHasBeenSet(false),
    m_propertyValuesHasBeenSet(false)
{
}

PropertyValueEntry::PropertyValueEntry(JsonView jsonValue) : 
    m_entityPropertyReferenceHasBeenSet(false),
    m_propertyValuesHasBeenSet(false)
{
  *this = jsonValue;
}

PropertyValueEntry& PropertyValueEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entityPropertyReference"))
  {
    m_entityPropertyReference = jsonValue.GetObject("entityPropertyReference");

    m_entityPropertyReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("propertyValues"))
  {
    Aws::Utils::Array<JsonView> propertyValuesJsonList = jsonValue.GetArray("propertyValues");
    for(unsigned propertyValuesIndex = 0; propertyValuesIndex < propertyValuesJsonList.GetLength(); ++propertyValuesIndex)
    {
      m_propertyValues.push_back(propertyValuesJsonList[propertyValuesIndex].AsObject());
    }
    m_propertyValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertyValueEntry::Jsonize() const
{
  JsonValue payload;

  if(m_entityPropertyReferenceHasBeenSet)
  {
   payload.WithObject("entityPropertyReference", m_entityPropertyReference.Jsonize());

  }

  if(m_propertyValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> propertyValuesJsonList(m_propertyValues.size());
   for(unsigned propertyValuesIndex = 0; propertyValuesIndex < propertyValuesJsonList.GetLength(); ++propertyValuesIndex)
   {
     propertyValuesJsonList[propertyValuesIndex].AsObject(m_propertyValues[propertyValuesIndex].Jsonize());
   }
   payload.WithArray("propertyValues", std::move(propertyValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
