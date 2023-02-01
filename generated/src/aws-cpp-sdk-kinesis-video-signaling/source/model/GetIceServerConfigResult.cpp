/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis-video-signaling/model/GetIceServerConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KinesisVideoSignalingChannels::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetIceServerConfigResult::GetIceServerConfigResult()
{
}

GetIceServerConfigResult::GetIceServerConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetIceServerConfigResult& GetIceServerConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IceServerList"))
  {
    Aws::Utils::Array<JsonView> iceServerListJsonList = jsonValue.GetArray("IceServerList");
    for(unsigned iceServerListIndex = 0; iceServerListIndex < iceServerListJsonList.GetLength(); ++iceServerListIndex)
    {
      m_iceServerList.push_back(iceServerListJsonList[iceServerListIndex].AsObject());
    }
  }



  return *this;
}
