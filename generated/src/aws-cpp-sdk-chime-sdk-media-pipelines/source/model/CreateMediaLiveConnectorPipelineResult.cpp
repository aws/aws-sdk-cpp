/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/CreateMediaLiveConnectorPipelineResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ChimeSDKMediaPipelines::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateMediaLiveConnectorPipelineResult::CreateMediaLiveConnectorPipelineResult()
{
}

CreateMediaLiveConnectorPipelineResult::CreateMediaLiveConnectorPipelineResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateMediaLiveConnectorPipelineResult& CreateMediaLiveConnectorPipelineResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MediaLiveConnectorPipeline"))
  {
    m_mediaLiveConnectorPipeline = jsonValue.GetObject("MediaLiveConnectorPipeline");

  }



  return *this;
}
