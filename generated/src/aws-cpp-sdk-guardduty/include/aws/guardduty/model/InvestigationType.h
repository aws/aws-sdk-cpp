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
enum class InvestigationType { NOT_SET, FINDING, ACCOUNT, ORGANIZATION };

namespace InvestigationTypeMapper {
AWS_GUARDDUTY_API InvestigationType GetInvestigationTypeForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForInvestigationType(InvestigationType value);
}  // namespace InvestigationTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
