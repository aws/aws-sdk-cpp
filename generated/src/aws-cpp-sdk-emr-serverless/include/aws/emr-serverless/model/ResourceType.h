/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>

namespace Aws {
namespace EMRServerless {
namespace Model {
enum class ResourceType { NOT_SET, SESSION };

namespace ResourceTypeMapper {
AWS_EMRSERVERLESS_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_EMRSERVERLESS_API Aws::String GetNameForResourceType(ResourceType value);
}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace EMRServerless
}  // namespace Aws
