/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Redshift
{
namespace Model
{
  enum class SortByOrder
  {
    NOT_SET,
    ASC,
    DESC
  };

namespace SortByOrderMapper
{
AWS_REDSHIFT_API SortByOrder GetSortByOrderForName(const Aws::String& name);

AWS_REDSHIFT_API Aws::String GetNameForSortByOrder(SortByOrder value);
} // namespace SortByOrderMapper
} // namespace Model
} // namespace Redshift
} // namespace Aws
