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
enum class KxVolumeStatus { NOT_SET, CREATING, CREATE_FAILED, ACTIVE, UPDATING, UPDATED, UPDATE_FAILED, DELETING, DELETED, DELETE_FAILED };

namespace KxVolumeStatusMapper {
AWS_FINSPACE_API KxVolumeStatus GetKxVolumeStatusForName(const Aws::String& name);

AWS_FINSPACE_API Aws::String GetNameForKxVolumeStatus(KxVolumeStatus value);
}  // namespace KxVolumeStatusMapper
}  // namespace Model
}  // namespace finspace
}  // namespace Aws
