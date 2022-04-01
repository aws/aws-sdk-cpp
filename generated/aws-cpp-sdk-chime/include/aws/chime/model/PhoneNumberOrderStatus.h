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
  enum class PhoneNumberOrderStatus
  {
    NOT_SET,
    Processing,
    Successful,
    Failed,
    Partial
  };

namespace PhoneNumberOrderStatusMapper
{
AWS_CHIME_API PhoneNumberOrderStatus GetPhoneNumberOrderStatusForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForPhoneNumberOrderStatus(PhoneNumberOrderStatus value);
} // namespace PhoneNumberOrderStatusMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
