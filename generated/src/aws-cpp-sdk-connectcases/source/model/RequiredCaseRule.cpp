/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/RequiredCaseRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

RequiredCaseRule::RequiredCaseRule(JsonView jsonValue)
{
  *this = jsonValue;
}

RequiredCaseRule& RequiredCaseRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("conditions"))
  {
    Aws::Utils::Array<JsonView> conditionsJsonList = jsonValue.GetArray("conditions");
    for(unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex)
    {
      m_conditions.push_back(conditionsJsonList[conditionsIndex].AsObject());
    }
    m_conditionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("defaultValue"))
  {
    m_defaultValue = jsonValue.GetBool("defaultValue");
    m_defaultValueHasBeenSet = true;
  }
  return *this;
}

JsonValue RequiredCaseRule::Jsonize() const
{
  JsonValue payload;

  if(m_conditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> conditionsJsonList(m_conditions.size());
   for(unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex)
   {
     conditionsJsonList[conditionsIndex].AsObject(m_conditions[conditionsIndex].Jsonize());
   }
   payload.WithArray("conditions", std::move(conditionsJsonList));

  }

  if(m_defaultValueHasBeenSet)
  {
   payload.WithBool("defaultValue", m_defaultValue);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
