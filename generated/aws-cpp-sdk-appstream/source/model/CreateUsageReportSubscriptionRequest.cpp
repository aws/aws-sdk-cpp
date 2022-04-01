/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CreateUsageReportSubscriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateUsageReportSubscriptionRequest::CreateUsageReportSubscriptionRequest()
{
}

Aws::String CreateUsageReportSubscriptionRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection CreateUsageReportSubscriptionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.CreateUsageReportSubscription"));
  return headers;

}




