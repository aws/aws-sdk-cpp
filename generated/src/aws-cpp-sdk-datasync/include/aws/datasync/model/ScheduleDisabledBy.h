/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataSync
{
namespace Model
{
  enum class ScheduleDisabledBy
  {
    NOT_SET,
    USER,
    SERVICE
  };

namespace ScheduleDisabledByMapper
{
AWS_DATASYNC_API ScheduleDisabledBy GetScheduleDisabledByForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForScheduleDisabledBy(ScheduleDisabledBy value);
} // namespace ScheduleDisabledByMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
