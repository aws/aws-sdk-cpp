/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ListSyncResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSyncResourcesResult::ListSyncResourcesResult()
{
}

ListSyncResourcesResult::ListSyncResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSyncResourcesResult& ListSyncResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("syncResources"))
  {
    Aws::Utils::Array<JsonView> syncResourcesJsonList = jsonValue.GetArray("syncResources");
    for(unsigned syncResourcesIndex = 0; syncResourcesIndex < syncResourcesJsonList.GetLength(); ++syncResourcesIndex)
    {
      m_syncResources.push_back(syncResourcesJsonList[syncResourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
