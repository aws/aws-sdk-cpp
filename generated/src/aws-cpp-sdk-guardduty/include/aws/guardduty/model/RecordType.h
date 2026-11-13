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
enum class RecordType { NOT_SET, OBSERVATION, ANALYSIS, UPDATE, FETCH, METADATA };

namespace RecordTypeMapper {
AWS_GUARDDUTY_API RecordType GetRecordTypeForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForRecordType(RecordType value);
}  // namespace RecordTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
