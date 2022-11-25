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
  enum class TpmSupportValues
  {
    NOT_SET,
    v2_0
  };

namespace TpmSupportValuesMapper
{
AWS_EC2_API TpmSupportValues GetTpmSupportValuesForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForTpmSupportValues(TpmSupportValues value);
} // namespace TpmSupportValuesMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
