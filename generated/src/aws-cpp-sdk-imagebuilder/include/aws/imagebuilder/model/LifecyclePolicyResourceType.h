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
  enum class LifecyclePolicyResourceType
  {
    NOT_SET,
    AMI_IMAGE,
    CONTAINER_IMAGE
  };

namespace LifecyclePolicyResourceTypeMapper
{
AWS_IMAGEBUILDER_API LifecyclePolicyResourceType GetLifecyclePolicyResourceTypeForName(const Aws::String& name);

AWS_IMAGEBUILDER_API Aws::String GetNameForLifecyclePolicyResourceType(LifecyclePolicyResourceType value);
} // namespace LifecyclePolicyResourceTypeMapper
} // namespace Model
} // namespace imagebuilder
} // namespace Aws
