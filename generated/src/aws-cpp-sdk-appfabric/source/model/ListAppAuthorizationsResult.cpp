/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/ListAppAuthorizationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppFabric::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAppAuthorizationsResult::ListAppAuthorizationsResult()
{
}

ListAppAuthorizationsResult::ListAppAuthorizationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAppAuthorizationsResult& ListAppAuthorizationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("appAuthorizationSummaryList"))
  {
    Aws::Utils::Array<JsonView> appAuthorizationSummaryListJsonList = jsonValue.GetArray("appAuthorizationSummaryList");
    for(unsigned appAuthorizationSummaryListIndex = 0; appAuthorizationSummaryListIndex < appAuthorizationSummaryListJsonList.GetLength(); ++appAuthorizationSummaryListIndex)
    {
      m_appAuthorizationSummaryList.push_back(appAuthorizationSummaryListJsonList[appAuthorizationSummaryListIndex].AsObject());
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
