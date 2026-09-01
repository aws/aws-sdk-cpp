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
enum class FilterFieldName { NOT_SET, name, description, dataSource, severity, tactic, technique, service };

namespace FilterFieldNameMapper {
AWS_GUARDDUTY_API FilterFieldName GetFilterFieldNameForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForFilterFieldName(FilterFieldName value);
}  // namespace FilterFieldNameMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
