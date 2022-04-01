/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{
  enum class ScheduledActionTypeValues
  {
    NOT_SET,
    ResizeCluster,
    PauseCluster,
    ResumeCluster
  };

namespace ScheduledActionTypeValuesMapper
{
AWS_REDSHIFT_API ScheduledActionTypeValues GetScheduledActionTypeValuesForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForScheduledActionTypeValues(ScheduledActionTypeValues value);
} // namespace ScheduledActionTypeValuesMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
