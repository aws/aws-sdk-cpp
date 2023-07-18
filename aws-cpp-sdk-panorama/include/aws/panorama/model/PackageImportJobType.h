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
  enum class PackageImportJobType
  {
    NOT_SET,
    NODE_PACKAGE_VERSION,
    MARKETPLACE_NODE_PACKAGE_VERSION
  };

namespace PackageImportJobTypeMapper
{
AWS_PANORAMA_API PackageImportJobType GetPackageImportJobTypeForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForPackageImportJobType(PackageImportJobType value);
} // namespace PackageImportJobTypeMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
