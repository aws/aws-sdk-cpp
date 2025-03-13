/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager-linux-subscriptions/model/GetRegisteredSubscriptionProviderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManagerLinuxSubscriptions::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetRegisteredSubscriptionProviderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_subscriptionProviderArnHasBeenSet)
  {
   payload.WithString("SubscriptionProviderArn", m_subscriptionProviderArn);

  }

  return payload.View().WriteReadable();
}




