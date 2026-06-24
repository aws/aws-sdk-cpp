/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace ApplicationSignals {
namespace Model {
enum class BatchDeleteErrorCode { NOT_SET, ResourceNotFoundException, AccessDeniedException, InternalServiceException };

namespace BatchDeleteErrorCodeMapper {
AWS_APPLICATIONSIGNALS_API BatchDeleteErrorCode GetBatchDeleteErrorCodeForName(const Aws::String& name);

AWS_APPLICATIONSIGNALS_API Aws::String GetNameForBatchDeleteErrorCode(BatchDeleteErrorCode value);
}  // namespace BatchDeleteErrorCodeMapper
}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
