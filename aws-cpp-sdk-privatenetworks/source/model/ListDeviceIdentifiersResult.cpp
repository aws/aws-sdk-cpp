/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/privatenetworks/model/ListDeviceIdentifiersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::PrivateNetworks::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDeviceIdentifiersResult::ListDeviceIdentifiersResult()
{
}

ListDeviceIdentifiersResult::ListDeviceIdentifiersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDeviceIdentifiersResult& ListDeviceIdentifiersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("deviceIdentifiers"))
  {
    Aws::Utils::Array<JsonView> deviceIdentifiersJsonList = jsonValue.GetArray("deviceIdentifiers");
    for(unsigned deviceIdentifiersIndex = 0; deviceIdentifiersIndex < deviceIdentifiersJsonList.GetLength(); ++deviceIdentifiersIndex)
    {
      m_deviceIdentifiers.push_back(deviceIdentifiersJsonList[deviceIdentifiersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
