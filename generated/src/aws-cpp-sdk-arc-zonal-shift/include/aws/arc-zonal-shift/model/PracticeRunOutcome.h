/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ARCZonalShift
{
namespace Model
{
  enum class PracticeRunOutcome
  {
    NOT_SET,
    FAILED,
    INTERRUPTED,
    PENDING,
    SUCCEEDED
  };

namespace PracticeRunOutcomeMapper
{
AWS_ARCZONALSHIFT_API PracticeRunOutcome GetPracticeRunOutcomeForName(const Aws::String& name);

AWS_ARCZONALSHIFT_API Aws::String GetNameForPracticeRunOutcome(PracticeRunOutcome value);
} // namespace PracticeRunOutcomeMapper
} // namespace Model
} // namespace ARCZonalShift
} // namespace Aws
