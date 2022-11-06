/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/SlotDefaultValueSpec.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

SlotDefaultValueSpec::SlotDefaultValueSpec() : 
    m_defaultValueListHasBeenSet(false)
{
}

SlotDefaultValueSpec::SlotDefaultValueSpec(JsonView jsonValue) : 
    m_defaultValueListHasBeenSet(false)
{
  *this = jsonValue;
}

SlotDefaultValueSpec& SlotDefaultValueSpec::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("defaultValueList"))
  {
    Aws::Utils::Array<JsonView> defaultValueListJsonList = jsonValue.GetArray("defaultValueList");
    for(unsigned defaultValueListIndex = 0; defaultValueListIndex < defaultValueListJsonList.GetLength(); ++defaultValueListIndex)
    {
      m_defaultValueList.push_back(defaultValueListJsonList[defaultValueListIndex].AsObject());
    }
    m_defaultValueListHasBeenSet = true;
  }

  return *this;
}

JsonValue SlotDefaultValueSpec::Jsonize() const
{
  JsonValue payload;

  if(m_defaultValueListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> defaultValueListJsonList(m_defaultValueList.size());
   for(unsigned defaultValueListIndex = 0; defaultValueListIndex < defaultValueListJsonList.GetLength(); ++defaultValueListIndex)
   {
     defaultValueListJsonList[defaultValueListIndex].AsObject(m_defaultValueList[defaultValueListIndex].Jsonize());
   }
   payload.WithArray("defaultValueList", std::move(defaultValueListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
