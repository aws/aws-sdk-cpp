/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/Finspace_EXPORTS.h>

namespace Aws {
namespace finspace {
namespace Model {
enum class TgwStatus { NOT_SET, NONE, UPDATE_REQUESTED, UPDATING, FAILED_UPDATE, SUCCESSFULLY_UPDATED };

namespace TgwStatusMapper {
AWS_FINSPACE_API TgwStatus GetTgwStatusForName(const Aws::String& name);

AWS_FINSPACE_API Aws::String GetNameForTgwStatus(TgwStatus value);
}  // namespace TgwStatusMapper
}  // namespace Model
}  // namespace finspace
}  // namespace Aws
