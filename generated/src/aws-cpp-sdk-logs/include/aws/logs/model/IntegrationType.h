/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{
  enum class IntegrationType
  {
    NOT_SET,
    OPENSEARCH
  };

namespace IntegrationTypeMapper
{
AWS_CLOUDWATCHLOGS_API IntegrationType GetIntegrationTypeForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForIntegrationType(IntegrationType value);
} // namespace IntegrationTypeMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
