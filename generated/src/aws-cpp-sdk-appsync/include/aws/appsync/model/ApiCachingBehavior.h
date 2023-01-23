/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppSync
{
namespace Model
{
  enum class ApiCachingBehavior
  {
    NOT_SET,
    FULL_REQUEST_CACHING,
    PER_RESOLVER_CACHING
  };

namespace ApiCachingBehaviorMapper
{
AWS_APPSYNC_API ApiCachingBehavior GetApiCachingBehaviorForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForApiCachingBehavior(ApiCachingBehavior value);
} // namespace ApiCachingBehaviorMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
