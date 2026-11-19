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
enum class IntegrationStatus {
  NOT_SET,
  PENDING,
  IN_PROGRESS,
  ACTIVE,
  INACTIVE,
  DISABLING,
  ESTABLISHING_CONNECTION_IN_PROGRESS,
  ESTABLISHING_CONNECTION_COMPLETED,
  ESTABLISHING_CONNECTION_FAILED,
  PENDING_MANIFEST_CODE,
  DELETE_IN_PROGRESS,
  DELETE_FAILED
};

namespace IntegrationStatusMapper {
AWS_INSPECTOR2_API IntegrationStatus GetIntegrationStatusForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForIntegrationStatus(IntegrationStatus value);
}  // namespace IntegrationStatusMapper
}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
