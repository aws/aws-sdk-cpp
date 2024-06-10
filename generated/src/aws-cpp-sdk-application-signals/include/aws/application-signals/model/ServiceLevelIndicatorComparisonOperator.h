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
  enum class ServiceLevelIndicatorComparisonOperator
  {
    NOT_SET,
    GreaterThanOrEqualTo,
    GreaterThan,
    LessThan,
    LessThanOrEqualTo
  };

namespace ServiceLevelIndicatorComparisonOperatorMapper
{
AWS_APPLICATIONSIGNALS_API ServiceLevelIndicatorComparisonOperator GetServiceLevelIndicatorComparisonOperatorForName(const Aws::String& name);

AWS_APPLICATIONSIGNALS_API Aws::String GetNameForServiceLevelIndicatorComparisonOperator(ServiceLevelIndicatorComparisonOperator value);
} // namespace ServiceLevelIndicatorComparisonOperatorMapper
} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
