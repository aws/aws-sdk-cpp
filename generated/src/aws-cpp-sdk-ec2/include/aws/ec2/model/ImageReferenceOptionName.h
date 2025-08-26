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
  enum class ImageReferenceOptionName
  {
    NOT_SET,
    state_name,
    version_depth
  };

namespace ImageReferenceOptionNameMapper
{
AWS_EC2_API ImageReferenceOptionName GetImageReferenceOptionNameForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForImageReferenceOptionName(ImageReferenceOptionName value);
} // namespace ImageReferenceOptionNameMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
