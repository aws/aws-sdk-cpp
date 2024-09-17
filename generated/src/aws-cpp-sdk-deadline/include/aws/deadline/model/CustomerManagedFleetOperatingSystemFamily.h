/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class CustomerManagedFleetOperatingSystemFamily
  {
    NOT_SET,
    WINDOWS,
    LINUX,
    MACOS
  };

namespace CustomerManagedFleetOperatingSystemFamilyMapper
{
AWS_DEADLINE_API CustomerManagedFleetOperatingSystemFamily GetCustomerManagedFleetOperatingSystemFamilyForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForCustomerManagedFleetOperatingSystemFamily(CustomerManagedFleetOperatingSystemFamily value);
} // namespace CustomerManagedFleetOperatingSystemFamilyMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
