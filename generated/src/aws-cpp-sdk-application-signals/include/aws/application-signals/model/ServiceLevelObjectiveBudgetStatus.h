/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{
  enum class ServiceLevelObjectiveBudgetStatus
  {
    NOT_SET,
    OK,
    WARNING,
    BREACHED,
    INSUFFICIENT_DATA
  };

namespace ServiceLevelObjectiveBudgetStatusMapper
{
AWS_APPLICATIONSIGNALS_API ServiceLevelObjectiveBudgetStatus GetServiceLevelObjectiveBudgetStatusForName(const Aws::String& name);

AWS_APPLICATIONSIGNALS_API Aws::String GetNameForServiceLevelObjectiveBudgetStatus(ServiceLevelObjectiveBudgetStatus value);
} // namespace ServiceLevelObjectiveBudgetStatusMapper
} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
