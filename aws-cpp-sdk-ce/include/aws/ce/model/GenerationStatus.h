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
  enum class GenerationStatus
  {
    NOT_SET,
    SUCCEEDED,
    PROCESSING,
    FAILED
  };

namespace GenerationStatusMapper
{
AWS_COSTEXPLORER_API GenerationStatus GetGenerationStatusForName(const Aws::String& name);

AWS_COSTEXPLORER_API Aws::String GetNameForGenerationStatus(GenerationStatus value);
} // namespace GenerationStatusMapper
} // namespace Model
} // namespace CostExplorer
} // namespace Aws
