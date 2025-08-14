/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-recommended-actions/BCMRecommendedActions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BCMRecommendedActions
{
namespace Model
{
  enum class Severity
  {
    NOT_SET,
    INFO,
    WARNING,
    CRITICAL
  };

namespace SeverityMapper
{
AWS_BCMRECOMMENDEDACTIONS_API Severity GetSeverityForName(const Aws::String& name);

AWS_BCMRECOMMENDEDACTIONS_API Aws::String GetNameForSeverity(Severity value);
} // namespace SeverityMapper
} // namespace Model
} // namespace BCMRecommendedActions
} // namespace Aws
