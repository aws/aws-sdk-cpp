/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/BatchGetChannelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchGetChannelResult::BatchGetChannelResult()
{
}

BatchGetChannelResult::BatchGetChannelResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchGetChannelResult& BatchGetChannelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("channels"))
  {
    Aws::Utils::Array<JsonView> channelsJsonList = jsonValue.GetArray("channels");
    for(unsigned channelsIndex = 0; channelsIndex < channelsJsonList.GetLength(); ++channelsIndex)
    {
      m_channels.push_back(channelsJsonList[channelsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }



  return *this;
}
