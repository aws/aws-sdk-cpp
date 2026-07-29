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
enum class ApplicationStatus { NOT_SET, CREATING, ACTIVE, DELETING };

namespace ApplicationStatusMapper {
AWS_IOTSITEWISE_API ApplicationStatus GetApplicationStatusForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForApplicationStatus(ApplicationStatus value);
}  // namespace ApplicationStatusMapper
}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
