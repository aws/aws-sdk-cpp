/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{
  enum class EBSResourceType
  {
    NOT_SET,
    volume
  };

namespace EBSResourceTypeMapper
{
AWS_ECS_API EBSResourceType GetEBSResourceTypeForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForEBSResourceType(EBSResourceType value);
} // namespace EBSResourceTypeMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
