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
enum class ResourceBucketAccess { NOT_SET, allow, deny };

namespace ResourceBucketAccessMapper {
AWS_LIGHTSAIL_API ResourceBucketAccess GetResourceBucketAccessForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForResourceBucketAccess(ResourceBucketAccess value);
}  // namespace ResourceBucketAccessMapper
}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
