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
  enum class BusinessReportFormat
  {
    NOT_SET,
    CSV,
    CSV_ZIP
  };

namespace BusinessReportFormatMapper
{
AWS_ALEXAFORBUSINESS_API BusinessReportFormat GetBusinessReportFormatForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForBusinessReportFormat(BusinessReportFormat value);
} // namespace BusinessReportFormatMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
