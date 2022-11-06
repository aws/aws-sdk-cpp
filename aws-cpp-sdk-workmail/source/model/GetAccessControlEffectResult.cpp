/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/GetAccessControlEffectResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAccessControlEffectResult::GetAccessControlEffectResult() : 
    m_effect(AccessControlRuleEffect::NOT_SET)
{
}

GetAccessControlEffectResult::GetAccessControlEffectResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_effect(AccessControlRuleEffect::NOT_SET)
{
  *this = result;
}

GetAccessControlEffectResult& GetAccessControlEffectResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Effect"))
  {
    m_effect = AccessControlRuleEffectMapper::GetAccessControlRuleEffectForName(jsonValue.GetString("Effect"));

  }

  if(jsonValue.ValueExists("MatchedRules"))
  {
    Aws::Utils::Array<JsonView> matchedRulesJsonList = jsonValue.GetArray("MatchedRules");
    for(unsigned matchedRulesIndex = 0; matchedRulesIndex < matchedRulesJsonList.GetLength(); ++matchedRulesIndex)
    {
      m_matchedRules.push_back(matchedRulesJsonList[matchedRulesIndex].AsString());
    }
  }



  return *this;
}
