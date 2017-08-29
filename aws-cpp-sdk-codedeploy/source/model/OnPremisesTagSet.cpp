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

#include <aws/codedeploy/model/OnPremisesTagSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

OnPremisesTagSet::OnPremisesTagSet() : 
    m_onPremisesTagSetListHasBeenSet(false)
{
}

OnPremisesTagSet::OnPremisesTagSet(const JsonValue& jsonValue) : 
    m_onPremisesTagSetListHasBeenSet(false)
{
  *this = jsonValue;
}

OnPremisesTagSet& OnPremisesTagSet::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("onPremisesTagSetList"))
  {
    Array<JsonValue> onPremisesTagSetListJsonList = jsonValue.GetArray("onPremisesTagSetList");
    for(unsigned onPremisesTagSetListIndex = 0; onPremisesTagSetListIndex < onPremisesTagSetListJsonList.GetLength(); ++onPremisesTagSetListIndex)
    {
      Array<JsonValue> tagFilterListJsonList = onPremisesTagSetListJsonList[onPremisesTagSetListIndex].AsArray();
      Aws::Vector<TagFilter> tagFilterListList;
      tagFilterListList.reserve((size_t)tagFilterListJsonList.GetLength());
      for(unsigned tagFilterListIndex = 0; tagFilterListIndex < tagFilterListJsonList.GetLength(); ++tagFilterListIndex)
      {
        tagFilterListList.push_back(tagFilterListJsonList[tagFilterListIndex].AsObject());
      }
      m_onPremisesTagSetList.push_back(std::move(tagFilterListList));
    }
    m_onPremisesTagSetListHasBeenSet = true;
  }

  return *this;
}

JsonValue OnPremisesTagSet::Jsonize() const
{
  JsonValue payload;

  if(m_onPremisesTagSetListHasBeenSet)
  {
   Array<JsonValue> onPremisesTagSetListJsonList(m_onPremisesTagSetList.size());
   for(unsigned onPremisesTagSetListIndex = 0; onPremisesTagSetListIndex < onPremisesTagSetListJsonList.GetLength(); ++onPremisesTagSetListIndex)
   {
     Array<JsonValue> tagFilterListJsonList(m_onPremisesTagSetList[onPremisesTagSetListIndex].size());
     for(unsigned tagFilterListIndex = 0; tagFilterListIndex < tagFilterListJsonList.GetLength(); ++tagFilterListIndex)
     {
       tagFilterListJsonList[tagFilterListIndex].AsObject(m_onPremisesTagSetList[onPremisesTagSetListIndex][tagFilterListIndex].Jsonize());
     }
     onPremisesTagSetListJsonList[onPremisesTagSetListIndex].AsArray(std::move(tagFilterListJsonList));
   }
   payload.WithArray("onPremisesTagSetList", std::move(onPremisesTagSetListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
