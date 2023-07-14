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
  enum class ListJobsSortAttributeName
  {
    NOT_SET,
    createdAt,
    jobStatus,
    name,
    jobType
  };

namespace ListJobsSortAttributeNameMapper
{
AWS_MACIE2_API ListJobsSortAttributeName GetListJobsSortAttributeNameForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForListJobsSortAttributeName(ListJobsSortAttributeName value);
} // namespace ListJobsSortAttributeNameMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
