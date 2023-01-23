/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/DescribeQueryDefinitionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeQueryDefinitionsResult::DescribeQueryDefinitionsResult()
{
}

DescribeQueryDefinitionsResult::DescribeQueryDefinitionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeQueryDefinitionsResult& DescribeQueryDefinitionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("queryDefinitions"))
  {
    Aws::Utils::Array<JsonView> queryDefinitionsJsonList = jsonValue.GetArray("queryDefinitions");
    for(unsigned queryDefinitionsIndex = 0; queryDefinitionsIndex < queryDefinitionsJsonList.GetLength(); ++queryDefinitionsIndex)
    {
      m_queryDefinitions.push_back(queryDefinitionsJsonList[queryDefinitionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
