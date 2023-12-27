/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/ListMediaPipelineKinesisVideoStreamPoolsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ChimeSDKMediaPipelines::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMediaPipelineKinesisVideoStreamPoolsResult::ListMediaPipelineKinesisVideoStreamPoolsResult()
{
}

ListMediaPipelineKinesisVideoStreamPoolsResult::ListMediaPipelineKinesisVideoStreamPoolsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMediaPipelineKinesisVideoStreamPoolsResult& ListMediaPipelineKinesisVideoStreamPoolsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("KinesisVideoStreamPools"))
  {
    Aws::Utils::Array<JsonView> kinesisVideoStreamPoolsJsonList = jsonValue.GetArray("KinesisVideoStreamPools");
    for(unsigned kinesisVideoStreamPoolsIndex = 0; kinesisVideoStreamPoolsIndex < kinesisVideoStreamPoolsJsonList.GetLength(); ++kinesisVideoStreamPoolsIndex)
    {
      m_kinesisVideoStreamPools.push_back(kinesisVideoStreamPoolsJsonList[kinesisVideoStreamPoolsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
