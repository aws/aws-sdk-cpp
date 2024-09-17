/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class RoutingCriteriaStepStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE,
    JOINED,
    EXPIRED
  };

namespace RoutingCriteriaStepStatusMapper
{
AWS_CONNECT_API RoutingCriteriaStepStatus GetRoutingCriteriaStepStatusForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForRoutingCriteriaStepStatus(RoutingCriteriaStepStatus value);
} // namespace RoutingCriteriaStepStatusMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
