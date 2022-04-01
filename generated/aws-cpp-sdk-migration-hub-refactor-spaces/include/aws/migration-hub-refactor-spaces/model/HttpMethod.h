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
  enum class HttpMethod
  {
    NOT_SET,
    DELETE_,
    GET_,
    HEAD,
    OPTIONS,
    PATCH,
    POST,
    PUT
  };

namespace HttpMethodMapper
{
AWS_MIGRATIONHUBREFACTORSPACES_API HttpMethod GetHttpMethodForName(const Aws::String& name);

AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String GetNameForHttpMethod(HttpMethod value);
} // namespace HttpMethodMapper
} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
