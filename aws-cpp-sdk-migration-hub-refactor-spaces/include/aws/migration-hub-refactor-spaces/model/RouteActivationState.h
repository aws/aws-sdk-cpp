/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MigrationHubRefactorSpaces
{
namespace Model
{
  enum class RouteActivationState
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace RouteActivationStateMapper
{
AWS_MIGRATIONHUBREFACTORSPACES_API RouteActivationState GetRouteActivationStateForName(const Aws::String& name);

AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String GetNameForRouteActivationState(RouteActivationState value);
} // namespace RouteActivationStateMapper
} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
