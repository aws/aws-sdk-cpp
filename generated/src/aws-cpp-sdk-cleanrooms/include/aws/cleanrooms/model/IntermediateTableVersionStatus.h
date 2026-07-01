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
enum class IntermediateTableVersionStatus { NOT_SET, POPULATE_STARTED, POPULATE_SUCCESS, POPULATE_FAILED, RETENTION_PERIOD_EXPIRED };

namespace IntermediateTableVersionStatusMapper {
AWS_CLEANROOMS_API IntermediateTableVersionStatus GetIntermediateTableVersionStatusForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForIntermediateTableVersionStatus(IntermediateTableVersionStatus value);
}  // namespace IntermediateTableVersionStatusMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
