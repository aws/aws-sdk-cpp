/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateRuleResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateRuleResult::CreateRuleResult() : 
    m_action(RuleAction::NOT_SET),
    m_ruleType(RuleType::NOT_SET),
    m_targetType(RuleTargetType::NOT_SET)
{
}

CreateRuleResult::CreateRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : CreateRuleResult()
{
  *this = result;
}

CreateRuleResult& CreateRuleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("action"))
  {
    m_action = RuleActionMapper::GetRuleActionForName(jsonValue.GetString("action"));

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("detail"))
  {
    m_detail = jsonValue.GetObject("detail");

  }

  if(jsonValue.ValueExists("identifier"))
  {
    m_identifier = jsonValue.GetString("identifier");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("ruleType"))
  {
    m_ruleType = RuleTypeMapper::GetRuleTypeForName(jsonValue.GetString("ruleType"));

  }

  if(jsonValue.ValueExists("scope"))
  {
    m_scope = jsonValue.GetObject("scope");

  }

  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetObject("target");

  }

  if(jsonValue.ValueExists("targetType"))
  {
    m_targetType = RuleTargetTypeMapper::GetRuleTargetTypeForName(jsonValue.GetString("targetType"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
