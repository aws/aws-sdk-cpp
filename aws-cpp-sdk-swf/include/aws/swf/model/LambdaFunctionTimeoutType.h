/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SWF
{
namespace Model
{
  enum class LambdaFunctionTimeoutType
  {
    NOT_SET,
    START_TO_CLOSE
  };

namespace LambdaFunctionTimeoutTypeMapper
{
AWS_SWF_API LambdaFunctionTimeoutType GetLambdaFunctionTimeoutTypeForName(const Aws::String& name);

AWS_SWF_API Aws::String GetNameForLambdaFunctionTimeoutType(LambdaFunctionTimeoutType value);
} // namespace LambdaFunctionTimeoutTypeMapper
} // namespace Model
} // namespace SWF
} // namespace Aws
