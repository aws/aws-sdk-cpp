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
enum class AttachmentType { NOT_SET, user, group, role };

namespace AttachmentTypeMapper {
AWS_IAM_API AttachmentType GetAttachmentTypeForName(const Aws::String& name);

AWS_IAM_API Aws::String GetNameForAttachmentType(AttachmentType value);
}  // namespace AttachmentTypeMapper
}  // namespace Model
}  // namespace IAM
}  // namespace Aws
