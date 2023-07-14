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
  enum class CallingNameStatus
  {
    NOT_SET,
    Unassigned,
    UpdateInProgress,
    UpdateSucceeded,
    UpdateFailed
  };

namespace CallingNameStatusMapper
{
AWS_CHIME_API CallingNameStatus GetCallingNameStatusForName(const Aws::String& name);

AWS_CHIME_API Aws::String GetNameForCallingNameStatus(CallingNameStatus value);
} // namespace CallingNameStatusMapper
} // namespace Model
} // namespace Chime
} // namespace Aws
