/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ListIngestionJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIngestionJobsResult::ListIngestionJobsResult()
{
}

ListIngestionJobsResult::ListIngestionJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListIngestionJobsResult& ListIngestionJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ingestionJobSummaries"))
  {
    Aws::Utils::Array<JsonView> ingestionJobSummariesJsonList = jsonValue.GetArray("ingestionJobSummaries");
    for(unsigned ingestionJobSummariesIndex = 0; ingestionJobSummariesIndex < ingestionJobSummariesJsonList.GetLength(); ++ingestionJobSummariesIndex)
    {
      m_ingestionJobSummaries.push_back(ingestionJobSummariesJsonList[ingestionJobSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
