/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{
  enum class DeploymentStatus
  {
    NOT_SET,
    PENDING,
    FAILED,
    DEPLOYED
  };

namespace DeploymentStatusMapper
{
AWS_APIGATEWAYV2_API DeploymentStatus GetDeploymentStatusForName(const Aws::String& name);

AWS_APIGATEWAYV2_API Aws::String GetNameForDeploymentStatus(DeploymentStatus value);
} // namespace DeploymentStatusMapper
} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
