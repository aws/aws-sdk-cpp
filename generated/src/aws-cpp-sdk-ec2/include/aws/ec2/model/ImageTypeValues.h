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
  enum class ImageTypeValues
  {
    NOT_SET,
    machine,
    kernel,
    ramdisk
  };

namespace ImageTypeValuesMapper
{
AWS_EC2_API ImageTypeValues GetImageTypeValuesForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForImageTypeValues(ImageTypeValues value);
} // namespace ImageTypeValuesMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
