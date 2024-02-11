/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Backup
{
namespace Model
{
  enum class AggregationPeriod
  {
    NOT_SET,
    ONE_DAY,
    SEVEN_DAYS,
    FOURTEEN_DAYS
  };

namespace AggregationPeriodMapper
{
AWS_BACKUP_API AggregationPeriod GetAggregationPeriodForName(const Aws::String& name);

AWS_BACKUP_API Aws::String GetNameForAggregationPeriod(AggregationPeriod value);
} // namespace AggregationPeriodMapper
} // namespace Model
} // namespace Backup
} // namespace Aws
