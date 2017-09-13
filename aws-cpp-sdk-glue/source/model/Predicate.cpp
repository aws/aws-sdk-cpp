/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/glue/model/Predicate.h>
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

Predicate::Predicate() : 
    m_logical(Logical::NOT_SET),
    m_logicalHasBeenSet(false),
    m_conditionsHasBeenSet(false)
{
}

Predicate::Predicate(const JsonValue& jsonValue) : 
    m_logical(Logical::NOT_SET),
    m_logicalHasBeenSet(false),
    m_conditionsHasBeenSet(false)
{
  *this = jsonValue;
}

Predicate& Predicate::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Logical"))
  {
    m_logical = LogicalMapper::GetLogicalForName(jsonValue.GetString("Logical"));

    m_logicalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Conditions"))
  {
    Array<JsonValue> conditionsJsonList = jsonValue.GetArray("Conditions");
    for(unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex)
    {
      m_conditions.push_back(conditionsJsonList[conditionsIndex].AsObject());
    }
    m_conditionsHasBeenSet = true;
  }

  return *this;
}

JsonValue Predicate::Jsonize() const
{
  JsonValue payload;

  if(m_logicalHasBeenSet)
  {
   payload.WithString("Logical", LogicalMapper::GetNameForLogical(m_logical));
  }

  if(m_conditionsHasBeenSet)
  {
   Array<JsonValue> conditionsJsonList(m_conditions.size());
   for(unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex)
   {
     conditionsJsonList[conditionsIndex].AsObject(m_conditions[conditionsIndex].Jsonize());
   }
   payload.WithArray("Conditions", std::move(conditionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
