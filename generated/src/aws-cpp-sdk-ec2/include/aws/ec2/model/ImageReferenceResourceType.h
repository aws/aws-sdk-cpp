/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class ImageReferenceResourceType
  {
    NOT_SET,
    ec2_Instance,
    ec2_LaunchTemplate,
    ssm_Parameter,
    imagebuilder_ImageRecipe,
    imagebuilder_ContainerRecipe
  };

namespace ImageReferenceResourceTypeMapper
{
AWS_EC2_API ImageReferenceResourceType GetImageReferenceResourceTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForImageReferenceResourceType(ImageReferenceResourceType value);
} // namespace ImageReferenceResourceTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
