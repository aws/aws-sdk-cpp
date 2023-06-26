/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Chime
{
namespace Model
{
  enum class PhoneNumberStatus
  {
    NOT_SET,
    AcquireInProgress,
    AcquireFailed,
    Unassigned,
    Assigned,
    ReleaseInProgress,
    DeleteInProgress,
    ReleaseFailed,
    DeleteFailed
  };

namespace PhoneNumberStatusMapper
{
AWS_CHIME_API PhoneNumberStatus GetPhoneNumberStatusForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForPhoneNumberStatus(PhoneNumberStatus value);
} // namespace PhoneNumberStatusMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
