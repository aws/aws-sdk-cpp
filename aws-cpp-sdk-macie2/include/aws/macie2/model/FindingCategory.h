/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class FindingCategory
  {
    NOT_SET,
    CLASSIFICATION,
    POLICY
  };

namespace FindingCategoryMapper
{
AWS_MACIE2_API FindingCategory GetFindingCategoryForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForFindingCategory(FindingCategory value);
} // namespace FindingCategoryMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
