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
  enum class ServiceManagedFleetOperatingSystemFamily
  {
    NOT_SET,
    WINDOWS,
    LINUX
  };

namespace ServiceManagedFleetOperatingSystemFamilyMapper
{
AWS_DEADLINE_API ServiceManagedFleetOperatingSystemFamily GetServiceManagedFleetOperatingSystemFamilyForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForServiceManagedFleetOperatingSystemFamily(ServiceManagedFleetOperatingSystemFamily value);
} // namespace ServiceManagedFleetOperatingSystemFamilyMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
