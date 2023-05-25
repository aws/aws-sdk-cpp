/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EFS
{
namespace Model
{
  enum class Resource
  {
    NOT_SET,
    FILE_SYSTEM,
    MOUNT_TARGET
  };

namespace ResourceMapper
{
AWS_EFS_API Resource GetResourceForName(const Aws::String& name);

AWS_EFS_API Aws::String GetNameForResource(Resource value);
} // namespace ResourceMapper
} // namespace Model
} // namespace EFS
} // namespace Aws
