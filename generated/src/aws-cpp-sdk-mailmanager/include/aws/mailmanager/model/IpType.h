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
enum class IpType { NOT_SET, IPV4, DUAL_STACK };

namespace IpTypeMapper {
AWS_MAILMANAGER_API IpType GetIpTypeForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForIpType(IpType value);
}  // namespace IpTypeMapper
}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
