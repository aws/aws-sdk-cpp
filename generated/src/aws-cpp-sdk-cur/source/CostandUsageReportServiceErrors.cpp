/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/cur/CostandUsageReportServiceErrors.h>

using namespace Aws::Client;
using namespace Aws::Utils;
using namespace Aws::CostandUsageReportService;

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
