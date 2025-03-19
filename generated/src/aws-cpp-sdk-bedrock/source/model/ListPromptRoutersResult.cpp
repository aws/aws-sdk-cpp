/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ListPromptRoutersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPromptRoutersResult::ListPromptRoutersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPromptRoutersResult& ListPromptRoutersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("promptRouterSummaries"))
  {
    Aws::Utils::Array<JsonView> promptRouterSummariesJsonList = jsonValue.GetArray("promptRouterSummaries");
    for(unsigned promptRouterSummariesIndex = 0; promptRouterSummariesIndex < promptRouterSummariesJsonList.GetLength(); ++promptRouterSummariesIndex)
    {
      m_promptRouterSummaries.push_back(promptRouterSummariesJsonList[promptRouterSummariesIndex].AsObject());
    }
    m_promptRouterSummariesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
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
