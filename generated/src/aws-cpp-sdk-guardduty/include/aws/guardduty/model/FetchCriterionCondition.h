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
enum class FetchCriterionCondition { NOT_SET, EQUALS, NOT_EQUALS, GREATER_THAN, GREATER_THAN_OR_EQUAL, LESS_THAN, LESS_THAN_OR_EQUAL };

namespace FetchCriterionConditionMapper {
AWS_GUARDDUTY_API FetchCriterionCondition GetFetchCriterionConditionForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForFetchCriterionCondition(FetchCriterionCondition value);
}  // namespace FetchCriterionConditionMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
