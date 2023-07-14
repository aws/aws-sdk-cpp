/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameSparks
{
namespace Model
{
  enum class DeploymentAction
  {
    NOT_SET,
    DEPLOY,
    UNDEPLOY
  };

namespace DeploymentActionMapper
{
AWS_GAMESPARKS_API DeploymentAction GetDeploymentActionForName(const Aws::String& name);

AWS_GAMESPARKS_API Aws::String GetNameForDeploymentAction(DeploymentAction value);
} // namespace DeploymentActionMapper
} // namespace Model
} // namespace GameSparks
} // namespace Aws
