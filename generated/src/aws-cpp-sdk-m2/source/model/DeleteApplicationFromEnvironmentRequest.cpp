/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/DeleteApplicationFromEnvironmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteApplicationFromEnvironmentRequest::DeleteApplicationFromEnvironmentRequest() : 
    m_applicationIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false)
{
}

Aws::String DeleteApplicationFromEnvironmentRequest::SerializePayload() const
{
  return {};
}




