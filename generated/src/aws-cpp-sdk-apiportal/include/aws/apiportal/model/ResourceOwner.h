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
enum class ResourceOwner { NOT_SET, ALL, SELF, OTHER_ACCOUNTS };

namespace ResourceOwnerMapper {
AWS_APIPORTAL_API ResourceOwner GetResourceOwnerForName(const Aws::String& name);

AWS_APIPORTAL_API Aws::String GetNameForResourceOwner(ResourceOwner value);
}  // namespace ResourceOwnerMapper
}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
