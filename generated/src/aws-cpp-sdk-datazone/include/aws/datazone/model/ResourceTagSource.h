/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class ResourceTagSource { NOT_SET, PROJECT, PROJECT_PROFILE };

namespace ResourceTagSourceMapper {
AWS_DATAZONE_API ResourceTagSource GetResourceTagSourceForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForResourceTagSource(ResourceTagSource value);
}  // namespace ResourceTagSourceMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
