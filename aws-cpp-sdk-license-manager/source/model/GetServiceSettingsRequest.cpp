﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/GetServiceSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetServiceSettingsRequest::GetServiceSettingsRequest()
{
}

Aws::String GetServiceSettingsRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection GetServiceSettingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.GetServiceSettings"));
  return headers;

}




