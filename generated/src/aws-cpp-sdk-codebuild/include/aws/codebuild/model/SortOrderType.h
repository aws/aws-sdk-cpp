/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{
  enum class SortOrderType
  {
    NOT_SET,
    ASCENDING,
    DESCENDING
  };

namespace SortOrderTypeMapper
{
AWS_CODEBUILD_API SortOrderType GetSortOrderTypeForName(const Aws::String& name);

AWS_CODEBUILD_API Aws::String GetNameForSortOrderType(SortOrderType value);
} // namespace SortOrderTypeMapper
} // namespace Model
} // namespace CodeBuild
} // namespace Aws
