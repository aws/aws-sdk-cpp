/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace CloudWatchOmni {
namespace Model {
enum class IntegrationStatus { NOT_SET, ACTIVE, DELETED, PENDING, PENDING_OAUTH, ERROR_, FAILED };

namespace IntegrationStatusMapper {
AWS_CLOUDWATCHOMNI_API IntegrationStatus GetIntegrationStatusForName(const Aws::String& name);

AWS_CLOUDWATCHOMNI_API Aws::String GetNameForIntegrationStatus(IntegrationStatus value);
}  // namespace IntegrationStatusMapper
}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
