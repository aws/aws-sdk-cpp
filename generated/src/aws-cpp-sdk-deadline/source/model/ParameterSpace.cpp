/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/ParameterSpace.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

ParameterSpace::ParameterSpace(JsonView jsonValue)
{
  *this = jsonValue;
}

ParameterSpace& ParameterSpace::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("parameters"))
  {
    Aws::Utils::Array<JsonView> parametersJsonList = jsonValue.GetArray("parameters");
    for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
    {
      m_parameters.push_back(parametersJsonList[parametersIndex].AsObject());
    }
    m_parametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("combination"))
  {
    m_combination = jsonValue.GetString("combination");
    m_combinationHasBeenSet = true;
  }
  return *this;
}

JsonValue ParameterSpace::Jsonize() const
{
  JsonValue payload;

  if(m_parametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parametersJsonList(m_parameters.size());
   for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
   {
     parametersJsonList[parametersIndex].AsObject(m_parameters[parametersIndex].Jsonize());
   }
   payload.WithArray("parameters", std::move(parametersJsonList));

  }

  if(m_combinationHasBeenSet)
  {
   payload.WithString("combination", m_combination);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
