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
  enum class AnalysisType
  {
    NOT_SET,
    MAX_SAVINGS,
    CUSTOM_COMMITMENT
  };

namespace AnalysisTypeMapper
{
AWS_COSTEXPLORER_API AnalysisType GetAnalysisTypeForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForAnalysisType(AnalysisType value);
} // namespace AnalysisTypeMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
