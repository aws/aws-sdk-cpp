/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/AutoScalingPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

AutoScalingPolicy::AutoScalingPolicy() : 
    m_constraintsHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
}

AutoScalingPolicy::AutoScalingPolicy(JsonView jsonValue) : 
    m_constraintsHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
  *this = jsonValue;
}

AutoScalingPolicy& AutoScalingPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Constraints"))
  {
    m_constraints = jsonValue.GetObject("Constraints");

    m_constraintsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rules"))
  {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("Rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoScalingPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_constraintsHasBeenSet)
  {
   payload.WithObject("Constraints", m_constraints.Jsonize());

  }

  if(m_rulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("Rules", std::move(rulesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
