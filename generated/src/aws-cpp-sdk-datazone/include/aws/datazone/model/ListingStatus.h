/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{
  enum class ListingStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    INACTIVE
  };

namespace ListingStatusMapper
{
AWS_DATAZONE_API ListingStatus GetListingStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForListingStatus(ListingStatus value);
} // namespace ListingStatusMapper
} // namespace Model
} // namespace DataZone
} // namespace Aws
