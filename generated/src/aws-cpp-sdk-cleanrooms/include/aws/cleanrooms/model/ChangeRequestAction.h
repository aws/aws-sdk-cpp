/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CleanRooms {
namespace Model {
enum class ChangeRequestAction { NOT_SET, APPROVE, DENY, CANCEL, COMMIT };

namespace ChangeRequestActionMapper {
AWS_CLEANROOMS_API ChangeRequestAction GetChangeRequestActionForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForChangeRequestAction(ChangeRequestAction value);
}  // namespace ChangeRequestActionMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
