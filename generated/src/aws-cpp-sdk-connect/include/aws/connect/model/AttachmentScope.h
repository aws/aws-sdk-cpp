/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Connect {
namespace Model {
enum class AttachmentScope { NOT_SET, EMAIL, CHAT, CASE, TASK };

namespace AttachmentScopeMapper {
AWS_CONNECT_API AttachmentScope GetAttachmentScopeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForAttachmentScope(AttachmentScope value);
}  // namespace AttachmentScopeMapper
}  // namespace Model
}  // namespace Connect
}  // namespace Aws
