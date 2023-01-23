/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ListFaqsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFaqsResult::ListFaqsResult()
{
}

ListFaqsResult::ListFaqsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFaqsResult& ListFaqsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("FaqSummaryItems"))
  {
    Aws::Utils::Array<JsonView> faqSummaryItemsJsonList = jsonValue.GetArray("FaqSummaryItems");
    for(unsigned faqSummaryItemsIndex = 0; faqSummaryItemsIndex < faqSummaryItemsJsonList.GetLength(); ++faqSummaryItemsIndex)
    {
      m_faqSummaryItems.push_back(faqSummaryItemsJsonList[faqSummaryItemsIndex].AsObject());
    }
  }



  return *this;
}
