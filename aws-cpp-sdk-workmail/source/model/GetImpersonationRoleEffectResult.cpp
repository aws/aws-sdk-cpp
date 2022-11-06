/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/GetImpersonationRoleEffectResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetImpersonationRoleEffectResult::GetImpersonationRoleEffectResult() : 
    m_type(ImpersonationRoleType::NOT_SET),
    m_effect(AccessEffect::NOT_SET)
{
}

GetImpersonationRoleEffectResult::GetImpersonationRoleEffectResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_type(ImpersonationRoleType::NOT_SET),
    m_effect(AccessEffect::NOT_SET)
{
  *this = result;
}

GetImpersonationRoleEffectResult& GetImpersonationRoleEffectResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Type"))
  {
    m_type = ImpersonationRoleTypeMapper::GetImpersonationRoleTypeForName(jsonValue.GetString("Type"));

  }

  if(jsonValue.ValueExists("Effect"))
  {
    m_effect = AccessEffectMapper::GetAccessEffectForName(jsonValue.GetString("Effect"));

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
