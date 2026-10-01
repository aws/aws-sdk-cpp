/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

namespace Aws {
namespace EndUserMessaging {
namespace Model {
enum class CodeType { NOT_SET, NUMERIC, ALPHA, ALPHANUMERIC };

namespace CodeTypeMapper {
AWS_ENDUSERMESSAGING_API CodeType GetCodeTypeForName(const Aws::String& name);

AWS_ENDUSERMESSAGING_API Aws::String GetNameForCodeType(CodeType value);
}  // namespace CodeTypeMapper
}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
