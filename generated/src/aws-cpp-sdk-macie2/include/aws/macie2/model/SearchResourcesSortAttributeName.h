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
  enum class SearchResourcesSortAttributeName
  {
    NOT_SET,
    ACCOUNT_ID,
    RESOURCE_NAME,
    S3_CLASSIFIABLE_OBJECT_COUNT,
    S3_CLASSIFIABLE_SIZE_IN_BYTES
  };

namespace SearchResourcesSortAttributeNameMapper
{
AWS_MACIE2_API SearchResourcesSortAttributeName GetSearchResourcesSortAttributeNameForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForSearchResourcesSortAttributeName(SearchResourcesSortAttributeName value);
} // namespace SearchResourcesSortAttributeNameMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
