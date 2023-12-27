/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class InferenceType
  {
    NOT_SET,
    ON_DEMAND,
    PROVISIONED
  };

namespace InferenceTypeMapper
{
AWS_BEDROCK_API InferenceType GetInferenceTypeForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForInferenceType(InferenceType value);
} // namespace InferenceTypeMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
