/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/Lightsail_EXPORTS.h>

namespace Aws {
namespace Lightsail {
namespace Model {
enum class AddOnType { NOT_SET, AutoSnapshot, StopInstanceOnIdle };

namespace AddOnTypeMapper {
AWS_LIGHTSAIL_API AddOnType GetAddOnTypeForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForAddOnType(AddOnType value);
}  // namespace AddOnTypeMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
