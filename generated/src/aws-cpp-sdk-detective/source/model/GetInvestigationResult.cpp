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

GetInvestigationResult::GetInvestigationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetInvestigationResult& GetInvestigationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GraphArn"))
  {
    m_graphArn = jsonValue.GetString("GraphArn");
    m_graphArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InvestigationId"))
  {
    m_investigationId = jsonValue.GetString("InvestigationId");
    m_investigationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EntityArn"))
  {
    m_entityArn = jsonValue.GetString("EntityArn");
    m_entityArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EntityType"))
  {
    m_entityType = EntityTypeMapper::GetEntityTypeForName(jsonValue.GetString("EntityType"));
    m_entityTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetString("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScopeStartTime"))
  {
    m_scopeStartTime = jsonValue.GetString("ScopeStartTime");
    m_scopeStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScopeEndTime"))
  {
    m_scopeEndTime = jsonValue.GetString("ScopeEndTime");
    m_scopeEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = SeverityMapper::GetSeverityForName(jsonValue.GetString("Severity"));
    m_severityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = StateMapper::GetStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
