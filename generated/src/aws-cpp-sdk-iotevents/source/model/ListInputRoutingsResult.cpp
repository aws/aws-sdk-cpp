/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/ListInputRoutingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInputRoutingsResult::ListInputRoutingsResult()
{
}

ListInputRoutingsResult::ListInputRoutingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListInputRoutingsResult& ListInputRoutingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("routedResources"))
  {
    Aws::Utils::Array<JsonView> routedResourcesJsonList = jsonValue.GetArray("routedResources");
    for(unsigned routedResourcesIndex = 0; routedResourcesIndex < routedResourcesJsonList.GetLength(); ++routedResourcesIndex)
    {
      m_routedResources.push_back(routedResourcesJsonList[routedResourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
