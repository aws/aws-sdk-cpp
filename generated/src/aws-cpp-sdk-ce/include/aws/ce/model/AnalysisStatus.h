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
  enum class AnalysisStatus
  {
    NOT_SET,
    SUCCEEDED,
    PROCESSING,
    FAILED
  };

namespace AnalysisStatusMapper
{
AWS_COSTEXPLORER_API AnalysisStatus GetAnalysisStatusForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForAnalysisStatus(AnalysisStatus value);
} // namespace AnalysisStatusMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
