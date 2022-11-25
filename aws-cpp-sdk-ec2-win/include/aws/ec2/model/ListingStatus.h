/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class ListingStatus
  {
    NOT_SET,
    active,
    pending,
    cancelled,
    closed
  };

namespace ListingStatusMapper
{
AWS_EC2_API ListingStatus GetListingStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForListingStatus(ListingStatus value);
} // namespace ListingStatusMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
