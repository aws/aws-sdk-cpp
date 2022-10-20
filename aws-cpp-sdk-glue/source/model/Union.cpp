/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Union.h>
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

Union::Union() : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_unionType(UnionType::NOT_SET),
    m_unionTypeHasBeenSet(false)
{
}

Union::Union(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_unionType(UnionType::NOT_SET),
    m_unionTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Union& Union::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("UnionType"))
  {
    m_unionType = UnionTypeMapper::GetUnionTypeForName(jsonValue.GetString("UnionType"));

    m_unionTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Union::Jsonize() const
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

  if(m_unionTypeHasBeenSet)
  {
   payload.WithString("UnionType", UnionTypeMapper::GetNameForUnionType(m_unionType));
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
