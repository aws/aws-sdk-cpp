/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FMS
{
namespace Model
{
  enum class StreamExceptionPolicy
  {
    NOT_SET,
    DROP,
    CONTINUE,
    REJECT,
    FMS_IGNORE
  };

namespace StreamExceptionPolicyMapper
{
AWS_FMS_API StreamExceptionPolicy GetStreamExceptionPolicyForName(const Aws::String& name);

AWS_FMS_API Aws::String GetNameForStreamExceptionPolicy(StreamExceptionPolicy value);
} // namespace StreamExceptionPolicyMapper
} // namespace Model
} // namespace FMS
} // namespace Aws
