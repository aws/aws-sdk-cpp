/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{
  enum class InsightStatus
  {
    NOT_SET,
    ONGOING,
    CLOSED
  };

namespace InsightStatusMapper
{
AWS_DEVOPSGURU_API InsightStatus GetInsightStatusForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForInsightStatus(InsightStatus value);
} // namespace InsightStatusMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
