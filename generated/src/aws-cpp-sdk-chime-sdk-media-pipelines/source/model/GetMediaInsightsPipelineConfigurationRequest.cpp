/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/GetMediaInsightsPipelineConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKMediaPipelines::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetMediaInsightsPipelineConfigurationRequest::GetMediaInsightsPipelineConfigurationRequest() : 
    m_identifierHasBeenSet(false)
{
}

Aws::String GetMediaInsightsPipelineConfigurationRequest::SerializePayload() const
{
  return {};
}




