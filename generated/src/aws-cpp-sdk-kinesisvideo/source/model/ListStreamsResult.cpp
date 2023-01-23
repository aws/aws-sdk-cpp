/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/ListStreamsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListStreamsResult::ListStreamsResult()
{
}

ListStreamsResult::ListStreamsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListStreamsResult& ListStreamsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StreamInfoList"))
  {
    Aws::Utils::Array<JsonView> streamInfoListJsonList = jsonValue.GetArray("StreamInfoList");
    for(unsigned streamInfoListIndex = 0; streamInfoListIndex < streamInfoListJsonList.GetLength(); ++streamInfoListIndex)
    {
      m_streamInfoList.push_back(streamInfoListJsonList[streamInfoListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
