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
enum class InstrumentationConfigurationStatus { NOT_SET, READY, ERROR_, ACTIVE, DISABLED };

namespace InstrumentationConfigurationStatusMapper {
AWS_APPLICATIONSIGNALS_API InstrumentationConfigurationStatus GetInstrumentationConfigurationStatusForName(const Aws::String& name);

AWS_APPLICATIONSIGNALS_API Aws::String GetNameForInstrumentationConfigurationStatus(InstrumentationConfigurationStatus value);
}  // namespace InstrumentationConfigurationStatusMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
