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
  enum class ErrorResourceType
  {
    NOT_SET,
    ENVIRONMENT,
    APPLICATION,
    ROUTE,
    SERVICE,
    TRANSIT_GATEWAY,
    TRANSIT_GATEWAY_ATTACHMENT,
    API_GATEWAY,
    NLB,
    TARGET_GROUP,
    LOAD_BALANCER_LISTENER,
    VPC_LINK,
    LAMBDA,
    VPC,
    SUBNET,
    ROUTE_TABLE,
    SECURITY_GROUP,
    VPC_ENDPOINT_SERVICE_CONFIGURATION,
    RESOURCE_SHARE,
    IAM_ROLE
  };

namespace ErrorResourceTypeMapper
{
AWS_MIGRATIONHUBREFACTORSPACES_API ErrorResourceType GetErrorResourceTypeForName(const Aws::String& name);

AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String GetNameForErrorResourceType(ErrorResourceType value);
} // namespace ErrorResourceTypeMapper
} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
