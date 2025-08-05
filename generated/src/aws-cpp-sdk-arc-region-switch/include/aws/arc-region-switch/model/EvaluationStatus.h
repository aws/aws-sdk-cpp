/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{
  enum class EvaluationStatus
  {
    NOT_SET,
    passed,
    actionRequired,
    pendingEvaluation,
    unknown
  };

namespace EvaluationStatusMapper
{
AWS_ARCREGIONSWITCH_API EvaluationStatus GetEvaluationStatusForName(const Aws::String& name);

AWS_ARCREGIONSWITCH_API Aws::String GetNameForEvaluationStatus(EvaluationStatus value);
} // namespace EvaluationStatusMapper
} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
