/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

namespace Aws {
namespace Glue {
namespace Model {
enum class IntegrationStatus { NOT_SET, CREATING, ACTIVE, MODIFYING, FAILED, DELETING, SYNCING, NEEDS_ATTENTION };

namespace IntegrationStatusMapper {
AWS_GLUE_API IntegrationStatus GetIntegrationStatusForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForIntegrationStatus(IntegrationStatus value);
}  // namespace IntegrationStatusMapper
}  // namespace Model
}  // namespace Glue
}  // namespace Aws
