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
enum class FetchVerdict { NOT_SET, THREAT, BENIGN, NEUTRAL };

namespace FetchVerdictMapper {
AWS_GUARDDUTY_API FetchVerdict GetFetchVerdictForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForFetchVerdict(FetchVerdict value);
}  // namespace FetchVerdictMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
