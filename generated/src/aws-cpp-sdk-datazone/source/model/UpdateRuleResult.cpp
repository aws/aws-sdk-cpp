/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UpdateRuleResult.h>
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

UpdateRuleResult::UpdateRuleResult() : 
    m_action(RuleAction::NOT_SET),
    m_ruleType(RuleType::NOT_SET)
{
}

UpdateRuleResult::UpdateRuleResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateRuleResult()
{
  *this = result;
}

UpdateRuleResult& UpdateRuleResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("lastUpdatedBy"))
  {
    m_lastUpdatedBy = jsonValue.GetString("lastUpdatedBy");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetString("revision");

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

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
