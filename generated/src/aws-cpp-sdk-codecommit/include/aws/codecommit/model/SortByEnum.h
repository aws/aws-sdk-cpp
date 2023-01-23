/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{
  enum class SortByEnum
  {
    NOT_SET,
    repositoryName,
    lastModifiedDate
  };

namespace SortByEnumMapper
{
AWS_CODECOMMIT_API SortByEnum GetSortByEnumForName(const Aws::String& name);

AWS_CODECOMMIT_API Aws::String GetNameForSortByEnum(SortByEnum value);
} // namespace SortByEnumMapper
} // namespace Model
} // namespace CodeCommit
} // namespace Aws
