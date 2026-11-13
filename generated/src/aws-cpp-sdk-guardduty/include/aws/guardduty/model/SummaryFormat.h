/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws {
namespace GuardDuty {
namespace Model {
enum class SummaryFormat { NOT_SET, STRING, STRUCTURED };

namespace SummaryFormatMapper {
AWS_GUARDDUTY_API SummaryFormat GetSummaryFormatForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForSummaryFormat(SummaryFormat value);
}  // namespace SummaryFormatMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
