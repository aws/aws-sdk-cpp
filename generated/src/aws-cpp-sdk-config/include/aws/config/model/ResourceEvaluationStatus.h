/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ConfigService
{
namespace Model
{
  enum class ResourceEvaluationStatus
  {
    NOT_SET,
    IN_PROGRESS,
    FAILED,
    SUCCEEDED
  };

namespace ResourceEvaluationStatusMapper
{
AWS_CONFIGSERVICE_API ResourceEvaluationStatus GetResourceEvaluationStatusForName(const Aws::String& name);

AWS_CONFIGSERVICE_API Aws::String GetNameForResourceEvaluationStatus(ResourceEvaluationStatus value);
} // namespace ResourceEvaluationStatusMapper
} // namespace Model
} // namespace ConfigService
} // namespace Aws
