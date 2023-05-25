/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/GetWorkflowResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWorkflowResult::GetWorkflowResult() : 
    m_workflowType(WorkflowType::NOT_SET),
    m_status(Status::NOT_SET)
{
}

GetWorkflowResult::GetWorkflowResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_workflowType(WorkflowType::NOT_SET),
    m_status(Status::NOT_SET)
{
  *this = result;
}

GetWorkflowResult& GetWorkflowResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WorkflowId"))
  {
    m_workflowId = jsonValue.GetString("WorkflowId");

  }

  if(jsonValue.ValueExists("WorkflowType"))
  {
    m_workflowType = WorkflowTypeMapper::GetWorkflowTypeForName(jsonValue.GetString("WorkflowType"));

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("ErrorDescription"))
  {
    m_errorDescription = jsonValue.GetString("ErrorDescription");

  }

  if(jsonValue.ValueExists("StartDate"))
  {
    m_startDate = jsonValue.GetDouble("StartDate");

  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");

  }

  if(jsonValue.ValueExists("Attributes"))
  {
    m_attributes = jsonValue.GetObject("Attributes");

  }

  if(jsonValue.ValueExists("Metrics"))
  {
    m_metrics = jsonValue.GetObject("Metrics");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
