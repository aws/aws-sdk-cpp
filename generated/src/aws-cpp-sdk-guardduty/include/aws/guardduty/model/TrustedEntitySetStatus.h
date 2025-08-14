/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GuardDuty
{
namespace Model
{
  enum class TrustedEntitySetStatus
  {
    NOT_SET,
    INACTIVE,
    ACTIVATING,
    ACTIVE,
    DEACTIVATING,
    ERROR_,
    DELETE_PENDING,
    DELETED
  };

namespace TrustedEntitySetStatusMapper
{
AWS_GUARDDUTY_API TrustedEntitySetStatus GetTrustedEntitySetStatusForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForTrustedEntitySetStatus(TrustedEntitySetStatus value);
} // namespace TrustedEntitySetStatusMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
