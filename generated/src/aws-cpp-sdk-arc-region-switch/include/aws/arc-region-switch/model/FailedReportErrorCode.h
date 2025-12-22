/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ARCRegionswitch {
namespace Model {
enum class FailedReportErrorCode { NOT_SET, insufficientPermissions, invalidResource, configurationError };

namespace FailedReportErrorCodeMapper {
AWS_ARCREGIONSWITCH_API FailedReportErrorCode GetFailedReportErrorCodeForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForFailedReportErrorCode(FailedReportErrorCode value);
}  // namespace FailedReportErrorCodeMapper
}  // namespace Model
}  // namespace ARCRegionswitch
}  // namespace Aws
