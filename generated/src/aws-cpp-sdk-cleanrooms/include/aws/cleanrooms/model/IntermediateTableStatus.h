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
enum class IntermediateTableStatus {
  NOT_SET,
  CREATED,
  POPULATE_STARTED,
  POPULATE_SUCCESS,
  POPULATE_FAILED,
  DISALLOWED_BY_DATA_PROVIDER,
  BASE_TABLE_REMOVED,
  RETENTION_PERIOD_EXPIRED
};

namespace IntermediateTableStatusMapper {
AWS_CLEANROOMS_API IntermediateTableStatus GetIntermediateTableStatusForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForIntermediateTableStatus(IntermediateTableStatus value);
}  // namespace IntermediateTableStatusMapper
}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
