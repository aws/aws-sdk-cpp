/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConnectHealth {
namespace Model {
enum class PeriodontalReviewReason {
  NOT_SET,
  SITE_NOT_CHARTED,
  VALUE_NOT_CHARTED,
  READING_COUNT_MISMATCH,
  LINE_UNCLEAR,
  TOOTH_UNCLEAR,
  MISSING_TOOTH_CONFLICT,
  MEASUREMENT_NOT_CHARTED,
  SESSION_ISSUE
};

namespace PeriodontalReviewReasonMapper {
AWS_CONNECTHEALTH_API PeriodontalReviewReason GetPeriodontalReviewReasonForName(const Aws::String& name);

AWS_CONNECTHEALTH_API Aws::String GetNameForPeriodontalReviewReason(PeriodontalReviewReason value);
}  // namespace PeriodontalReviewReasonMapper
}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
