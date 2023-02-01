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
  enum class ImdsSupportValues
  {
    NOT_SET,
    v2_0
  };

namespace ImdsSupportValuesMapper
{
AWS_EC2_API ImdsSupportValues GetImdsSupportValuesForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForImdsSupportValues(ImdsSupportValues value);
} // namespace ImdsSupportValuesMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
