/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

namespace Aws {
namespace Inspector2 {
namespace Model {
enum class EnablementStatus {
  NOT_SET,
  ENABLED,
  PENDING_ENABLEMENT,
  FAILED_TO_ENABLE,
  PENDING_UPDATE,
  FAILED_TO_UPDATE,
  PENDING_DELETION,
  DELETED,
  FAILED_TO_DELETE
};

namespace EnablementStatusMapper {
AWS_INSPECTOR2_API EnablementStatus GetEnablementStatusForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForEnablementStatus(EnablementStatus value);
}  // namespace EnablementStatusMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
