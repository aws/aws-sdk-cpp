/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{
  enum class ConfigChangeStatus
  {
    NOT_SET,
    Pending,
    Initializing,
    Validating,
    ValidationFailed,
    ApplyingChanges,
    Completed,
    PendingUserInput,
    Cancelled
  };

namespace ConfigChangeStatusMapper
{
AWS_ELASTICSEARCHSERVICE_API ConfigChangeStatus GetConfigChangeStatusForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForConfigChangeStatus(ConfigChangeStatus value);
} // namespace ConfigChangeStatusMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
