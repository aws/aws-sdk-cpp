/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/StartApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMRServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartApplicationRequest::StartApplicationRequest() : 
    m_applicationIdHasBeenSet(false)
{
}

Aws::String StartApplicationRequest::SerializePayload() const
{
  return {};
}




