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
  enum class ModelModality
  {
    NOT_SET,
    TEXT,
    IMAGE,
    EMBEDDING
  };

namespace ModelModalityMapper
{
AWS_BEDROCK_API ModelModality GetModelModalityForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForModelModality(ModelModality value);
} // namespace ModelModalityMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
