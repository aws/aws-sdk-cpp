/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ValidateMatchmakingRuleSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ValidateMatchmakingRuleSetResult::ValidateMatchmakingRuleSetResult() : 
    m_valid(false)
{
}

ValidateMatchmakingRuleSetResult::ValidateMatchmakingRuleSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_valid(false)
{
  *this = result;
}

ValidateMatchmakingRuleSetResult& ValidateMatchmakingRuleSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Valid"))
  {
    m_valid = jsonValue.GetBool("Valid");

  }



  return *this;
}
