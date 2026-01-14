/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class RecurrenceFrequency { NOT_SET, WEEKLY, MONTHLY, YEARLY };

namespace RecurrenceFrequencyMapper {
AWS_CONNECT_API RecurrenceFrequency GetRecurrenceFrequencyForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForRecurrenceFrequency(RecurrenceFrequency value);
}  // namespace RecurrenceFrequencyMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
