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
enum class ManagedBy { NOT_SET, SELF, ORGANIZATION };

namespace ManagedByMapper {
AWS_APIPORTAL_API ManagedBy GetManagedByForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForManagedBy(ManagedBy value);
}  // namespace ManagedByMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
