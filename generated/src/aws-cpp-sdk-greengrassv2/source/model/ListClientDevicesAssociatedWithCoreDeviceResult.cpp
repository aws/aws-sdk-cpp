/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/ListClientDevicesAssociatedWithCoreDeviceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListClientDevicesAssociatedWithCoreDeviceResult::ListClientDevicesAssociatedWithCoreDeviceResult()
{
}

ListClientDevicesAssociatedWithCoreDeviceResult::ListClientDevicesAssociatedWithCoreDeviceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListClientDevicesAssociatedWithCoreDeviceResult& ListClientDevicesAssociatedWithCoreDeviceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("associatedClientDevices"))
  {
    Aws::Utils::Array<JsonView> associatedClientDevicesJsonList = jsonValue.GetArray("associatedClientDevices");
    for(unsigned associatedClientDevicesIndex = 0; associatedClientDevicesIndex < associatedClientDevicesJsonList.GetLength(); ++associatedClientDevicesIndex)
    {
      m_associatedClientDevices.push_back(associatedClientDevicesJsonList[associatedClientDevicesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
