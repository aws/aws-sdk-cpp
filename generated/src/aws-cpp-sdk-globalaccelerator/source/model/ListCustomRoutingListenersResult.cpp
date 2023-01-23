/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/ListCustomRoutingListenersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCustomRoutingListenersResult::ListCustomRoutingListenersResult()
{
}

ListCustomRoutingListenersResult::ListCustomRoutingListenersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCustomRoutingListenersResult& ListCustomRoutingListenersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Listeners"))
  {
    Aws::Utils::Array<JsonView> listenersJsonList = jsonValue.GetArray("Listeners");
    for(unsigned listenersIndex = 0; listenersIndex < listenersJsonList.GetLength(); ++listenersIndex)
    {
      m_listeners.push_back(listenersJsonList[listenersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
