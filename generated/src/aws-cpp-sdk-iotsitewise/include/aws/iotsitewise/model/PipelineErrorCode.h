/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

namespace Aws {
namespace IoTSiteWise {
namespace Model {
enum class PipelineErrorCode { NOT_SET, VALIDATION_ERROR, INTERNAL_FAILURE, EXECUTION_ERROR, TIMED_OUT };

namespace PipelineErrorCodeMapper {
AWS_IOTSITEWISE_API PipelineErrorCode GetPipelineErrorCodeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForPipelineErrorCode(PipelineErrorCode value);
}  // namespace PipelineErrorCodeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
