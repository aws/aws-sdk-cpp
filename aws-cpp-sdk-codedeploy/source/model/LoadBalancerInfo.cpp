/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/model/LoadBalancerInfo.h>
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

LoadBalancerInfo::LoadBalancerInfo() : 
    m_elbInfoListHasBeenSet(false)
{
}

LoadBalancerInfo::LoadBalancerInfo(const JsonValue& jsonValue) : 
    m_elbInfoListHasBeenSet(false)
{
  *this = jsonValue;
}

LoadBalancerInfo& LoadBalancerInfo::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("elbInfoList"))
  {
    Array<JsonValue> elbInfoListJsonList = jsonValue.GetArray("elbInfoList");
    for(unsigned elbInfoListIndex = 0; elbInfoListIndex < elbInfoListJsonList.GetLength(); ++elbInfoListIndex)
    {
      m_elbInfoList.push_back(elbInfoListJsonList[elbInfoListIndex].AsObject());
    }
    m_elbInfoListHasBeenSet = true;
  }

  return *this;
}

JsonValue LoadBalancerInfo::Jsonize() const
{
  JsonValue payload;

  if(m_elbInfoListHasBeenSet)
  {
   Array<JsonValue> elbInfoListJsonList(m_elbInfoList.size());
   for(unsigned elbInfoListIndex = 0; elbInfoListIndex < elbInfoListJsonList.GetLength(); ++elbInfoListIndex)
   {
     elbInfoListJsonList[elbInfoListIndex].AsObject(m_elbInfoList[elbInfoListIndex].Jsonize());
   }
   payload.WithArray("elbInfoList", std::move(elbInfoListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws