/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/DeleteWebhookRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Amplify::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteWebhookRequest::DeleteWebhookRequest() : 
    m_webhookIdHasBeenSet(false)
{
}

Aws::String DeleteWebhookRequest::SerializePayload() const
{
  return {};
}




