/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ListFindingsFiltersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFindingsFiltersResult::ListFindingsFiltersResult()
{
}

ListFindingsFiltersResult::ListFindingsFiltersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFindingsFiltersResult& ListFindingsFiltersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("findingsFilterListItems"))
  {
    Aws::Utils::Array<JsonView> findingsFilterListItemsJsonList = jsonValue.GetArray("findingsFilterListItems");
    for(unsigned findingsFilterListItemsIndex = 0; findingsFilterListItemsIndex < findingsFilterListItemsJsonList.GetLength(); ++findingsFilterListItemsIndex)
    {
      m_findingsFilterListItems.push_back(findingsFilterListItemsJsonList[findingsFilterListItemsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
