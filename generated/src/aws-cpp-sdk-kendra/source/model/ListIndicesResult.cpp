/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ListIndicesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListIndicesResult::ListIndicesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListIndicesResult& ListIndicesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IndexConfigurationSummaryItems"))
  {
    Aws::Utils::Array<JsonView> indexConfigurationSummaryItemsJsonList = jsonValue.GetArray("IndexConfigurationSummaryItems");
    for(unsigned indexConfigurationSummaryItemsIndex = 0; indexConfigurationSummaryItemsIndex < indexConfigurationSummaryItemsJsonList.GetLength(); ++indexConfigurationSummaryItemsIndex)
    {
      m_indexConfigurationSummaryItems.push_back(indexConfigurationSummaryItemsJsonList[indexConfigurationSummaryItemsIndex].AsObject());
    }
    m_indexConfigurationSummaryItemsHasBeenSet = true;
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
