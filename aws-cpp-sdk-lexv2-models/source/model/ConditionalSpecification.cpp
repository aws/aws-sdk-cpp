/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ConditionalSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

ConditionalSpecification::ConditionalSpecification() : 
    m_active(false),
    m_activeHasBeenSet(false),
    m_conditionalBranchesHasBeenSet(false),
    m_defaultBranchHasBeenSet(false)
{
}

ConditionalSpecification::ConditionalSpecification(JsonView jsonValue) : 
    m_active(false),
    m_activeHasBeenSet(false),
    m_conditionalBranchesHasBeenSet(false),
    m_defaultBranchHasBeenSet(false)
{
  *this = jsonValue;
}

ConditionalSpecification& ConditionalSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("active"))
  {
    m_active = jsonValue.GetBool("active");

    m_activeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("conditionalBranches"))
  {
    Aws::Utils::Array<JsonView> conditionalBranchesJsonList = jsonValue.GetArray("conditionalBranches");
    for(unsigned conditionalBranchesIndex = 0; conditionalBranchesIndex < conditionalBranchesJsonList.GetLength(); ++conditionalBranchesIndex)
    {
      m_conditionalBranches.push_back(conditionalBranchesJsonList[conditionalBranchesIndex].AsObject());
    }
    m_conditionalBranchesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultBranch"))
  {
    m_defaultBranch = jsonValue.GetObject("defaultBranch");

    m_defaultBranchHasBeenSet = true;
  }

  return *this;
}

JsonValue ConditionalSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_activeHasBeenSet)
  {
   payload.WithBool("active", m_active);

  }

  if(m_conditionalBranchesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> conditionalBranchesJsonList(m_conditionalBranches.size());
   for(unsigned conditionalBranchesIndex = 0; conditionalBranchesIndex < conditionalBranchesJsonList.GetLength(); ++conditionalBranchesIndex)
   {
     conditionalBranchesJsonList[conditionalBranchesIndex].AsObject(m_conditionalBranches[conditionalBranchesIndex].Jsonize());
   }
   payload.WithArray("conditionalBranches", std::move(conditionalBranchesJsonList));

  }

  if(m_defaultBranchHasBeenSet)
  {
   payload.WithObject("defaultBranch", m_defaultBranch.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
