/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/GetSubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCatalyst::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSubscriptionRequest::GetSubscriptionRequest() : 
    m_spaceNameHasBeenSet(false)
{
}

Aws::String GetSubscriptionRequest::SerializePayload() const
{
  return {};
}




