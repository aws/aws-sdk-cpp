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
  enum class ServiceEndpointType
  {
    NOT_SET,
    LAMBDA,
    URL
  };

namespace ServiceEndpointTypeMapper
{
AWS_MIGRATIONHUBREFACTORSPACES_API ServiceEndpointType GetServiceEndpointTypeForName(const Aws::String& name);

AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String GetNameForServiceEndpointType(ServiceEndpointType value);
} // namespace ServiceEndpointTypeMapper
} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
