/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{
  enum class EventStreamState
  {
    NOT_SET,
    RUNNING,
    STOPPED
  };

namespace EventStreamStateMapper
{
AWS_CUSTOMERPROFILES_API EventStreamState GetEventStreamStateForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForEventStreamState(EventStreamState value);
} // namespace EventStreamStateMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
