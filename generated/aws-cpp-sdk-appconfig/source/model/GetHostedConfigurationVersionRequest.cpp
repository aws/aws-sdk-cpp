/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/GetHostedConfigurationVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetHostedConfigurationVersionRequest::GetHostedConfigurationVersionRequest() : 
    m_applicationIdHasBeenSet(false),
    m_configurationProfileIdHasBeenSet(false),
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false)
{
}

Aws::String GetHostedConfigurationVersionRequest::SerializePayload() const
{
  return {};
}




