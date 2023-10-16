/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/GetProviderServiceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EntityResolution::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetProviderServiceRequest::GetProviderServiceRequest() : 
    m_providerNameHasBeenSet(false),
    m_providerServiceNameHasBeenSet(false)
{
}

Aws::String GetProviderServiceRequest::SerializePayload() const
{
  return {};
}




