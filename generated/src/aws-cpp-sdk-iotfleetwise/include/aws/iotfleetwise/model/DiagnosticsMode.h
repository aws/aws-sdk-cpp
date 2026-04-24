/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>

namespace Aws {
namespace IoTFleetWise {
namespace Model {
enum class DiagnosticsMode { NOT_SET, OFF, SEND_ACTIVE_DTCS };

namespace DiagnosticsModeMapper {
AWS_IOTFLEETWISE_API DiagnosticsMode GetDiagnosticsModeForName(const Aws::String& name);

AWS_IOTFLEETWISE_API Aws::String GetNameForDiagnosticsMode(DiagnosticsMode value);
}  // namespace DiagnosticsModeMapper
}  // namespace Model
}  // namespace IoTFleetWise
}  // namespace Aws
