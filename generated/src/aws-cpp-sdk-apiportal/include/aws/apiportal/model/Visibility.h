/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace APIPortal {
namespace Model {
enum class Visibility { NOT_SET, PUBLIC_, PRIVATE_ };

namespace VisibilityMapper {
AWS_APIPORTAL_API Visibility GetVisibilityForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForVisibility(Visibility value);
}  // namespace VisibilityMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
