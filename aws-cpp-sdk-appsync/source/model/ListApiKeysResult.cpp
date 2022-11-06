/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/ListApiKeysResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListApiKeysResult::ListApiKeysResult()
{
}

ListApiKeysResult::ListApiKeysResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListApiKeysResult& ListApiKeysResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("apiKeys"))
  {
    Aws::Utils::Array<JsonView> apiKeysJsonList = jsonValue.GetArray("apiKeys");
    for(unsigned apiKeysIndex = 0; apiKeysIndex < apiKeysJsonList.GetLength(); ++apiKeysIndex)
    {
      m_apiKeys.push_back(apiKeysJsonList[apiKeysIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
