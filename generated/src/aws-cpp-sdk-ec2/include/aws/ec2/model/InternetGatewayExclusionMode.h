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
  enum class InternetGatewayExclusionMode
  {
    NOT_SET,
    allow_bidirectional,
    allow_egress
  };

namespace InternetGatewayExclusionModeMapper
{
AWS_EC2_API InternetGatewayExclusionMode GetInternetGatewayExclusionModeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForInternetGatewayExclusionMode(InternetGatewayExclusionMode value);
} // namespace InternetGatewayExclusionModeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
