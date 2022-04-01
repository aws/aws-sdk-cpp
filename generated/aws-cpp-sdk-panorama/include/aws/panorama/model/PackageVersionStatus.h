/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Panorama
{
namespace Model
{
  enum class PackageVersionStatus
  {
    NOT_SET,
    REGISTER_PENDING,
    REGISTER_COMPLETED,
    FAILED,
    DELETING
  };

namespace PackageVersionStatusMapper
{
AWS_PANORAMA_API PackageVersionStatus GetPackageVersionStatusForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForPackageVersionStatus(PackageVersionStatus value);
} // namespace PackageVersionStatusMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
