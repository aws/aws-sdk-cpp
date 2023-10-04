/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class SubscriptionGrantOverallStatus
  {
    NOT_SET,
    PENDING,
    IN_PROGRESS,
    GRANT_FAILED,
    REVOKE_FAILED,
    GRANT_AND_REVOKE_FAILED,
    COMPLETED,
    INACCESSIBLE
  };

namespace SubscriptionGrantOverallStatusMapper
{
AWS_DATAZONE_API SubscriptionGrantOverallStatus GetSubscriptionGrantOverallStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForSubscriptionGrantOverallStatus(SubscriptionGrantOverallStatus value);
} // namespace SubscriptionGrantOverallStatusMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
