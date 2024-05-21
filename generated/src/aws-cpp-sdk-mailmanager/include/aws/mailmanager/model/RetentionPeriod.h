/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MailManager
{
namespace Model
{
  enum class RetentionPeriod
  {
    NOT_SET,
    THREE_MONTHS,
    SIX_MONTHS,
    NINE_MONTHS,
    ONE_YEAR,
    EIGHTEEN_MONTHS,
    TWO_YEARS,
    THIRTY_MONTHS,
    THREE_YEARS,
    FOUR_YEARS,
    FIVE_YEARS,
    SIX_YEARS,
    SEVEN_YEARS,
    EIGHT_YEARS,
    NINE_YEARS,
    TEN_YEARS,
    PERMANENT
  };

namespace RetentionPeriodMapper
{
AWS_MAILMANAGER_API RetentionPeriod GetRetentionPeriodForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForRetentionPeriod(RetentionPeriod value);
} // namespace RetentionPeriodMapper
} // namespace Model
} // namespace MailManager
} // namespace Aws
