/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class AnalysisFilterAttribute
  {
    NOT_SET,
    QUICKSIGHT_USER
  };

namespace AnalysisFilterAttributeMapper
{
AWS_QUICKSIGHT_API AnalysisFilterAttribute GetAnalysisFilterAttributeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAnalysisFilterAttribute(AnalysisFilterAttribute value);
} // namespace AnalysisFilterAttributeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
