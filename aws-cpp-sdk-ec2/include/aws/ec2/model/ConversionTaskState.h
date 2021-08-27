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
  enum class ConversionTaskState
  {
    NOT_SET,
    active,
    cancelling,
    cancelled,
    completed
  };

namespace ConversionTaskStateMapper
{
AWS_EC2_API ConversionTaskState GetConversionTaskStateForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForConversionTaskState(ConversionTaskState value);
} // namespace ConversionTaskStateMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
