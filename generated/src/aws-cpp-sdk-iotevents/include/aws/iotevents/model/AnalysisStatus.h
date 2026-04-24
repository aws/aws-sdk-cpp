/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotevents/IoTEvents_EXPORTS.h>

namespace Aws {
namespace IoTEvents {
namespace Model {
enum class AnalysisStatus { NOT_SET, RUNNING, COMPLETE, FAILED };

namespace AnalysisStatusMapper {
AWS_IOTEVENTS_API AnalysisStatus GetAnalysisStatusForName(const Aws::String& name);

AWS_IOTEVENTS_API Aws::String GetNameForAnalysisStatus(AnalysisStatus value);
}  // namespace AnalysisStatusMapper
}  // namespace Model
}  // namespace IoTEvents
}  // namespace Aws
