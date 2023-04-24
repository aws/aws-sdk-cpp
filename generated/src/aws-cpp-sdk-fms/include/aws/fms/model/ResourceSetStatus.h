/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FMS
{
namespace Model
{
  enum class ResourceSetStatus
  {
    NOT_SET,
    ACTIVE,
    OUT_OF_ADMIN_SCOPE
  };

namespace ResourceSetStatusMapper
{
AWS_FMS_API ResourceSetStatus GetResourceSetStatusForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForResourceSetStatus(ResourceSetStatus value);
} // namespace ResourceSetStatusMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
