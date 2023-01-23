/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/ListLogPatternsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApplicationInsights::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListLogPatternsResult::ListLogPatternsResult()
{
}

ListLogPatternsResult::ListLogPatternsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListLogPatternsResult& ListLogPatternsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceGroupName"))
  {
    m_resourceGroupName = jsonValue.GetString("ResourceGroupName");

  }

  if(jsonValue.ValueExists("LogPatterns"))
  {
    Aws::Utils::Array<JsonView> logPatternsJsonList = jsonValue.GetArray("LogPatterns");
    for(unsigned logPatternsIndex = 0; logPatternsIndex < logPatternsJsonList.GetLength(); ++logPatternsIndex)
    {
      m_logPatterns.push_back(logPatternsJsonList[logPatternsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
