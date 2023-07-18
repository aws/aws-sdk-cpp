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
  enum class PackageImportJobStatus
  {
    NOT_SET,
    PENDING,
    SUCCEEDED,
    FAILED
  };

namespace PackageImportJobStatusMapper
{
AWS_PANORAMA_API PackageImportJobStatus GetPackageImportJobStatusForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForPackageImportJobStatus(PackageImportJobStatus value);
} // namespace PackageImportJobStatusMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
