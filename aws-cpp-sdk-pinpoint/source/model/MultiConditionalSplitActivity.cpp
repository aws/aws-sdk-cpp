/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/MultiConditionalSplitActivity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

MultiConditionalSplitActivity::MultiConditionalSplitActivity() : 
    m_branchesHasBeenSet(false),
    m_defaultActivityHasBeenSet(false),
    m_evaluationWaitTimeHasBeenSet(false)
{
}

MultiConditionalSplitActivity::MultiConditionalSplitActivity(JsonView jsonValue) : 
    m_branchesHasBeenSet(false),
    m_defaultActivityHasBeenSet(false),
    m_evaluationWaitTimeHasBeenSet(false)
{
  *this = jsonValue;
}

MultiConditionalSplitActivity& MultiConditionalSplitActivity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Branches"))
  {
    Aws::Utils::Array<JsonView> branchesJsonList = jsonValue.GetArray("Branches");
    for(unsigned branchesIndex = 0; branchesIndex < branchesJsonList.GetLength(); ++branchesIndex)
    {
      m_branches.push_back(branchesJsonList[branchesIndex].AsObject());
    }
    m_branchesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultActivity"))
  {
    m_defaultActivity = jsonValue.GetString("DefaultActivity");

    m_defaultActivityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EvaluationWaitTime"))
  {
    m_evaluationWaitTime = jsonValue.GetObject("EvaluationWaitTime");

    m_evaluationWaitTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue MultiConditionalSplitActivity::Jsonize() const
{
  JsonValue payload;

  if(m_branchesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> branchesJsonList(m_branches.size());
   for(unsigned branchesIndex = 0; branchesIndex < branchesJsonList.GetLength(); ++branchesIndex)
   {
     branchesJsonList[branchesIndex].AsObject(m_branches[branchesIndex].Jsonize());
   }
   payload.WithArray("Branches", std::move(branchesJsonList));

  }

  if(m_defaultActivityHasBeenSet)
  {
   payload.WithString("DefaultActivity", m_defaultActivity);

  }

  if(m_evaluationWaitTimeHasBeenSet)
  {
   payload.WithObject("EvaluationWaitTime", m_evaluationWaitTime.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
