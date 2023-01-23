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
  enum class OrderBy
  {
    NOT_SET,
    ASC,
    DESC
  };

namespace OrderByMapper
{
AWS_MACIE2_API OrderBy GetOrderByForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForOrderBy(OrderBy value);
} // namespace OrderByMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
