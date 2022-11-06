/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ListStoredQueriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListStoredQueriesResult::ListStoredQueriesResult()
{
}

ListStoredQueriesResult::ListStoredQueriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListStoredQueriesResult& ListStoredQueriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StoredQueryMetadata"))
  {
    Aws::Utils::Array<JsonView> storedQueryMetadataJsonList = jsonValue.GetArray("StoredQueryMetadata");
    for(unsigned storedQueryMetadataIndex = 0; storedQueryMetadataIndex < storedQueryMetadataJsonList.GetLength(); ++storedQueryMetadataIndex)
    {
      m_storedQueryMetadata.push_back(storedQueryMetadataJsonList[storedQueryMetadataIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
