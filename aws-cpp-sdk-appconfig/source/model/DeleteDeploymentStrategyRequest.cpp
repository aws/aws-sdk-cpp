/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/DeleteDeploymentStrategyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteDeploymentStrategyRequest::DeleteDeploymentStrategyRequest() : 
    m_deploymentStrategyIdHasBeenSet(false)
{
}

Aws::String DeleteDeploymentStrategyRequest::SerializePayload() const
{
  return {};
}




