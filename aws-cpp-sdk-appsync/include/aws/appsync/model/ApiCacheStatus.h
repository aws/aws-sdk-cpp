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
  enum class ApiCacheStatus
  {
    NOT_SET,
    AVAILABLE,
    CREATING,
    DELETING,
    MODIFYING,
    FAILED
  };

namespace ApiCacheStatusMapper
{
AWS_APPSYNC_API ApiCacheStatus GetApiCacheStatusForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForApiCacheStatus(ApiCacheStatus value);
} // namespace ApiCacheStatusMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
