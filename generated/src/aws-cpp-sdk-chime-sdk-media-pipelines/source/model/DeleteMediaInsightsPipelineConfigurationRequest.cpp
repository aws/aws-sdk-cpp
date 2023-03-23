/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/DeleteMediaInsightsPipelineConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ChimeSDKMediaPipelines::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteMediaInsightsPipelineConfigurationRequest::DeleteMediaInsightsPipelineConfigurationRequest() : 
    m_identifierHasBeenSet(false)
{
}

Aws::String DeleteMediaInsightsPipelineConfigurationRequest::SerializePayload() const
{
  return {};
}




