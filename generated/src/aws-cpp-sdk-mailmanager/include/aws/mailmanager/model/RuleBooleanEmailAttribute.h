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
enum class RuleBooleanEmailAttribute { NOT_SET, READ_RECEIPT_REQUESTED, TLS, TLS_WRAPPED };

namespace RuleBooleanEmailAttributeMapper {
AWS_MAILMANAGER_API RuleBooleanEmailAttribute GetRuleBooleanEmailAttributeForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForRuleBooleanEmailAttribute(RuleBooleanEmailAttribute value);
}  // namespace RuleBooleanEmailAttributeMapper
}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
