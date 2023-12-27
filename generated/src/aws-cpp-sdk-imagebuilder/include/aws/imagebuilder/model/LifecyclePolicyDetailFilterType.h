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
  enum class LifecyclePolicyDetailFilterType
  {
    NOT_SET,
    AGE,
    COUNT
  };

namespace LifecyclePolicyDetailFilterTypeMapper
{
AWS_IMAGEBUILDER_API LifecyclePolicyDetailFilterType GetLifecyclePolicyDetailFilterTypeForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForLifecyclePolicyDetailFilterType(LifecyclePolicyDetailFilterType value);
} // namespace LifecyclePolicyDetailFilterTypeMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
