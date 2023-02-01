/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListInstanceStorageConfigsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInstanceStorageConfigsResult::ListInstanceStorageConfigsResult()
{
}

ListInstanceStorageConfigsResult::ListInstanceStorageConfigsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListInstanceStorageConfigsResult& ListInstanceStorageConfigsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StorageConfigs"))
  {
    Aws::Utils::Array<JsonView> storageConfigsJsonList = jsonValue.GetArray("StorageConfigs");
    for(unsigned storageConfigsIndex = 0; storageConfigsIndex < storageConfigsJsonList.GetLength(); ++storageConfigsIndex)
    {
      m_storageConfigs.push_back(storageConfigsJsonList[storageConfigsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
