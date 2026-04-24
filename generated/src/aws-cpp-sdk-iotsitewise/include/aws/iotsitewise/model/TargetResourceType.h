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
enum class TargetResourceType { NOT_SET, ASSET, COMPUTATION_MODEL };

namespace TargetResourceTypeMapper {
AWS_IOTSITEWISE_API TargetResourceType GetTargetResourceTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForTargetResourceType(TargetResourceType value);
}  // namespace TargetResourceTypeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
