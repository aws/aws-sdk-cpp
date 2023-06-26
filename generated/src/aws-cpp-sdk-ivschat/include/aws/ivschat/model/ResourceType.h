/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ivschat
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    ROOM
  };

namespace ResourceTypeMapper
{
AWS_IVSCHAT_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_IVSCHAT_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace ivschat
} // namespace Aws
