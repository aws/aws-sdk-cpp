/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAM_EXPORTS.h>

namespace Aws {
namespace IAM {
namespace Model {
enum class ManagedByTypeType { NOT_SET, Service };

namespace ManagedByTypeTypeMapper {
AWS_IAM_API ManagedByTypeType GetManagedByTypeTypeForName(const Aws::String& name);

AWS_IAM_API Aws::String GetNameForManagedByTypeType(ManagedByTypeType value);
}  // namespace ManagedByTypeTypeMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws
