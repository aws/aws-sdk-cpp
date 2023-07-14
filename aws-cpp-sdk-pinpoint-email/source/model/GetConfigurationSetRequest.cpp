/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-email/model/GetConfigurationSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::PinpointEmail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetConfigurationSetRequest::GetConfigurationSetRequest() : 
    m_configurationSetNameHasBeenSet(false)
{
}

Aws::String GetConfigurationSetRequest::SerializePayload() const
{
  return {};
}




