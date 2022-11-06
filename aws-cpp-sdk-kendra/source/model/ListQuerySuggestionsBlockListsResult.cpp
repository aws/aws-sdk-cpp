/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ListQuerySuggestionsBlockListsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListQuerySuggestionsBlockListsResult::ListQuerySuggestionsBlockListsResult()
{
}

ListQuerySuggestionsBlockListsResult::ListQuerySuggestionsBlockListsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListQuerySuggestionsBlockListsResult& ListQuerySuggestionsBlockListsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BlockListSummaryItems"))
  {
    Aws::Utils::Array<JsonView> blockListSummaryItemsJsonList = jsonValue.GetArray("BlockListSummaryItems");
    for(unsigned blockListSummaryItemsIndex = 0; blockListSummaryItemsIndex < blockListSummaryItemsJsonList.GetLength(); ++blockListSummaryItemsIndex)
    {
      m_blockListSummaryItems.push_back(blockListSummaryItemsJsonList[blockListSummaryItemsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
