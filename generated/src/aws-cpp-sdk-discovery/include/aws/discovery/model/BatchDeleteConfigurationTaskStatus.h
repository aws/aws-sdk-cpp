/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{
  enum class BatchDeleteConfigurationTaskStatus
  {
    NOT_SET,
    INITIALIZING,
    VALIDATING,
    DELETING,
    COMPLETED,
    FAILED
  };

namespace BatchDeleteConfigurationTaskStatusMapper
{
AWS_APPLICATIONDISCOVERYSERVICE_API BatchDeleteConfigurationTaskStatus GetBatchDeleteConfigurationTaskStatusForName(const Aws::String& name);

AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String GetNameForBatchDeleteConfigurationTaskStatus(BatchDeleteConfigurationTaskStatus value);
} // namespace BatchDeleteConfigurationTaskStatusMapper
} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
