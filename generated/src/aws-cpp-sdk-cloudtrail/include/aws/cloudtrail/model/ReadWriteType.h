/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{
  enum class ReadWriteType
  {
    NOT_SET,
    ReadOnly,
    WriteOnly,
    All
  };

namespace ReadWriteTypeMapper
{
AWS_CLOUDTRAIL_API ReadWriteType GetReadWriteTypeForName(const Aws::String& name);

AWS_CLOUDTRAIL_API Aws::String GetNameForReadWriteType(ReadWriteType value);
} // namespace ReadWriteTypeMapper
} // namespace Model
} // namespace CloudTrail
} // namespace Aws
