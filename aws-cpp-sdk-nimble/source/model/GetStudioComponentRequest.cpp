/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/nimble/model/GetStudioComponentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NimbleStudio::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetStudioComponentRequest::GetStudioComponentRequest() : 
    m_studioComponentIdHasBeenSet(false),
    m_studioIdHasBeenSet(false)
{
}

Aws::String GetStudioComponentRequest::SerializePayload() const
{
  return {};
}




