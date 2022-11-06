/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/PropertyValueHistory.h>
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

PropertyValueHistory::PropertyValueHistory() : 
    m_entityPropertyReferenceHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

PropertyValueHistory::PropertyValueHistory(JsonView jsonValue) : 
    m_entityPropertyReferenceHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
  *this = jsonValue;
}

PropertyValueHistory& PropertyValueHistory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entityPropertyReference"))
  {
    m_entityPropertyReference = jsonValue.GetObject("entityPropertyReference");

    m_entityPropertyReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("values"))
  {
    Aws::Utils::Array<JsonView> valuesJsonList = jsonValue.GetArray("values");
    for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
    {
      m_values.push_back(valuesJsonList[valuesIndex].AsObject());
    }
    m_valuesHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertyValueHistory::Jsonize() const
{
  JsonValue payload;

  if(m_entityPropertyReferenceHasBeenSet)
  {
   payload.WithObject("entityPropertyReference", m_entityPropertyReference.Jsonize());

  }

  if(m_valuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> valuesJsonList(m_values.size());
   for(unsigned valuesIndex = 0; valuesIndex < valuesJsonList.GetLength(); ++valuesIndex)
   {
     valuesJsonList[valuesIndex].AsObject(m_values[valuesIndex].Jsonize());
   }
   payload.WithArray("values", std::move(valuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
