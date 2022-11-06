/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/SelectResourceConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SelectResourceConfigResult::SelectResourceConfigResult()
{
}

SelectResourceConfigResult::SelectResourceConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SelectResourceConfigResult& SelectResourceConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Results"))
  {
    Aws::Utils::Array<JsonView> resultsJsonList = jsonValue.GetArray("Results");
    for(unsigned resultsIndex = 0; resultsIndex < resultsJsonList.GetLength(); ++resultsIndex)
    {
      m_results.push_back(resultsJsonList[resultsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("QueryInfo"))
  {
    m_queryInfo = jsonValue.GetObject("QueryInfo");

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
