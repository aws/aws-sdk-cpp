/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DeleteViewRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteViewRequest::DeleteViewRequest() : 
    m_instanceIdHasBeenSet(false),
    m_viewIdHasBeenSet(false)
{
}

Aws::String DeleteViewRequest::SerializePayload() const
{
  return {};
}




