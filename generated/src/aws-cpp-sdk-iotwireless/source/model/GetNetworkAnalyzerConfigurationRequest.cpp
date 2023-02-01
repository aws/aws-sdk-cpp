/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetNetworkAnalyzerConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetNetworkAnalyzerConfigurationRequest::GetNetworkAnalyzerConfigurationRequest() : 
    m_configurationNameHasBeenSet(false)
{
}

Aws::String GetNetworkAnalyzerConfigurationRequest::SerializePayload() const
{
  return {};
}




