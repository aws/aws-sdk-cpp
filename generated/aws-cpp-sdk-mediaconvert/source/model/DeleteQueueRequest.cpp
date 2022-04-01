/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DeleteQueueRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaConvert::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteQueueRequest::DeleteQueueRequest() : 
    m_nameHasBeenSet(false)
{
}

Aws::String DeleteQueueRequest::SerializePayload() const
{
  return {};
}




