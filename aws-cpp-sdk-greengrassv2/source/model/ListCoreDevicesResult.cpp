/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/ListCoreDevicesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCoreDevicesResult::ListCoreDevicesResult()
{
}

ListCoreDevicesResult::ListCoreDevicesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCoreDevicesResult& ListCoreDevicesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("coreDevices"))
  {
    Aws::Utils::Array<JsonView> coreDevicesJsonList = jsonValue.GetArray("coreDevices");
    for(unsigned coreDevicesIndex = 0; coreDevicesIndex < coreDevicesJsonList.GetLength(); ++coreDevicesIndex)
    {
      m_coreDevices.push_back(coreDevicesJsonList[coreDevicesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
