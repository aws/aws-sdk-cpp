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
  enum class PackageVersionAction
  {
    NOT_SET,
    PUBLISH,
    DEPRECATE
  };

namespace PackageVersionActionMapper
{
AWS_IOT_API PackageVersionAction GetPackageVersionActionForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForPackageVersionAction(PackageVersionAction value);
} // namespace PackageVersionActionMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
