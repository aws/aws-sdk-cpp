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
  enum class BlockPublicAccessMode
  {
    NOT_SET,
    off,
    block_bidirectional,
    block_ingress
  };

namespace BlockPublicAccessModeMapper
{
AWS_EC2_API BlockPublicAccessMode GetBlockPublicAccessModeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForBlockPublicAccessMode(BlockPublicAccessMode value);
} // namespace BlockPublicAccessModeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
