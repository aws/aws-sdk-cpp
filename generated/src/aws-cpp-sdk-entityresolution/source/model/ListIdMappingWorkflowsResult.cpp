/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/ListIdMappingWorkflowsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EntityResolution::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIdMappingWorkflowsResult::ListIdMappingWorkflowsResult()
{
}

ListIdMappingWorkflowsResult::ListIdMappingWorkflowsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListIdMappingWorkflowsResult& ListIdMappingWorkflowsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("workflowSummaries"))
  {
    Aws::Utils::Array<JsonView> workflowSummariesJsonList = jsonValue.GetArray("workflowSummaries");
    for(unsigned workflowSummariesIndex = 0; workflowSummariesIndex < workflowSummariesJsonList.GetLength(); ++workflowSummariesIndex)
    {
      m_workflowSummaries.push_back(workflowSummariesJsonList[workflowSummariesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
