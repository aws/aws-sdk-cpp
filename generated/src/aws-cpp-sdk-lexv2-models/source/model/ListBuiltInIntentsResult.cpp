/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ListBuiltInIntentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBuiltInIntentsResult::ListBuiltInIntentsResult()
{
}

ListBuiltInIntentsResult::ListBuiltInIntentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBuiltInIntentsResult& ListBuiltInIntentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("builtInIntentSummaries"))
  {
    Aws::Utils::Array<JsonView> builtInIntentSummariesJsonList = jsonValue.GetArray("builtInIntentSummaries");
    for(unsigned builtInIntentSummariesIndex = 0; builtInIntentSummariesIndex < builtInIntentSummariesJsonList.GetLength(); ++builtInIntentSummariesIndex)
    {
      m_builtInIntentSummaries.push_back(builtInIntentSummariesJsonList[builtInIntentSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("localeId"))
  {
    m_localeId = jsonValue.GetString("localeId");

  }



  return *this;
}
