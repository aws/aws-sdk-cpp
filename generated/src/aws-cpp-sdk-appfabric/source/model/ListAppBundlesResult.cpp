/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/ListAppBundlesResult.h>
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

ListAppBundlesResult::ListAppBundlesResult()
{
}

ListAppBundlesResult::ListAppBundlesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAppBundlesResult& ListAppBundlesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("appBundleSummaryList"))
  {
    Aws::Utils::Array<JsonView> appBundleSummaryListJsonList = jsonValue.GetArray("appBundleSummaryList");
    for(unsigned appBundleSummaryListIndex = 0; appBundleSummaryListIndex < appBundleSummaryListJsonList.GetLength(); ++appBundleSummaryListIndex)
    {
      m_appBundleSummaryList.push_back(appBundleSummaryListJsonList[appBundleSummaryListIndex].AsObject());
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
