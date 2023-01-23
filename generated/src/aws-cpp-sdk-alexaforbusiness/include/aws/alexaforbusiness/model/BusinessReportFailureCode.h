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
  enum class BusinessReportFailureCode
  {
    NOT_SET,
    ACCESS_DENIED,
    NO_SUCH_BUCKET,
    INTERNAL_FAILURE
  };

namespace BusinessReportFailureCodeMapper
{
AWS_ALEXAFORBUSINESS_API BusinessReportFailureCode GetBusinessReportFailureCodeForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForBusinessReportFailureCode(BusinessReportFailureCode value);
} // namespace BusinessReportFailureCodeMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
