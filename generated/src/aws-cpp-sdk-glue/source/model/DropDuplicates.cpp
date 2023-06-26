/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DropDuplicates.h>
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

DropDuplicates::DropDuplicates() : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_columnsHasBeenSet(false)
{
}

DropDuplicates::DropDuplicates(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_columnsHasBeenSet(false)
{
  *this = jsonValue;
}

DropDuplicates& DropDuplicates::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Columns"))
  {
    Aws::Utils::Array<JsonView> columnsJsonList = jsonValue.GetArray("Columns");
    for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
    {
      Aws::Utils::Array<JsonView> limitedStringListJsonList = columnsJsonList[columnsIndex].AsArray();
      Aws::Vector<Aws::String> limitedStringListList;
      limitedStringListList.reserve((size_t)limitedStringListJsonList.GetLength());
      for(unsigned limitedStringListIndex = 0; limitedStringListIndex < limitedStringListJsonList.GetLength(); ++limitedStringListIndex)
      {
        limitedStringListList.push_back(limitedStringListJsonList[limitedStringListIndex].AsString());
      }
      m_columns.push_back(std::move(limitedStringListList));
    }
    m_columnsHasBeenSet = true;
  }

  return *this;
}

JsonValue DropDuplicates::Jsonize() const
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

  if(m_columnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnsJsonList(m_columns.size());
   for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
   {
     Aws::Utils::Array<JsonValue> limitedStringListJsonList(m_columns[columnsIndex].size());
     for(unsigned limitedStringListIndex = 0; limitedStringListIndex < limitedStringListJsonList.GetLength(); ++limitedStringListIndex)
     {
       limitedStringListJsonList[limitedStringListIndex].AsString(m_columns[columnsIndex][limitedStringListIndex]);
     }
     columnsJsonList[columnsIndex].AsArray(std::move(limitedStringListJsonList));
   }
   payload.WithArray("Columns", std::move(columnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
