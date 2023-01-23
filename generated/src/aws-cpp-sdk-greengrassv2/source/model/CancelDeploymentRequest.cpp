/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/CancelDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelDeploymentRequest::CancelDeploymentRequest() : 
    m_deploymentIdHasBeenSet(false)
{
}

Aws::String CancelDeploymentRequest::SerializePayload() const
{
  return {};
}




