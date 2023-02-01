/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{
  enum class LambdaEventSourceType
  {
    NOT_SET,
    PUB_SUB,
    IOT_CORE
  };

namespace LambdaEventSourceTypeMapper
{
AWS_GREENGRASSV2_API LambdaEventSourceType GetLambdaEventSourceTypeForName(const Aws::String& name);

AWS_GREENGRASSV2_API Aws::String GetNameForLambdaEventSourceType(LambdaEventSourceType value);
} // namespace LambdaEventSourceTypeMapper
} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
