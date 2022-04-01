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
  enum class ResourceIdType
  {
    NOT_SET,
    LONG_ID,
    SHORT_ID
  };

namespace ResourceIdTypeMapper
{
AWS_EFS_API ResourceIdType GetResourceIdTypeForName(const Aws::String& name);

AWS_EFS_API Aws::String GetNameForResourceIdType(ResourceIdType value);
} // namespace ResourceIdTypeMapper
} // namespace Model
} // namespace EFS
} // namespace Aws
