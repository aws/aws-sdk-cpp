/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/StopApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMRServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopApplicationRequest::StopApplicationRequest() : 
    m_applicationIdHasBeenSet(false)
{
}

Aws::String StopApplicationRequest::SerializePayload() const
{
  return {};
}




