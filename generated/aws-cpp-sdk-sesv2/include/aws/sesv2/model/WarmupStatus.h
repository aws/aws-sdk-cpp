/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{
  enum class WarmupStatus
  {
    NOT_SET,
    IN_PROGRESS,
    DONE
  };

namespace WarmupStatusMapper
{
AWS_SESV2_API WarmupStatus GetWarmupStatusForName(const Aws::String& name);

AWS_SESV2_API Aws::String GetNameForWarmupStatus(WarmupStatus value);
} // namespace WarmupStatusMapper
} // namespace Model
} // namespace SESV2
} // namespace Aws
