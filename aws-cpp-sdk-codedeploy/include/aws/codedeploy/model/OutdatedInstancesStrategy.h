/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
  enum class OutdatedInstancesStrategy
  {
    NOT_SET,
    UPDATE,
    IGNORE
  };

namespace OutdatedInstancesStrategyMapper
{
AWS_CODEDEPLOY_API OutdatedInstancesStrategy GetOutdatedInstancesStrategyForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForOutdatedInstancesStrategy(OutdatedInstancesStrategy value);
} // namespace OutdatedInstancesStrategyMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
