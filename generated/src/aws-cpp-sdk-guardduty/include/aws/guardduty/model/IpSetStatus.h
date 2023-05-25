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
  enum class IpSetStatus
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

namespace IpSetStatusMapper
{
AWS_GUARDDUTY_API IpSetStatus GetIpSetStatusForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForIpSetStatus(IpSetStatus value);
} // namespace IpSetStatusMapper
} // namespace Model
} // namespace GuardDuty
} // namespace Aws
