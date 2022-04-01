/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/CancelOrderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelOrderRequest::CancelOrderRequest() : 
    m_orderIdHasBeenSet(false)
{
}

Aws::String CancelOrderRequest::SerializePayload() const
{
  return {};
}




