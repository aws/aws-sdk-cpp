/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/ListDecoderManifestNetworkInterfacesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDecoderManifestNetworkInterfacesResult::ListDecoderManifestNetworkInterfacesResult()
{
}

ListDecoderManifestNetworkInterfacesResult::ListDecoderManifestNetworkInterfacesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDecoderManifestNetworkInterfacesResult& ListDecoderManifestNetworkInterfacesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("networkInterfaces"))
  {
    Aws::Utils::Array<JsonView> networkInterfacesJsonList = jsonValue.GetArray("networkInterfaces");
    for(unsigned networkInterfacesIndex = 0; networkInterfacesIndex < networkInterfacesJsonList.GetLength(); ++networkInterfacesIndex)
    {
      m_networkInterfaces.push_back(networkInterfacesJsonList[networkInterfacesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
