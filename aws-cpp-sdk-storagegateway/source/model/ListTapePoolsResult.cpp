/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/ListTapePoolsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTapePoolsResult::ListTapePoolsResult()
{
}

ListTapePoolsResult::ListTapePoolsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTapePoolsResult& ListTapePoolsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PoolInfos"))
  {
    Aws::Utils::Array<JsonView> poolInfosJsonList = jsonValue.GetArray("PoolInfos");
    for(unsigned poolInfosIndex = 0; poolInfosIndex < poolInfosJsonList.GetLength(); ++poolInfosIndex)
    {
      m_poolInfos.push_back(poolInfosJsonList[poolInfosIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }



  return *this;
}
