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
  enum class SortModelsBy
  {
    NOT_SET,
    CreationTime
  };

namespace SortModelsByMapper
{
AWS_BEDROCK_API SortModelsBy GetSortModelsByForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForSortModelsBy(SortModelsBy value);
} // namespace SortModelsByMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
