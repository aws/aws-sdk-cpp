/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/GetMediaPipelineKinesisVideoStreamPoolResult.h>
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

GetMediaPipelineKinesisVideoStreamPoolResult::GetMediaPipelineKinesisVideoStreamPoolResult()
{
}

GetMediaPipelineKinesisVideoStreamPoolResult::GetMediaPipelineKinesisVideoStreamPoolResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMediaPipelineKinesisVideoStreamPoolResult& GetMediaPipelineKinesisVideoStreamPoolResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("KinesisVideoStreamPoolConfiguration"))
  {
    m_kinesisVideoStreamPoolConfiguration = jsonValue.GetObject("KinesisVideoStreamPoolConfiguration");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
