/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchPromptsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchPromptsResult::SearchPromptsResult() : 
    m_approximateTotalCount(0)
{
}

SearchPromptsResult::SearchPromptsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_approximateTotalCount(0)
{
  *this = result;
}

SearchPromptsResult& SearchPromptsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Prompts"))
  {
    Aws::Utils::Array<JsonView> promptsJsonList = jsonValue.GetArray("Prompts");
    for(unsigned promptsIndex = 0; promptsIndex < promptsJsonList.GetLength(); ++promptsIndex)
    {
      m_prompts.push_back(promptsJsonList[promptsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ApproximateTotalCount"))
  {
    m_approximateTotalCount = jsonValue.GetInt64("ApproximateTotalCount");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
