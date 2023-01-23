/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/GetConferencePreferenceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetConferencePreferenceRequest::GetConferencePreferenceRequest()
{
}

Aws::String GetConferencePreferenceRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection GetConferencePreferenceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AlexaForBusiness.GetConferencePreference"));
  return headers;

}




