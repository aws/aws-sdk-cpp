/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListUseCasesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListUseCasesResult::ListUseCasesResult()
{
}

ListUseCasesResult::ListUseCasesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListUseCasesResult& ListUseCasesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UseCaseSummaryList"))
  {
    Aws::Utils::Array<JsonView> useCaseSummaryListJsonList = jsonValue.GetArray("UseCaseSummaryList");
    for(unsigned useCaseSummaryListIndex = 0; useCaseSummaryListIndex < useCaseSummaryListJsonList.GetLength(); ++useCaseSummaryListIndex)
    {
      m_useCaseSummaryList.push_back(useCaseSummaryListJsonList[useCaseSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
