/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/ListSourceViewsForBillingViewResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Billing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSourceViewsForBillingViewResult::ListSourceViewsForBillingViewResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSourceViewsForBillingViewResult& ListSourceViewsForBillingViewResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("sourceViews"))
  {
    Aws::Utils::Array<JsonView> sourceViewsJsonList = jsonValue.GetArray("sourceViews");
    for(unsigned sourceViewsIndex = 0; sourceViewsIndex < sourceViewsJsonList.GetLength(); ++sourceViewsIndex)
    {
      m_sourceViews.push_back(sourceViewsJsonList[sourceViewsIndex].AsString());
    }
    m_sourceViewsHasBeenSet = true;
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
