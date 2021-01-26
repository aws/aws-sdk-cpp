/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elastictranscoder/model/ReadPipelineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ElasticTranscoder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ReadPipelineRequest::ReadPipelineRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String ReadPipelineRequest::SerializePayload() const
{
  return {};
}




