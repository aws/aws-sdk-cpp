/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ListExperiencesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListExperiencesResult::ListExperiencesResult()
{
}

ListExperiencesResult::ListExperiencesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListExperiencesResult& ListExperiencesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SummaryItems"))
  {
    Aws::Utils::Array<JsonView> summaryItemsJsonList = jsonValue.GetArray("SummaryItems");
    for(unsigned summaryItemsIndex = 0; summaryItemsIndex < summaryItemsJsonList.GetLength(); ++summaryItemsIndex)
    {
      m_summaryItems.push_back(summaryItemsJsonList[summaryItemsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
