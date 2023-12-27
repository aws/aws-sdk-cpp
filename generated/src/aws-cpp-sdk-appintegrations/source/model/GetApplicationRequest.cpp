/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/GetApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppIntegrationsService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetApplicationRequest::GetApplicationRequest() : 
    m_arnHasBeenSet(false)
{
}

Aws::String GetApplicationRequest::SerializePayload() const
{
  return {};
}




