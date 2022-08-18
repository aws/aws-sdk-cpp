/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/GetMediaPipelineResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ChimeSDKMediaPipelines::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMediaPipelineResult::GetMediaPipelineResult()
{
}

GetMediaPipelineResult::GetMediaPipelineResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMediaPipelineResult& GetMediaPipelineResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MediaPipeline"))
  {
    m_mediaPipeline = jsonValue.GetObject("MediaPipeline");

  }



  return *this;
}
