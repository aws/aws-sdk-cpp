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
  enum class ThreatIntelSetStatus
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

namespace ThreatIntelSetStatusMapper
{
AWS_GUARDDUTY_API ThreatIntelSetStatus GetThreatIntelSetStatusForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForThreatIntelSetStatus(ThreatIntelSetStatus value);
} // namespace ThreatIntelSetStatusMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
