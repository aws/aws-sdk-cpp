/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cur/CostandUsageReportService_EXPORTS.h>

namespace Aws {
namespace CostandUsageReportService {
namespace Model {
enum class LastStatus { NOT_SET, SUCCESS, ERROR_PERMISSIONS, ERROR_NO_BUCKET };

namespace LastStatusMapper {
AWS_COSTANDUSAGEREPORTSERVICE_API LastStatus GetLastStatusForName(const Aws::String& name);

AWS_COSTANDUSAGEREPORTSERVICE_API Aws::String GetNameForLastStatus(LastStatus value);
}  // namespace LastStatusMapper
}  // namespace Model
}  // namespace CostandUsageReportService
}  // namespace Aws
