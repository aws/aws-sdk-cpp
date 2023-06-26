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
  enum class SpreadLevel
  {
    NOT_SET,
    host,
    rack
  };

namespace SpreadLevelMapper
{
AWS_EC2_API SpreadLevel GetSpreadLevelForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForSpreadLevel(SpreadLevel value);
} // namespace SpreadLevelMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
