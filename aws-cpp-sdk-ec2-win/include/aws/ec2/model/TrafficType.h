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
  enum class TrafficType
  {
    NOT_SET,
    ACCEPT,
    REJECT,
    ALL
  };

namespace TrafficTypeMapper
{
AWS_EC2_API TrafficType GetTrafficTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTrafficType(TrafficType value);
} // namespace TrafficTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
