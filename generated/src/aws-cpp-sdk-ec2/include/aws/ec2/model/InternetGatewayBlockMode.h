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
  enum class InternetGatewayBlockMode
  {
    NOT_SET,
    off,
    block_bidirectional,
    block_ingress
  };

namespace InternetGatewayBlockModeMapper
{
AWS_EC2_API InternetGatewayBlockMode GetInternetGatewayBlockModeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForInternetGatewayBlockMode(InternetGatewayBlockMode value);
} // namespace InternetGatewayBlockModeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
