/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class AvailableFilterType { NOT_SET, METRIC_LEVEL, RESOURCE_LEVEL };

namespace AvailableFilterTypeMapper {
AWS_CONNECT_API AvailableFilterType GetAvailableFilterTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForAvailableFilterType(AvailableFilterType value);
}  // namespace AvailableFilterTypeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
