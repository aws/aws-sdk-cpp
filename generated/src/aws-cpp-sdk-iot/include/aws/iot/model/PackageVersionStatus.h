/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class PackageVersionStatus
  {
    NOT_SET,
    DRAFT,
    PUBLISHED,
    DEPRECATED
  };

namespace PackageVersionStatusMapper
{
AWS_IOT_API PackageVersionStatus GetPackageVersionStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForPackageVersionStatus(PackageVersionStatus value);
} // namespace PackageVersionStatusMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
