/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FreeTier
{
namespace Model
{
  enum class ActivityStatus
  {
    NOT_SET,
    NOT_STARTED,
    IN_PROGRESS,
    COMPLETED,
    EXPIRING
  };

namespace ActivityStatusMapper
{
AWS_FREETIER_API ActivityStatus GetActivityStatusForName(const Aws::String& name);

AWS_FREETIER_API Aws::String GetNameForActivityStatus(ActivityStatus value);
} // namespace ActivityStatusMapper
} // namespace Model
} // namespace FreeTier
} // namespace Aws
