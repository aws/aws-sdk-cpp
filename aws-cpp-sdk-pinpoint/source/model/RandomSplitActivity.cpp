/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> branchesJsonList = jsonValue.GetArray("Branches");
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
   Aws::Utils::Array<JsonValue> branchesJsonList(m_branches.size());
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
