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
enum class DynamicInstrumentationDeletionStatus { NOT_SET, DELETED };

namespace DynamicInstrumentationDeletionStatusMapper {
AWS_APPLICATIONSIGNALS_API DynamicInstrumentationDeletionStatus GetDynamicInstrumentationDeletionStatusForName(const Aws::String& name);

AWS_APPLICATIONSIGNALS_API Aws::String GetNameForDynamicInstrumentationDeletionStatus(DynamicInstrumentationDeletionStatus value);
}  // namespace DynamicInstrumentationDeletionStatusMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
