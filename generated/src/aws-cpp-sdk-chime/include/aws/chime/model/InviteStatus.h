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
  enum class InviteStatus
  {
    NOT_SET,
    Pending,
    Accepted,
    Failed
  };

namespace InviteStatusMapper
{
AWS_CHIME_API InviteStatus GetInviteStatusForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForInviteStatus(InviteStatus value);
} // namespace InviteStatusMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
