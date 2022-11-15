/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/ListVolumesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVolumesResult::ListVolumesResult()
{
}

ListVolumesResult::ListVolumesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVolumesResult& ListVolumesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

  }

  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }

  if(jsonValue.ValueExists("VolumeInfos"))
  {
    Aws::Utils::Array<JsonView> volumeInfosJsonList = jsonValue.GetArray("VolumeInfos");
    for(unsigned volumeInfosIndex = 0; volumeInfosIndex < volumeInfosJsonList.GetLength(); ++volumeInfosIndex)
    {
      m_volumeInfos.push_back(volumeInfosJsonList[volumeInfosIndex].AsObject());
    }
  }



  return *this;
}
