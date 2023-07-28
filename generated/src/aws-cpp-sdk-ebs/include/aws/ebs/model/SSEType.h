/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EBS
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
AWS_EBS_API SSEType GetSSETypeForName(const Aws::String& name);

AWS_EBS_API Aws::String GetNameForSSEType(SSEType value);
} // namespace SSETypeMapper
} // namespace Model
} // namespace EBS
} // namespace Aws
