/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpenSearchService
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
AWS_OPENSEARCHSERVICE_API ScheduledAutoTuneSeverityType GetScheduledAutoTuneSeverityTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForScheduledAutoTuneSeverityType(ScheduledAutoTuneSeverityType value);
} // namespace ScheduledAutoTuneSeverityTypeMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
