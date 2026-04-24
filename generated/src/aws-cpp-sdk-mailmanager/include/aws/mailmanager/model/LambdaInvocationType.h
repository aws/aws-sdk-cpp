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
enum class LambdaInvocationType { NOT_SET, EVENT, REQUEST_RESPONSE };

namespace LambdaInvocationTypeMapper {
AWS_MAILMANAGER_API LambdaInvocationType GetLambdaInvocationTypeForName(const Aws::String& name);

AWS_MAILMANAGER_API Aws::String GetNameForLambdaInvocationType(LambdaInvocationType value);
}  // namespace LambdaInvocationTypeMapper
}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
