/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/MailManager_EXPORTS.h>

namespace Aws {
namespace MailManager {
namespace Model {
enum class IngressPointType { NOT_SET, OPEN, AUTH };

namespace IngressPointTypeMapper {
AWS_MAILMANAGER_API IngressPointType GetIngressPointTypeForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForIngressPointType(IngressPointType value);
}  // namespace IngressPointTypeMapper
}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
