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
  enum class AnomalyStatus
  {
    NOT_SET,
    ONGOING,
    CLOSED
  };

namespace AnomalyStatusMapper
{
AWS_DEVOPSGURU_API AnomalyStatus GetAnomalyStatusForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForAnomalyStatus(AnomalyStatus value);
} // namespace AnomalyStatusMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
