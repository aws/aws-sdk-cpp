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
  enum class BusinessReportStatus
  {
    NOT_SET,
    RUNNING,
    SUCCEEDED,
    FAILED
  };

namespace BusinessReportStatusMapper
{
AWS_ALEXAFORBUSINESS_API BusinessReportStatus GetBusinessReportStatusForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForBusinessReportStatus(BusinessReportStatus value);
} // namespace BusinessReportStatusMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
