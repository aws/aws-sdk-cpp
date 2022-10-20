/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/ListDeviceEventsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDeviceEventsResult::ListDeviceEventsResult()
{
}

ListDeviceEventsResult::ListDeviceEventsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDeviceEventsResult& ListDeviceEventsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DeviceEvents"))
  {
    Aws::Utils::Array<JsonView> deviceEventsJsonList = jsonValue.GetArray("DeviceEvents");
    for(unsigned deviceEventsIndex = 0; deviceEventsIndex < deviceEventsJsonList.GetLength(); ++deviceEventsIndex)
    {
      m_deviceEvents.push_back(deviceEventsJsonList[deviceEventsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
