/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeVTLDevicesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeVTLDevicesResult::DescribeVTLDevicesResult()
{
}

DescribeVTLDevicesResult::DescribeVTLDevicesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeVTLDevicesResult& DescribeVTLDevicesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

  }

  if(jsonValue.ValueExists("VTLDevices"))
  {
    Aws::Utils::Array<JsonView> vTLDevicesJsonList = jsonValue.GetArray("VTLDevices");
    for(unsigned vTLDevicesIndex = 0; vTLDevicesIndex < vTLDevicesJsonList.GetLength(); ++vTLDevicesIndex)
    {
      m_vTLDevices.push_back(vTLDevicesJsonList[vTLDevicesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }



  return *this;
}
