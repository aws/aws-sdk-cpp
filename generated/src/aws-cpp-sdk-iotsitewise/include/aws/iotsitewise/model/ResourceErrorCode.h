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
enum class ResourceErrorCode { NOT_SET, VALIDATION_ERROR, INTERNAL_FAILURE };

namespace ResourceErrorCodeMapper {
AWS_IOTSITEWISE_API ResourceErrorCode GetResourceErrorCodeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForResourceErrorCode(ResourceErrorCode value);
}  // namespace ResourceErrorCodeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
