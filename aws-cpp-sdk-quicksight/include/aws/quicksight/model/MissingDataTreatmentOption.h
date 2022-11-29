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
  enum class MissingDataTreatmentOption
  {
    NOT_SET,
    INTERPOLATE,
    SHOW_AS_ZERO,
    SHOW_AS_BLANK
  };

namespace MissingDataTreatmentOptionMapper
{
AWS_QUICKSIGHT_API MissingDataTreatmentOption GetMissingDataTreatmentOptionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForMissingDataTreatmentOption(MissingDataTreatmentOption value);
} // namespace MissingDataTreatmentOptionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
