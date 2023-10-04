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
  enum class SubscriptionGrantStatus
  {
    NOT_SET,
    GRANT_PENDING,
    REVOKE_PENDING,
    GRANT_IN_PROGRESS,
    REVOKE_IN_PROGRESS,
    GRANTED,
    REVOKED,
    GRANT_FAILED,
    REVOKE_FAILED
  };

namespace SubscriptionGrantStatusMapper
{
AWS_DATAZONE_API SubscriptionGrantStatus GetSubscriptionGrantStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForSubscriptionGrantStatus(SubscriptionGrantStatus value);
} // namespace SubscriptionGrantStatusMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
