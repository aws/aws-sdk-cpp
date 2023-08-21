/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace finspace
{
namespace Model
{
  enum class KxDeploymentStrategy
  {
    NOT_SET,
    NO_RESTART,
    ROLLING
  };

namespace KxDeploymentStrategyMapper
{
AWS_FINSPACE_API KxDeploymentStrategy GetKxDeploymentStrategyForName(const Aws::String& name);

AWS_FINSPACE_API Aws::String GetNameForKxDeploymentStrategy(KxDeploymentStrategy value);
} // namespace KxDeploymentStrategyMapper
} // namespace Model
} // namespace finspace
} // namespace Aws
