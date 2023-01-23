/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{
  enum class UploadCategory
  {
    NOT_SET,
    CURATED,
    PRIVATE_
  };

namespace UploadCategoryMapper
{
AWS_DEVICEFARM_API UploadCategory GetUploadCategoryForName(const Aws::String& name);

AWS_DEVICEFARM_API Aws::String GetNameForUploadCategory(UploadCategory value);
} // namespace UploadCategoryMapper
} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
