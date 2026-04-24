/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/Greengrass_EXPORTS.h>

namespace Aws {
namespace Greengrass {
namespace Model {
enum class SoftwareToUpdate { NOT_SET, core, ota_agent };

namespace SoftwareToUpdateMapper {
AWS_GREENGRASS_API SoftwareToUpdate GetSoftwareToUpdateForName(const Aws::String& name);

AWS_GREENGRASS_API Aws::String GetNameForSoftwareToUpdate(SoftwareToUpdate value);
}  // namespace SoftwareToUpdateMapper
}  // namespace Model
}  // namespace Greengrass
}  // namespace Aws
