/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{
  enum class RadiusStatus
  {
    NOT_SET,
    Creating,
    Completed,
    Failed
  };

namespace RadiusStatusMapper
{
AWS_DIRECTORYSERVICE_API RadiusStatus GetRadiusStatusForName(const Aws::String& name);

AWS_DIRECTORYSERVICE_API Aws::String GetNameForRadiusStatus(RadiusStatus value);
} // namespace RadiusStatusMapper
} // namespace Model
} // namespace DirectoryService
} // namespace Aws
