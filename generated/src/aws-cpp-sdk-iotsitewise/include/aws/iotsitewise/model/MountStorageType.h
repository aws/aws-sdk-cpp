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
enum class MountStorageType { NOT_SET, SHARED_STORAGE };

namespace MountStorageTypeMapper {
AWS_IOTSITEWISE_API MountStorageType GetMountStorageTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForMountStorageType(MountStorageType value);
}  // namespace MountStorageTypeMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
