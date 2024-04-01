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
  enum class StorageProfileOperatingSystemFamily
  {
    NOT_SET,
    WINDOWS,
    LINUX,
    MACOS
  };

namespace StorageProfileOperatingSystemFamilyMapper
{
AWS_DEADLINE_API StorageProfileOperatingSystemFamily GetStorageProfileOperatingSystemFamilyForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForStorageProfileOperatingSystemFamily(StorageProfileOperatingSystemFamily value);
} // namespace StorageProfileOperatingSystemFamilyMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
