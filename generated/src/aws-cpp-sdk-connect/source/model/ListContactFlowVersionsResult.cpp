/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListContactFlowVersionsResult.h>
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

ListContactFlowVersionsResult::ListContactFlowVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListContactFlowVersionsResult& ListContactFlowVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ContactFlowVersionSummaryList"))
  {
    Aws::Utils::Array<JsonView> contactFlowVersionSummaryListJsonList = jsonValue.GetArray("ContactFlowVersionSummaryList");
    for(unsigned contactFlowVersionSummaryListIndex = 0; contactFlowVersionSummaryListIndex < contactFlowVersionSummaryListJsonList.GetLength(); ++contactFlowVersionSummaryListIndex)
    {
      m_contactFlowVersionSummaryList.push_back(contactFlowVersionSummaryListJsonList[contactFlowVersionSummaryListIndex].AsObject());
    }
    m_contactFlowVersionSummaryListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
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
