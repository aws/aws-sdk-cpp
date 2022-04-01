/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr-public/model/GetAuthorizationTokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECRPublic::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAuthorizationTokenRequest::GetAuthorizationTokenRequest()
{
}

Aws::String GetAuthorizationTokenRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection GetAuthorizationTokenRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SpencerFrontendService.GetAuthorizationToken"));
  return headers;

}




