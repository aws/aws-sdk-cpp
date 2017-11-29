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

#include <aws/cognito-idp/model/RiskExceptionConfigurationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

RiskExceptionConfigurationType::RiskExceptionConfigurationType() : 
    m_blockedIPRangeListHasBeenSet(false),
    m_skippedIPRangeListHasBeenSet(false)
{
}

RiskExceptionConfigurationType::RiskExceptionConfigurationType(const JsonValue& jsonValue) : 
    m_blockedIPRangeListHasBeenSet(false),
    m_skippedIPRangeListHasBeenSet(false)
{
  *this = jsonValue;
}

RiskExceptionConfigurationType& RiskExceptionConfigurationType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("BlockedIPRangeList"))
  {
    Array<JsonValue> blockedIPRangeListJsonList = jsonValue.GetArray("BlockedIPRangeList");
    for(unsigned blockedIPRangeListIndex = 0; blockedIPRangeListIndex < blockedIPRangeListJsonList.GetLength(); ++blockedIPRangeListIndex)
    {
      m_blockedIPRangeList.push_back(blockedIPRangeListJsonList[blockedIPRangeListIndex].AsString());
    }
    m_blockedIPRangeListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SkippedIPRangeList"))
  {
    Array<JsonValue> skippedIPRangeListJsonList = jsonValue.GetArray("SkippedIPRangeList");
    for(unsigned skippedIPRangeListIndex = 0; skippedIPRangeListIndex < skippedIPRangeListJsonList.GetLength(); ++skippedIPRangeListIndex)
    {
      m_skippedIPRangeList.push_back(skippedIPRangeListJsonList[skippedIPRangeListIndex].AsString());
    }
    m_skippedIPRangeListHasBeenSet = true;
  }

  return *this;
}

JsonValue RiskExceptionConfigurationType::Jsonize() const
{
  JsonValue payload;

  if(m_blockedIPRangeListHasBeenSet)
  {
   Array<JsonValue> blockedIPRangeListJsonList(m_blockedIPRangeList.size());
   for(unsigned blockedIPRangeListIndex = 0; blockedIPRangeListIndex < blockedIPRangeListJsonList.GetLength(); ++blockedIPRangeListIndex)
   {
     blockedIPRangeListJsonList[blockedIPRangeListIndex].AsString(m_blockedIPRangeList[blockedIPRangeListIndex]);
   }
   payload.WithArray("BlockedIPRangeList", std::move(blockedIPRangeListJsonList));

  }

  if(m_skippedIPRangeListHasBeenSet)
  {
   Array<JsonValue> skippedIPRangeListJsonList(m_skippedIPRangeList.size());
   for(unsigned skippedIPRangeListIndex = 0; skippedIPRangeListIndex < skippedIPRangeListJsonList.GetLength(); ++skippedIPRangeListIndex)
   {
     skippedIPRangeListJsonList[skippedIPRangeListIndex].AsString(m_skippedIPRangeList[skippedIPRangeListIndex]);
   }
   payload.WithArray("SkippedIPRangeList", std::move(skippedIPRangeListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
