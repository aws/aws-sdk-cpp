/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

OnPremisesTagSet::OnPremisesTagSet(JsonView jsonValue) : 
    m_onPremisesTagSetListHasBeenSet(false)
{
  *this = jsonValue;
}

OnPremisesTagSet& OnPremisesTagSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("onPremisesTagSetList"))
  {
    Aws::Utils::Array<JsonView> onPremisesTagSetListJsonList = jsonValue.GetArray("onPremisesTagSetList");
    for(unsigned onPremisesTagSetListIndex = 0; onPremisesTagSetListIndex < onPremisesTagSetListJsonList.GetLength(); ++onPremisesTagSetListIndex)
    {
      Aws::Utils::Array<JsonView> tagFilterListJsonList = onPremisesTagSetListJsonList[onPremisesTagSetListIndex].AsArray();
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
   Aws::Utils::Array<JsonValue> onPremisesTagSetListJsonList(m_onPremisesTagSetList.size());
   for(unsigned onPremisesTagSetListIndex = 0; onPremisesTagSetListIndex < onPremisesTagSetListJsonList.GetLength(); ++onPremisesTagSetListIndex)
   {
     Aws::Utils::Array<JsonValue> tagFilterListJsonList(m_onPremisesTagSetList[onPremisesTagSetListIndex].size());
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
