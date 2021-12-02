/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{
  enum class ResourceCollectionType
  {
    NOT_SET,
    AWS_CLOUD_FORMATION,
    AWS_SERVICE,
    AWS_TAGS
  };

namespace ResourceCollectionTypeMapper
{
AWS_DEVOPSGURU_API ResourceCollectionType GetResourceCollectionTypeForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForResourceCollectionType(ResourceCollectionType value);
} // namespace ResourceCollectionTypeMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
