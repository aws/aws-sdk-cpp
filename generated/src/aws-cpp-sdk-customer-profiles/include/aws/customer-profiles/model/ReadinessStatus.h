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
  enum class ReadinessStatus
  {
    NOT_SET,
    PREPARING,
    IN_PROGRESS,
    COMPLETED,
    FAILED
  };

namespace ReadinessStatusMapper
{
AWS_CUSTOMERPROFILES_API ReadinessStatus GetReadinessStatusForName(const Aws::String& name);

AWS_CUSTOMERPROFILES_API Aws::String GetNameForReadinessStatus(ReadinessStatus value);
} // namespace ReadinessStatusMapper
} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
