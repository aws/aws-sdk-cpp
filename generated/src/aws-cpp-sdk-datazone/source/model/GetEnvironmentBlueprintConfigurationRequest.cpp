/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GetEnvironmentBlueprintConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetEnvironmentBlueprintConfigurationRequest::GetEnvironmentBlueprintConfigurationRequest() : 
    m_domainIdentifierHasBeenSet(false),
    m_environmentBlueprintIdentifierHasBeenSet(false)
{
}

Aws::String GetEnvironmentBlueprintConfigurationRequest::SerializePayload() const
{
  return {};
}




