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
  enum class ThreatEntitySetStatus
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

namespace ThreatEntitySetStatusMapper
{
AWS_GUARDDUTY_API ThreatEntitySetStatus GetThreatEntitySetStatusForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForThreatEntitySetStatus(ThreatEntitySetStatus value);
} // namespace ThreatEntitySetStatusMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
