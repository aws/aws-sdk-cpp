/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/AddFlowMediaStreamsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AddFlowMediaStreamsResult::AddFlowMediaStreamsResult()
{
}

AddFlowMediaStreamsResult::AddFlowMediaStreamsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AddFlowMediaStreamsResult& AddFlowMediaStreamsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("flowArn"))
  {
    m_flowArn = jsonValue.GetString("flowArn");

  }

  if(jsonValue.ValueExists("mediaStreams"))
  {
    Aws::Utils::Array<JsonView> mediaStreamsJsonList = jsonValue.GetArray("mediaStreams");
    for(unsigned mediaStreamsIndex = 0; mediaStreamsIndex < mediaStreamsJsonList.GetLength(); ++mediaStreamsIndex)
    {
      m_mediaStreams.push_back(mediaStreamsJsonList[mediaStreamsIndex].AsObject());
    }
  }



  return *this;
}
