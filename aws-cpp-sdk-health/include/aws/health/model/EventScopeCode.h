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
  enum class EventScopeCode
  {
    NOT_SET,
    PUBLIC_,
    ACCOUNT_SPECIFIC,
    NONE
  };

namespace EventScopeCodeMapper
{
AWS_HEALTH_API EventScopeCode GetEventScopeCodeForName(const Aws::String& name);

AWS_HEALTH_API Aws::String GetNameForEventScopeCode(EventScopeCode value);
} // namespace EventScopeCodeMapper
} // namespace Model
} // namespace Health
} // namespace Aws
