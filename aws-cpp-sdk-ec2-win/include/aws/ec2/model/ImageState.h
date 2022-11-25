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
  enum class ImageState
  {
    NOT_SET,
    pending,
    available,
    invalid,
    deregistered,
    transient,
    failed,
    error
  };

namespace ImageStateMapper
{
AWS_EC2_API ImageState GetImageStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForImageState(ImageState value);
} // namespace ImageStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
