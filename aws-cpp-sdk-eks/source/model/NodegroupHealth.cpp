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

#include <aws/eks/model/NodegroupHealth.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

NodegroupHealth::NodegroupHealth() : 
    m_issuesHasBeenSet(false)
{
}

NodegroupHealth::NodegroupHealth(JsonView jsonValue) : 
    m_issuesHasBeenSet(false)
{
  *this = jsonValue;
}

NodegroupHealth& NodegroupHealth::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("issues"))
  {
    Array<JsonView> issuesJsonList = jsonValue.GetArray("issues");
    for(unsigned issuesIndex = 0; issuesIndex < issuesJsonList.GetLength(); ++issuesIndex)
    {
      m_issues.push_back(issuesJsonList[issuesIndex].AsObject());
    }
    m_issuesHasBeenSet = true;
  }

  return *this;
}

JsonValue NodegroupHealth::Jsonize() const
{
  JsonValue payload;

  if(m_issuesHasBeenSet)
  {
   Array<JsonValue> issuesJsonList(m_issues.size());
   for(unsigned issuesIndex = 0; issuesIndex < issuesJsonList.GetLength(); ++issuesIndex)
   {
     issuesJsonList[issuesIndex].AsObject(m_issues[issuesIndex].Jsonize());
   }
   payload.WithArray("issues", std::move(issuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
