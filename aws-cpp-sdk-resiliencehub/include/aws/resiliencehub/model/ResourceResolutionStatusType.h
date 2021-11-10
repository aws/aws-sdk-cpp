/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{
  enum class ResourceResolutionStatusType
  {
    NOT_SET,
    Pending,
    InProgress,
    Failed,
    Success
  };

namespace ResourceResolutionStatusTypeMapper
{
AWS_RESILIENCEHUB_API ResourceResolutionStatusType GetResourceResolutionStatusTypeForName(const Aws::String& name);

AWS_RESILIENCEHUB_API Aws::String GetNameForResourceResolutionStatusType(ResourceResolutionStatusType value);
} // namespace ResourceResolutionStatusTypeMapper
} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
