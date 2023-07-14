/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/GetDeploymentStrategyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDeploymentStrategyRequest::GetDeploymentStrategyRequest() : 
    m_deploymentStrategyIdHasBeenSet(false)
{
}

Aws::String GetDeploymentStrategyRequest::SerializePayload() const
{
  return {};
}




