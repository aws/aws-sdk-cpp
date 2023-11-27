/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/GetInvestigationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Detective::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetInvestigationResult::GetInvestigationResult() : 
    m_entityType(EntityType::NOT_SET),
    m_status(Status::NOT_SET),
    m_severity(Severity::NOT_SET),
    m_state(State::NOT_SET)
{
}

GetInvestigationResult::GetInvestigationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_entityType(EntityType::NOT_SET),
    m_status(Status::NOT_SET),
    m_severity(Severity::NOT_SET),
    m_state(State::NOT_SET)
{
  *this = result;
}

GetInvestigationResult& GetInvestigationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GraphArn"))
  {
    m_graphArn = jsonValue.GetString("GraphArn");

  }

  if(jsonValue.ValueExists("InvestigationId"))
  {
    m_investigationId = jsonValue.GetString("InvestigationId");

  }

  if(jsonValue.ValueExists("EntityArn"))
  {
    m_entityArn = jsonValue.GetString("EntityArn");

  }

  if(jsonValue.ValueExists("EntityType"))
  {
    m_entityType = EntityTypeMapper::GetEntityTypeForName(jsonValue.GetString("EntityType"));

  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetString("CreatedTime");

  }

  if(jsonValue.ValueExists("ScopeStartTime"))
  {
    m_scopeStartTime = jsonValue.GetString("ScopeStartTime");

  }

  if(jsonValue.ValueExists("ScopeEndTime"))
  {
    m_scopeEndTime = jsonValue.GetString("ScopeEndTime");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = SeverityMapper::GetSeverityForName(jsonValue.GetString("Severity"));

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = StateMapper::GetStateForName(jsonValue.GetString("State"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
