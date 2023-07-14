﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr-public/model/GetRegistryCatalogDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECRPublic::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRegistryCatalogDataRequest::GetRegistryCatalogDataRequest()
{
}

Aws::String GetRegistryCatalogDataRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection GetRegistryCatalogDataRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SpencerFrontendService.GetRegistryCatalogData"));
  return headers;

}




