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
enum class OnAttributeConflict { NOT_SET, REPLACE, PRESERVE };

namespace OnAttributeConflictMapper {
AWS_ENDUSERMESSAGING_API OnAttributeConflict GetOnAttributeConflictForName(const Aws::String& name);

AWS_ENDUSERMESSAGING_API Aws::String GetNameForOnAttributeConflict(OnAttributeConflict value);
}  // namespace OnAttributeConflictMapper
}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
