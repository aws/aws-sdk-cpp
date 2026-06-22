/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ApplicationSignals {
namespace Model {
enum class UnprocessedStatusEventFailureReason { NOT_SET, THROTTLED, INTERNAL_ERROR, VALIDATION_ERROR };

namespace UnprocessedStatusEventFailureReasonMapper {
AWS_APPLICATIONSIGNALS_API UnprocessedStatusEventFailureReason GetUnprocessedStatusEventFailureReasonForName(const Aws::String& name);

AWS_APPLICATIONSIGNALS_API Aws::String GetNameForUnprocessedStatusEventFailureReason(UnprocessedStatusEventFailureReason value);
}  // namespace UnprocessedStatusEventFailureReasonMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
