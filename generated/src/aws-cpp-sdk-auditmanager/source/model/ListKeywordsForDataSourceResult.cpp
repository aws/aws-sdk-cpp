/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ListKeywordsForDataSourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListKeywordsForDataSourceResult::ListKeywordsForDataSourceResult()
{
}

ListKeywordsForDataSourceResult::ListKeywordsForDataSourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListKeywordsForDataSourceResult& ListKeywordsForDataSourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("keywords"))
  {
    Aws::Utils::Array<JsonView> keywordsJsonList = jsonValue.GetArray("keywords");
    for(unsigned keywordsIndex = 0; keywordsIndex < keywordsJsonList.GetLength(); ++keywordsIndex)
    {
      m_keywords.push_back(keywordsJsonList[keywordsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
