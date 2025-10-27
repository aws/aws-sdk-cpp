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
enum class PermissionsBoundaryAttachmentType { NOT_SET, PermissionsBoundaryPolicy };

namespace PermissionsBoundaryAttachmentTypeMapper {
AWS_IAM_API PermissionsBoundaryAttachmentType GetPermissionsBoundaryAttachmentTypeForName(const Aws::String& name);

AWS_IAM_API Aws::String GetNameForPermissionsBoundaryAttachmentType(PermissionsBoundaryAttachmentType value);
}  // namespace PermissionsBoundaryAttachmentTypeMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws
