/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/ListMediaPipelinesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ChimeSDKMediaPipelines::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMediaPipelinesResult::ListMediaPipelinesResult()
{
}

ListMediaPipelinesResult::ListMediaPipelinesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMediaPipelinesResult& ListMediaPipelinesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MediaPipelines"))
  {
    Aws::Utils::Array<JsonView> mediaPipelinesJsonList = jsonValue.GetArray("MediaPipelines");
    for(unsigned mediaPipelinesIndex = 0; mediaPipelinesIndex < mediaPipelinesJsonList.GetLength(); ++mediaPipelinesIndex)
    {
      m_mediaPipelines.push_back(mediaPipelinesJsonList[mediaPipelinesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
