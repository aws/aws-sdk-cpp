/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{
  enum class LifecyclePolicyDetailActionType
  {
    NOT_SET,
    DELETE_,
    DEPRECATE,
    DISABLE
  };

namespace LifecyclePolicyDetailActionTypeMapper
{
AWS_IMAGEBUILDER_API LifecyclePolicyDetailActionType GetLifecyclePolicyDetailActionTypeForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForLifecyclePolicyDetailActionType(LifecyclePolicyDetailActionType value);
} // namespace LifecyclePolicyDetailActionTypeMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
