/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListViewsResult.h>
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

ListViewsResult::ListViewsResult()
{
}

ListViewsResult::ListViewsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListViewsResult& ListViewsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ViewsSummaryList"))
  {
    Aws::Utils::Array<JsonView> viewsSummaryListJsonList = jsonValue.GetArray("ViewsSummaryList");
    for(unsigned viewsSummaryListIndex = 0; viewsSummaryListIndex < viewsSummaryListJsonList.GetLength(); ++viewsSummaryListIndex)
    {
      m_viewsSummaryList.push_back(viewsSummaryListJsonList[viewsSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
