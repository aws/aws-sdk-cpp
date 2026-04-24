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
enum class ResolveToResourceType { NOT_SET, ASSET };

namespace ResolveToResourceTypeMapper {
AWS_IOTSITEWISE_API ResolveToResourceType GetResolveToResourceTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForResolveToResourceType(ResolveToResourceType value);
}  // namespace ResolveToResourceTypeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
