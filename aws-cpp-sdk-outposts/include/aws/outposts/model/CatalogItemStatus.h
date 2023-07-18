/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Outposts
{
namespace Model
{
  enum class CatalogItemStatus
  {
    NOT_SET,
    AVAILABLE,
    DISCONTINUED
  };

namespace CatalogItemStatusMapper
{
AWS_OUTPOSTS_API CatalogItemStatus GetCatalogItemStatusForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForCatalogItemStatus(CatalogItemStatus value);
} // namespace CatalogItemStatusMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
