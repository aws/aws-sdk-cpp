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
  enum class MfaStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace MfaStatusMapper
{
AWS_GUARDDUTY_API MfaStatus GetMfaStatusForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForMfaStatus(MfaStatus value);
} // namespace MfaStatusMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
