/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DeleteViewVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteViewVersionRequest::DeleteViewVersionRequest() : 
    m_instanceIdHasBeenSet(false),
    m_viewIdHasBeenSet(false),
    m_viewVersion(0),
    m_viewVersionHasBeenSet(false)
{
}

Aws::String DeleteViewVersionRequest::SerializePayload() const
{
  return {};
}




