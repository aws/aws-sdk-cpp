/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/GetDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDeploymentRequest::GetDeploymentRequest() : 
    m_apiIdHasBeenSet(false),
    m_deploymentIdHasBeenSet(false)
{
}

Aws::String GetDeploymentRequest::SerializePayload() const
{
  return {};
}




