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
enum class InstrumentationType { NOT_SET, BREAKPOINT, PROBE };

namespace InstrumentationTypeMapper {
AWS_APPLICATIONSIGNALS_API InstrumentationType GetInstrumentationTypeForName(const Aws::String& name);

AWS_APPLICATIONSIGNALS_API Aws::String GetNameForInstrumentationType(InstrumentationType value);
}  // namespace InstrumentationTypeMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
