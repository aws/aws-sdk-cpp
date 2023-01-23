/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{
  enum class AlertType
  {
    NOT_SET,
    SNS,
    LAMBDA
  };

namespace AlertTypeMapper
{
AWS_LOOKOUTMETRICS_API AlertType GetAlertTypeForName(const Aws::String& name);

AWS_LOOKOUTMETRICS_API Aws::String GetNameForAlertType(AlertType value);
} // namespace AlertTypeMapper
} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
