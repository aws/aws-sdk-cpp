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

#include <aws/pinpoint/model/RandomSplitActivity.h>
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

RandomSplitActivity::RandomSplitActivity() : 
    m_branchesHasBeenSet(false)
{
}

RandomSplitActivity::RandomSplitActivity(JsonView jsonValue) : 
    m_branchesHasBeenSet(false)
{
  *this = jsonValue;
}

RandomSplitActivity& RandomSplitActivity::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue RandomSplitActivity::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
