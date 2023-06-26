/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

RiskExceptionConfigurationType::RiskExceptionConfigurationType(JsonView jsonValue) : 
    m_blockedIPRangeListHasBeenSet(false),
    m_skippedIPRangeListHasBeenSet(false)
{
  *this = jsonValue;
}

RiskExceptionConfigurationType& RiskExceptionConfigurationType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BlockedIPRangeList"))
  {
    Aws::Utils::Array<JsonView> blockedIPRangeListJsonList = jsonValue.GetArray("BlockedIPRangeList");
    for(unsigned blockedIPRangeListIndex = 0; blockedIPRangeListIndex < blockedIPRangeListJsonList.GetLength(); ++blockedIPRangeListIndex)
    {
      m_blockedIPRangeList.push_back(blockedIPRangeListJsonList[blockedIPRangeListIndex].AsString());
    }
    m_blockedIPRangeListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SkippedIPRangeList"))
  {
    Aws::Utils::Array<JsonView> skippedIPRangeListJsonList = jsonValue.GetArray("SkippedIPRangeList");
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
   Aws::Utils::Array<JsonValue> blockedIPRangeListJsonList(m_blockedIPRangeList.size());
   for(unsigned blockedIPRangeListIndex = 0; blockedIPRangeListIndex < blockedIPRangeListJsonList.GetLength(); ++blockedIPRangeListIndex)
   {
     blockedIPRangeListJsonList[blockedIPRangeListIndex].AsString(m_blockedIPRangeList[blockedIPRangeListIndex]);
   }
   payload.WithArray("BlockedIPRangeList", std::move(blockedIPRangeListJsonList));

  }

  if(m_skippedIPRangeListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> skippedIPRangeListJsonList(m_skippedIPRangeList.size());
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
