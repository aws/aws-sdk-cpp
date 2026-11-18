/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/abuse-signal/AbuseSignal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AbuseSignal {
namespace Model {
enum class ReportSubmissionStatus { NOT_SET, QUEUED, PROCESSING, COMPLETED };

namespace ReportSubmissionStatusMapper {
AWS_ABUSESIGNAL_API ReportSubmissionStatus GetReportSubmissionStatusForName(const Aws::String& name);

AWS_ABUSESIGNAL_API Aws::String GetNameForReportSubmissionStatus(ReportSubmissionStatus value);
}  // namespace ReportSubmissionStatusMapper
}  // namespace Model
}  // namespace AbuseSignal
}  // namespace Aws
