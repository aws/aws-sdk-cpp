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
enum class DynamicInstrumentationSignalType { NOT_SET, SNAPSHOT };

namespace DynamicInstrumentationSignalTypeMapper {
AWS_APPLICATIONSIGNALS_API DynamicInstrumentationSignalType GetDynamicInstrumentationSignalTypeForName(const Aws::String& name);

AWS_APPLICATIONSIGNALS_API Aws::String GetNameForDynamicInstrumentationSignalType(DynamicInstrumentationSignalType value);
}  // namespace DynamicInstrumentationSignalTypeMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
