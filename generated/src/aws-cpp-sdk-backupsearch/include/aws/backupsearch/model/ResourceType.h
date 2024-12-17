/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BackupSearch
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    S3,
    EBS
  };

namespace ResourceTypeMapper
{
AWS_BACKUPSEARCH_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_BACKUPSEARCH_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace BackupSearch
} // namespace Aws
