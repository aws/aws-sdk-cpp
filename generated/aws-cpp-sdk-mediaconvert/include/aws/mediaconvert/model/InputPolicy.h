/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class InputPolicy
  {
    NOT_SET,
    ALLOWED,
    DISALLOWED
  };

namespace InputPolicyMapper
{
AWS_MEDIACONVERT_API InputPolicy GetInputPolicyForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForInputPolicy(InputPolicy value);
} // namespace InputPolicyMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
