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
  enum class StatisticType
  {
    NOT_SET,
    p50
  };

namespace StatisticTypeMapper
{
AWS_EC2_API StatisticType GetStatisticTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForStatisticType(StatisticType value);
} // namespace StatisticTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
