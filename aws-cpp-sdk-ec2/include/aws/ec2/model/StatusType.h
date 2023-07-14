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
  enum class StatusType
  {
    NOT_SET,
    passed,
    failed,
    insufficient_data,
    initializing
  };

namespace StatusTypeMapper
{
AWS_EC2_API StatusType GetStatusTypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForStatusType(StatusType value);
} // namespace StatusTypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
