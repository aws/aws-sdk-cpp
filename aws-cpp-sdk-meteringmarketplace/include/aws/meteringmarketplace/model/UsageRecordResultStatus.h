/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MarketplaceMetering
{
namespace Model
{
  enum class UsageRecordResultStatus
  {
    NOT_SET,
    Success,
    CustomerNotSubscribed,
    DuplicateRecord
  };

namespace UsageRecordResultStatusMapper
{
AWS_MARKETPLACEMETERING_API UsageRecordResultStatus GetUsageRecordResultStatusForName(const Aws::String& name);

AWS_MARKETPLACEMETERING_API Aws::String GetNameForUsageRecordResultStatus(UsageRecordResultStatus value);
} // namespace UsageRecordResultStatusMapper
} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
