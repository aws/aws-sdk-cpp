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
enum class Classification { NOT_SET, SHADOW, MANAGED, MANAGED_ZOMBIE, MANAGED_ORPHANED };

namespace ClassificationMapper {
AWS_APIPORTAL_API Classification GetClassificationForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForClassification(Classification value);
}  // namespace ClassificationMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
