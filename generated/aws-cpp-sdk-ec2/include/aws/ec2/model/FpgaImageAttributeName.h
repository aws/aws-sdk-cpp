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
  enum class FpgaImageAttributeName
  {
    NOT_SET,
    description,
    name,
    loadPermission,
    productCodes
  };

namespace FpgaImageAttributeNameMapper
{
AWS_EC2_API FpgaImageAttributeName GetFpgaImageAttributeNameForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForFpgaImageAttributeName(FpgaImageAttributeName value);
} // namespace FpgaImageAttributeNameMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
