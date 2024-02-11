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
  enum class SSEType
  {
    NOT_SET,
    sse_ebs,
    sse_kms,
    none
  };

namespace SSETypeMapper
{
AWS_EC2_API SSEType GetSSETypeForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForSSEType(SSEType value);
} // namespace SSETypeMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
