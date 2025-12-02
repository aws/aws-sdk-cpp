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
enum class ConfigurationStatus { NOT_SET, COMPLETED, FAILED };

namespace ConfigurationStatusMapper {
AWS_DATAZONE_API ConfigurationStatus GetConfigurationStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForConfigurationStatus(ConfigurationStatus value);
}  // namespace ConfigurationStatusMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
