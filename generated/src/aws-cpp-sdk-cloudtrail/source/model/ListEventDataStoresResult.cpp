/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/ListEventDataStoresResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEventDataStoresResult::ListEventDataStoresResult()
{
}

ListEventDataStoresResult::ListEventDataStoresResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEventDataStoresResult& ListEventDataStoresResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EventDataStores"))
  {
    Aws::Utils::Array<JsonView> eventDataStoresJsonList = jsonValue.GetArray("EventDataStores");
    for(unsigned eventDataStoresIndex = 0; eventDataStoresIndex < eventDataStoresJsonList.GetLength(); ++eventDataStoresIndex)
    {
      m_eventDataStores.push_back(eventDataStoresJsonList[eventDataStoresIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
