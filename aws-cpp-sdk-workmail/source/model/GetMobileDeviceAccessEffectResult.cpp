/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/GetMobileDeviceAccessEffectResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMobileDeviceAccessEffectResult::GetMobileDeviceAccessEffectResult() : 
    m_effect(MobileDeviceAccessRuleEffect::NOT_SET)
{
}

GetMobileDeviceAccessEffectResult::GetMobileDeviceAccessEffectResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_effect(MobileDeviceAccessRuleEffect::NOT_SET)
{
  *this = result;
}

GetMobileDeviceAccessEffectResult& GetMobileDeviceAccessEffectResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Effect"))
  {
    m_effect = MobileDeviceAccessRuleEffectMapper::GetMobileDeviceAccessRuleEffectForName(jsonValue.GetString("Effect"));

  }

  if(jsonValue.ValueExists("MatchedRules"))
  {
    Aws::Utils::Array<JsonView> matchedRulesJsonList = jsonValue.GetArray("MatchedRules");
    for(unsigned matchedRulesIndex = 0; matchedRulesIndex < matchedRulesJsonList.GetLength(); ++matchedRulesIndex)
    {
      m_matchedRules.push_back(matchedRulesJsonList[matchedRulesIndex].AsObject());
    }
  }



  return *this;
}
