/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LaunchWizard
{
namespace Model
{
  enum class EventStatus
  {
    NOT_SET,
    CANCELED,
    CANCELING,
    COMPLETED,
    CREATED,
    FAILED,
    IN_PROGRESS,
    PENDING,
    TIMED_OUT
  };

namespace EventStatusMapper
{
AWS_LAUNCHWIZARD_API EventStatus GetEventStatusForName(const Aws::String& name);

AWS_LAUNCHWIZARD_API Aws::String GetNameForEventStatus(EventStatus value);
} // namespace EventStatusMapper
} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
