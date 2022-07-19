/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SagemakerEdgeManager
{
namespace Model
{
  enum class DeploymentType
  {
    NOT_SET,
    Model
  };

namespace DeploymentTypeMapper
{
AWS_SAGEMAKEREDGEMANAGER_API DeploymentType GetDeploymentTypeForName(const Aws::String& name);

AWS_SAGEMAKEREDGEMANAGER_API Aws::String GetNameForDeploymentType(DeploymentType value);
} // namespace DeploymentTypeMapper
} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
