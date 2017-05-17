/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cur/CostandUsageReportServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::CostandUsageReportService;
using namespace Aws::Utils;

namespace Aws
{
namespace CostandUsageReportService
{
namespace CostandUsageReportServiceErrorMapper
{

static const int INTERNAL_ERROR_HASH = HashingUtils::HashString("InternalErrorException");
static const int REPORT_LIMIT_REACHED_HASH = HashingUtils::HashString("ReportLimitReachedException");
static const int DUPLICATE_REPORT_NAME_HASH = HashingUtils::HashString("DuplicateReportNameException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  int hashCode = HashingUtils::HashString(errorName);

  if (hashCode == INTERNAL_ERROR_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CostandUsageReportServiceErrors::INTERNAL_ERROR), false);
  }
  else if (hashCode == REPORT_LIMIT_REACHED_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CostandUsageReportServiceErrors::REPORT_LIMIT_REACHED), false);
  }
  else if (hashCode == DUPLICATE_REPORT_NAME_HASH)
  {
    return AWSError<CoreErrors>(static_cast<CoreErrors>(CostandUsageReportServiceErrors::DUPLICATE_REPORT_NAME), false);
  }
  return AWSError<CoreErrors>(CoreErrors::UNKNOWN, false);
}

} // namespace CostandUsageReportServiceErrorMapper
} // namespace CostandUsageReportService
} // namespace Aws
