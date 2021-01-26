/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{
  enum class QueryErrorCode
  {
    NOT_SET,
    CLOUDFORMATION_STACK_INACTIVE,
    CLOUDFORMATION_STACK_NOT_EXISTING
  };

namespace QueryErrorCodeMapper
{
AWS_RESOURCEGROUPS_API QueryErrorCode GetQueryErrorCodeForName(const Aws::String& name);

AWS_RESOURCEGROUPS_API Aws::String GetNameForQueryErrorCode(QueryErrorCode value);
} // namespace QueryErrorCodeMapper
} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
