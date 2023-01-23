/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_elbInfoListHasBeenSet(false),
    m_targetGroupInfoListHasBeenSet(false),
    m_targetGroupPairInfoListHasBeenSet(false)
{
}

LoadBalancerInfo::LoadBalancerInfo(JsonView jsonValue) : 
    m_elbInfoListHasBeenSet(false),
    m_targetGroupInfoListHasBeenSet(false),
    m_targetGroupPairInfoListHasBeenSet(false)
{
  *this = jsonValue;
}

LoadBalancerInfo& LoadBalancerInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("elbInfoList"))
  {
    Aws::Utils::Array<JsonView> elbInfoListJsonList = jsonValue.GetArray("elbInfoList");
    for(unsigned elbInfoListIndex = 0; elbInfoListIndex < elbInfoListJsonList.GetLength(); ++elbInfoListIndex)
    {
      m_elbInfoList.push_back(elbInfoListJsonList[elbInfoListIndex].AsObject());
    }
    m_elbInfoListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetGroupInfoList"))
  {
    Aws::Utils::Array<JsonView> targetGroupInfoListJsonList = jsonValue.GetArray("targetGroupInfoList");
    for(unsigned targetGroupInfoListIndex = 0; targetGroupInfoListIndex < targetGroupInfoListJsonList.GetLength(); ++targetGroupInfoListIndex)
    {
      m_targetGroupInfoList.push_back(targetGroupInfoListJsonList[targetGroupInfoListIndex].AsObject());
    }
    m_targetGroupInfoListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetGroupPairInfoList"))
  {
    Aws::Utils::Array<JsonView> targetGroupPairInfoListJsonList = jsonValue.GetArray("targetGroupPairInfoList");
    for(unsigned targetGroupPairInfoListIndex = 0; targetGroupPairInfoListIndex < targetGroupPairInfoListJsonList.GetLength(); ++targetGroupPairInfoListIndex)
    {
      m_targetGroupPairInfoList.push_back(targetGroupPairInfoListJsonList[targetGroupPairInfoListIndex].AsObject());
    }
    m_targetGroupPairInfoListHasBeenSet = true;
  }

  return *this;
}

JsonValue LoadBalancerInfo::Jsonize() const
{
  JsonValue payload;

  if(m_elbInfoListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> elbInfoListJsonList(m_elbInfoList.size());
   for(unsigned elbInfoListIndex = 0; elbInfoListIndex < elbInfoListJsonList.GetLength(); ++elbInfoListIndex)
   {
     elbInfoListJsonList[elbInfoListIndex].AsObject(m_elbInfoList[elbInfoListIndex].Jsonize());
   }
   payload.WithArray("elbInfoList", std::move(elbInfoListJsonList));

  }

  if(m_targetGroupInfoListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetGroupInfoListJsonList(m_targetGroupInfoList.size());
   for(unsigned targetGroupInfoListIndex = 0; targetGroupInfoListIndex < targetGroupInfoListJsonList.GetLength(); ++targetGroupInfoListIndex)
   {
     targetGroupInfoListJsonList[targetGroupInfoListIndex].AsObject(m_targetGroupInfoList[targetGroupInfoListIndex].Jsonize());
   }
   payload.WithArray("targetGroupInfoList", std::move(targetGroupInfoListJsonList));

  }

  if(m_targetGroupPairInfoListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetGroupPairInfoListJsonList(m_targetGroupPairInfoList.size());
   for(unsigned targetGroupPairInfoListIndex = 0; targetGroupPairInfoListIndex < targetGroupPairInfoListJsonList.GetLength(); ++targetGroupPairInfoListIndex)
   {
     targetGroupPairInfoListJsonList[targetGroupPairInfoListIndex].AsObject(m_targetGroupPairInfoList[targetGroupPairInfoListIndex].Jsonize());
   }
   payload.WithArray("targetGroupPairInfoList", std::move(targetGroupPairInfoListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
