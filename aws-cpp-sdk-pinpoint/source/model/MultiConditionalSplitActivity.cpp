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
    Array<JsonView> branchesJsonList = jsonValue.GetArray("Branches");
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
   Array<JsonValue> branchesJsonList(m_branches.size());
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
