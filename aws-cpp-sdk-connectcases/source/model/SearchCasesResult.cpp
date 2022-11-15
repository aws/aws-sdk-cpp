/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/SearchCasesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConnectCases::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SearchCasesResult::SearchCasesResult()
{
}

SearchCasesResult::SearchCasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SearchCasesResult& SearchCasesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("cases"))
  {
    Aws::Utils::Array<JsonView> casesJsonList = jsonValue.GetArray("cases");
    for(unsigned casesIndex = 0; casesIndex < casesJsonList.GetLength(); ++casesIndex)
    {
      m_cases.push_back(casesJsonList[casesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
