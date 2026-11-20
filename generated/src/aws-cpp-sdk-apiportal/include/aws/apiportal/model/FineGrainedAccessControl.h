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
enum class FineGrainedAccessControl { NOT_SET, ENABLED, DISABLED };

namespace FineGrainedAccessControlMapper {
AWS_APIPORTAL_API FineGrainedAccessControl GetFineGrainedAccessControlForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForFineGrainedAccessControl(FineGrainedAccessControl value);
}  // namespace FineGrainedAccessControlMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
