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
  enum class FpgaImageStateCode
  {
    NOT_SET,
    pending,
    failed,
    available,
    unavailable
  };

namespace FpgaImageStateCodeMapper
{
AWS_EC2_API FpgaImageStateCode GetFpgaImageStateCodeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForFpgaImageStateCode(FpgaImageStateCode value);
} // namespace FpgaImageStateCodeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
