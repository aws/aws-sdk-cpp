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
  enum class Status
  {
    NOT_SET,
    NOT_STARTED,
    IN_PROGRESS,
    COMPLETE,
    FAILED,
    SPLIT,
    RETRY,
    CANCELLED
  };

namespace StatusMapper
{
AWS_CUSTOMERPROFILES_API Status GetStatusForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
