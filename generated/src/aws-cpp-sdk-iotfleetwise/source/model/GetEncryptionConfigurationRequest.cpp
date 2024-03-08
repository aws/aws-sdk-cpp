/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/GetEncryptionConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetEncryptionConfigurationRequest::GetEncryptionConfigurationRequest()
{
}

Aws::String GetEncryptionConfigurationRequest::SerializePayload() const
{
  return "{}";
}

Aws::Http::HeaderValueCollection GetEncryptionConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "IoTAutobahnControlPlane.GetEncryptionConfiguration"));
  return headers;

}




