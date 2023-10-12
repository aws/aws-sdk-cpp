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

static constexpr uint32_t INTERNAL_ERROR_HASH = ConstExprHashingUtils::HashString("InternalErrorException");
static constexpr uint32_t REPORT_LIMIT_REACHED_HASH = ConstExprHashingUtils::HashString("ReportLimitReachedException");
static constexpr uint32_t DUPLICATE_REPORT_NAME_HASH = ConstExprHashingUtils::HashString("DuplicateReportNameException");


AWSError<CoreErrors> GetErrorForName(const char* errorName)
{
  uint32_t hashCode = HashingUtils::HashString(errorName);

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
