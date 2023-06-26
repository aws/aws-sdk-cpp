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
  enum class EbsOptimizedSupport
  {
    NOT_SET,
    unsupported,
    supported,
    default_
  };

namespace EbsOptimizedSupportMapper
{
AWS_EC2_API EbsOptimizedSupport GetEbsOptimizedSupportForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForEbsOptimizedSupport(EbsOptimizedSupport value);
} // namespace EbsOptimizedSupportMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
