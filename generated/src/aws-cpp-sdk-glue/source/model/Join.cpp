/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Join.h>
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

Join::Join() : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_joinType(JoinType::NOT_SET),
    m_joinTypeHasBeenSet(false),
    m_columnsHasBeenSet(false)
{
}

Join::Join(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_joinType(JoinType::NOT_SET),
    m_joinTypeHasBeenSet(false),
    m_columnsHasBeenSet(false)
{
  *this = jsonValue;
}

Join& Join::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("JoinType"))
  {
    m_joinType = JoinTypeMapper::GetJoinTypeForName(jsonValue.GetString("JoinType"));

    m_joinTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Columns"))
  {
    Aws::Utils::Array<JsonView> columnsJsonList = jsonValue.GetArray("Columns");
    for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
    {
      m_columns.push_back(columnsJsonList[columnsIndex].AsObject());
    }
    m_columnsHasBeenSet = true;
  }

  return *this;
}

JsonValue Join::Jsonize() const
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

  if(m_joinTypeHasBeenSet)
  {
   payload.WithString("JoinType", JoinTypeMapper::GetNameForJoinType(m_joinType));
  }

  if(m_columnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnsJsonList(m_columns.size());
   for(unsigned columnsIndex = 0; columnsIndex < columnsJsonList.GetLength(); ++columnsIndex)
   {
     columnsJsonList[columnsIndex].AsObject(m_columns[columnsIndex].Jsonize());
   }
   payload.WithArray("Columns", std::move(columnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
