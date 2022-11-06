/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ListThesauriResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListThesauriResult::ListThesauriResult()
{
}

ListThesauriResult::ListThesauriResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListThesauriResult& ListThesauriResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ThesaurusSummaryItems"))
  {
    Aws::Utils::Array<JsonView> thesaurusSummaryItemsJsonList = jsonValue.GetArray("ThesaurusSummaryItems");
    for(unsigned thesaurusSummaryItemsIndex = 0; thesaurusSummaryItemsIndex < thesaurusSummaryItemsJsonList.GetLength(); ++thesaurusSummaryItemsIndex)
    {
      m_thesaurusSummaryItems.push_back(thesaurusSummaryItemsJsonList[thesaurusSummaryItemsIndex].AsObject());
    }
  }



  return *this;
}
