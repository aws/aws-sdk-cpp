/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Health
{
namespace Model
{
  enum class EventStatusCode
  {
    NOT_SET,
    open,
    closed,
    upcoming
  };

namespace EventStatusCodeMapper
{
AWS_HEALTH_API EventStatusCode GetEventStatusCodeForName(const Aws::String& name);

AWS_HEALTH_API Aws::String GetNameForEventStatusCode(EventStatusCode value);
} // namespace EventStatusCodeMapper
} // namespace Model
} // namespace Health
} // namespace Aws
