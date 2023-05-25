/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/DeleteConfigurationProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteConfigurationProfileRequest::DeleteConfigurationProfileRequest() : 
    m_applicationIdHasBeenSet(false),
    m_configurationProfileIdHasBeenSet(false)
{
}

Aws::String DeleteConfigurationProfileRequest::SerializePayload() const
{
  return {};
}




