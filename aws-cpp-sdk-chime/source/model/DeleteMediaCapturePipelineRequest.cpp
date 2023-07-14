﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/DeleteMediaCapturePipelineRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteMediaCapturePipelineRequest::DeleteMediaCapturePipelineRequest() : 
    m_mediaPipelineIdHasBeenSet(false)
{
}

Aws::String DeleteMediaCapturePipelineRequest::SerializePayload() const
{
  return {};
}




