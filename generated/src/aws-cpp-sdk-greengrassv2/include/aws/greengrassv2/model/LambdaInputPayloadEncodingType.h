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
  enum class LambdaInputPayloadEncodingType
  {
    NOT_SET,
    json,
    binary
  };

namespace LambdaInputPayloadEncodingTypeMapper
{
AWS_GREENGRASSV2_API LambdaInputPayloadEncodingType GetLambdaInputPayloadEncodingTypeForName(const Aws::String& name);

AWS_GREENGRASSV2_API Aws::String GetNameForLambdaInputPayloadEncodingType(LambdaInputPayloadEncodingType value);
} // namespace LambdaInputPayloadEncodingTypeMapper
} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
