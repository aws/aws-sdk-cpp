/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConnectCases
{
namespace Model
{
  enum class SearchAllRelatedItemsSortProperty
  {
    NOT_SET,
    AssociationTime,
    CaseId
  };

namespace SearchAllRelatedItemsSortPropertyMapper
{
AWS_CONNECTCASES_API SearchAllRelatedItemsSortProperty GetSearchAllRelatedItemsSortPropertyForName(const Aws::String& name);

AWS_CONNECTCASES_API Aws::String GetNameForSearchAllRelatedItemsSortProperty(SearchAllRelatedItemsSortProperty value);
} // namespace SearchAllRelatedItemsSortPropertyMapper
} // namespace Model
} // namespace ConnectCases
} // namespace Aws
