/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ConfigService {
namespace Model {
enum class ConformancePackType { NOT_SET, CUSTOM, MANAGED };

namespace ConformancePackTypeMapper {
AWS_CONFIGSERVICE_API ConformancePackType GetConformancePackTypeForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForConformancePackType(ConformancePackType value);
}  // namespace ConformancePackTypeMapper
}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
