/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{
  enum class BusinessReportInterval
  {
    NOT_SET,
    ONE_DAY,
    ONE_WEEK,
    THIRTY_DAYS
  };

namespace BusinessReportIntervalMapper
{
AWS_ALEXAFORBUSINESS_API BusinessReportInterval GetBusinessReportIntervalForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForBusinessReportInterval(BusinessReportInterval value);
} // namespace BusinessReportIntervalMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
