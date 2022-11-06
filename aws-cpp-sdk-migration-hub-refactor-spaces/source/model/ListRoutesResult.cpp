/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/ListRoutesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubRefactorSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListRoutesResult::ListRoutesResult()
{
}

ListRoutesResult::ListRoutesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListRoutesResult& ListRoutesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("RouteSummaryList"))
  {
    Aws::Utils::Array<JsonView> routeSummaryListJsonList = jsonValue.GetArray("RouteSummaryList");
    for(unsigned routeSummaryListIndex = 0; routeSummaryListIndex < routeSummaryListJsonList.GetLength(); ++routeSummaryListIndex)
    {
      m_routeSummaryList.push_back(routeSummaryListJsonList[routeSummaryListIndex].AsObject());
    }
  }



  return *this;
}
