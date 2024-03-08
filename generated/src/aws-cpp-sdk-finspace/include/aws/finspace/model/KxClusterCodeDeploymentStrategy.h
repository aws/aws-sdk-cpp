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
  enum class KxClusterCodeDeploymentStrategy
  {
    NOT_SET,
    NO_RESTART,
    ROLLING,
    FORCE
  };

namespace KxClusterCodeDeploymentStrategyMapper
{
AWS_FINSPACE_API KxClusterCodeDeploymentStrategy GetKxClusterCodeDeploymentStrategyForName(const Aws::String& name);

AWS_FINSPACE_API Aws::String GetNameForKxClusterCodeDeploymentStrategy(KxClusterCodeDeploymentStrategy value);
} // namespace KxClusterCodeDeploymentStrategyMapper
} // namespace Model
} // namespace finspace
} // namespace Aws
