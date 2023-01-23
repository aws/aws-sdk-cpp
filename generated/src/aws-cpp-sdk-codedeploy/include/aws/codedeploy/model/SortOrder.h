/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{
  enum class SortOrder
  {
    NOT_SET,
    ascending,
    descending
  };

namespace SortOrderMapper
{
AWS_CODEDEPLOY_API SortOrder GetSortOrderForName(const Aws::String& name);

AWS_CODEDEPLOY_API Aws::String GetNameForSortOrder(SortOrder value);
} // namespace SortOrderMapper
} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
