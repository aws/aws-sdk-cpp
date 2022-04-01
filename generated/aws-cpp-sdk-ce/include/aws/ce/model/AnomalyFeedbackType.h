/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{
  enum class AnomalyFeedbackType
  {
    NOT_SET,
    YES,
    NO,
    PLANNED_ACTIVITY
  };

namespace AnomalyFeedbackTypeMapper
{
AWS_COSTEXPLORER_API AnomalyFeedbackType GetAnomalyFeedbackTypeForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForAnomalyFeedbackType(AnomalyFeedbackType value);
} // namespace AnomalyFeedbackTypeMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
