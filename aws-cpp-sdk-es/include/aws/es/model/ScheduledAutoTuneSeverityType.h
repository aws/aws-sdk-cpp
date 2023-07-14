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
  enum class ScheduledAutoTuneSeverityType
  {
    NOT_SET,
    LOW,
    MEDIUM,
    HIGH
  };

namespace ScheduledAutoTuneSeverityTypeMapper
{
AWS_ELASTICSEARCHSERVICE_API ScheduledAutoTuneSeverityType GetScheduledAutoTuneSeverityTypeForName(const Aws::String& name);

AWS_ELASTICSEARCHSERVICE_API Aws::String GetNameForScheduledAutoTuneSeverityType(ScheduledAutoTuneSeverityType value);
} // namespace ScheduledAutoTuneSeverityTypeMapper
} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
