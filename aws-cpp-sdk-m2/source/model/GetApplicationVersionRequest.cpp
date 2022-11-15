/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/GetApplicationVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetApplicationVersionRequest::GetApplicationVersionRequest() : 
    m_applicationIdHasBeenSet(false),
    m_applicationVersion(0),
    m_applicationVersionHasBeenSet(false)
{
}

Aws::String GetApplicationVersionRequest::SerializePayload() const
{
  return {};
}




