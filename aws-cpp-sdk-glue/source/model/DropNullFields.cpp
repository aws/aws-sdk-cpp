/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DropNullFields.h>
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

DropNullFields::DropNullFields() : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_nullCheckBoxListHasBeenSet(false),
    m_nullTextListHasBeenSet(false)
{
}

DropNullFields::DropNullFields(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_nullCheckBoxListHasBeenSet(false),
    m_nullTextListHasBeenSet(false)
{
  *this = jsonValue;
}

DropNullFields& DropNullFields::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Inputs"))
  {
    Aws::Utils::Array<JsonView> inputsJsonList = jsonValue.GetArray("Inputs");
    for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
    {
      m_inputs.push_back(inputsJsonList[inputsIndex].AsString());
    }
    m_inputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NullCheckBoxList"))
  {
    m_nullCheckBoxList = jsonValue.GetObject("NullCheckBoxList");

    m_nullCheckBoxListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NullTextList"))
  {
    Aws::Utils::Array<JsonView> nullTextListJsonList = jsonValue.GetArray("NullTextList");
    for(unsigned nullTextListIndex = 0; nullTextListIndex < nullTextListJsonList.GetLength(); ++nullTextListIndex)
    {
      m_nullTextList.push_back(nullTextListJsonList[nullTextListIndex].AsObject());
    }
    m_nullTextListHasBeenSet = true;
  }

  return *this;
}

JsonValue DropNullFields::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_inputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputsJsonList(m_inputs.size());
   for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
   {
     inputsJsonList[inputsIndex].AsString(m_inputs[inputsIndex]);
   }
   payload.WithArray("Inputs", std::move(inputsJsonList));

  }

  if(m_nullCheckBoxListHasBeenSet)
  {
   payload.WithObject("NullCheckBoxList", m_nullCheckBoxList.Jsonize());

  }

  if(m_nullTextListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nullTextListJsonList(m_nullTextList.size());
   for(unsigned nullTextListIndex = 0; nullTextListIndex < nullTextListJsonList.GetLength(); ++nullTextListIndex)
   {
     nullTextListJsonList[nullTextListIndex].AsObject(m_nullTextList[nullTextListIndex].Jsonize());
   }
   payload.WithArray("NullTextList", std::move(nullTextListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
