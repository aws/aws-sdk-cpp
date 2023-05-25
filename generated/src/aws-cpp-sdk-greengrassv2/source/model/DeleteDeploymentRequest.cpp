/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/DeleteDeploymentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteDeploymentRequest::DeleteDeploymentRequest() : 
    m_deploymentIdHasBeenSet(false)
{
}

Aws::String DeleteDeploymentRequest::SerializePayload() const
{
  return {};
}




