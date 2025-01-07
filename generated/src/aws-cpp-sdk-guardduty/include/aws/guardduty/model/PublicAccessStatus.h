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
  enum class PublicAccessStatus
  {
    NOT_SET,
    BLOCKED,
    ALLOWED
  };

namespace PublicAccessStatusMapper
{
AWS_GUARDDUTY_API PublicAccessStatus GetPublicAccessStatusForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForPublicAccessStatus(PublicAccessStatus value);
} // namespace PublicAccessStatusMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
