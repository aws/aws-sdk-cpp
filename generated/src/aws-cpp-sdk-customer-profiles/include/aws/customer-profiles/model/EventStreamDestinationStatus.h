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
  enum class EventStreamDestinationStatus
  {
    NOT_SET,
    HEALTHY,
    UNHEALTHY
  };

namespace EventStreamDestinationStatusMapper
{
AWS_CUSTOMERPROFILES_API EventStreamDestinationStatus GetEventStreamDestinationStatusForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForEventStreamDestinationStatus(EventStreamDestinationStatus value);
} // namespace EventStreamDestinationStatusMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
